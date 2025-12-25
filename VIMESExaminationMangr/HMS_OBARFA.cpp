#include "HMS_OBARFA.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnLan1SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLan1Select();
}
static void _OnLan2SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLan2Select();
}
static void _OnLan3SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLan3Select();
}
static void _OnLan4SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLan4Select();
}
static void _OnLan5SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLan5Select();
}
static void _OnBiUngBuouSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBiUngBuouSelect();
}
static void _OnBiUngThuTuyenGiapSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBiUngThuTuyenGiapSelect();
}
/*static void _OnBenhLyTuyenGiapKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyTuyenGiapKhacChange();
} */
/*static void _OnBenhLyTuyenGiapKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyTuyenGiapKhacSetfocus();} */ 
/*static void _OnBenhLyTuyenGiapKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyTuyenGiapKhacKillfocus();
} */
static int _OnBenhLyTuyenGiapKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnBenhLyTuyenGiapKhacCheckValue();
} 
/*static void _OnBenhLyDacBietKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhacChange();
} */
/*static void _OnBenhLyDacBietKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhacSetfocus();} */ 
/*static void _OnBenhLyDacBietKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhacKillfocus();
} */
static int _OnBenhLyDacBietKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhacCheckValue();
} 
/*static void _OnThoiGianPhatHienChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianPhatHienChange();
} */
/*static void _OnThoiGianPhatHienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianPhatHienSetfocus();} */ 
/*static void _OnThoiGianPhatHienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianPhatHienKillfocus();
} */
static int _OnThoiGianPhatHienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnThoiGianPhatHienCheckValue();
} 
/*static void _OnBieuHienLamSangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBieuHienLamSangChange();
} */
/*static void _OnBieuHienLamSangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBieuHienLamSangSetfocus();} */ 
/*static void _OnBieuHienLamSangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBieuHienLamSangKillfocus();
} */
static int _OnBieuHienLamSangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnBieuHienLamSangCheckValue();
} 
/*static void _OnKhamVaDieuTriTaiChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKhamVaDieuTriTaiChange();
} */
/*static void _OnKhamVaDieuTriTaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKhamVaDieuTriTaiSetfocus();} */ 
/*static void _OnKhamVaDieuTriTaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKhamVaDieuTriTaiKillfocus();
} */
static int _OnKhamVaDieuTriTaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnKhamVaDieuTriTaiCheckValue();
} 
/*static void _OnChanDoanTuyenGiapChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChanDoanTuyenGiapChange();
} */
/*static void _OnChanDoanTuyenGiapSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChanDoanTuyenGiapSetfocus();} */ 
/*static void _OnChanDoanTuyenGiapKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChanDoanTuyenGiapKillfocus();
} */
static int _OnChanDoanTuyenGiapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnChanDoanTuyenGiapCheckValue();
} 
/*static void _OnPhuongPhapThoiGianChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnPhuongPhapThoiGianChange();
} */
/*static void _OnPhuongPhapThoiGianSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnPhuongPhapThoiGianSetfocus();} */ 
/*static void _OnPhuongPhapThoiGianKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnPhuongPhapThoiGianKillfocus();
} */
static int _OnPhuongPhapThoiGianCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnPhuongPhapThoiGianCheckValue();
} 
/*static void _OnLamSangHienTaiChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLamSangHienTaiChange();
} */
/*static void _OnLamSangHienTaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLamSangHienTaiSetfocus();} */ 
/*static void _OnLamSangHienTaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLamSangHienTaiKillfocus();
} */
static int _OnLamSangHienTaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnLamSangHienTaiCheckValue();
} 
/*static void _OnBenhLyDacBietKhac2ChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhac2Change();
} */
/*static void _OnBenhLyDacBietKhac2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhac2Setfocus();} */ 
/*static void _OnBenhLyDacBietKhac2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhac2Killfocus();
} */
static int _OnBenhLyDacBietKhac2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnBenhLyDacBietKhac2CheckValue();
} 
/*static void _OnTienSuChieuXaChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnTienSuChieuXaChange();
} */
/*static void _OnTienSuChieuXaSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnTienSuChieuXaSetfocus();} */ 
/*static void _OnTienSuChieuXaKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnTienSuChieuXaKillfocus();
} */
static int _OnTienSuChieuXaCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnTienSuChieuXaCheckValue();
} 
/*static void _OnAnThieuIodChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnThieuIodChange();
} */
/*static void _OnAnThieuIodSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnThieuIodSetfocus();} */ 
/*static void _OnAnThieuIodKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnThieuIodKillfocus();
} */
static int _OnAnThieuIodCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnAnThieuIodCheckValue();
} 
/*static void _OnAnBapCaiChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnBapCaiChange();
} */
/*static void _OnAnBapCaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnBapCaiSetfocus();} */ 
/*static void _OnAnBapCaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnAnBapCaiKillfocus();
} */
static int _OnAnBapCaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnAnBapCaiCheckValue();
} 
/*static void _OnThuocKhangGiapChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThuocKhangGiapChange();
} */
/*static void _OnThuocKhangGiapSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThuocKhangGiapSetfocus();} */ 
/*static void _OnThuocKhangGiapKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThuocKhangGiapKillfocus();
} */
static int _OnThuocKhangGiapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnThuocKhangGiapCheckValue();
} 
/*static void _OnChieuCaoChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChieuCaoChange();
} */
/*static void _OnChieuCaoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChieuCaoSetfocus();} */ 
/*static void _OnChieuCaoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnChieuCaoKillfocus();
} */
static int _OnChieuCaoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnChieuCaoCheckValue();
} 
/*static void _OnCanNangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCanNangChange();
} */
/*static void _OnCanNangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCanNangSetfocus();} */ 
/*static void _OnCanNangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCanNangKillfocus();
} */
static int _OnCanNangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnCanNangCheckValue();
} 
/*static void _OnHuyetApChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetApChange();
} */
/*static void _OnHuyetApSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetApSetfocus();} */ 
/*static void _OnHuyetApKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetApKillfocus();
} */
static int _OnHuyetApCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnHuyetApCheckValue();
} 
/*static void _OnMachChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMachChange();
} */
/*static void _OnMachSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMachSetfocus();} */ 
/*static void _OnMachKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMachKillfocus();
} */
static int _OnMachCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnMachCheckValue();
} 
static void _OnCanDoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnCanDoiSelect();
}
static void _OnMatCanDoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnMatCanDoiSelect();
}
/*static void _OnMatCanDoi2ChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMatCanDoi2Change();
} */
/*static void _OnMatCanDoi2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMatCanDoi2Setfocus();} */ 
/*static void _OnMatCanDoi2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnMatCanDoi2Killfocus();
} */
static int _OnMatCanDoi2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnMatCanDoi2CheckValue();
} 
static void _OnBinhThuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBinhThuongSelect();
}
static void _OnBatThuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBatThuongSelect();
}
/*static void _OnBatThuong2ChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBatThuong2Change();
} */
/*static void _OnBatThuong2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBatThuong2Setfocus();} */ 
/*static void _OnBatThuong2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnBatThuong2Killfocus();
} */
static int _OnBatThuong2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnBatThuong2CheckValue();
} 
static void _OnBDTMCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBDTMCoSelect();
}
static void _OnBDTMKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnBDTMKhongSelect();
}
static void _OnDauCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDauCoSelect();
}
static void _OnHoKichThichHongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnHoKichThichHongSelect();
}
static void _OnNuotNghenSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnNuotNghenSelect();
}
static void _OnChenEpDeDaySelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnChenEpDeDaySelect();
}
static void _OnTangCanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTangCanSelect();
}
static void _OnGiamCanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnGiamCanSelect();
}
static void _OnLoLangSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLoLangSelect();
}
static void _OnTramCamSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTramCamSelect();
}
static void _OnNongBungSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnNongBungSelect();
}
static void _OnSoLanhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnSoLanhSelect();
}
static void _OnHoiHopSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnHoiHopSelect();
}
static void _OnNhipChamSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnNhipChamSelect();
}
static void _OnDiNgoaiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDiNgoaiSelect();
}
static void _OnTaoBonSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTaoBonSelect();
}
static void _OnRunDauChiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnRunDauChiSelect();
}
static void _OnTangSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTangSelect();
}
static void _OnGiamSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnGiamSelect();
}
static void _OnYeuCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnYeuCoSelect();
}
static void _OnLoiMatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnLoiMatSelect();
}
static void _OnMiMatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnMiMatSelect();
}
static void _OnNhinDoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnNhinDoiSelect();
}
static void _OnChacSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnChacSelect();
}
static void _OnMemSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnMemSelect();
}
static void _OnNhanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnNhanSelect();
}
static void _OnGoGheSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnGoGheSelect();
}
static void _OnRMCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnRMCoSelect();
}
static void _OnRMKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnRMKhongSelect();
}
static void _OnTTCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTTCoSelect();
}
static void _OnTTKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTTKhongSelect();
}
static void _OnDo0SelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDo0Select();
}
static void _OnDoIASelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDoIASelect();
}
static void _OnDoIBSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDoIBSelect();
}
static void _OnDoIISelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDoIISelect();
}
static void _OnDoIIISelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnDoIIISelect();
}
static void _OnPembertonSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnPembertonSelect();
}
/*static void _OnHuyetHocChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetHocChange();
} */
/*static void _OnHuyetHocSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetHocSetfocus();} */ 
/*static void _OnHuyetHocKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnHuyetHocKillfocus();
} */
static int _OnHuyetHocCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnHuyetHocCheckValue();
} 
/*static void _OnSieuAmChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSieuAmChange();
} */
/*static void _OnSieuAmSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSieuAmSetfocus();} */ 
/*static void _OnSieuAmKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSieuAmKillfocus();
} */
static int _OnSieuAmCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnSieuAmCheckValue();
} 
/*static void _OnXNKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnXNKhacChange();
} */
/*static void _OnXNKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnXNKhacSetfocus();} */ 
/*static void _OnXNKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnXNKhacKillfocus();
} */
static int _OnXNKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnXNKhacCheckValue();
} 
/*static void _OnThoiGianChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianChange();
} */
/*static void _OnThoiGianSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianSetfocus();} */ 
/*static void _OnThoiGianKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnThoiGianKillfocus();
} */
static int _OnThoiGianCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnThoiGianCheckValue();
} 
/*static void _OnCongSuatChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCongSuatChange();
} */
/*static void _OnCongSuatSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCongSuatSetfocus();} */ 
/*static void _OnCongSuatKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnCongSuatKillfocus();
} */
static int _OnCongSuatCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnCongSuatCheckValue();
} 
/*static void _OnKimDotChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKimDotChange();
} */
/*static void _OnKimDotSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKimDotSetfocus();} */ 
/*static void _OnKimDotKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnKimDotKillfocus();
} */
static int _OnKimDotCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnKimDotCheckValue();
} 
/*static void _OnLidocainChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLidocainChange();
} */
/*static void _OnLidocainSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLidocainSetfocus();} */ 
/*static void _OnLidocainKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnLidocainKillfocus();
} */
static int _OnLidocainCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnLidocainCheckValue();
} 
static void _OnChocDMCanhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnChocDMCanhSelect();
}
static void _OnTonThuongTKQuayNguocSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTonThuongTKQuayNguocSelect();
}
static void _OnChayMauTrongNangSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnChayMauTrongNangSelect();
}
static void _OnKhanTiengSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnKhanTiengSelect();
}
static void _OnMatYThucSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnMatYThucSelect();
}
static void _OnChocTMCanhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnChocTMCanhSelect();
}
static void _OnTonThuongTKXSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTonThuongTKXSelect();
}
static void _OnTuMauTrongNangSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTuMauTrongNangSelect();
}
static void _OnTuMauVungCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnTuMauVungCoSelect();
}
static void _OnSuyHoHapSelectFnc(CWnd *pWnd){
	 ((CHMS_OBARFA*)pWnd)->OnSuyHoHapSelect();
}
/*static void _On7NgayDauChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->On7NgayDauChange();
} */
/*static void _On7NgayDauSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->On7NgayDauSetfocus();} */ 
/*static void _On7NgayDauKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->On7NgayDauKillfocus();
} */
static int _On7NgayDauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->On7NgayDauCheckValue();
} 
/*static void _OnSau1ThangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau1ThangChange();
} */
/*static void _OnSau1ThangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau1ThangSetfocus();} */ 
/*static void _OnSau1ThangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau1ThangKillfocus();
} */
static int _OnSau1ThangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnSau1ThangCheckValue();
} 
/*static void _OnSau3ThangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau3ThangChange();
} */
/*static void _OnSau3ThangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau3ThangSetfocus();} */ 
/*static void _OnSau3ThangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau3ThangKillfocus();
} */
static int _OnSau3ThangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnSau3ThangCheckValue();
} 
/*static void _OnSau6ThangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau6ThangChange();
} */
/*static void _OnSau6ThangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau6ThangSetfocus();} */ 
/*static void _OnSau6ThangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau6ThangKillfocus();
} */
static int _OnSau6ThangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnSau6ThangCheckValue();
} 
/*static void _OnSau12ThangChangeFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau12ThangChange();
} */
/*static void _OnSau12ThangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau12ThangSetfocus();} */ 
/*static void _OnSau12ThangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBARFA *)pWnd)->OnSau12ThangKillfocus();
} */
static int _OnSau12ThangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBARFA *)pWnd)->OnSau12ThangCheckValue();
} 
static int _OnAddHMS_OBARFAFnc(CWnd *pWnd){
	 return ((CHMS_OBARFA*)pWnd)->OnAddHMS_OBARFA();
} 
static int _OnEditHMS_OBARFAFnc(CWnd *pWnd){
	 return ((CHMS_OBARFA*)pWnd)->OnEditHMS_OBARFA();
} 
static int _OnDeleteHMS_OBARFAFnc(CWnd *pWnd){
	 return ((CHMS_OBARFA*)pWnd)->OnDeleteHMS_OBARFA();
} 
static int _OnSaveHMS_OBARFAFnc(CWnd *pWnd){
	 return ((CHMS_OBARFA*)pWnd)->OnSaveHMS_OBARFA();
} 
static int _OnCancelHMS_OBARFAFnc(CWnd *pWnd){
	 return ((CHMS_OBARFA*)pWnd)->OnCancelHMS_OBARFA();
} 
CHMS_OBARFA::CHMS_OBARFA(CWnd *pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 2147;
	SetDefaultValues();
	m_szRecordType = _T("OBA_RFA");
}
CHMS_OBARFA::~CHMS_OBARFA(){
}
void CHMS_OBARFA::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 785, 2105);
	m_wndLanDieuTriLabel.Create(this, _T("Lần điều trị"), 10, 30, 110, 55);
	m_wndLan1.Create(this, _T("Lần 1"), 200, 30, 280, 55);
	m_wndLan2.Create(this, _T("Lần 2"), 300, 30, 380, 55);
	m_wndLan3.Create(this, _T("Lần 3"), 400, 30, 480, 55);
	m_wndLan4.Create(this, _T("Lần 4"), 500, 30, 580, 55);
	m_wndLan5.Create(this, _T("Lần 5"), 600, 30, 680, 55);
	m_wndTienSuLabel.Create(this, _T("II. TIỀN SỬ"), 10, 60, 90, 85);
	m_wndTienSuGiaDinhLabel.Create(this, _T("II.1 Tiền sử gia đình"), 10, 90, 130, 115);
	m_wndBiUngBuou.Create(this, _T("Có người bị bướu giáp"), 10, 120, 350, 145);
	m_wndBiUngThuTuyenGiap.Create(this, _T("Có người bị ung thư tuyến giáp"), 355, 120, 695, 145);
	m_wndBenhLyTuyenGiapKhacLabel.Create(this, _T("Bệnh lý tuyến giáp khác (Basedow, cường – suy giáp)"), 10, 150, 190, 175);
	m_wndBenhLyTuyenGiapKhac.Create(this,195, 151, 780, 176, 1, 0, 1); 
	m_wndBenhLyDacBietKhacLabel.Create(this, _T("Bệnh lý đặc biệt khác"), 10, 180, 190, 205);
	m_wndBenhLyDacBietKhac.Create(this,195, 181, 780, 206, 1, 0, 1); 
	m_wndTienSuBanThanLabel.Create(this, _T("II.2 Tiền sử bản thân"), 10, 210, 130, 235);
	m_wndTienSuBenhTatLabel.Create(this, _T("Tiền sử bệnh tật"), 10, 240, 130, 265);
	m_wndBenhLyTuyenGiapLabel.Create(this, _T("Bệnh lý tuyến giáp"), 10, 270, 130, 295);
	m_wndThoiGianPhatHienLabel.Create(this, _T("Thời gian phát hiện"), 10, 300, 160, 325);
	m_wndThoiGianPhatHien.Create(this,165, 301, 780, 326, 1, 0, 1); 
	m_wndBieuHienLamSangLabel.Create(this, _T("Biểu hiện lâm sàng"), 10, 330, 160, 355);
	m_wndBieuHienLamSang.Create(this,165, 331, 780, 356, 1, 0, 1); 
	m_wndKhamVaDieuTriTaiLabel.Create(this, _T("Khám và điều trị tại"), 11, 360, 160, 385);
	m_wndKhamVaDieuTriTai.Create(this,165, 361, 780, 386, 1, 0, 1); 
	m_wndChanDoanTuyenGiapLabel.Create(this, _T("Chẩn đoán"), 10, 390, 160, 415);
	m_wndChanDoanTuyenGiap.Create(this,165, 390, 780, 415, 1, 0, 1); 
	m_wndPhuongPhapThoiGianLabel.Create(this, _T("Phương pháp, thời gian"), 10, 420, 160, 445);
	m_wndPhuongPhapThoiGian.Create(this,165, 420, 780, 445, 1, 0, 1); 
	m_wndLamSangHienTaiLabel.Create(this, _T("Lâm sàng hiện tại"), 10, 450, 160, 475);
	m_wndLamSangHienTai.Create(this,165, 450, 780, 475, 1, 0, 1); 
	m_wndBenhLyDacBietKhac2Label.Create(this, _T("Bệnh lý đặc biệt khác"), 10, 480, 160, 505);
	m_wndBenhLyDacBietKhac2.Create(this,165, 480, 780, 505, 1, 0, 1); 
	m_wndTienSuPhoiNhiemLabel.Create(this, _T("Tiền sử phơi nhiễm, thói quen sinh hoạt"), 10, 510, 130, 535);
	m_wndTienSuChieuXaLabel.Create(this, _T("Tiền sử chiếu xạ vùng đầu cổ"), 10, 540, 160, 565);
	m_wndTienSuChieuXa.Create(this,165, 540, 780, 565, 1, 0, 1); 
	m_wndAnThieuIodLabel.Create(this, _T("Chế độ ăn thiếu iod"), 10, 570, 160, 595);
	m_wndAnThieuIod.Create(this,165, 570, 780, 595, 1, 0, 1); 
	m_wndAnBapCaiLabel.Create(this, _T("Chế độ ăn kéo dài bắp cải, củ cải, hoa lơ"), 10, 600, 160, 625);
	m_wndAnBapCai.Create(this,165, 600, 780, 625, 1, 0, 1); 
	m_wndThuocKhangGiapLabel.Create(this, _T("Thuốc kháng giáp, thuốc hen, thấp khớp"), 10, 630, 160, 655);
	m_wndThuocKhangGiap.Create(this,165, 630, 780, 655, 1, 0, 1); 
	m_wndLamSangLabel.Create(this, _T("III. LÂM SÀNG"), 10, 660, 150, 685);
	m_wndKhamToanThanLabel.Create(this, _T("III.1 Khám toàn thân"), 10, 690, 130, 715);
	m_wndChieuCaoLabel.Create(this, _T("Chiều cao"), 10, 720, 90, 745);
	m_wndChieuCao.Create(this,95, 720, 175, 745); 
	m_wndCanNangLabel.Create(this, _T("Cân nặng"), 180, 720, 260, 745);
	m_wndCanNang.Create(this,265, 720, 345, 745); 
	m_wndHuyetApLabel.Create(this, _T("Huyết áp"), 350, 720, 430, 745);
	m_wndHuyetAp.Create(this,435, 720, 515, 745); 
	m_wndMachLabel.Create(this, _T("Mạch"), 520, 720, 600, 745);
	m_wndMach.Create(this,605, 720, 685, 745); 
	m_wndTuongQuanCoTheLabel.Create(this, _T("Tương quan cơ thể"), 10, 750, 175, 775);
	m_wndCanDoi.Create(this, _T("Cân đối"), 179, 749, 279, 774);
	m_wndMatCanDoi.Create(this, _T("Mất cân đối"), 285, 750, 390, 775);
	m_wndMatCanDoi2.Create(this,395, 750, 780, 775, 1, 0, 1); 
	m_wndDaNiemMacLabel.Create(this, _T("Da, niêm mạc, lông tóc móng"), 10, 780, 175, 805);
	m_wndBinhThuong.Create(this, _T("Bình thường"), 180, 780, 280, 805);
	m_wndBatThuong.Create(this, _T("Bất thường"), 285, 780, 390, 805);
	m_wndBatThuong2.Create(this,395, 780, 780, 805, 1, 0, 1); 
	m_wndBDTMCo.Create(this, _T("Có"), 180, 810, 280, 835);
	m_wndBDTMKhong.Create(this, _T("Không"), 285, 810, 390, 835);
	m_wndBienDoiThamMyLabel.Create(this, _T("Biến đổi thẩm mỹ"), 10, 810, 175, 835);
	m_wndBieuHienTaiChoLabel.Create(this, _T("Biểu hiện tại chỗ"), 10, 840, 175, 865);
	m_wndDauCo.Create(this, _T("Đau cổ"), 180, 840, 280, 865);
	m_wndHoKichThichHong.Create(this, _T("Ho, kích thích họng"), 285, 840, 435, 865);
	m_wndNuotNghen.Create(this, _T("Nuốt nghẹn"), 440, 840, 540, 865);
	m_wndChenEpDeDay.Create(this, _T("Chèn ép, đè đẩy"), 545, 840, 695, 865);
	m_wndTrieuChungCoNangLabel.Create(this, _T("Triệu chứng cơ năng"), 10, 870, 200, 895);
	m_wndThayDoiCanNangLabel.Create(this, _T("Thay đổi cân nặng"), 10, 900, 175, 925);
	m_wndTangCan.Create(this, _T("Tăng cân"), 180, 900, 280, 925);
	m_wndGiamCan.Create(this, _T("Giảm cân"), 285, 900, 390, 925);
	m_wndThayDoiCamXucLabel.Create(this, _T("Thay đổi cảm xúc"), 10, 930, 175, 955);
	m_wndLoLang.Create(this, _T("Lo lắng, dễ kích thích cáu gắt, mất ngủ"), 180, 930, 435, 955);
	m_wndTramCam.Create(this, _T("Trầm cảm, mệt mỏi, thờ ơ"), 440, 930, 695, 955);
	m_wndRLDieuHoaNhietLabel.Create(this, _T("RL điều hòa nhiệt"), 10, 960, 175, 985);
	m_wndRLTimMachLabel.Create(this, _T("RL tim mạch"), 10, 990, 175, 1015);
	m_wndRLTieuHoaLabel.Create(this, _T("RL tiêu hóa"), 10, 1020, 175, 1045);
	m_wndNongBung.Create(this, _T("Nóng bừng, vã mồ hôi, sợ nóng"), 180, 960, 435, 985);
	m_wndSoLanh.Create(this, _T("Sợ lạnh, hạ nhiệt độ"), 440, 960, 695, 985);
	m_wndHoiHop.Create(this, _T("Hồi hộp, đánh trống ngực"), 180, 990, 435, 1015);
	m_wndNhipCham.Create(this, _T("Nhịp chậm, mệt thỉu"), 440, 990, 695, 1015);
	m_wndDiNgoai.Create(this, _T("Đi ngoài nhiều lần, ỉa lỏng"), 180, 1020, 435, 1045);
	m_wndTaoBon.Create(this, _T("Táo bón"), 440, 1020, 695, 1045);
	m_wndThanKinhCoLabel.Create(this, _T("Thần kinh, cơ"), 10, 1050, 175, 1075);
	m_wndRunDauChi.Create(this, _T("Run đầu chi"), 180, 1050, 300, 1075);
	m_wndTang.Create(this, _T("Tăng"), 441, 1051, 521, 1076);
	m_wndGiam.Create(this, _T("Giảm"), 525, 1050, 605, 1075);
	m_wndYeuCo.Create(this, _T("Yếu cơ"), 615, 1050, 695, 1075);
	m_wndPXGanXuongLabel.Create(this, _T("PX gân xương"), 305, 1050, 521, 1075);
	m_wndBieuHienMatLabel.Create(this, _T("Biểu hiện mắt"), 10, 1080, 175, 1105);
	m_wndLoiMat.Create(this, _T("Lồi mắt"), 180, 1080, 300, 1105);
	m_wndMiMat.Create(this, _T("Mi mắt nhắm không kín"), 305, 1080, 521, 1105);
	m_wndNhinDoi.Create(this, _T("Nhìn đôi"), 525, 1080, 605, 1105);
	m_wndKhamTuyenGiapLabel.Create(this, _T("III.2 Khám tuyến giáp"), 10, 1110, 200, 1135);
	m_wndMatDoLabel.Create(this, _T("Mật độ"), 10, 1140, 130, 1165);
	m_wndMatTuyenLabel.Create(this, _T("Mặt tuyến"), 345, 1140, 465, 1165);
	m_wndRungMiuLabel.Create(this, _T("Rung miu"), 10, 1170, 130, 1195);
	m_wndTiengThoiLabel.Create(this, _T("Tiếng thổi"), 345, 1170, 465, 1195);
	m_wndChac.Create(this, _T("Chắc"), 135, 1140, 235, 1165);
	m_wndMem.Create(this, _T("Mềm"), 240, 1140, 340, 1165);
	m_wndNhan.Create(this, _T("Nhẵn"), 470, 1140, 570, 1165);
	m_wndGoGhe.Create(this, _T("Gồ ghề"), 576, 1140, 676, 1165);
	m_wndRMCo.Create(this, _T("Có"), 135, 1170, 235, 1195);
	m_wndRMKhong.Create(this, _T("Không"), 240, 1170, 340, 1195);
	m_wndTTCo.Create(this, _T("Có"), 470, 1170, 570, 1195);
	m_wndTTKhong.Create(this, _T("Không"), 576, 1170, 676, 1195);
	m_wndBieuGiapTrenLamSangLabel.Create(this, _T("Bướu giáp trên lâm sàng"), 10, 1200, 235, 1225);
	m_wndDo0.Create(this, _T("Độ 0 (Không có bướu)"), 240, 1200, 695, 1225);
	m_wndDoIA.Create(this, _T("Độ IA (Không nhìn thấy, sờ thấy, mỗi thùy to hơn đốt 1 ngón cái BN)"), 240, 1230, 695, 1255);
	m_wndDoIB.Create(this, _T("Độ IB (Nhìn thấy bướu khi ngửa đầu ra sau tối đa, sờ thấy bướu)"), 240, 1260, 695, 1285);
	m_wndDoII.Create(this, _T("Độ II (Nhìn thấy bướu ở tư thế bình thường khi ở gần)"), 240, 1290, 695, 1315);
	m_wndDoIII.Create(this, _T("Độ III (Nhìn thấy bướu khi ở xa, bướu to biến dạng cổ)"), 240, 1320, 695, 1345);
	m_wndPemberton.Create(this, _T("Pemberton (BN ngất hoặc đỏ mặt khi đưa hai tay cao lên phía trên đầu)"), 240, 1350, 695, 1375);
	m_wndCanLamSangLabel.Create(this, _T("IV. CẬN LÂM SÀNG"), 10, 1380, 130, 1405);
	m_wndHuyetHocLabel.Create(this, _T("Huyết học"), 10, 1410, 175, 1435);
	m_wndHuyetHoc.Create(this,180, 1410, 780, 1435, 1, 0, 1); 
	m_wndSieuAmLabel.Create(this, _T("Siêu âm"), 10, 1440, 175, 1465);
	m_wndSieuAm.Create(this,180, 1440, 780, 1465, 1, 0, 1); 
	m_wndXNKhacLabel.Create(this, _T("Xét nghiệm khác"), 10, 1470, 175, 1495);
	m_wndXNKhac.Create(this,180, 1470, 780, 1495, 1, 0, 1); 
	m_wndQuaTrinhThucHienRFALabel.Create(this, _T("V. QUÁ TRÌNH THỰC HIỆN RFA"), 10, 1500, 300, 1525);
	m_wndThoiGianLabel.Create(this, _T("Thời gian"), 10, 1530, 175, 1555);
	m_wndThoiGian.Create(this,180, 1530, 780, 1555, 1, 0, 1); 
	m_wndCongSuatLabel.Create(this, _T("Công suất"), 10, 1560, 175, 1585);
	m_wndCongSuat.Create(this,180, 1560, 780, 1585, 1, 0, 1); 
	m_wndKimDotLabel.Create(this, _T("Kim đốt"), 10, 1590, 175, 1615);
	m_wndKimDot.Create(this,180, 1590, 780, 1615, 1, 0, 1); 
	m_wndLidocainLabel.Create(this, _T("Lidocain"), 10, 1620, 175, 1645);
	m_wndLidocain.Create(this,180, 1620, 780, 1645, 1, 0, 1); 
	m_wndBienChungLabel.Create(this, _T("Biến chứng trong và can thiệp"), 10, 1650, 175, 1675);
	m_wndChocDMCanh.Create(this, _T("Chọc vào ĐM cảnh"), 180, 1650, 430, 1675);
	m_wndTonThuongTKQuayNguoc.Create(this, _T("Tổn thương TK quặt ngược"), 180, 1680, 430, 1705);
	m_wndChayMauTrongNang.Create(this, _T("Chảy máu trong nang"), 180, 1710, 430, 1735);
	m_wndKhanTieng.Create(this, _T("Khàn tiếng"), 180, 1740, 430, 1765);
	m_wndMatYThuc.Create(this, _T("Mất ý thức	"), 180, 1770, 430, 1795);
	m_wndChocTMCanh.Create(this, _T("Chọc vào TM cảnh"), 435, 1650, 695, 1675);
	m_wndTonThuongTKX.Create(this, _T("Tổn thương TK X"), 435, 1680, 695, 1705);
	m_wndTuMauTrongNang.Create(this, _T("Tụ máu trong nang"), 435, 1710, 695, 1735);
	m_wndTuMauVungCo.Create(this, _T("Tụ máu vùng cổ"), 435, 1740, 695, 1765);
	m_wndSuyHoHap.Create(this, _T("Suy hô hấp"), 435, 1770, 695, 1795);
	m_wndKetQuaDieuTriLabel.Create(this, _T("VI. THEO DÕI KẾT QUẢ ĐIỀU TRỊ"), 10, 1800, 300, 1825);
	m_wnd7NgayDauLabel.Create(this, _T("Theo dõi trong 7 ngày đầu"), 10, 1830, 175, 1855);
	m_wnd7NgayDau.Create(this,180, 1830, 780, 1880, 1, 0, 1); 
	m_wndSau1ThangLabel.Create(this, _T("Tái khám sau 1 tháng"), 10, 1885, 175, 1910);
	m_wndSau1Thang.Create(this,180, 1885, 780, 1935, 1, 0, 1); 
	m_wndSau3ThangLabel.Create(this, _T("Tái khám sau 3 tháng"), 10, 1940, 175, 1965);
	m_wndSau3Thang.Create(this,180, 1940, 780, 1990, 1, 0, 1); 
	m_wndSau6ThangLabel.Create(this, _T("Tái khám sau 6 tháng"), 10, 1995, 175, 2020);
	m_wndSau6Thang.Create(this,180, 1995, 780, 2045, 1, 0, 1); 
	m_wndSau12ThangLabel.Create(this, _T("Tái khám sau 12 tháng"), 10, 2050, 175, 2075);
	m_wndSau12Thang.Create(this,180, 2050, 780, 2100, 1, 0, 1); 

}
void CHMS_OBARFA::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndBenhLyTuyenGiapKhac.SetLimitText(35);
// 	m_wndBenhLyTuyenGiapKhac.SetCheckValue(true);
// 	m_wndBenhLyDacBietKhac.SetLimitText(35);
// 	m_wndBenhLyDacBietKhac.SetCheckValue(true);
// 	m_wndThoiGianPhatHien.SetLimitText(35);
// 	m_wndThoiGianPhatHien.SetCheckValue(true);
// 	m_wndBieuHienLamSang.SetLimitText(35);
// 	m_wndBieuHienLamSang.SetCheckValue(true);
// 	m_wndKhamVaDieuTriTai.SetLimitText(35);
// 	m_wndKhamVaDieuTriTai.SetCheckValue(true);
// 	m_wndChanDoanTuyenGiap.SetLimitText(35);
// 	m_wndChanDoanTuyenGiap.SetCheckValue(true);
// 	m_wndPhuongPhapThoiGian.SetLimitText(35);
// 	m_wndPhuongPhapThoiGian.SetCheckValue(true);
// 	m_wndLamSangHienTai.SetLimitText(35);
// 	m_wndLamSangHienTai.SetCheckValue(true);
// 	m_wndBenhLyDacBietKhac2.SetLimitText(35);
// 	m_wndBenhLyDacBietKhac2.SetCheckValue(true);
// 	m_wndTienSuChieuXa.SetLimitText(35);
// 	m_wndTienSuChieuXa.SetCheckValue(true);
// 	m_wndAnThieuIod.SetLimitText(35);
// 	m_wndAnThieuIod.SetCheckValue(true);
// 	m_wndAnBapCai.SetLimitText(35);
// 	m_wndAnBapCai.SetCheckValue(true);
// 	m_wndThuocKhangGiap.SetLimitText(35);
// 	m_wndThuocKhangGiap.SetCheckValue(true);
// 	m_wndChieuCao.SetLimitText(35);
// 	m_wndChieuCao.SetCheckValue(true);
// 	m_wndCanNang.SetLimitText(35);
// 	m_wndCanNang.SetCheckValue(true);
// 	m_wndHuyetAp.SetLimitText(35);
// 	m_wndHuyetAp.SetCheckValue(true);
// 	m_wndMach.SetLimitText(35);
// 	m_wndMach.SetCheckValue(true);
// 	m_wndMatCanDoi2.SetLimitText(35);
// 	m_wndMatCanDoi2.SetCheckValue(true);
// 	m_wndBatThuong2.SetLimitText(35);
// 	m_wndBatThuong2.SetCheckValue(true);
// 	m_wndHuyetHoc.SetLimitText(35);
// 	m_wndHuyetHoc.SetCheckValue(true);
// 	m_wndSieuAm.SetLimitText(35);
// 	m_wndSieuAm.SetCheckValue(true);
// 	m_wndXNKhac.SetLimitText(35);
// 	m_wndXNKhac.SetCheckValue(true);
// 	m_wndThoiGian.SetLimitText(35);
// 	m_wndThoiGian.SetCheckValue(true);
// 	m_wndCongSuat.SetLimitText(35);
// 	m_wndCongSuat.SetCheckValue(true);
// 	m_wndKimDot.SetLimitText(35);
// 	m_wndKimDot.SetCheckValue(true);
// 	m_wndLidocain.SetLimitText(35);
// 	m_wndLidocain.SetCheckValue(true);
// 	m_wnd7NgayDau.SetLimitText(35);
// 	m_wnd7NgayDau.SetCheckValue(true);
// 	m_wndSau1Thang.SetLimitText(35);
// 	m_wndSau1Thang.SetCheckValue(true);
// 	m_wndSau3Thang.SetLimitText(35);
// 	m_wndSau3Thang.SetCheckValue(true);
// 	m_wndSau6Thang.SetLimitText(35);
// 	m_wndSau6Thang.SetCheckValue(true);
// 	m_wndSau12Thang.SetLimitText(35);
// 	m_wndSau12Thang.SetCheckValue(true);

}
void CHMS_OBARFA::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLan1.SetEvent(WE_CLICK, _OnLan1SelectFnc);
	m_wndLan2.SetEvent(WE_CLICK, _OnLan2SelectFnc);
	m_wndLan3.SetEvent(WE_CLICK, _OnLan3SelectFnc);
	m_wndLan4.SetEvent(WE_CLICK, _OnLan4SelectFnc);
	m_wndLan5.SetEvent(WE_CLICK, _OnLan5SelectFnc);
	m_wndBiUngBuou.SetEvent(WE_CLICK, _OnBiUngBuouSelectFnc);
	m_wndBiUngThuTuyenGiap.SetEvent(WE_CLICK, _OnBiUngThuTuyenGiapSelectFnc);
	//m_wndBenhLyTuyenGiapKhac.SetEvent(WE_CHANGE, _OnBenhLyTuyenGiapKhacChangeFnc);
	//m_wndBenhLyTuyenGiapKhac.SetEvent(WE_SETFOCUS, _OnBenhLyTuyenGiapKhacSetfocusFnc);
	//m_wndBenhLyTuyenGiapKhac.SetEvent(WE_KILLFOCUS, _OnBenhLyTuyenGiapKhacKillfocusFnc);
	m_wndBenhLyTuyenGiapKhac.SetEvent(WE_CHECKVALUE, _OnBenhLyTuyenGiapKhacCheckValueFnc);
	//m_wndBenhLyDacBietKhac.SetEvent(WE_CHANGE, _OnBenhLyDacBietKhacChangeFnc);
	//m_wndBenhLyDacBietKhac.SetEvent(WE_SETFOCUS, _OnBenhLyDacBietKhacSetfocusFnc);
	//m_wndBenhLyDacBietKhac.SetEvent(WE_KILLFOCUS, _OnBenhLyDacBietKhacKillfocusFnc);
	m_wndBenhLyDacBietKhac.SetEvent(WE_CHECKVALUE, _OnBenhLyDacBietKhacCheckValueFnc);
	//m_wndThoiGianPhatHien.SetEvent(WE_CHANGE, _OnThoiGianPhatHienChangeFnc);
	//m_wndThoiGianPhatHien.SetEvent(WE_SETFOCUS, _OnThoiGianPhatHienSetfocusFnc);
	//m_wndThoiGianPhatHien.SetEvent(WE_KILLFOCUS, _OnThoiGianPhatHienKillfocusFnc);
	m_wndThoiGianPhatHien.SetEvent(WE_CHECKVALUE, _OnThoiGianPhatHienCheckValueFnc);
	//m_wndBieuHienLamSang.SetEvent(WE_CHANGE, _OnBieuHienLamSangChangeFnc);
	//m_wndBieuHienLamSang.SetEvent(WE_SETFOCUS, _OnBieuHienLamSangSetfocusFnc);
	//m_wndBieuHienLamSang.SetEvent(WE_KILLFOCUS, _OnBieuHienLamSangKillfocusFnc);
	m_wndBieuHienLamSang.SetEvent(WE_CHECKVALUE, _OnBieuHienLamSangCheckValueFnc);
	//m_wndKhamVaDieuTriTai.SetEvent(WE_CHANGE, _OnKhamVaDieuTriTaiChangeFnc);
	//m_wndKhamVaDieuTriTai.SetEvent(WE_SETFOCUS, _OnKhamVaDieuTriTaiSetfocusFnc);
	//m_wndKhamVaDieuTriTai.SetEvent(WE_KILLFOCUS, _OnKhamVaDieuTriTaiKillfocusFnc);
	m_wndKhamVaDieuTriTai.SetEvent(WE_CHECKVALUE, _OnKhamVaDieuTriTaiCheckValueFnc);
	//m_wndChanDoanTuyenGiap.SetEvent(WE_CHANGE, _OnChanDoanTuyenGiapChangeFnc);
	//m_wndChanDoanTuyenGiap.SetEvent(WE_SETFOCUS, _OnChanDoanTuyenGiapSetfocusFnc);
	//m_wndChanDoanTuyenGiap.SetEvent(WE_KILLFOCUS, _OnChanDoanTuyenGiapKillfocusFnc);
	m_wndChanDoanTuyenGiap.SetEvent(WE_CHECKVALUE, _OnChanDoanTuyenGiapCheckValueFnc);
	//m_wndPhuongPhapThoiGian.SetEvent(WE_CHANGE, _OnPhuongPhapThoiGianChangeFnc);
	//m_wndPhuongPhapThoiGian.SetEvent(WE_SETFOCUS, _OnPhuongPhapThoiGianSetfocusFnc);
	//m_wndPhuongPhapThoiGian.SetEvent(WE_KILLFOCUS, _OnPhuongPhapThoiGianKillfocusFnc);
	m_wndPhuongPhapThoiGian.SetEvent(WE_CHECKVALUE, _OnPhuongPhapThoiGianCheckValueFnc);
	//m_wndLamSangHienTai.SetEvent(WE_CHANGE, _OnLamSangHienTaiChangeFnc);
	//m_wndLamSangHienTai.SetEvent(WE_SETFOCUS, _OnLamSangHienTaiSetfocusFnc);
	//m_wndLamSangHienTai.SetEvent(WE_KILLFOCUS, _OnLamSangHienTaiKillfocusFnc);
	m_wndLamSangHienTai.SetEvent(WE_CHECKVALUE, _OnLamSangHienTaiCheckValueFnc);
	//m_wndBenhLyDacBietKhac2.SetEvent(WE_CHANGE, _OnBenhLyDacBietKhac2ChangeFnc);
	//m_wndBenhLyDacBietKhac2.SetEvent(WE_SETFOCUS, _OnBenhLyDacBietKhac2SetfocusFnc);
	//m_wndBenhLyDacBietKhac2.SetEvent(WE_KILLFOCUS, _OnBenhLyDacBietKhac2KillfocusFnc);
	m_wndBenhLyDacBietKhac2.SetEvent(WE_CHECKVALUE, _OnBenhLyDacBietKhac2CheckValueFnc);
	//m_wndTienSuChieuXa.SetEvent(WE_CHANGE, _OnTienSuChieuXaChangeFnc);
	//m_wndTienSuChieuXa.SetEvent(WE_SETFOCUS, _OnTienSuChieuXaSetfocusFnc);
	//m_wndTienSuChieuXa.SetEvent(WE_KILLFOCUS, _OnTienSuChieuXaKillfocusFnc);
	m_wndTienSuChieuXa.SetEvent(WE_CHECKVALUE, _OnTienSuChieuXaCheckValueFnc);
	//m_wndAnThieuIod.SetEvent(WE_CHANGE, _OnAnThieuIodChangeFnc);
	//m_wndAnThieuIod.SetEvent(WE_SETFOCUS, _OnAnThieuIodSetfocusFnc);
	//m_wndAnThieuIod.SetEvent(WE_KILLFOCUS, _OnAnThieuIodKillfocusFnc);
	m_wndAnThieuIod.SetEvent(WE_CHECKVALUE, _OnAnThieuIodCheckValueFnc);
	//m_wndAnBapCai.SetEvent(WE_CHANGE, _OnAnBapCaiChangeFnc);
	//m_wndAnBapCai.SetEvent(WE_SETFOCUS, _OnAnBapCaiSetfocusFnc);
	//m_wndAnBapCai.SetEvent(WE_KILLFOCUS, _OnAnBapCaiKillfocusFnc);
	m_wndAnBapCai.SetEvent(WE_CHECKVALUE, _OnAnBapCaiCheckValueFnc);
	//m_wndThuocKhangGiap.SetEvent(WE_CHANGE, _OnThuocKhangGiapChangeFnc);
	//m_wndThuocKhangGiap.SetEvent(WE_SETFOCUS, _OnThuocKhangGiapSetfocusFnc);
	//m_wndThuocKhangGiap.SetEvent(WE_KILLFOCUS, _OnThuocKhangGiapKillfocusFnc);
	m_wndThuocKhangGiap.SetEvent(WE_CHECKVALUE, _OnThuocKhangGiapCheckValueFnc);
	//m_wndChieuCao.SetEvent(WE_CHANGE, _OnChieuCaoChangeFnc);
	//m_wndChieuCao.SetEvent(WE_SETFOCUS, _OnChieuCaoSetfocusFnc);
	//m_wndChieuCao.SetEvent(WE_KILLFOCUS, _OnChieuCaoKillfocusFnc);
	m_wndChieuCao.SetEvent(WE_CHECKVALUE, _OnChieuCaoCheckValueFnc);
	//m_wndCanNang.SetEvent(WE_CHANGE, _OnCanNangChangeFnc);
	//m_wndCanNang.SetEvent(WE_SETFOCUS, _OnCanNangSetfocusFnc);
	//m_wndCanNang.SetEvent(WE_KILLFOCUS, _OnCanNangKillfocusFnc);
	m_wndCanNang.SetEvent(WE_CHECKVALUE, _OnCanNangCheckValueFnc);
	//m_wndHuyetAp.SetEvent(WE_CHANGE, _OnHuyetApChangeFnc);
	//m_wndHuyetAp.SetEvent(WE_SETFOCUS, _OnHuyetApSetfocusFnc);
	//m_wndHuyetAp.SetEvent(WE_KILLFOCUS, _OnHuyetApKillfocusFnc);
	m_wndHuyetAp.SetEvent(WE_CHECKVALUE, _OnHuyetApCheckValueFnc);
	//m_wndMach.SetEvent(WE_CHANGE, _OnMachChangeFnc);
	//m_wndMach.SetEvent(WE_SETFOCUS, _OnMachSetfocusFnc);
	//m_wndMach.SetEvent(WE_KILLFOCUS, _OnMachKillfocusFnc);
	m_wndMach.SetEvent(WE_CHECKVALUE, _OnMachCheckValueFnc);
	m_wndCanDoi.SetEvent(WE_CLICK, _OnCanDoiSelectFnc);
	m_wndMatCanDoi.SetEvent(WE_CLICK, _OnMatCanDoiSelectFnc);
	//m_wndMatCanDoi2.SetEvent(WE_CHANGE, _OnMatCanDoi2ChangeFnc);
	//m_wndMatCanDoi2.SetEvent(WE_SETFOCUS, _OnMatCanDoi2SetfocusFnc);
	//m_wndMatCanDoi2.SetEvent(WE_KILLFOCUS, _OnMatCanDoi2KillfocusFnc);
	m_wndMatCanDoi2.SetEvent(WE_CHECKVALUE, _OnMatCanDoi2CheckValueFnc);
	m_wndBinhThuong.SetEvent(WE_CLICK, _OnBinhThuongSelectFnc);
	m_wndBatThuong.SetEvent(WE_CLICK, _OnBatThuongSelectFnc);
	//m_wndBatThuong2.SetEvent(WE_CHANGE, _OnBatThuong2ChangeFnc);
	//m_wndBatThuong2.SetEvent(WE_SETFOCUS, _OnBatThuong2SetfocusFnc);
	//m_wndBatThuong2.SetEvent(WE_KILLFOCUS, _OnBatThuong2KillfocusFnc);
	m_wndBatThuong2.SetEvent(WE_CHECKVALUE, _OnBatThuong2CheckValueFnc);
	m_wndBDTMCo.SetEvent(WE_CLICK, _OnBDTMCoSelectFnc);
	m_wndBDTMKhong.SetEvent(WE_CLICK, _OnBDTMKhongSelectFnc);
	m_wndDauCo.SetEvent(WE_CLICK, _OnDauCoSelectFnc);
	m_wndHoKichThichHong.SetEvent(WE_CLICK, _OnHoKichThichHongSelectFnc);
	m_wndNuotNghen.SetEvent(WE_CLICK, _OnNuotNghenSelectFnc);
	m_wndChenEpDeDay.SetEvent(WE_CLICK, _OnChenEpDeDaySelectFnc);
	m_wndTangCan.SetEvent(WE_CLICK, _OnTangCanSelectFnc);
	m_wndGiamCan.SetEvent(WE_CLICK, _OnGiamCanSelectFnc);
	m_wndLoLang.SetEvent(WE_CLICK, _OnLoLangSelectFnc);
	m_wndTramCam.SetEvent(WE_CLICK, _OnTramCamSelectFnc);
	m_wndNongBung.SetEvent(WE_CLICK, _OnNongBungSelectFnc);
	m_wndSoLanh.SetEvent(WE_CLICK, _OnSoLanhSelectFnc);
	m_wndHoiHop.SetEvent(WE_CLICK, _OnHoiHopSelectFnc);
	m_wndNhipCham.SetEvent(WE_CLICK, _OnNhipChamSelectFnc);
	m_wndDiNgoai.SetEvent(WE_CLICK, _OnDiNgoaiSelectFnc);
	m_wndTaoBon.SetEvent(WE_CLICK, _OnTaoBonSelectFnc);
	m_wndRunDauChi.SetEvent(WE_CLICK, _OnRunDauChiSelectFnc);
	m_wndTang.SetEvent(WE_CLICK, _OnTangSelectFnc);
	m_wndGiam.SetEvent(WE_CLICK, _OnGiamSelectFnc);
	m_wndYeuCo.SetEvent(WE_CLICK, _OnYeuCoSelectFnc);
	m_wndLoiMat.SetEvent(WE_CLICK, _OnLoiMatSelectFnc);
	m_wndMiMat.SetEvent(WE_CLICK, _OnMiMatSelectFnc);
	m_wndNhinDoi.SetEvent(WE_CLICK, _OnNhinDoiSelectFnc);
	m_wndChac.SetEvent(WE_CLICK, _OnChacSelectFnc);
	m_wndMem.SetEvent(WE_CLICK, _OnMemSelectFnc);
	m_wndNhan.SetEvent(WE_CLICK, _OnNhanSelectFnc);
	m_wndGoGhe.SetEvent(WE_CLICK, _OnGoGheSelectFnc);
	m_wndRMCo.SetEvent(WE_CLICK, _OnRMCoSelectFnc);
	m_wndRMKhong.SetEvent(WE_CLICK, _OnRMKhongSelectFnc);
	m_wndTTCo.SetEvent(WE_CLICK, _OnTTCoSelectFnc);
	m_wndTTKhong.SetEvent(WE_CLICK, _OnTTKhongSelectFnc);
	m_wndDo0.SetEvent(WE_CLICK, _OnDo0SelectFnc);
	m_wndDoIA.SetEvent(WE_CLICK, _OnDoIASelectFnc);
	m_wndDoIB.SetEvent(WE_CLICK, _OnDoIBSelectFnc);
	m_wndDoII.SetEvent(WE_CLICK, _OnDoIISelectFnc);
	m_wndDoIII.SetEvent(WE_CLICK, _OnDoIIISelectFnc);
	m_wndPemberton.SetEvent(WE_CLICK, _OnPembertonSelectFnc);
	//m_wndHuyetHoc.SetEvent(WE_CHANGE, _OnHuyetHocChangeFnc);
	//m_wndHuyetHoc.SetEvent(WE_SETFOCUS, _OnHuyetHocSetfocusFnc);
	//m_wndHuyetHoc.SetEvent(WE_KILLFOCUS, _OnHuyetHocKillfocusFnc);
	m_wndHuyetHoc.SetEvent(WE_CHECKVALUE, _OnHuyetHocCheckValueFnc);
	//m_wndSieuAm.SetEvent(WE_CHANGE, _OnSieuAmChangeFnc);
	//m_wndSieuAm.SetEvent(WE_SETFOCUS, _OnSieuAmSetfocusFnc);
	//m_wndSieuAm.SetEvent(WE_KILLFOCUS, _OnSieuAmKillfocusFnc);
	m_wndSieuAm.SetEvent(WE_CHECKVALUE, _OnSieuAmCheckValueFnc);
	//m_wndXNKhac.SetEvent(WE_CHANGE, _OnXNKhacChangeFnc);
	//m_wndXNKhac.SetEvent(WE_SETFOCUS, _OnXNKhacSetfocusFnc);
	//m_wndXNKhac.SetEvent(WE_KILLFOCUS, _OnXNKhacKillfocusFnc);
	m_wndXNKhac.SetEvent(WE_CHECKVALUE, _OnXNKhacCheckValueFnc);
	//m_wndThoiGian.SetEvent(WE_CHANGE, _OnThoiGianChangeFnc);
	//m_wndThoiGian.SetEvent(WE_SETFOCUS, _OnThoiGianSetfocusFnc);
	//m_wndThoiGian.SetEvent(WE_KILLFOCUS, _OnThoiGianKillfocusFnc);
	m_wndThoiGian.SetEvent(WE_CHECKVALUE, _OnThoiGianCheckValueFnc);
	//m_wndCongSuat.SetEvent(WE_CHANGE, _OnCongSuatChangeFnc);
	//m_wndCongSuat.SetEvent(WE_SETFOCUS, _OnCongSuatSetfocusFnc);
	//m_wndCongSuat.SetEvent(WE_KILLFOCUS, _OnCongSuatKillfocusFnc);
	m_wndCongSuat.SetEvent(WE_CHECKVALUE, _OnCongSuatCheckValueFnc);
	//m_wndKimDot.SetEvent(WE_CHANGE, _OnKimDotChangeFnc);
	//m_wndKimDot.SetEvent(WE_SETFOCUS, _OnKimDotSetfocusFnc);
	//m_wndKimDot.SetEvent(WE_KILLFOCUS, _OnKimDotKillfocusFnc);
	m_wndKimDot.SetEvent(WE_CHECKVALUE, _OnKimDotCheckValueFnc);
	//m_wndLidocain.SetEvent(WE_CHANGE, _OnLidocainChangeFnc);
	//m_wndLidocain.SetEvent(WE_SETFOCUS, _OnLidocainSetfocusFnc);
	//m_wndLidocain.SetEvent(WE_KILLFOCUS, _OnLidocainKillfocusFnc);
	m_wndLidocain.SetEvent(WE_CHECKVALUE, _OnLidocainCheckValueFnc);
	m_wndChocDMCanh.SetEvent(WE_CLICK, _OnChocDMCanhSelectFnc);
	m_wndTonThuongTKQuayNguoc.SetEvent(WE_CLICK, _OnTonThuongTKQuayNguocSelectFnc);
	m_wndChayMauTrongNang.SetEvent(WE_CLICK, _OnChayMauTrongNangSelectFnc);
	m_wndKhanTieng.SetEvent(WE_CLICK, _OnKhanTiengSelectFnc);
	m_wndMatYThuc.SetEvent(WE_CLICK, _OnMatYThucSelectFnc);
	m_wndChocTMCanh.SetEvent(WE_CLICK, _OnChocTMCanhSelectFnc);
	m_wndTonThuongTKX.SetEvent(WE_CLICK, _OnTonThuongTKXSelectFnc);
	m_wndTuMauTrongNang.SetEvent(WE_CLICK, _OnTuMauTrongNangSelectFnc);
	m_wndTuMauVungCo.SetEvent(WE_CLICK, _OnTuMauVungCoSelectFnc);
	m_wndSuyHoHap.SetEvent(WE_CLICK, _OnSuyHoHapSelectFnc);
	//m_wnd7NgayDau.SetEvent(WE_CHANGE, _On7NgayDauChangeFnc);
	//m_wnd7NgayDau.SetEvent(WE_SETFOCUS, _On7NgayDauSetfocusFnc);
	//m_wnd7NgayDau.SetEvent(WE_KILLFOCUS, _On7NgayDauKillfocusFnc);
	m_wnd7NgayDau.SetEvent(WE_CHECKVALUE, _On7NgayDauCheckValueFnc);
	//m_wndSau1Thang.SetEvent(WE_CHANGE, _OnSau1ThangChangeFnc);
	//m_wndSau1Thang.SetEvent(WE_SETFOCUS, _OnSau1ThangSetfocusFnc);
	//m_wndSau1Thang.SetEvent(WE_KILLFOCUS, _OnSau1ThangKillfocusFnc);
	m_wndSau1Thang.SetEvent(WE_CHECKVALUE, _OnSau1ThangCheckValueFnc);
	//m_wndSau3Thang.SetEvent(WE_CHANGE, _OnSau3ThangChangeFnc);
	//m_wndSau3Thang.SetEvent(WE_SETFOCUS, _OnSau3ThangSetfocusFnc);
	//m_wndSau3Thang.SetEvent(WE_KILLFOCUS, _OnSau3ThangKillfocusFnc);
	m_wndSau3Thang.SetEvent(WE_CHECKVALUE, _OnSau3ThangCheckValueFnc);
	//m_wndSau6Thang.SetEvent(WE_CHANGE, _OnSau6ThangChangeFnc);
	//m_wndSau6Thang.SetEvent(WE_SETFOCUS, _OnSau6ThangSetfocusFnc);
	//m_wndSau6Thang.SetEvent(WE_KILLFOCUS, _OnSau6ThangKillfocusFnc);
	m_wndSau6Thang.SetEvent(WE_CHECKVALUE, _OnSau6ThangCheckValueFnc);
	//m_wndSau12Thang.SetEvent(WE_CHANGE, _OnSau12ThangChangeFnc);
	//m_wndSau12Thang.SetEvent(WE_SETFOCUS, _OnSau12ThangSetfocusFnc);
	//m_wndSau12Thang.SetEvent(WE_KILLFOCUS, _OnSau12ThangKillfocusFnc);
	m_wndSau12Thang.SetEvent(WE_CHECKVALUE, _OnSau12ThangCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMS_OBARFAFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMS_OBARFAFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMS_OBARFAFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMS_OBARFAFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMS_OBARFAFnc, 0, 'T', VK_CONTROL);
	GetDataToScreen();
	SetScrollSizes(MM_TEXT, CSize(780, 2105));

}
void CHMS_OBARFA::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndLan1.GetDlgCtrlID(), m_bLan1);
	DDX_Check(pDX, m_wndLan2.GetDlgCtrlID(), m_bLan2);
	DDX_Check(pDX, m_wndLan3.GetDlgCtrlID(), m_bLan3);
	DDX_Check(pDX, m_wndLan4.GetDlgCtrlID(), m_bLan4);
	DDX_Check(pDX, m_wndLan5.GetDlgCtrlID(), m_bLan5);
	DDX_Check(pDX, m_wndBiUngBuou.GetDlgCtrlID(), m_bBiUngBuou);
	DDX_Check(pDX, m_wndBiUngThuTuyenGiap.GetDlgCtrlID(), m_bBiUngThuTuyenGiap);
	DDX_Text(pDX, m_wndBenhLyTuyenGiapKhac.GetDlgCtrlID(), m_szBenhLyTuyenGiapKhac);
	DDX_Text(pDX, m_wndBenhLyDacBietKhac.GetDlgCtrlID(), m_szBenhLyDacBietKhac);
	DDX_Text(pDX, m_wndThoiGianPhatHien.GetDlgCtrlID(), m_szThoiGianPhatHien);
	DDX_Text(pDX, m_wndBieuHienLamSang.GetDlgCtrlID(), m_szBieuHienLamSang);
	DDX_Text(pDX, m_wndKhamVaDieuTriTai.GetDlgCtrlID(), m_szKhamVaDieuTriTai);
	DDX_Text(pDX, m_wndChanDoanTuyenGiap.GetDlgCtrlID(), m_szChanDoanTuyenGiap);
	DDX_Text(pDX, m_wndPhuongPhapThoiGian.GetDlgCtrlID(), m_szPhuongPhapThoiGian);
	DDX_Text(pDX, m_wndLamSangHienTai.GetDlgCtrlID(), m_szLamSangHienTai);
	DDX_Text(pDX, m_wndBenhLyDacBietKhac2.GetDlgCtrlID(), m_szBenhLyDacBietKhac2);
	DDX_Text(pDX, m_wndTienSuChieuXa.GetDlgCtrlID(), m_szTienSuChieuXa);
	DDX_Text(pDX, m_wndAnThieuIod.GetDlgCtrlID(), m_szAnThieuIod);
	DDX_Text(pDX, m_wndAnBapCai.GetDlgCtrlID(), m_szAnBapCai);
	DDX_Text(pDX, m_wndThuocKhangGiap.GetDlgCtrlID(), m_szThuocKhangGiap);
	DDX_Text(pDX, m_wndChieuCao.GetDlgCtrlID(), m_szChieuCao);
	DDX_Text(pDX, m_wndCanNang.GetDlgCtrlID(), m_szCanNang);
	DDX_Text(pDX, m_wndHuyetAp.GetDlgCtrlID(), m_szHuyetAp);
	DDX_Text(pDX, m_wndMach.GetDlgCtrlID(), m_szMach);
	DDX_Check(pDX, m_wndCanDoi.GetDlgCtrlID(), m_bCanDoi);
	DDX_Check(pDX, m_wndMatCanDoi.GetDlgCtrlID(), m_bMatCanDoi);
	DDX_Text(pDX, m_wndMatCanDoi2.GetDlgCtrlID(), m_szMatCanDoi2);
	DDX_Check(pDX, m_wndBinhThuong.GetDlgCtrlID(), m_bBinhThuong);
	DDX_Check(pDX, m_wndBatThuong.GetDlgCtrlID(), m_bBatThuong);
	DDX_Text(pDX, m_wndBatThuong2.GetDlgCtrlID(), m_szBatThuong2);
	DDX_Check(pDX, m_wndBDTMCo.GetDlgCtrlID(), m_bBDTMCo);
	DDX_Check(pDX, m_wndBDTMKhong.GetDlgCtrlID(), m_bBDTMKhong);
	DDX_Check(pDX, m_wndDauCo.GetDlgCtrlID(), m_bDauCo);
	DDX_Check(pDX, m_wndHoKichThichHong.GetDlgCtrlID(), m_bHoKichThichHong);
	DDX_Check(pDX, m_wndNuotNghen.GetDlgCtrlID(), m_bNuotNghen);
	DDX_Check(pDX, m_wndChenEpDeDay.GetDlgCtrlID(), m_bChenEpDeDay);
	DDX_Check(pDX, m_wndTangCan.GetDlgCtrlID(), m_bTangCan);
	DDX_Check(pDX, m_wndGiamCan.GetDlgCtrlID(), m_bGiamCan);
	DDX_Check(pDX, m_wndLoLang.GetDlgCtrlID(), m_bLoLang);
	DDX_Check(pDX, m_wndTramCam.GetDlgCtrlID(), m_bTramCam);
	DDX_Check(pDX, m_wndNongBung.GetDlgCtrlID(), m_bNongBung);
	DDX_Check(pDX, m_wndSoLanh.GetDlgCtrlID(), m_bSoLanh);
	DDX_Check(pDX, m_wndHoiHop.GetDlgCtrlID(), m_bHoiHop);
	DDX_Check(pDX, m_wndNhipCham.GetDlgCtrlID(), m_bNhipCham);
	DDX_Check(pDX, m_wndDiNgoai.GetDlgCtrlID(), m_bDiNgoai);
	DDX_Check(pDX, m_wndTaoBon.GetDlgCtrlID(), m_bTaoBon);
	DDX_Check(pDX, m_wndRunDauChi.GetDlgCtrlID(), m_bRunDauChi);
	DDX_Check(pDX, m_wndTang.GetDlgCtrlID(), m_bTang);
	DDX_Check(pDX, m_wndGiam.GetDlgCtrlID(), m_bGiam);
	DDX_Check(pDX, m_wndYeuCo.GetDlgCtrlID(), m_bYeuCo);
	DDX_Check(pDX, m_wndLoiMat.GetDlgCtrlID(), m_bLoiMat);
	DDX_Check(pDX, m_wndMiMat.GetDlgCtrlID(), m_bMiMat);
	DDX_Check(pDX, m_wndNhinDoi.GetDlgCtrlID(), m_bNhinDoi);
	DDX_Check(pDX, m_wndChac.GetDlgCtrlID(), m_bChac);
	DDX_Check(pDX, m_wndMem.GetDlgCtrlID(), m_bMem);
	DDX_Check(pDX, m_wndNhan.GetDlgCtrlID(), m_bNhan);
	DDX_Check(pDX, m_wndGoGhe.GetDlgCtrlID(), m_bGoGhe);
	DDX_Check(pDX, m_wndRMCo.GetDlgCtrlID(), m_bRMCo);
	DDX_Check(pDX, m_wndRMKhong.GetDlgCtrlID(), m_bRMKhong);
	DDX_Check(pDX, m_wndTTCo.GetDlgCtrlID(), m_bTTCo);
	DDX_Check(pDX, m_wndTTKhong.GetDlgCtrlID(), m_bTTKhong);
	DDX_Check(pDX, m_wndDo0.GetDlgCtrlID(), m_bDo0);
	DDX_Check(pDX, m_wndDoIA.GetDlgCtrlID(), m_bDoIA);
	DDX_Check(pDX, m_wndDoIB.GetDlgCtrlID(), m_bDoIB);
	DDX_Check(pDX, m_wndDoII.GetDlgCtrlID(), m_bDoII);
	DDX_Check(pDX, m_wndDoIII.GetDlgCtrlID(), m_bDoIII);
	DDX_Check(pDX, m_wndPemberton.GetDlgCtrlID(), m_bPemberton);
	DDX_Text(pDX, m_wndHuyetHoc.GetDlgCtrlID(), m_szHuyetHoc);
	DDX_Text(pDX, m_wndSieuAm.GetDlgCtrlID(), m_szSieuAm);
	DDX_Text(pDX, m_wndXNKhac.GetDlgCtrlID(), m_szXNKhac);
	DDX_Text(pDX, m_wndThoiGian.GetDlgCtrlID(), m_szThoiGian);
	DDX_Text(pDX, m_wndCongSuat.GetDlgCtrlID(), m_szCongSuat);
	DDX_Text(pDX, m_wndKimDot.GetDlgCtrlID(), m_szKimDot);
	DDX_Text(pDX, m_wndLidocain.GetDlgCtrlID(), m_szLidocain);
	DDX_Check(pDX, m_wndChocDMCanh.GetDlgCtrlID(), m_bChocDMCanh);
	DDX_Check(pDX, m_wndTonThuongTKQuayNguoc.GetDlgCtrlID(), m_bTonThuongTKQuayNguoc);
	DDX_Check(pDX, m_wndChayMauTrongNang.GetDlgCtrlID(), m_bChayMauTrongNang);
	DDX_Check(pDX, m_wndKhanTieng.GetDlgCtrlID(), m_bKhanTieng);
	DDX_Check(pDX, m_wndMatYThuc.GetDlgCtrlID(), m_bMatYThuc);
	DDX_Check(pDX, m_wndChocTMCanh.GetDlgCtrlID(), m_bChocTMCanh);
	DDX_Check(pDX, m_wndTonThuongTKX.GetDlgCtrlID(), m_bTonThuongTKX);
	DDX_Check(pDX, m_wndTuMauTrongNang.GetDlgCtrlID(), m_bTuMauTrongNang);
	DDX_Check(pDX, m_wndTuMauVungCo.GetDlgCtrlID(), m_bTuMauVungCo);
	DDX_Check(pDX, m_wndSuyHoHap.GetDlgCtrlID(), m_bSuyHoHap);
	DDX_Text(pDX, m_wnd7NgayDau.GetDlgCtrlID(), m_sz7NgayDau);
	DDX_Text(pDX, m_wndSau1Thang.GetDlgCtrlID(), m_szSau1Thang);
	DDX_Text(pDX, m_wndSau3Thang.GetDlgCtrlID(), m_szSau3Thang);
	DDX_Text(pDX, m_wndSau6Thang.GetDlgCtrlID(), m_szSau6Thang);
	DDX_Text(pDX, m_wndSau12Thang.GetDlgCtrlID(), m_szSau12Thang);

}
void CHMS_OBARFA::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Lan1")] =  m_bLan1;
	m_jData[_T("Lan2")] =  m_bLan2;
	m_jData[_T("Lan3")] =  m_bLan3;
	m_jData[_T("Lan4")] =  m_bLan4;
	m_jData[_T("Lan5")] =  m_bLan5;
	m_jData[_T("BiUngBuou")] =  m_bBiUngBuou;
	m_jData[_T("BiUngThuTuyenGiap")] =  m_bBiUngThuTuyenGiap;
	m_jData[_T("BenhLyTuyenGiapKhac")] =  m_szBenhLyTuyenGiapKhac;
	m_jData[_T("BenhLyDacBietKhac")] =  m_szBenhLyDacBietKhac;
	m_jData[_T("ThoiGianPhatHien")] =  m_szThoiGianPhatHien;
	m_jData[_T("BieuHienLamSang")] =  m_szBieuHienLamSang;
	m_jData[_T("KhamVaDieuTriTai")] =  m_szKhamVaDieuTriTai;
	m_jData[_T("ChanDoanTuyenGiap")] =  m_szChanDoanTuyenGiap;
	m_jData[_T("PhuongPhapThoiGian")] =  m_szPhuongPhapThoiGian;
	m_jData[_T("LamSangHienTai")] =  m_szLamSangHienTai;
	m_jData[_T("BenhLyDacBietKhac2")] =  m_szBenhLyDacBietKhac2;
	m_jData[_T("TienSuChieuXa")] =  m_szTienSuChieuXa;
	m_jData[_T("AnThieuIod")] =  m_szAnThieuIod;
	m_jData[_T("AnBapCai")] =  m_szAnBapCai;
	m_jData[_T("ThuocKhangGiap")] =  m_szThuocKhangGiap;
	m_jData[_T("ChieuCao")] =  m_szChieuCao;
	m_jData[_T("CanNang")] =  m_szCanNang;
	m_jData[_T("HuyetAp")] =  m_szHuyetAp;
	m_jData[_T("Mach")] =  m_szMach;
	m_jData[_T("CanDoi")] =  m_bCanDoi;
	m_jData[_T("MatCanDoi")] =  m_bMatCanDoi;
	m_jData[_T("MatCanDoi2")] =  m_szMatCanDoi2;
	m_jData[_T("BinhThuong")] =  m_bBinhThuong;
	m_jData[_T("BatThuong")] =  m_bBatThuong;
	m_jData[_T("BatThuong2")] =  m_szBatThuong2;
	m_jData[_T("BDTMCo")] =  m_bBDTMCo;
	m_jData[_T("BDTMKhong")] =  m_bBDTMKhong;
	m_jData[_T("DauCo")] =  m_bDauCo;
	m_jData[_T("HoKichThichHong")] =  m_bHoKichThichHong;
	m_jData[_T("NuotNghen")] =  m_bNuotNghen;
	m_jData[_T("ChenEpDeDay")] =  m_bChenEpDeDay;
	m_jData[_T("TangCan")] =  m_bTangCan;
	m_jData[_T("GiamCan")] =  m_bGiamCan;
	m_jData[_T("LoLang")] =  m_bLoLang;
	m_jData[_T("TramCam")] =  m_bTramCam;
	m_jData[_T("NongBung")] =  m_bNongBung;
	m_jData[_T("SoLanh")] =  m_bSoLanh;
	m_jData[_T("HoiHop")] =  m_bHoiHop;
	m_jData[_T("NhipCham")] =  m_bNhipCham;
	m_jData[_T("DiNgoai")] =  m_bDiNgoai;
	m_jData[_T("TaoBon")] =  m_bTaoBon;
	m_jData[_T("RunDauChi")] =  m_bRunDauChi;
	m_jData[_T("Tang")] =  m_bTang;
	m_jData[_T("Giam")] =  m_bGiam;
	m_jData[_T("YeuCo")] =  m_bYeuCo;
	m_jData[_T("LoiMat")] =  m_bLoiMat;
	m_jData[_T("MiMat")] =  m_bMiMat;
	m_jData[_T("NhinDoi")] =  m_bNhinDoi;
	m_jData[_T("Chac")] =  m_bChac;
	m_jData[_T("Mem")] =  m_bMem;
	m_jData[_T("Nhan")] =  m_bNhan;
	m_jData[_T("GoGhe")] =  m_bGoGhe;
	m_jData[_T("RMCo")] =  m_bRMCo;
	m_jData[_T("RMKhong")] =  m_bRMKhong;
	m_jData[_T("TTCo")] =  m_bTTCo;
	m_jData[_T("TTKhong")] =  m_bTTKhong;
	m_jData[_T("Do0")] =  m_bDo0;
	m_jData[_T("DoIA")] =  m_bDoIA;
	m_jData[_T("DoIB")] =  m_bDoIB;
	m_jData[_T("DoII")] =  m_bDoII;
	m_jData[_T("DoIII")] =  m_bDoIII;
	m_jData[_T("Pemberton")] =  m_bPemberton;
	m_jData[_T("HuyetHoc")] =  m_szHuyetHoc;
	m_jData[_T("SieuAm")] =  m_szSieuAm;
	m_jData[_T("XNKhac")] =  m_szXNKhac;
	m_jData[_T("ThoiGian")] =  m_szThoiGian;
	m_jData[_T("CongSuat")] =  m_szCongSuat;
	m_jData[_T("KimDot")] =  m_szKimDot;
	m_jData[_T("Lidocain")] =  m_szLidocain;
	m_jData[_T("ChocDMCanh")] =  m_bChocDMCanh;
	m_jData[_T("TonThuongTKQuayNguoc")] =  m_bTonThuongTKQuayNguoc;
	m_jData[_T("ChayMauTrongNang")] =  m_bChayMauTrongNang;
	m_jData[_T("KhanTieng")] =  m_bKhanTieng;
	m_jData[_T("MatYThuc")] =  m_bMatYThuc;
	m_jData[_T("ChocTMCanh")] =  m_bChocTMCanh;
	m_jData[_T("TonThuongTKX")] =  m_bTonThuongTKX;
	m_jData[_T("TuMauTrongNang")] =  m_bTuMauTrongNang;
	m_jData[_T("TuMauVungCo")] =  m_bTuMauVungCo;
	m_jData[_T("SuyHoHap")] =  m_bSuyHoHap;
	m_jData[_T("7NgayDau")] =  m_sz7NgayDau;
	m_jData[_T("Sau1Thang")] =  m_szSau1Thang;
	m_jData[_T("Sau3Thang")] =  m_szSau3Thang;
	m_jData[_T("Sau6Thang")] =  m_szSau6Thang;
	m_jData[_T("Sau12Thang")] =  m_szSau12Thang;
	}
	else
	{
			
	m_jData[_T("Lan1")].GetValue(m_bLan1);
	m_jData[_T("Lan2")].GetValue(m_bLan2);
	m_jData[_T("Lan3")].GetValue(m_bLan3);
	m_jData[_T("Lan4")].GetValue(m_bLan4);
	m_jData[_T("Lan5")].GetValue(m_bLan5);
	m_jData[_T("BiUngBuou")].GetValue(m_bBiUngBuou);
	m_jData[_T("BiUngThuTuyenGiap")].GetValue(m_bBiUngThuTuyenGiap);
	m_jData[_T("BenhLyTuyenGiapKhac")].GetValue(m_szBenhLyTuyenGiapKhac);
	m_jData[_T("BenhLyDacBietKhac")].GetValue(m_szBenhLyDacBietKhac);
	m_jData[_T("ThoiGianPhatHien")].GetValue(m_szThoiGianPhatHien);
	m_jData[_T("BieuHienLamSang")].GetValue(m_szBieuHienLamSang);
	m_jData[_T("KhamVaDieuTriTai")].GetValue(m_szKhamVaDieuTriTai);
	m_jData[_T("ChanDoanTuyenGiap")].GetValue(m_szChanDoanTuyenGiap);
	m_jData[_T("PhuongPhapThoiGian")].GetValue(m_szPhuongPhapThoiGian);
	m_jData[_T("LamSangHienTai")].GetValue(m_szLamSangHienTai);
	m_jData[_T("BenhLyDacBietKhac2")].GetValue(m_szBenhLyDacBietKhac2);
	m_jData[_T("TienSuChieuXa")].GetValue(m_szTienSuChieuXa);
	m_jData[_T("AnThieuIod")].GetValue(m_szAnThieuIod);
	m_jData[_T("AnBapCai")].GetValue(m_szAnBapCai);
	m_jData[_T("ThuocKhangGiap")].GetValue(m_szThuocKhangGiap);
	m_jData[_T("ChieuCao")].GetValue(m_szChieuCao);
	m_jData[_T("CanNang")].GetValue(m_szCanNang);
	m_jData[_T("HuyetAp")].GetValue(m_szHuyetAp);
	m_jData[_T("Mach")].GetValue(m_szMach);
	m_jData[_T("CanDoi")].GetValue(m_bCanDoi);
	m_jData[_T("MatCanDoi")].GetValue(m_bMatCanDoi);
	m_jData[_T("MatCanDoi2")].GetValue(m_szMatCanDoi2);
	m_jData[_T("BinhThuong")].GetValue(m_bBinhThuong);
	m_jData[_T("BatThuong")].GetValue(m_bBatThuong);
	m_jData[_T("BatThuong2")].GetValue(m_szBatThuong2);
	m_jData[_T("BDTMCo")].GetValue(m_bBDTMCo);
	m_jData[_T("BDTMKhong")].GetValue(m_bBDTMKhong);
	m_jData[_T("DauCo")].GetValue(m_bDauCo);
	m_jData[_T("HoKichThichHong")].GetValue(m_bHoKichThichHong);
	m_jData[_T("NuotNghen")].GetValue(m_bNuotNghen);
	m_jData[_T("ChenEpDeDay")].GetValue(m_bChenEpDeDay);
	m_jData[_T("TangCan")].GetValue(m_bTangCan);
	m_jData[_T("GiamCan")].GetValue(m_bGiamCan);
	m_jData[_T("LoLang")].GetValue(m_bLoLang);
	m_jData[_T("TramCam")].GetValue(m_bTramCam);
	m_jData[_T("NongBung")].GetValue(m_bNongBung);
	m_jData[_T("SoLanh")].GetValue(m_bSoLanh);
	m_jData[_T("HoiHop")].GetValue(m_bHoiHop);
	m_jData[_T("NhipCham")].GetValue(m_bNhipCham);
	m_jData[_T("DiNgoai")].GetValue(m_bDiNgoai);
	m_jData[_T("TaoBon")].GetValue(m_bTaoBon);
	m_jData[_T("RunDauChi")].GetValue(m_bRunDauChi);
	m_jData[_T("Tang")].GetValue(m_bTang);
	m_jData[_T("Giam")].GetValue(m_bGiam);
	m_jData[_T("YeuCo")].GetValue(m_bYeuCo);
	m_jData[_T("LoiMat")].GetValue(m_bLoiMat);
	m_jData[_T("MiMat")].GetValue(m_bMiMat);
	m_jData[_T("NhinDoi")].GetValue(m_bNhinDoi);
	m_jData[_T("Chac")].GetValue(m_bChac);
	m_jData[_T("Mem")].GetValue(m_bMem);
	m_jData[_T("Nhan")].GetValue(m_bNhan);
	m_jData[_T("GoGhe")].GetValue(m_bGoGhe);
	m_jData[_T("RMCo")].GetValue(m_bRMCo);
	m_jData[_T("RMKhong")].GetValue(m_bRMKhong);
	m_jData[_T("TTCo")].GetValue(m_bTTCo);
	m_jData[_T("TTKhong")].GetValue(m_bTTKhong);
	m_jData[_T("Do0")].GetValue(m_bDo0);
	m_jData[_T("DoIA")].GetValue(m_bDoIA);
	m_jData[_T("DoIB")].GetValue(m_bDoIB);
	m_jData[_T("DoII")].GetValue(m_bDoII);
	m_jData[_T("DoIII")].GetValue(m_bDoIII);
	m_jData[_T("Pemberton")].GetValue(m_bPemberton);
	m_jData[_T("HuyetHoc")].GetValue(m_szHuyetHoc);
	m_jData[_T("SieuAm")].GetValue(m_szSieuAm);
	m_jData[_T("XNKhac")].GetValue(m_szXNKhac);
	m_jData[_T("ThoiGian")].GetValue(m_szThoiGian);
	m_jData[_T("CongSuat")].GetValue(m_szCongSuat);
	m_jData[_T("KimDot")].GetValue(m_szKimDot);
	m_jData[_T("Lidocain")].GetValue(m_szLidocain);
	m_jData[_T("ChocDMCanh")].GetValue(m_bChocDMCanh);
	m_jData[_T("TonThuongTKQuayNguoc")].GetValue(m_bTonThuongTKQuayNguoc);
	m_jData[_T("ChayMauTrongNang")].GetValue(m_bChayMauTrongNang);
	m_jData[_T("KhanTieng")].GetValue(m_bKhanTieng);
	m_jData[_T("MatYThuc")].GetValue(m_bMatYThuc);
	m_jData[_T("ChocTMCanh")].GetValue(m_bChocTMCanh);
	m_jData[_T("TonThuongTKX")].GetValue(m_bTonThuongTKX);
	m_jData[_T("TuMauTrongNang")].GetValue(m_bTuMauTrongNang);
	m_jData[_T("TuMauVungCo")].GetValue(m_bTuMauVungCo);
	m_jData[_T("SuyHoHap")].GetValue(m_bSuyHoHap);
	m_jData[_T("7NgayDau")].GetValue(m_sz7NgayDau);
	m_jData[_T("Sau1Thang")].GetValue(m_szSau1Thang);
	m_jData[_T("Sau3Thang")].GetValue(m_szSau3Thang);
	m_jData[_T("Sau6Thang")].GetValue(m_szSau6Thang);
	m_jData[_T("Sau12Thang")].GetValue(m_szSau12Thang);
	}

}
void CHMS_OBARFA::GetDataToScreen(){

	CHMSBenhAnView::GetData();
	return;

}
void CHMS_OBARFA::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBARFA::SetDefaultValues(){

	m_bLan1=FALSE;
	m_bLan2=FALSE;
	m_bLan3=FALSE;
	m_bLan4=FALSE;
	m_bLan5=FALSE;
	m_bBiUngBuou=FALSE;
	m_bBiUngThuTuyenGiap=FALSE;
	m_szBenhLyTuyenGiapKhac.Empty();
	m_szBenhLyDacBietKhac.Empty();
	m_szThoiGianPhatHien.Empty();
	m_szBieuHienLamSang.Empty();
	m_szKhamVaDieuTriTai.Empty();
	m_szChanDoanTuyenGiap.Empty();
	m_szPhuongPhapThoiGian.Empty();
	m_szLamSangHienTai.Empty();
	m_szBenhLyDacBietKhac2.Empty();
	m_szTienSuChieuXa.Empty();
	m_szAnThieuIod.Empty();
	m_szAnBapCai.Empty();
	m_szThuocKhangGiap.Empty();
	m_szChieuCao.Empty();
	m_szCanNang.Empty();
	m_szHuyetAp.Empty();
	m_szMach.Empty();
	m_bCanDoi=FALSE;
	m_bMatCanDoi=FALSE;
	m_szMatCanDoi2.Empty();
	m_bBinhThuong=FALSE;
	m_bBatThuong=FALSE;
	m_szBatThuong2.Empty();
	m_bBDTMCo=FALSE;
	m_bBDTMKhong=FALSE;
	m_bDauCo=FALSE;
	m_bHoKichThichHong=FALSE;
	m_bNuotNghen=FALSE;
	m_bChenEpDeDay=FALSE;
	m_bTangCan=FALSE;
	m_bGiamCan=FALSE;
	m_bLoLang=FALSE;
	m_bTramCam=FALSE;
	m_bNongBung=FALSE;
	m_bSoLanh=FALSE;
	m_bHoiHop=FALSE;
	m_bNhipCham=FALSE;
	m_bDiNgoai=FALSE;
	m_bTaoBon=FALSE;
	m_bRunDauChi=FALSE;
	m_bTang=FALSE;
	m_bGiam=FALSE;
	m_bYeuCo=FALSE;
	m_bLoiMat=FALSE;
	m_bMiMat=FALSE;
	m_bNhinDoi=FALSE;
	m_bChac=FALSE;
	m_bMem=FALSE;
	m_bNhan=FALSE;
	m_bGoGhe=FALSE;
	m_bRMCo=FALSE;
	m_bRMKhong=FALSE;
	m_bTTCo=FALSE;
	m_bTTKhong=FALSE;
	m_bDo0=FALSE;
	m_bDoIA=FALSE;
	m_bDoIB=FALSE;
	m_bDoII=FALSE;
	m_bDoIII=FALSE;
	m_bPemberton=FALSE;
	m_szHuyetHoc.Empty();
	m_szSieuAm.Empty();
	m_szXNKhac.Empty();
	m_szThoiGian.Empty();
	m_szCongSuat.Empty();
	m_szKimDot.Empty();
	m_szLidocain.Empty();
	m_bChocDMCanh=FALSE;
	m_bTonThuongTKQuayNguoc=FALSE;
	m_bChayMauTrongNang=FALSE;
	m_bKhanTieng=FALSE;
	m_bMatYThuc=FALSE;
	m_bChocTMCanh=FALSE;
	m_bTonThuongTKX=FALSE;
	m_bTuMauTrongNang=FALSE;
	m_bTuMauVungCo=FALSE;
	m_bSuyHoHap=FALSE;
	m_sz7NgayDau.Empty();
	m_szSau1Thang.Empty();
	m_szSau3Thang.Empty();
	m_szSau6Thang.Empty();
	m_szSau12Thang.Empty();

}
int CHMS_OBARFA::SetMode(int nMode){
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
	void CHMS_OBARFA::OnLan1Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLan2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLan3Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLan4Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLan5Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnBiUngBuouSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnBiUngThuTuyenGiapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBARFA::OnBenhLyTuyenGiapKhacChange(){
	
} */
/*void CHMS_OBARFA::OnBenhLyTuyenGiapKhacSetfocus(){
	
} */
/*void CHMS_OBARFA::OnBenhLyTuyenGiapKhacKillfocus(){
	
} */
int CHMS_OBARFA::OnBenhLyTuyenGiapKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnBenhLyDacBietKhacChange(){
	
} */
/*void CHMS_OBARFA::OnBenhLyDacBietKhacSetfocus(){
	
} */
/*void CHMS_OBARFA::OnBenhLyDacBietKhacKillfocus(){
	
} */
int CHMS_OBARFA::OnBenhLyDacBietKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnThoiGianPhatHienChange(){
	
} */
/*void CHMS_OBARFA::OnThoiGianPhatHienSetfocus(){
	
} */
/*void CHMS_OBARFA::OnThoiGianPhatHienKillfocus(){
	
} */
int CHMS_OBARFA::OnThoiGianPhatHienCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnBieuHienLamSangChange(){
	
} */
/*void CHMS_OBARFA::OnBieuHienLamSangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnBieuHienLamSangKillfocus(){
	
} */
int CHMS_OBARFA::OnBieuHienLamSangCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnKhamVaDieuTriTaiChange(){
	
} */
/*void CHMS_OBARFA::OnKhamVaDieuTriTaiSetfocus(){
	
} */
/*void CHMS_OBARFA::OnKhamVaDieuTriTaiKillfocus(){
	
} */
int CHMS_OBARFA::OnKhamVaDieuTriTaiCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnChanDoanTuyenGiapChange(){
	
} */
/*void CHMS_OBARFA::OnChanDoanTuyenGiapSetfocus(){
	
} */
/*void CHMS_OBARFA::OnChanDoanTuyenGiapKillfocus(){
	
} */
int CHMS_OBARFA::OnChanDoanTuyenGiapCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnPhuongPhapThoiGianChange(){
	
} */
/*void CHMS_OBARFA::OnPhuongPhapThoiGianSetfocus(){
	
} */
/*void CHMS_OBARFA::OnPhuongPhapThoiGianKillfocus(){
	
} */
int CHMS_OBARFA::OnPhuongPhapThoiGianCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnLamSangHienTaiChange(){
	
} */
/*void CHMS_OBARFA::OnLamSangHienTaiSetfocus(){
	
} */
/*void CHMS_OBARFA::OnLamSangHienTaiKillfocus(){
	
} */
int CHMS_OBARFA::OnLamSangHienTaiCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnBenhLyDacBietKhac2Change(){
	
} */
/*void CHMS_OBARFA::OnBenhLyDacBietKhac2Setfocus(){
	
} */
/*void CHMS_OBARFA::OnBenhLyDacBietKhac2Killfocus(){
	
} */
int CHMS_OBARFA::OnBenhLyDacBietKhac2CheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnTienSuChieuXaChange(){
	
} */
/*void CHMS_OBARFA::OnTienSuChieuXaSetfocus(){
	
} */
/*void CHMS_OBARFA::OnTienSuChieuXaKillfocus(){
	
} */
int CHMS_OBARFA::OnTienSuChieuXaCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnAnThieuIodChange(){
	
} */
/*void CHMS_OBARFA::OnAnThieuIodSetfocus(){
	
} */
/*void CHMS_OBARFA::OnAnThieuIodKillfocus(){
	
} */
int CHMS_OBARFA::OnAnThieuIodCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnAnBapCaiChange(){
	
} */
/*void CHMS_OBARFA::OnAnBapCaiSetfocus(){
	
} */
/*void CHMS_OBARFA::OnAnBapCaiKillfocus(){
	
} */
int CHMS_OBARFA::OnAnBapCaiCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnThuocKhangGiapChange(){
	
} */
/*void CHMS_OBARFA::OnThuocKhangGiapSetfocus(){
	
} */
/*void CHMS_OBARFA::OnThuocKhangGiapKillfocus(){
	
} */
int CHMS_OBARFA::OnThuocKhangGiapCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnChieuCaoChange(){
	
} */
/*void CHMS_OBARFA::OnChieuCaoSetfocus(){
	
} */
/*void CHMS_OBARFA::OnChieuCaoKillfocus(){
	
} */
int CHMS_OBARFA::OnChieuCaoCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnCanNangChange(){
	
} */
/*void CHMS_OBARFA::OnCanNangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnCanNangKillfocus(){
	
} */
int CHMS_OBARFA::OnCanNangCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnHuyetApChange(){
	
} */
/*void CHMS_OBARFA::OnHuyetApSetfocus(){
	
} */
/*void CHMS_OBARFA::OnHuyetApKillfocus(){
	
} */
int CHMS_OBARFA::OnHuyetApCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnMachChange(){
	
} */
/*void CHMS_OBARFA::OnMachSetfocus(){
	
} */
/*void CHMS_OBARFA::OnMachKillfocus(){
	
} */
int CHMS_OBARFA::OnMachCheckValue(){
	return 0;
} 
	void CHMS_OBARFA::OnCanDoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnMatCanDoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBARFA::OnMatCanDoi2Change(){
	
} */
/*void CHMS_OBARFA::OnMatCanDoi2Setfocus(){
	
} */
/*void CHMS_OBARFA::OnMatCanDoi2Killfocus(){
	
} */
int CHMS_OBARFA::OnMatCanDoi2CheckValue(){
	return 0;
} 
	void CHMS_OBARFA::OnBinhThuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnBatThuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBARFA::OnBatThuong2Change(){
	
} */
/*void CHMS_OBARFA::OnBatThuong2Setfocus(){
	
} */
/*void CHMS_OBARFA::OnBatThuong2Killfocus(){
	
} */
int CHMS_OBARFA::OnBatThuong2CheckValue(){
	return 0;
} 
	void CHMS_OBARFA::OnBDTMCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnBDTMKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDauCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnHoKichThichHongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnNuotNghenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnChenEpDeDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTangCanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnGiamCanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLoLangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTramCamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnNongBungSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnSoLanhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnHoiHopSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnNhipChamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDiNgoaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTaoBonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnRunDauChiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnGiamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnYeuCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnLoiMatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnMiMatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnNhinDoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnChacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnMemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnNhanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnGoGheSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnRMCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnRMKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTTCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTTKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDo0Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDoIASelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDoIBSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDoIISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnDoIIISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnPembertonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBARFA::OnHuyetHocChange(){
	
} */
/*void CHMS_OBARFA::OnHuyetHocSetfocus(){
	
} */
/*void CHMS_OBARFA::OnHuyetHocKillfocus(){
	
} */
int CHMS_OBARFA::OnHuyetHocCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnSieuAmChange(){
	
} */
/*void CHMS_OBARFA::OnSieuAmSetfocus(){
	
} */
/*void CHMS_OBARFA::OnSieuAmKillfocus(){
	
} */
int CHMS_OBARFA::OnSieuAmCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnXNKhacChange(){
	
} */
/*void CHMS_OBARFA::OnXNKhacSetfocus(){
	
} */
/*void CHMS_OBARFA::OnXNKhacKillfocus(){
	
} */
int CHMS_OBARFA::OnXNKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnThoiGianChange(){
	
} */
/*void CHMS_OBARFA::OnThoiGianSetfocus(){
	
} */
/*void CHMS_OBARFA::OnThoiGianKillfocus(){
	
} */
int CHMS_OBARFA::OnThoiGianCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnCongSuatChange(){
	
} */
/*void CHMS_OBARFA::OnCongSuatSetfocus(){
	
} */
/*void CHMS_OBARFA::OnCongSuatKillfocus(){
	
} */
int CHMS_OBARFA::OnCongSuatCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnKimDotChange(){
	
} */
/*void CHMS_OBARFA::OnKimDotSetfocus(){
	
} */
/*void CHMS_OBARFA::OnKimDotKillfocus(){
	
} */
int CHMS_OBARFA::OnKimDotCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnLidocainChange(){
	
} */
/*void CHMS_OBARFA::OnLidocainSetfocus(){
	
} */
/*void CHMS_OBARFA::OnLidocainKillfocus(){
	
} */
int CHMS_OBARFA::OnLidocainCheckValue(){
	return 0;
} 
	void CHMS_OBARFA::OnChocDMCanhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTonThuongTKQuayNguocSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnChayMauTrongNangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnKhanTiengSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnMatYThucSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnChocTMCanhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTonThuongTKXSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTuMauTrongNangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnTuMauVungCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBARFA::OnSuyHoHapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBARFA::On7NgayDauChange(){
	
} */
/*void CHMS_OBARFA::On7NgayDauSetfocus(){
	
} */
/*void CHMS_OBARFA::On7NgayDauKillfocus(){
	
} */
int CHMS_OBARFA::On7NgayDauCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnSau1ThangChange(){
	
} */
/*void CHMS_OBARFA::OnSau1ThangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnSau1ThangKillfocus(){
	
} */
int CHMS_OBARFA::OnSau1ThangCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnSau3ThangChange(){
	
} */
/*void CHMS_OBARFA::OnSau3ThangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnSau3ThangKillfocus(){
	
} */
int CHMS_OBARFA::OnSau3ThangCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnSau6ThangChange(){
	
} */
/*void CHMS_OBARFA::OnSau6ThangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnSau6ThangKillfocus(){
	
} */
int CHMS_OBARFA::OnSau6ThangCheckValue(){
	return 0;
} 
/*void CHMS_OBARFA::OnSau12ThangChange(){
	
} */
/*void CHMS_OBARFA::OnSau12ThangSetfocus(){
	
} */
/*void CHMS_OBARFA::OnSau12ThangKillfocus(){
	
} */
int CHMS_OBARFA::OnSau12ThangCheckValue(){
	return 0;
} 
int CHMS_OBARFA::OnAddHMS_OBARFA(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBARFA::OnEditHMS_OBARFA(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBARFA::OnDeleteHMS_OBARFA(){
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
 		OnCancelHMS_OBARFA();
 	}
	return 0;
}
int CHMS_OBARFA::OnSaveHMS_OBARFA(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	bool res =  CHMSBenhAnView::PostData();
	return (int) res;

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
 		//OnHMS_OBARFAListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMS_OBARFA::OnCancelHMS_OBARFA(){
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
int CHMS_OBARFA::OnHMS_OBARFAListLoadData(){
	return 0;
}
void CHMS_OBARFA::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBARFA();
} 
void CHMS_OBARFA::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSBenhAnView::PrintRFA(pMF->m_nPatientNo, pMF->m_nDocumentNo);
	return;
} 
bool CHMS_OBARFA::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBARFA();
	return true;
} 
void CHMS_OBARFA::OnCancelSelect()
{
	OnCancelHMS_OBARFA();
}