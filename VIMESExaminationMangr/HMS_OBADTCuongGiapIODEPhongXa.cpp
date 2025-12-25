#include "HMS_OBADTCuongGiapIODEPhongXa.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnHoVaTenChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHoVaTenChange();
} */
/*static void _OnHoVaTenSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHoVaTenSetfocus();} */ 
/*static void _OnHoVaTenKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHoVaTenKillfocus();
} */
static int _OnHoVaTenCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHoVaTenCheckValue();
} 
static void _OnNamSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnNamSelect();
}
static void _OnNuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnNuSelect();
}
/*static void _OnCheDoChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCheDoChange();
} */
/*static void _OnCheDoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCheDoSetfocus();} */ 
/*static void _OnCheDoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCheDoKillfocus();
} */
static int _OnCheDoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCheDoCheckValue();
} 
/*static void _OnDiaChiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDiaChiChange();
} */
/*static void _OnDiaChiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDiaChiSetfocus();} */ 
/*static void _OnDiaChiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDiaChiKillfocus();
} */
static int _OnDiaChiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDiaChiCheckValue();
} 
/*static void _OnDienThoaiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDienThoaiChange();
} */
/*static void _OnDienThoaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDienThoaiSetfocus();} */ 
/*static void _OnDienThoaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDienThoaiKillfocus();
} */
static int _OnDienThoaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDienThoaiCheckValue();
} 
/*static void _OnThoiGianKhoiPhatChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiGianKhoiPhatChange();
} */
/*static void _OnThoiGianKhoiPhatSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiGianKhoiPhatSetfocus();} */ 
/*static void _OnThoiGianKhoiPhatKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiGianKhoiPhatKillfocus();
} */
static int _OnThoiGianKhoiPhatCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiGianKhoiPhatCheckValue();
} 
static void _OnAnNhieuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnAnNhieuSelect();
}
static void _OnUongNhieuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnUongNhieuSelect();
}
static void _OnRoiLoanKinhNguyetSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnRoiLoanKinhNguyetSelect();
}
static void _OnHoiHopSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnHoiHopSelect();
}
static void _OnNongBucSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnNongBucSelect();
}
static void _OnKhoNguSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnKhoNguSelect();
}
static void _OnRoiLoanTieuHoaSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnRoiLoanTieuHoaSelect();
}
static void _OnMoHoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnMoHoiSelect();
}
static void _OnMetMoiThuongXuyenSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnMetMoiThuongXuyenSelect();
}
static void _OnRunTaySelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnRunTaySelect();
}
static void _OnLoiMatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnLoiMatSelect();
}
/*static void _OnSutCanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnSutCanChange();
} */
/*static void _OnSutCanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnSutCanSetfocus();} */ 
/*static void _OnSutCanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnSutCanKillfocus();
} */
static int _OnSutCanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnSutCanCheckValue();
} 
static void _OnCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnCoSelect();
}
/*static void _OnThuocVaThoiGianDieuTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocVaThoiGianDieuTriChange();
} */
/*static void _OnThuocVaThoiGianDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocVaThoiGianDieuTriSetfocus();} */ 
/*static void _OnThuocVaThoiGianDieuTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocVaThoiGianDieuTriKillfocus();
} */
static int _OnThuocVaThoiGianDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocVaThoiGianDieuTriCheckValue();
} 
static void _OnKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnKhongSelect();
}
/*static void _OnKetQuaDieuTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnKetQuaDieuTriChange();
} */
/*static void _OnKetQuaDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnKetQuaDieuTriSetfocus();} */ 
/*static void _OnKetQuaDieuTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnKetQuaDieuTriKillfocus();
} */
static int _OnKetQuaDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnKetQuaDieuTriCheckValue();
} 
/*static void _OnHienTaiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHienTaiChange();
} */
/*static void _OnHienTaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHienTaiSetfocus();} */ 
/*static void _OnHienTaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHienTaiKillfocus();
} */
static int _OnHienTaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHienTaiCheckValue();
} 
static void _OnKhoeManhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnKhoeManhSelect();
}
static void _OnHutThuocSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnHutThuocSelect();
}
/*static void _OnDaNiemMacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDaNiemMacChange();
} */
/*static void _OnDaNiemMacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDaNiemMacSetfocus();} */ 
/*static void _OnDaNiemMacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDaNiemMacKillfocus();
} */
static int _OnDaNiemMacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDaNiemMacCheckValue();
} 
/*static void _OnCanNangChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCanNangChange();
} */
/*static void _OnCanNangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCanNangSetfocus();} */ 
/*static void _OnCanNangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCanNangKillfocus();
} */
static int _OnCanNangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnCanNangCheckValue();
} 
static void _OnLanToaSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnLanToaSelect();
}
static void _OnDonNhanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnDonNhanSelect();
}
static void _OnDaNhanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnDaNhanSelect();
}
static void _OnTiengThoiTaiTuyenSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnTiengThoiTaiTuyenSelect();
}
static void _OnRungMiuTaiTuyenSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnRungMiuTaiTuyenSelect();
}
static void _OnCo1SelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnCo1Select();
}
/*static void _OnMucDoChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMucDoChange();
} */
/*static void _OnMucDoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMucDoSetfocus();} */ 
/*static void _OnMucDoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMucDoKillfocus();
} */
static int _OnMucDoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMucDoCheckValue();
} 
static void _OnKhong2SelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnKhong2Select();
}
/*static void _OnMachChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMachChange();
} */
/*static void _OnMachSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMachSetfocus();} */ 
/*static void _OnMachKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMachKillfocus();
} */
static int _OnMachCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnMachCheckValue();
} 
/*static void _OnHuyetApChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHuyetApChange();
} */
/*static void _OnHuyetApSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHuyetApSetfocus();} */ 
/*static void _OnHuyetApKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHuyetApKillfocus();
} */
static int _OnHuyetApCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHuyetApCheckValue();
} 
/*static void _OnBatThuongKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBatThuongKhacChange();
} */
/*static void _OnBatThuongKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBatThuongKhacSetfocus();} */ 
/*static void _OnBatThuongKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBatThuongKhacKillfocus();
} */
static int _OnBatThuongKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBatThuongKhacCheckValue();
} 
/*static void _OnBenhKetHopChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBenhKetHopChange();
} */
/*static void _OnBenhKetHopSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBenhKetHopSetfocus();} */ 
/*static void _OnBenhKetHopKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBenhKetHopKillfocus();
} */
static int _OnBenhKetHopCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBenhKetHopCheckValue();
} 
/*static void _OnTuyenGiapChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTuyenGiapChange();
} */
/*static void _OnTuyenGiapSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTuyenGiapSetfocus();} */ 
/*static void _OnTuyenGiapKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTuyenGiapKillfocus();
} */
static int _OnTuyenGiapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTuyenGiapCheckValue();
} 
static void _OnBinhThuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnBinhThuongSelect();
}
static void _OnBatThuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnBatThuongSelect();
}
/*static void _OnHongCauChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHongCauChange();
} */
/*static void _OnHongCauSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHongCauSetfocus();} */ 
/*static void _OnHongCauKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHongCauKillfocus();
} */
static int _OnHongCauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHongCauCheckValue();
} 
/*static void _OnHSTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHSTChange();
} */
/*static void _OnHSTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHSTSetfocus();} */ 
/*static void _OnHSTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHSTKillfocus();
} */
static int _OnHSTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnHSTCheckValue();
} 
/*static void _OnBCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBCChange();
} */
/*static void _OnBCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBCSetfocus();} */ 
/*static void _OnBCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBCKillfocus();
} */
static int _OnBCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnBCCheckValue();
} 
/*static void _OnTieuCauChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTieuCauChange();
} */
/*static void _OnTieuCauSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTieuCauSetfocus();} */ 
/*static void _OnTieuCauKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTieuCauKillfocus();
} */
static int _OnTieuCauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTieuCauCheckValue();
} 
/*static void _OnFT4ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnFT4Change();
} */
/*static void _OnFT4SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnFT4Setfocus();} */ 
/*static void _OnFT4KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnFT4Killfocus();
} */
static int _OnFT4CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnFT4CheckValue();
} 
/*static void _OnTSHChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTSHChange();
} */
/*static void _OnTSHSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTSHSetfocus();} */ 
/*static void _OnTSHKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTSHKillfocus();
} */
static int _OnTSHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTSHCheckValue();
} 
/*static void _On2hChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On2hChange();
} */
/*static void _On2hSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On2hSetfocus();} */ 
/*static void _On2hKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On2hKillfocus();
} */
static int _On2hCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On2hCheckValue();
} 
/*static void _On6hChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On6hChange();
} */
/*static void _On6hSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On6hSetfocus();} */ 
/*static void _On6hKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On6hKillfocus();
} */
static int _On6hCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On6hCheckValue();
} 
/*static void _On24hChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On24hChange();
} */
/*static void _On24hSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On24hSetfocus();} */ 
/*static void _On24hKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On24hKillfocus();
} */
static int _On24hCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->On24hCheckValue();
} 
/*static void _OnThoiDiemChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiDiemChange();
} */
/*static void _OnThoiDiemSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiDiemSetfocus();} */ 
/*static void _OnThoiDiemKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiDiemKillfocus();
} */
static int _OnThoiDiemCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThoiDiemCheckValue();
} 
/*static void _OnNhipXoangChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnNhipXoangChange();
} */
/*static void _OnNhipXoangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnNhipXoangSetfocus();} */ 
/*static void _OnNhipXoangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnNhipXoangKillfocus();
} */
static int _OnNhipXoangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnNhipXoangCheckValue();
} 
static void _OnRoiLoanNhipXSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnRoiLoanNhipXSelect();
}
/*static void _OnDHbatthuongNXChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDHbatthuongNXChange();
} */
/*static void _OnDHbatthuongNXSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDHbatthuongNXSetfocus();} */ 
/*static void _OnDHbatthuongNXKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDHbatthuongNXKillfocus();
} */
static int _OnDHbatthuongNXCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnDHbatthuongNXCheckValue();
} 
static void _OnBuouLanToaSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnBuouLanToaSelect();
}
static void _OnTangSinhMachSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnTangSinhMachSelect();
}
static void _OnNhanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnNhanSelect();
}
static void _OnTC99mSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnTC99mSelect();
}
static void _OnI131SelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnI131Select();
}
static void _OnLanToaXHSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnLanToaXHSelect();
}
static void _OnDonNhanXHSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnDonNhanXHSelect();
}
static void _OnDaNhan2TXHSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnDaNhan2TXHSelect();
}
/*static void _OnXNKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnXNKhacChange();
} */
/*static void _OnXNKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnXNKhacSetfocus();} */ 
/*static void _OnXNKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnXNKhacKillfocus();
} */
static int _OnXNKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnXNKhacCheckValue();
} 
/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnChanDoanCheckValue();
} 
/*static void _OnLyDoPXChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnLyDoPXChange();
} */
/*static void _OnLyDoPXSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnLyDoPXSetfocus();} */ 
/*static void _OnLyDoPXKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnLyDoPXKillfocus();
} */
static int _OnLyDoPXCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnLyDoPXCheckValue();
} 
/*static void _OnTinhLieuDTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTinhLieuDTChange();
} */
/*static void _OnTinhLieuDTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTinhLieuDTSetfocus();} */ 
/*static void _OnTinhLieuDTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTinhLieuDTKillfocus();
} */
static int _OnTinhLieuDTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnTinhLieuDTCheckValue();
} 
/*static void _OnmTuyenGiapChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmTuyenGiapChange();
} */
/*static void _OnmTuyenGiapSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmTuyenGiapSetfocus();} */ 
/*static void _OnmTuyenGiapKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmTuyenGiapKillfocus();
} */
static int _OnmTuyenGiapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmTuyenGiapCheckValue();
} 
/*static void _OngxLieuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OngxLieuChange();
} */
/*static void _OngxLieuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OngxLieuSetfocus();} */ 
/*static void _OngxLieuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OngxLieuKillfocus();
} */
static int _OngxLieuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OngxLieuCheckValue();
} 
/*static void _Ontti131ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->Ontti131Change();
} */
/*static void _Ontti131SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->Ontti131Setfocus();} */ 
/*static void _Ontti131KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->Ontti131Killfocus();
} */
static int _Ontti131CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->Ontti131CheckValue();
} 
static void _OnThyrozolSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnThyrozolSelect();
}
static void _OnConcorSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnConcorSelect();
}
static void _OnThuocKhacSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnThuocKhacSelect();
}
/*static void _OnThuocKhacdtChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocKhacdtChange();
} */
/*static void _OnThuocKhacdtSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocKhacdtSetfocus();} */ 
/*static void _OnThuocKhacdtKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocKhacdtKillfocus();
} */
static int _OnThuocKhacdtCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnThuocKhacdtCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBADTCuongGiapIODEPhongXa *pVw = (CHMS_OBADTCuongGiapIODEPhongXa *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBADTCuongGiapIODEPhongXa *pVw = (CHMS_OBADTCuongGiapIODEPhongXa *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBADTCuongGiapIODEPhongXa *pVw = (CHMS_OBADTCuongGiapIODEPhongXa *)pWnd;
	pVw->OnUpdateSelect();
} 
/*static void _OnmCiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmCiChange();
} */
/*static void _OnmCiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmCiSetfocus();} */ 
/*static void _OnmCiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmCiKillfocus();
} */
static int _OnmCiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTCuongGiapIODEPhongXa *)pWnd)->OnmCiCheckValue();
} 
static int _OnAddHMS_OBADTCuongGiapIODEPhongXaFnc(CWnd *pWnd){
	 return ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnAddHMS_OBADTCuongGiapIODEPhongXa();
} 
static int _OnEditHMS_OBADTCuongGiapIODEPhongXaFnc(CWnd *pWnd){
	 return ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnEditHMS_OBADTCuongGiapIODEPhongXa();
} 
static int _OnDeleteHMS_OBADTCuongGiapIODEPhongXaFnc(CWnd *pWnd){
	 return ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnDeleteHMS_OBADTCuongGiapIODEPhongXa();
} 
static int _OnSaveHMS_OBADTCuongGiapIODEPhongXaFnc(CWnd *pWnd){
	 return ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnSaveHMS_OBADTCuongGiapIODEPhongXa();
} 
static int _OnCancelHMS_OBADTCuongGiapIODEPhongXaFnc(CWnd *pWnd){
	 return ((CHMS_OBADTCuongGiapIODEPhongXa*)pWnd)->OnCancelHMS_OBADTCuongGiapIODEPhongXa();
} 
CHMS_OBADTCuongGiapIODEPhongXa::CHMS_OBADTCuongGiapIODEPhongXa(CWnd *pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 1461;
	SetDefaultValues();

	m_szRecordType = _T("OBA_PHONGXA");
}
CHMS_OBADTCuongGiapIODEPhongXa::~CHMS_OBADTCuongGiapIODEPhongXa(){
}
void CHMS_OBADTCuongGiapIODEPhongXa::OnCreateComponents(){

	m_wndcontrol_0.Create(this, _T("\x42\x1EA2N TOM T\x1EAET \x42\x1EC6NH \xC1N \x110I\x1EC0U TR\x1ECA \x43\x1AF\x1EDCNG GI\xC1P \x42\x1EB0NG IO\x44\x45 PH\xD3NG \x58\x1EA0"), 5, 5, 628, 30);
	m_wndPhanHanhChinh.Create(this, _T("I. Ph\x1EA7n h\xE0nh \x63h\xEDnh"), 5, 35, 150, 60);
	m_wndHoVaTenLabel.Create(this, _T("1. H\x1ECD v\xE0 t\xEAn \x62\x1EC7nh nh\xE2n"), 5, 65, 85, 90);
	m_wndHoVaTen.Create(this,90, 65, 570, 90); 
	m_wndGioi.Create(this, _T("2. Gi\x1EDBi"), 5, 95, 85, 120);
	m_wndNam.Create(this, _T("Nam"), 90, 95, 170, 120);
	m_wndNu.Create(this, _T("N\x1EEF"), 175, 95, 255, 120);
	m_wndCheDoLabel.Create(this, _T("\x43h\x1EBF \x111\x1ED9"), 260, 95, 340, 120);
	m_wndCheDo.Create(this,345, 95, 570, 120); 
	m_wndDiaChiLabel.Create(this, _T("3. \x110\x1ECB\x61 \x63h\x1EC9"), 5, 125, 85, 150);
	m_wndDiaChi.Create(this,90, 125, 570, 150); 
	m_wndDienThoaiLabel.Create(this, _T("4. \x110i\x1EC7n tho\x1EA1i"), 5, 155, 85, 180);
	m_wndDienThoai.Create(this,90, 155, 570, 180); 
	m_wndBenhSu.Create(this, _T("II. \x42\x1EC7nh s\x1EED"), 5, 185, 85, 210);
	m_wndThoiGianKhoiPhatLabel.Create(this, _T("1. Th\x1EDDi gi\x61n kh\x1EDFi ph\xE1t"), 5, 215, 85, 240);
	m_wndThoiGianKhoiPhat.Create(this,90, 215, 570, 240); 
	m_wndTrieuChungLSLabel.Create(this, _T("2. Tri\x1EC7u \x63h\x1EE9ng LS"), 5, 245, 155, 270);
	m_wndAnNhieu.Create(this, _T("\x102n nhi\x1EC1u"), 5, 275, 155, 300);
	m_wndUongNhieu.Create(this, _T("U\x1ED1ng nhi\x1EC1u"), 160, 275, 310, 300);
	m_wndRoiLoanKinhNguyet.Create(this, _T("R\x1ED1i lo\x1EA1n kinh nguy\x1EC7t"), 315, 275, 465, 300);
	m_wndHoiHop.Create(this, _T("H\x1ED3i h\x1ED9p"), 5, 305, 155, 330);
	m_wndNongBuc.Create(this, _T("N\xF3ng \x62\x1EE9\x63"), 160, 305, 310, 330);
	m_wndKhoNgu.Create(this, _T("Kh\xF3 ng\x1EE7"), 315, 305, 465, 330);
	m_wndRoiLoanTieuHoa.Create(this, _T("R\x1ED1i lo\x1EA1n ti\xEAu h\xF3\x61"), 5, 335, 155, 360);
	m_wndMoHoi.Create(this, _T("M\x1ED3 h\xF4i"), 159, 335, 309, 360);
	m_wndMetMoiThuongXuyen.Create(this, _T("M\x1EC7t m\x1ECFi th\x1B0\x1EDDng \x78uy\xEAn"), 315, 335, 540, 360);
	m_wndRunTay.Create(this, _T("Run tay"), 5, 365, 155, 390);
	m_wndLoiMat.Create(this, _T("L\x1ED3i m\x1EAFt"), 160, 365, 310, 390);
	m_wndSutCanLabel.Create(this, _T("S\xFAt \x63\xE2n"), 315, 365, 465, 390);
	m_wndSutCan.Create(this,470, 365, 540, 390); 
	m_wndDieuTriNoiKhoa.Create(this, _T("3. \x110i\x1EC1u tr\x1ECB n\x1ED9i kho\x61"), 5, 395, 155, 420);
	m_wndCo.Create(this, _T("\x43\xF3"), 160, 395, 200, 420);
	m_wndThuocVaThoiGianDieuTriLabel.Create(this, _T("Thu\x1ED1\x63 v\xE0 th\x1EDDi gi\x61n \x111i\x1EC1u tr\x1ECB"), 205, 395, 385, 420);
	m_wndThuocVaThoiGianDieuTri.Create(this,390, 395, 540, 420); 
	m_wndKhong.Create(this, _T("Kh\xF4ng"), 545, 395, 625, 420);
	m_wndKetQuaDieuTriLabel.Create(this, _T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB"), 5, 425, 155, 450);
	m_wndKetQuaDieuTri.Create(this,160, 425, 385, 450); 
	m_wndHienTaiLabel.Create(this, _T("Hi\x1EC7n t\x1EA1i"), 390, 425, 540, 450);
	m_wndHienTai.Create(this,545, 425, 785, 450); 
	m_wndTienSu.Create(this, _T("III. Ti\x1EC1n s\x1EED"), 5, 455, 80, 480);
	m_wndBanThan.Create(this, _T("\x42\x1EA3n th\xE2n"), 85, 455, 155, 480);
	m_wndKhoeManh.Create(this, _T("Kh\x1ECF\x65 m\x1EA1nh"), 160, 455, 270, 480);
	m_wndHutThuoc.Create(this, _T("H\xFAt thu\x1ED1\x63"), 275, 455, 385, 480);
	m_wndBenhKetHopLabel.Create(this, _T("\x42\x1EC7nh k\x1EBFt h\x1EE3p"), 390, 455, 540, 480);
	m_wndBenhKetHop.Create(this,545, 455, 785, 480); 

	m_wndKhamLamSang.Create(this, _T("IV. Kh\xE1m l\xE2m s\xE0ng"), 5, 485, 155, 510);
	m_wndToanThan.Create(this, _T("1. To\xE0n th\xE2n"), 5, 515, 155, 540);
	m_wndDaNiemMacLabel.Create(this, _T("\x44\x61 ni\xEAm m\x1EA1\x63"), 160, 515, 270, 540);
	m_wndDaNiemMac.Create(this,275, 515, 385, 540); 
	m_wndCanNangLabel.Create(this, _T("\x43\xE2n n\x1EB7ng"), 390, 515, 540, 540);
	m_wndCanNang.Create(this,545, 515, 625, 540); 
	m_wndTuyenGiapLabel.Create(this, _T("2. Tuy\x1EBFn gi\xE1p"), 5, 545, 155, 570);
	m_wndTuyenGiap.Create(this,160, 545, 270, 570); 

	m_wndLanToa.Create(this, _T("L\x61n t\x1ECF\x61"), 275, 545, 385, 570);
	m_wndDonNhan.Create(this, _T("\x110\x1A1n nh\xE2n"), 390, 545, 500, 570);
	m_wndDaNhan.Create(this, _T("\x110\x61 nh\xE2n"), 505, 545, 615, 570);
	m_wndTiengThoiTaiTuyen.Create(this, _T("Ti\x1EBFng th\x1ED5i t\x1EA1i tuy\x1EBFn"), 275, 575, 453, 600);
	m_wndRungMiuTaiTuyen.Create(this, _T("Rung miu t\x1EA1i tuy\x1EBFn"), 505, 575, 698, 600);
	m_wndMatLoi.Create(this, _T("3. M\x1EAFt l\x1ED3i"), 5, 605, 155, 630);
	m_wndCo1.Create(this, _T("Co"), 160, 605, 200, 630);
	m_wndMucDoLabel.Create(this, _T("M\x1EE9\x63 \x111\x1ED9"), 205, 605, 270, 630);
	m_wndMucDo.Create(this,275, 605, 385, 630); 
	m_wndKhong2.Create(this, _T("Kh\xF4ng"), 390, 605, 470, 630);
	m_wndTimMach.Create(this, _T("4. Tim m\x1EA1\x63h"), 5, 635, 90, 660);
	m_wndMachLabel.Create(this, _T("M\x1EA1\x63h"), 95, 635, 155, 660);
	m_wndMach.Create(this,160, 635, 270, 660); 
	m_wndHuyetApLabel.Create(this, _T("Huy\x1EBFt \xE1p"), 390, 635, 470, 660);
	m_wndHuyetAp.Create(this,475, 635, 555, 660); 
	m_wndBatThuongKhacLabel.Create(this, _T("\x42\x1EA5t th\x1B0\x1EDDng kh\xE1\x63"), 5, 665, 155, 690);
	m_wndBatThuongKhac.Create(this,160, 665, 785, 690); 
	
	
	m_wndckphut.Create(this, _T("ck/phut"), 275, 635, 385, 660);
	m_wndmmHg.Create(this, _T("mmHg"), 560, 635, 640, 660);
	m_wndCacCQKhac.Create(this, _T("5. \x43\xE1\x63 \x63\x1A1 qu\x61n kh\xE1\x63"), 5, 695, 155, 720);
	m_wndBinhThuong.Create(this, _T("\x42\xECnh th\x1B0\x1EDDng"), 160, 695, 270, 720);
	m_wndBatThuong.Create(this, _T("\x42\x1EA5t th\x1B0\x1EDDng"), 275, 695, 385, 720);
	m_wndCLS.Create(this, _T("V- \x43\x1EADn l\xE2m s\xE0ng"), 5, 725, 155, 750);
	m_wndCongThucMau.Create(this, _T("1. \x43\xF4ng th\x1EE9\x63 m\xE1u"), 5, 755, 155, 780);
	m_wndHongCauLabel.Create(this, _T("H\x1ED3ng \x63\x1EA7u"), 5, 785, 85, 810);
	m_wndHongCau.Create(this,90, 785, 155, 810); 
	m_wndHSTLabel.Create(this, _T("HST"), 195, 785, 270, 810);
	m_wndHST.Create(this,275, 785, 355, 810); 
	m_wndBCLabel.Create(this, _T("BC"), 395, 785, 475, 810);
	m_wndBC.Create(this,480, 785, 560, 810); 
	m_wndTieuCauLabel.Create(this, _T("Ti\x1EC3u \x63\x1EA7u"), 600, 785, 680, 810);
	m_wndTieuCau.Create(this,685, 785, 755, 810); 
	m_wndHormonTG.Create(this, _T("2. Hormon tuy\x1EBFn gi\xE1p"), 5, 815, 155, 840);
	m_wndHormon.Create(this, _T("Hormon"), 275, 815, 355, 840);
	m_wndKetQua.Create(this, _T("K\x1EBFt qu\x1EA3"), 360, 815, 480, 840);
	m_wndFT4bt.Create(this, _T("12 - 22 pmol/l"), 485, 845, 585, 870);
	m_wndTSHbt.Create(this, _T("0,27 - 42 uIU/ml"), 485, 875, 585, 900);
	m_wndFT4Label.Create(this, _T("FT4"), 275, 844, 355, 869);
	m_wndFT4.Create(this,360, 844, 480, 869); 
	m_wndTSHLabel.Create(this, _T("TSH"), 275, 875, 355, 900);
	m_wndTSH.Create(this,360, 875, 480, 900); 
	m_wndI131TuyenGiap.Create(this, _T("3. \x110\x1ED9 t\x1EADp trung I\x31\x33\x31 t\x1EA1i tuy\x1EBFn gi\xE1p"), 5, 900, 235, 925);
	m_wnd2hLabel.Create(this, _T("2h"), 275, 935, 355, 960);
	m_wnd2h.Create(this,360, 935, 585, 960); 
	m_wnd6hLabel.Create(this, _T("6h"), 275, 965, 355, 990);
	m_wnd6h.Create(this,360, 965, 585, 990); 
	m_wnd24hLabel.Create(this, _T("24h"), 275, 995, 355, 1020);
	m_wnd24h.Create(this,360, 995, 585, 1020); 
	m_wndThoiDiemLabel.Create(this, _T("Th\x1EDDi \x111i\x1EC3m"), 275, 905, 355, 930);
	m_wndThoiDiem.Create(this,360, 905, 585, 930); 
	m_wndtl1.Create(this, _T("T/l"), 160, 785, 190, 810);
	m_wndgl.Create(this, _T("g/l"), 360, 785, 390, 810);
	m_wndGl2.Create(this, _T("G/l"), 565, 785, 595, 810);
	m_wndGl3.Create(this, _T("G/l"), 760, 785, 790, 810);
	m_wndECG.Create(this, _T("4. ECG"), 5, 1030, 155, 1055);
	m_wndNhipXoangLabel.Create(this, _T("Nh\x1ECBp \x78o\x61ng"), 160, 1030, 240, 1055);
	m_wndNhipXoang.Create(this,245, 1030, 325, 1055); 
	m_wndlanphut.Create(this, _T("l\x1EA7n/ph\xFAt"), 330, 1030, 390, 1055);
	m_wndRoiLoanNhipX.Create(this, _T("R\x1ED1i lo\x1EA1n nh\x1ECBp"), 395, 1030, 580, 1055);
	m_wndDHbatthuongNXLabel.Create(this, _T("\x43\xE1\x63 \x64\x1EA5u hi\x1EC7u \x62\x1EA5t th\x1B0\x1EDDng"), 5, 1060, 240, 1085);
	m_wndDHbatthuongNX.Create(this,245, 1060, 785, 1085); 
	m_wndSAtuyengiap.Create(this, _T("5. Si\xEAu \xE2m tuy\x1EBFn gi\xE1p"), 5, 1090, 155, 1115);
	m_wndBuouLanToa.Create(this, _T("\x42\x1B0\x1EDBu l\x61n t\x1ECF\x61 k\xED\x63h th\x1B0\x1EDB\x63"), 160, 1090, 390, 1115);
	m_wndTangSinhMach.Create(this, _T("T\x103ng sinh m\x1EA1\x63h"), 395, 1090, 580, 1115);
	m_wndNhan.Create(this, _T("Nhân"), 585, 1090, 680, 1115);
	m_wndXHtuyengiap.Create(this, _T("6. \x58\x1EA1 h\xECnh tuy\x1EC1n gi\xE1p"), 5, 1120, 155, 1145);
	m_wndTC99m.Create(this, _T("Tc-99m"), 160, 1120, 240, 1145);
	m_wndI131.Create(this, _T("I131"), 245, 1120, 325, 1145);
	m_wndLanToaXH.Create(this, _T("L\x61n t\x1ECF\x61"), 161, 1150, 241, 1175);
	m_wndDonNhanXH.Create(this, _T("\x110\x1A1n nh\xE2n"), 245, 1150, 325, 1175);
	m_wndDaNhan2TXH.Create(this, _T("\x110\x61 nh\xE2n \x32 th\xF9y"), 330, 1150, 480, 1175);
	m_wndXNKhacLabel.Create(this, _T("7. \x58N kh\xE1\x63 \x63\x1EA7n \x63h\xFA \xFD"), 5, 1180, 155, 1205);
	m_wndXNKhac.Create(this,160, 1180, 785, 1205); 
	m_wndChanDoanLabel.Create(this, _T("VI. \x43h\x1EA9n \x111o\xE1n"), 5, 1210, 155, 1235);
	m_wndChanDoan.Create(this,160, 1210, 785, 1235); 
	m_wndLyDoDTPX.Create(this, _T("VII. L\xFD \x64o \x111i\x1EC1u tr\x1ECB P\x58"), 5, 1240, 155, 1265);
	m_wndLyDoPX.Create(this,160, 1240, 785, 1265); 
	m_wndTinhLieuDTLabel.Create(this, _T("VIII. T\xEDnh li\x1EC1u \x111i\x1EC1u tr\x1ECB"), 5, 1270, 155, 1295);
	m_wndTinhLieuDT.Create(this,160, 1270, 785, 1295); 
	m_wndLieu131i.Create(this, _T("Li\x1EC1u 131i ="), 5, 1328, 85, 1353);
	m_wndTLtuyengiapLabel.Create(this, _T("Tr\x1ECDng l\x1B0\x1EE3ng tuy\x1EBFn gi\xE1p"), 87, 1300, 246, 1325);
	m_wndmTuyenGiap.Create(this,251, 1300, 331, 1325); 
	m_wndgxLieuLabel.Create(this, _T("g x Li\x1EC1u"), 335, 1300, 415, 1325);
	m_wndgxLieu.Create(this,420, 1300, 500, 1325); 
	m_wnduCiGr.Create(this, _T("uCi/Gr"), 505, 1300, 585, 1325);
	m_wndcontrol_139.Create(this, _T("----------------------------------------------------------------------------------------------------"), 87, 1328, 584, 1343);
	m_wndmCiPer.Create(this, _T("X 100% ="), 589, 1327, 669, 1352);
	m_wndmCiLabel.Create(this, _T("mCi"), 757, 1327, 792, 1352);
	m_wndDoTTi13124h.Create(this, _T("\x110\x1ED9 t\x1EADp trung I\x31\x33\x31 \x32\x34 gi\x1EDD"), 205, 1345, 385, 1370);
	m_wndtti131.Create(this,390, 1345, 470, 1370); 
	m_wndpercent2.Create(this, _T("%"), 475, 1345, 505, 1370);
	m_wndDTkethop.Create(this, _T("*\x110i\x1EC1u tr\x1ECB k\x1EBFt h\x1EE3p"), 5, 1375, 155, 1400);
	m_wndThyrozol.Create(this, _T("Thyrozol"), 160, 1375, 280, 1400);
	m_wndConcor.Create(this, _T("Concor"), 285, 1375, 405, 1400);
	m_wndThuocKhac.Create(this, _T("Thu\x1ED1\x63 kh\xE1\x63"), 410, 1375, 530, 1400);
	m_wndThuocKhacdt.Create(this,535, 1375, 785, 1400); 
	m_wndBinhThuong2.Create(this, _T("\x42\xECnh th\x1B0\x1EDDng"), 485, 815, 585, 840);
	m_wndmCi.Create(this,674, 1325, 754, 1350); 

}
void CHMS_OBADTCuongGiapIODEPhongXa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndHoVaTen.SetLimitText(35);
	m_wndHoVaTen.SetCheckValue(true);
	m_wndCheDo.SetLimitText(35);
	m_wndCheDo.SetCheckValue(true);
	m_wndDiaChi.SetLimitText(35);
	m_wndDiaChi.SetCheckValue(true);
	m_wndDienThoai.SetLimitText(35);
	m_wndDienThoai.SetCheckValue(true);
	m_wndThoiGianKhoiPhat.SetLimitText(35);
	m_wndThoiGianKhoiPhat.SetCheckValue(true);
	m_wndSutCan.SetLimitText(35);
	m_wndSutCan.SetCheckValue(true);
	m_wndThuocVaThoiGianDieuTri.SetLimitText(35);
	m_wndThuocVaThoiGianDieuTri.SetCheckValue(true);
	m_wndKetQuaDieuTri.SetLimitText(35);
	m_wndKetQuaDieuTri.SetCheckValue(true);
	m_wndHienTai.SetLimitText(35);
	m_wndHienTai.SetCheckValue(true);
	m_wndDaNiemMac.SetLimitText(35);
	m_wndDaNiemMac.SetCheckValue(true);
	m_wndCanNang.SetLimitText(35);
	m_wndCanNang.SetCheckValue(true);
	m_wndMucDo.SetLimitText(35);
	m_wndMucDo.SetCheckValue(true);
	m_wndMach.SetLimitText(35);
	m_wndMach.SetCheckValue(true);
	m_wndHuyetAp.SetLimitText(35);
	m_wndHuyetAp.SetCheckValue(true);
	m_wndBatThuongKhac.SetLimitText(35);
	m_wndBatThuongKhac.SetCheckValue(true);
	m_wndBenhKetHop.SetLimitText(35);
	m_wndBenhKetHop.SetCheckValue(true);
	m_wndTuyenGiap.SetLimitText(35);
	m_wndTuyenGiap.SetCheckValue(true);
	m_wndHongCau.SetLimitText(35);
	m_wndHongCau.SetCheckValue(true);
	m_wndHST.SetLimitText(35);
	m_wndHST.SetCheckValue(true);
	m_wndBC.SetLimitText(35);
	m_wndBC.SetCheckValue(true);
	m_wndTieuCau.SetLimitText(35);
	m_wndTieuCau.SetCheckValue(true);
	m_wndFT4.SetLimitText(35);
	m_wndFT4.SetCheckValue(true);
	m_wndTSH.SetLimitText(35);
	m_wndTSH.SetCheckValue(true);
	m_wnd2h.SetLimitText(35);
	m_wnd2h.SetCheckValue(true);
	m_wnd6h.SetLimitText(35);
	m_wnd6h.SetCheckValue(true);
	m_wnd24h.SetLimitText(35);
	m_wnd24h.SetCheckValue(true);
	m_wndThoiDiem.SetLimitText(35);
	m_wndThoiDiem.SetCheckValue(true);
	m_wndNhipXoang.SetLimitText(35);
	m_wndNhipXoang.SetCheckValue(true);
	m_wndDHbatthuongNX.SetLimitText(35);
	m_wndDHbatthuongNX.SetCheckValue(true);
	m_wndXNKhac.SetLimitText(35);
	m_wndXNKhac.SetCheckValue(true);
	m_wndChanDoan.SetLimitText(35);
	m_wndChanDoan.SetCheckValue(true);
	m_wndLyDoPX.SetLimitText(35);
	m_wndLyDoPX.SetCheckValue(true);
	m_wndTinhLieuDT.SetLimitText(35);
	m_wndTinhLieuDT.SetCheckValue(true);
	m_wndmTuyenGiap.SetLimitText(35);
	m_wndmTuyenGiap.SetCheckValue(true);
	m_wndgxLieu.SetLimitText(35);
	m_wndgxLieu.SetCheckValue(true);
	m_wndtti131.SetLimitText(35);
	m_wndtti131.SetCheckValue(true);
	m_wndThuocKhacdt.SetLimitText(35);
	m_wndThuocKhacdt.SetCheckValue(true);
	m_wndmCi.SetLimitText(35);
	m_wndmCi.SetCheckValue(true);*/

}
void CHMS_OBADTCuongGiapIODEPhongXa::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndHoVaTen.SetEvent(WE_CHANGE, _OnHoVaTenChangeFnc);
	//m_wndHoVaTen.SetEvent(WE_SETFOCUS, _OnHoVaTenSetfocusFnc);
	//m_wndHoVaTen.SetEvent(WE_KILLFOCUS, _OnHoVaTenKillfocusFnc);
	m_wndHoVaTen.SetEvent(WE_CHECKVALUE, _OnHoVaTenCheckValueFnc);
	m_wndNam.SetEvent(WE_CLICK, _OnNamSelectFnc);
	m_wndNu.SetEvent(WE_CLICK, _OnNuSelectFnc);
	//m_wndCheDo.SetEvent(WE_CHANGE, _OnCheDoChangeFnc);
	//m_wndCheDo.SetEvent(WE_SETFOCUS, _OnCheDoSetfocusFnc);
	//m_wndCheDo.SetEvent(WE_KILLFOCUS, _OnCheDoKillfocusFnc);
	m_wndCheDo.SetEvent(WE_CHECKVALUE, _OnCheDoCheckValueFnc);
	//m_wndDiaChi.SetEvent(WE_CHANGE, _OnDiaChiChangeFnc);
	//m_wndDiaChi.SetEvent(WE_SETFOCUS, _OnDiaChiSetfocusFnc);
	//m_wndDiaChi.SetEvent(WE_KILLFOCUS, _OnDiaChiKillfocusFnc);
	m_wndDiaChi.SetEvent(WE_CHECKVALUE, _OnDiaChiCheckValueFnc);
	//m_wndDienThoai.SetEvent(WE_CHANGE, _OnDienThoaiChangeFnc);
	//m_wndDienThoai.SetEvent(WE_SETFOCUS, _OnDienThoaiSetfocusFnc);
	//m_wndDienThoai.SetEvent(WE_KILLFOCUS, _OnDienThoaiKillfocusFnc);
	m_wndDienThoai.SetEvent(WE_CHECKVALUE, _OnDienThoaiCheckValueFnc);
	//m_wndThoiGianKhoiPhat.SetEvent(WE_CHANGE, _OnThoiGianKhoiPhatChangeFnc);
	//m_wndThoiGianKhoiPhat.SetEvent(WE_SETFOCUS, _OnThoiGianKhoiPhatSetfocusFnc);
	//m_wndThoiGianKhoiPhat.SetEvent(WE_KILLFOCUS, _OnThoiGianKhoiPhatKillfocusFnc);
	m_wndThoiGianKhoiPhat.SetEvent(WE_CHECKVALUE, _OnThoiGianKhoiPhatCheckValueFnc);
	m_wndAnNhieu.SetEvent(WE_CLICK, _OnAnNhieuSelectFnc);
	m_wndUongNhieu.SetEvent(WE_CLICK, _OnUongNhieuSelectFnc);
	m_wndRoiLoanKinhNguyet.SetEvent(WE_CLICK, _OnRoiLoanKinhNguyetSelectFnc);
	m_wndHoiHop.SetEvent(WE_CLICK, _OnHoiHopSelectFnc);
	m_wndNongBuc.SetEvent(WE_CLICK, _OnNongBucSelectFnc);
	m_wndKhoNgu.SetEvent(WE_CLICK, _OnKhoNguSelectFnc);
	m_wndRoiLoanTieuHoa.SetEvent(WE_CLICK, _OnRoiLoanTieuHoaSelectFnc);
	m_wndMoHoi.SetEvent(WE_CLICK, _OnMoHoiSelectFnc);
	m_wndMetMoiThuongXuyen.SetEvent(WE_CLICK, _OnMetMoiThuongXuyenSelectFnc);
	m_wndRunTay.SetEvent(WE_CLICK, _OnRunTaySelectFnc);
	m_wndLoiMat.SetEvent(WE_CLICK, _OnLoiMatSelectFnc);
	//m_wndSutCan.SetEvent(WE_CHANGE, _OnSutCanChangeFnc);
	//m_wndSutCan.SetEvent(WE_SETFOCUS, _OnSutCanSetfocusFnc);
	//m_wndSutCan.SetEvent(WE_KILLFOCUS, _OnSutCanKillfocusFnc);
	m_wndSutCan.SetEvent(WE_CHECKVALUE, _OnSutCanCheckValueFnc);
	m_wndCo.SetEvent(WE_CLICK, _OnCoSelectFnc);
	//m_wndThuocVaThoiGianDieuTri.SetEvent(WE_CHANGE, _OnThuocVaThoiGianDieuTriChangeFnc);
	//m_wndThuocVaThoiGianDieuTri.SetEvent(WE_SETFOCUS, _OnThuocVaThoiGianDieuTriSetfocusFnc);
	//m_wndThuocVaThoiGianDieuTri.SetEvent(WE_KILLFOCUS, _OnThuocVaThoiGianDieuTriKillfocusFnc);
	m_wndThuocVaThoiGianDieuTri.SetEvent(WE_CHECKVALUE, _OnThuocVaThoiGianDieuTriCheckValueFnc);
	m_wndKhong.SetEvent(WE_CLICK, _OnKhongSelectFnc);
	//m_wndKetQuaDieuTri.SetEvent(WE_CHANGE, _OnKetQuaDieuTriChangeFnc);
	//m_wndKetQuaDieuTri.SetEvent(WE_SETFOCUS, _OnKetQuaDieuTriSetfocusFnc);
	//m_wndKetQuaDieuTri.SetEvent(WE_KILLFOCUS, _OnKetQuaDieuTriKillfocusFnc);
	m_wndKetQuaDieuTri.SetEvent(WE_CHECKVALUE, _OnKetQuaDieuTriCheckValueFnc);
	//m_wndHienTai.SetEvent(WE_CHANGE, _OnHienTaiChangeFnc);
	//m_wndHienTai.SetEvent(WE_SETFOCUS, _OnHienTaiSetfocusFnc);
	//m_wndHienTai.SetEvent(WE_KILLFOCUS, _OnHienTaiKillfocusFnc);
	m_wndHienTai.SetEvent(WE_CHECKVALUE, _OnHienTaiCheckValueFnc);
	m_wndKhoeManh.SetEvent(WE_CLICK, _OnKhoeManhSelectFnc);
	m_wndHutThuoc.SetEvent(WE_CLICK, _OnHutThuocSelectFnc);
	//m_wndDaNiemMac.SetEvent(WE_CHANGE, _OnDaNiemMacChangeFnc);
	//m_wndDaNiemMac.SetEvent(WE_SETFOCUS, _OnDaNiemMacSetfocusFnc);
	//m_wndDaNiemMac.SetEvent(WE_KILLFOCUS, _OnDaNiemMacKillfocusFnc);
	m_wndDaNiemMac.SetEvent(WE_CHECKVALUE, _OnDaNiemMacCheckValueFnc);
	//m_wndCanNang.SetEvent(WE_CHANGE, _OnCanNangChangeFnc);
	//m_wndCanNang.SetEvent(WE_SETFOCUS, _OnCanNangSetfocusFnc);
	//m_wndCanNang.SetEvent(WE_KILLFOCUS, _OnCanNangKillfocusFnc);
	m_wndCanNang.SetEvent(WE_CHECKVALUE, _OnCanNangCheckValueFnc);
	m_wndLanToa.SetEvent(WE_CLICK, _OnLanToaSelectFnc);
	m_wndDonNhan.SetEvent(WE_CLICK, _OnDonNhanSelectFnc);
	m_wndDaNhan.SetEvent(WE_CLICK, _OnDaNhanSelectFnc);
	m_wndTiengThoiTaiTuyen.SetEvent(WE_CLICK, _OnTiengThoiTaiTuyenSelectFnc);
	m_wndRungMiuTaiTuyen.SetEvent(WE_CLICK, _OnRungMiuTaiTuyenSelectFnc);
	m_wndCo1.SetEvent(WE_CLICK, _OnCo1SelectFnc);
	//m_wndMucDo.SetEvent(WE_CHANGE, _OnMucDoChangeFnc);
	//m_wndMucDo.SetEvent(WE_SETFOCUS, _OnMucDoSetfocusFnc);
	//m_wndMucDo.SetEvent(WE_KILLFOCUS, _OnMucDoKillfocusFnc);
	m_wndMucDo.SetEvent(WE_CHECKVALUE, _OnMucDoCheckValueFnc);
	m_wndKhong2.SetEvent(WE_CLICK, _OnKhong2SelectFnc);
	//m_wndMach.SetEvent(WE_CHANGE, _OnMachChangeFnc);
	//m_wndMach.SetEvent(WE_SETFOCUS, _OnMachSetfocusFnc);
	//m_wndMach.SetEvent(WE_KILLFOCUS, _OnMachKillfocusFnc);
	m_wndMach.SetEvent(WE_CHECKVALUE, _OnMachCheckValueFnc);
	//m_wndHuyetAp.SetEvent(WE_CHANGE, _OnHuyetApChangeFnc);
	//m_wndHuyetAp.SetEvent(WE_SETFOCUS, _OnHuyetApSetfocusFnc);
	//m_wndHuyetAp.SetEvent(WE_KILLFOCUS, _OnHuyetApKillfocusFnc);
	m_wndHuyetAp.SetEvent(WE_CHECKVALUE, _OnHuyetApCheckValueFnc);
	//m_wndBatThuongKhac.SetEvent(WE_CHANGE, _OnBatThuongKhacChangeFnc);
	//m_wndBatThuongKhac.SetEvent(WE_SETFOCUS, _OnBatThuongKhacSetfocusFnc);
	//m_wndBatThuongKhac.SetEvent(WE_KILLFOCUS, _OnBatThuongKhacKillfocusFnc);
	m_wndBatThuongKhac.SetEvent(WE_CHECKVALUE, _OnBatThuongKhacCheckValueFnc);
	//m_wndBenhKetHop.SetEvent(WE_CHANGE, _OnBenhKetHopChangeFnc);
	//m_wndBenhKetHop.SetEvent(WE_SETFOCUS, _OnBenhKetHopSetfocusFnc);
	//m_wndBenhKetHop.SetEvent(WE_KILLFOCUS, _OnBenhKetHopKillfocusFnc);
	m_wndBenhKetHop.SetEvent(WE_CHECKVALUE, _OnBenhKetHopCheckValueFnc);
	//m_wndTuyenGiap.SetEvent(WE_CHANGE, _OnTuyenGiapChangeFnc);
	//m_wndTuyenGiap.SetEvent(WE_SETFOCUS, _OnTuyenGiapSetfocusFnc);
	//m_wndTuyenGiap.SetEvent(WE_KILLFOCUS, _OnTuyenGiapKillfocusFnc);
	m_wndTuyenGiap.SetEvent(WE_CHECKVALUE, _OnTuyenGiapCheckValueFnc);
	m_wndBinhThuong.SetEvent(WE_CLICK, _OnBinhThuongSelectFnc);
	m_wndBatThuong.SetEvent(WE_CLICK, _OnBatThuongSelectFnc);
	//m_wndHongCau.SetEvent(WE_CHANGE, _OnHongCauChangeFnc);
	//m_wndHongCau.SetEvent(WE_SETFOCUS, _OnHongCauSetfocusFnc);
	//m_wndHongCau.SetEvent(WE_KILLFOCUS, _OnHongCauKillfocusFnc);
	m_wndHongCau.SetEvent(WE_CHECKVALUE, _OnHongCauCheckValueFnc);
	//m_wndHST.SetEvent(WE_CHANGE, _OnHSTChangeFnc);
	//m_wndHST.SetEvent(WE_SETFOCUS, _OnHSTSetfocusFnc);
	//m_wndHST.SetEvent(WE_KILLFOCUS, _OnHSTKillfocusFnc);
	m_wndHST.SetEvent(WE_CHECKVALUE, _OnHSTCheckValueFnc);
	//m_wndBC.SetEvent(WE_CHANGE, _OnBCChangeFnc);
	//m_wndBC.SetEvent(WE_SETFOCUS, _OnBCSetfocusFnc);
	//m_wndBC.SetEvent(WE_KILLFOCUS, _OnBCKillfocusFnc);
	m_wndBC.SetEvent(WE_CHECKVALUE, _OnBCCheckValueFnc);
	//m_wndTieuCau.SetEvent(WE_CHANGE, _OnTieuCauChangeFnc);
	//m_wndTieuCau.SetEvent(WE_SETFOCUS, _OnTieuCauSetfocusFnc);
	//m_wndTieuCau.SetEvent(WE_KILLFOCUS, _OnTieuCauKillfocusFnc);
	m_wndTieuCau.SetEvent(WE_CHECKVALUE, _OnTieuCauCheckValueFnc);
	//m_wndFT4.SetEvent(WE_CHANGE, _OnFT4ChangeFnc);
	//m_wndFT4.SetEvent(WE_SETFOCUS, _OnFT4SetfocusFnc);
	//m_wndFT4.SetEvent(WE_KILLFOCUS, _OnFT4KillfocusFnc);
	m_wndFT4.SetEvent(WE_CHECKVALUE, _OnFT4CheckValueFnc);
	//m_wndTSH.SetEvent(WE_CHANGE, _OnTSHChangeFnc);
	//m_wndTSH.SetEvent(WE_SETFOCUS, _OnTSHSetfocusFnc);
	//m_wndTSH.SetEvent(WE_KILLFOCUS, _OnTSHKillfocusFnc);
	m_wndTSH.SetEvent(WE_CHECKVALUE, _OnTSHCheckValueFnc);
	//m_wnd2h.SetEvent(WE_CHANGE, _On2hChangeFnc);
	//m_wnd2h.SetEvent(WE_SETFOCUS, _On2hSetfocusFnc);
	//m_wnd2h.SetEvent(WE_KILLFOCUS, _On2hKillfocusFnc);
	m_wnd2h.SetEvent(WE_CHECKVALUE, _On2hCheckValueFnc);
	//m_wnd6h.SetEvent(WE_CHANGE, _On6hChangeFnc);
	//m_wnd6h.SetEvent(WE_SETFOCUS, _On6hSetfocusFnc);
	//m_wnd6h.SetEvent(WE_KILLFOCUS, _On6hKillfocusFnc);
	m_wnd6h.SetEvent(WE_CHECKVALUE, _On6hCheckValueFnc);
	//m_wnd24h.SetEvent(WE_CHANGE, _On24hChangeFnc);
	//m_wnd24h.SetEvent(WE_SETFOCUS, _On24hSetfocusFnc);
	//m_wnd24h.SetEvent(WE_KILLFOCUS, _On24hKillfocusFnc);
	m_wnd24h.SetEvent(WE_CHECKVALUE, _On24hCheckValueFnc);
	//m_wndThoiDiem.SetEvent(WE_CHANGE, _OnThoiDiemChangeFnc);
	//m_wndThoiDiem.SetEvent(WE_SETFOCUS, _OnThoiDiemSetfocusFnc);
	//m_wndThoiDiem.SetEvent(WE_KILLFOCUS, _OnThoiDiemKillfocusFnc);
	m_wndThoiDiem.SetEvent(WE_CHECKVALUE, _OnThoiDiemCheckValueFnc);
	//m_wndNhipXoang.SetEvent(WE_CHANGE, _OnNhipXoangChangeFnc);
	//m_wndNhipXoang.SetEvent(WE_SETFOCUS, _OnNhipXoangSetfocusFnc);
	//m_wndNhipXoang.SetEvent(WE_KILLFOCUS, _OnNhipXoangKillfocusFnc);
	m_wndNhipXoang.SetEvent(WE_CHECKVALUE, _OnNhipXoangCheckValueFnc);
	m_wndRoiLoanNhipX.SetEvent(WE_CLICK, _OnRoiLoanNhipXSelectFnc);
	//m_wndDHbatthuongNX.SetEvent(WE_CHANGE, _OnDHbatthuongNXChangeFnc);
	//m_wndDHbatthuongNX.SetEvent(WE_SETFOCUS, _OnDHbatthuongNXSetfocusFnc);
	//m_wndDHbatthuongNX.SetEvent(WE_KILLFOCUS, _OnDHbatthuongNXKillfocusFnc);
	m_wndDHbatthuongNX.SetEvent(WE_CHECKVALUE, _OnDHbatthuongNXCheckValueFnc);
	m_wndBuouLanToa.SetEvent(WE_CLICK, _OnBuouLanToaSelectFnc);
	m_wndTangSinhMach.SetEvent(WE_CLICK, _OnTangSinhMachSelectFnc);
	m_wndNhan.SetEvent(WE_CLICK, _OnNhanSelectFnc);
	m_wndTC99m.SetEvent(WE_CLICK, _OnTC99mSelectFnc);
	m_wndI131.SetEvent(WE_CLICK, _OnI131SelectFnc);
	m_wndLanToaXH.SetEvent(WE_CLICK, _OnLanToaXHSelectFnc);
	m_wndDonNhanXH.SetEvent(WE_CLICK, _OnDonNhanXHSelectFnc);
	m_wndDaNhan2TXH.SetEvent(WE_CLICK, _OnDaNhan2TXHSelectFnc);
	//m_wndXNKhac.SetEvent(WE_CHANGE, _OnXNKhacChangeFnc);
	//m_wndXNKhac.SetEvent(WE_SETFOCUS, _OnXNKhacSetfocusFnc);
	//m_wndXNKhac.SetEvent(WE_KILLFOCUS, _OnXNKhacKillfocusFnc);
	m_wndXNKhac.SetEvent(WE_CHECKVALUE, _OnXNKhacCheckValueFnc);
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	//m_wndLyDoPX.SetEvent(WE_CHANGE, _OnLyDoPXChangeFnc);
	//m_wndLyDoPX.SetEvent(WE_SETFOCUS, _OnLyDoPXSetfocusFnc);
	//m_wndLyDoPX.SetEvent(WE_KILLFOCUS, _OnLyDoPXKillfocusFnc);
	m_wndLyDoPX.SetEvent(WE_CHECKVALUE, _OnLyDoPXCheckValueFnc);
	//m_wndTinhLieuDT.SetEvent(WE_CHANGE, _OnTinhLieuDTChangeFnc);
	//m_wndTinhLieuDT.SetEvent(WE_SETFOCUS, _OnTinhLieuDTSetfocusFnc);
	//m_wndTinhLieuDT.SetEvent(WE_KILLFOCUS, _OnTinhLieuDTKillfocusFnc);
	m_wndTinhLieuDT.SetEvent(WE_CHECKVALUE, _OnTinhLieuDTCheckValueFnc);
	//m_wndmTuyenGiap.SetEvent(WE_CHANGE, _OnmTuyenGiapChangeFnc);
	//m_wndmTuyenGiap.SetEvent(WE_SETFOCUS, _OnmTuyenGiapSetfocusFnc);
	//m_wndmTuyenGiap.SetEvent(WE_KILLFOCUS, _OnmTuyenGiapKillfocusFnc);
	m_wndmTuyenGiap.SetEvent(WE_CHECKVALUE, _OnmTuyenGiapCheckValueFnc);
	//m_wndgxLieu.SetEvent(WE_CHANGE, _OngxLieuChangeFnc);
	//m_wndgxLieu.SetEvent(WE_SETFOCUS, _OngxLieuSetfocusFnc);
	//m_wndgxLieu.SetEvent(WE_KILLFOCUS, _OngxLieuKillfocusFnc);
	m_wndgxLieu.SetEvent(WE_CHECKVALUE, _OngxLieuCheckValueFnc);
	//m_wndtti131.SetEvent(WE_CHANGE, _Ontti131ChangeFnc);
	//m_wndtti131.SetEvent(WE_SETFOCUS, _Ontti131SetfocusFnc);
	//m_wndtti131.SetEvent(WE_KILLFOCUS, _Ontti131KillfocusFnc);
	m_wndtti131.SetEvent(WE_CHECKVALUE, _Ontti131CheckValueFnc);
	m_wndThyrozol.SetEvent(WE_CLICK, _OnThyrozolSelectFnc);
	m_wndConcor.SetEvent(WE_CLICK, _OnConcorSelectFnc);
	m_wndThuocKhac.SetEvent(WE_CLICK, _OnThuocKhacSelectFnc);
	//m_wndThuocKhacdt.SetEvent(WE_CHANGE, _OnThuocKhacdtChangeFnc);
	//m_wndThuocKhacdt.SetEvent(WE_SETFOCUS, _OnThuocKhacdtSetfocusFnc);
	//m_wndThuocKhacdt.SetEvent(WE_KILLFOCUS, _OnThuocKhacdtKillfocusFnc);
	m_wndThuocKhacdt.SetEvent(WE_CHECKVALUE, _OnThuocKhacdtCheckValueFnc);
	//m_wndmCi.SetEvent(WE_CHANGE, _OnmCiChangeFnc);
	//m_wndmCi.SetEvent(WE_SETFOCUS, _OnmCiSetfocusFnc);
	//m_wndmCi.SetEvent(WE_KILLFOCUS, _OnmCiKillfocusFnc);
	m_wndmCi.SetEvent(WE_CHECKVALUE, _OnmCiCheckValueFnc);
	
	GetDataToScreen();
	m_wndHoVaTen.EnableWindow(FALSE);
	m_wndNam.EnableWindow(FALSE);
	m_wndNu.EnableWindow(FALSE);
	
	SetScrollSizes(MM_TEXT, CSize(700, 1500));

}
void CHMS_OBADTCuongGiapIODEPhongXa::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndHoVaTen.GetDlgCtrlID(), m_szHoVaTen);
	DDX_Check(pDX, m_wndNam.GetDlgCtrlID(), m_bNam);
	DDX_Check(pDX, m_wndNu.GetDlgCtrlID(), m_bNu);
	DDX_Text(pDX, m_wndCheDo.GetDlgCtrlID(), m_szCheDo);
	DDX_Text(pDX, m_wndDiaChi.GetDlgCtrlID(), m_szDiaChi);
	DDX_Text(pDX, m_wndDienThoai.GetDlgCtrlID(), m_szDienThoai);
	DDX_Text(pDX, m_wndThoiGianKhoiPhat.GetDlgCtrlID(), m_szThoiGianKhoiPhat);
	DDX_Check(pDX, m_wndAnNhieu.GetDlgCtrlID(), m_bAnNhieu);
	DDX_Check(pDX, m_wndUongNhieu.GetDlgCtrlID(), m_bUongNhieu);
	DDX_Check(pDX, m_wndRoiLoanKinhNguyet.GetDlgCtrlID(), m_bRoiLoanKinhNguyet);
	DDX_Check(pDX, m_wndHoiHop.GetDlgCtrlID(), m_bHoiHop);
	DDX_Check(pDX, m_wndNongBuc.GetDlgCtrlID(), m_bNongBuc);
	DDX_Check(pDX, m_wndKhoNgu.GetDlgCtrlID(), m_bKhoNgu);
	DDX_Check(pDX, m_wndRoiLoanTieuHoa.GetDlgCtrlID(), m_bRoiLoanTieuHoa);
	DDX_Check(pDX, m_wndMoHoi.GetDlgCtrlID(), m_bMoHoi);
	DDX_Check(pDX, m_wndMetMoiThuongXuyen.GetDlgCtrlID(), m_bMetMoiThuongXuyen);
	DDX_Check(pDX, m_wndRunTay.GetDlgCtrlID(), m_bRunTay);
	DDX_Check(pDX, m_wndLoiMat.GetDlgCtrlID(), m_bLoiMat);
	DDX_Text(pDX, m_wndSutCan.GetDlgCtrlID(), m_szSutCan);
	DDX_Check(pDX, m_wndCo.GetDlgCtrlID(), m_bCo);
	DDX_Text(pDX, m_wndThuocVaThoiGianDieuTri.GetDlgCtrlID(), m_szThuocVaThoiGianDieuTri);
	DDX_Check(pDX, m_wndKhong.GetDlgCtrlID(), m_bKhong);
	DDX_Text(pDX, m_wndKetQuaDieuTri.GetDlgCtrlID(), m_szKetQuaDieuTri);
	DDX_Text(pDX, m_wndHienTai.GetDlgCtrlID(), m_szHienTai);
	DDX_Check(pDX, m_wndKhoeManh.GetDlgCtrlID(), m_bKhoeManh);
	DDX_Check(pDX, m_wndHutThuoc.GetDlgCtrlID(), m_bHutThuoc);
	DDX_Text(pDX, m_wndDaNiemMac.GetDlgCtrlID(), m_szDaNiemMac);
	DDX_Text(pDX, m_wndCanNang.GetDlgCtrlID(), m_szCanNang);
	DDX_Check(pDX, m_wndLanToa.GetDlgCtrlID(), m_bLanToa);
	DDX_Check(pDX, m_wndDonNhan.GetDlgCtrlID(), m_bDonNhan);
	DDX_Check(pDX, m_wndDaNhan.GetDlgCtrlID(), m_bDaNhan);
	DDX_Check(pDX, m_wndTiengThoiTaiTuyen.GetDlgCtrlID(), m_bTiengThoiTaiTuyen);
	DDX_Check(pDX, m_wndRungMiuTaiTuyen.GetDlgCtrlID(), m_bRungMiuTaiTuyen);
	DDX_Check(pDX, m_wndCo1.GetDlgCtrlID(), m_bCo1);
	DDX_Text(pDX, m_wndMucDo.GetDlgCtrlID(), m_szMucDo);
	DDX_Check(pDX, m_wndKhong2.GetDlgCtrlID(), m_bKhong2);
	DDX_Text(pDX, m_wndMach.GetDlgCtrlID(), m_szMach);
	DDX_Text(pDX, m_wndHuyetAp.GetDlgCtrlID(), m_szHuyetAp);
	DDX_Text(pDX, m_wndBatThuongKhac.GetDlgCtrlID(), m_szBatThuongKhac);
	DDX_Text(pDX, m_wndBenhKetHop.GetDlgCtrlID(), m_szBenhKetHop);
	DDX_Text(pDX, m_wndTuyenGiap.GetDlgCtrlID(), m_szTuyenGiap);
	DDX_Check(pDX, m_wndBinhThuong.GetDlgCtrlID(), m_bBinhThuong);
	DDX_Check(pDX, m_wndBatThuong.GetDlgCtrlID(), m_bBatThuong);
	DDX_Text(pDX, m_wndHongCau.GetDlgCtrlID(), m_szHongCau);
	DDX_Text(pDX, m_wndHST.GetDlgCtrlID(), m_szHST);
	DDX_Text(pDX, m_wndBC.GetDlgCtrlID(), m_szBC);
	DDX_Text(pDX, m_wndTieuCau.GetDlgCtrlID(), m_szTieuCau);
	DDX_Text(pDX, m_wndFT4.GetDlgCtrlID(), m_szFT4);
	DDX_Text(pDX, m_wndTSH.GetDlgCtrlID(), m_szTSH);
	DDX_Text(pDX, m_wnd2h.GetDlgCtrlID(), m_sz2h);
	DDX_Text(pDX, m_wnd6h.GetDlgCtrlID(), m_sz6h);
	DDX_Text(pDX, m_wnd24h.GetDlgCtrlID(), m_sz24h);
	DDX_Text(pDX, m_wndThoiDiem.GetDlgCtrlID(), m_szThoiDiem);
	DDX_Text(pDX, m_wndNhipXoang.GetDlgCtrlID(), m_szNhipXoang);
	DDX_Check(pDX, m_wndRoiLoanNhipX.GetDlgCtrlID(), m_bRoiLoanNhipX);
	DDX_Text(pDX, m_wndDHbatthuongNX.GetDlgCtrlID(), m_szDHbatthuongNX);
	DDX_Check(pDX, m_wndBuouLanToa.GetDlgCtrlID(), m_bBuouLanToa);
	DDX_Check(pDX, m_wndTangSinhMach.GetDlgCtrlID(), m_bTangSinhMach);
	DDX_Check(pDX, m_wndNhan.GetDlgCtrlID(), m_bNhan);
	DDX_Check(pDX, m_wndTC99m.GetDlgCtrlID(), m_bTC99m);
	DDX_Check(pDX, m_wndI131.GetDlgCtrlID(), m_bI131);
	DDX_Check(pDX, m_wndLanToaXH.GetDlgCtrlID(), m_bLanToaXH);
	DDX_Check(pDX, m_wndDonNhanXH.GetDlgCtrlID(), m_bDonNhanXH);
	DDX_Check(pDX, m_wndDaNhan2TXH.GetDlgCtrlID(), m_bDaNhan2TXH);
	DDX_Text(pDX, m_wndXNKhac.GetDlgCtrlID(), m_szXNKhac);
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Text(pDX, m_wndLyDoPX.GetDlgCtrlID(), m_szLyDoPX);
	DDX_Text(pDX, m_wndTinhLieuDT.GetDlgCtrlID(), m_szTinhLieuDT);
	DDX_Text(pDX, m_wndmTuyenGiap.GetDlgCtrlID(), m_szmTuyenGiap);
	DDX_Text(pDX, m_wndgxLieu.GetDlgCtrlID(), m_szgxLieu);
	DDX_Text(pDX, m_wndtti131.GetDlgCtrlID(), m_sztti131);
	DDX_Check(pDX, m_wndThyrozol.GetDlgCtrlID(), m_bThyrozol);
	DDX_Check(pDX, m_wndConcor.GetDlgCtrlID(), m_bConcor);
	DDX_Check(pDX, m_wndThuocKhac.GetDlgCtrlID(), m_bThuocKhac);
	DDX_Text(pDX, m_wndThuocKhacdt.GetDlgCtrlID(), m_szThuocKhacdt);
	DDX_Text(pDX, m_wndmCi.GetDlgCtrlID(), m_szmCi);

}
void CHMS_OBADTCuongGiapIODEPhongXa::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("HoVaTen")] =  m_szHoVaTen;
	m_jData[_T("Nam")] =  m_bNam;
	m_jData[_T("Nu")] =  m_bNu;
	m_jData[_T("CheDo")] =  m_szCheDo;
	m_jData[_T("DiaChi")] =  m_szDiaChi;
	m_jData[_T("DienThoai")] =  m_szDienThoai;
	m_jData[_T("ThoiGianKhoiPhat")] =  m_szThoiGianKhoiPhat;
	m_jData[_T("AnNhieu")] =  m_bAnNhieu;
	m_jData[_T("UongNhieu")] =  m_bUongNhieu;
	m_jData[_T("RoiLoanKinhNguyet")] =  m_bRoiLoanKinhNguyet;
	m_jData[_T("HoiHop")] =  m_bHoiHop;
	m_jData[_T("NongBuc")] =  m_bNongBuc;
	m_jData[_T("KhoNgu")] =  m_bKhoNgu;
	m_jData[_T("RoiLoanTieuHoa")] =  m_bRoiLoanTieuHoa;
	m_jData[_T("MoHoi")] =  m_bMoHoi;
	m_jData[_T("MetMoiThuongXuyen")] =  m_bMetMoiThuongXuyen;
	m_jData[_T("RunTay")] =  m_bRunTay;
	m_jData[_T("LoiMat")] =  m_bLoiMat;
	m_jData[_T("SutCan")] =  m_szSutCan;
	m_jData[_T("Co")] =  m_bCo;
	m_jData[_T("ThuocVaThoiGianDieuTri")] =  m_szThuocVaThoiGianDieuTri;
	m_jData[_T("Khong")] =  m_bKhong;
	m_jData[_T("KetQuaDieuTri")] =  m_szKetQuaDieuTri;
	m_jData[_T("HienTai")] =  m_szHienTai;
	m_jData[_T("KhoeManh")] =  m_bKhoeManh;
	m_jData[_T("HutThuoc")] =  m_bHutThuoc;
	m_jData[_T("DaNiemMac")] =  m_szDaNiemMac;
	m_jData[_T("CanNang")] =  m_szCanNang;
	m_jData[_T("LanToa")] =  m_bLanToa;
	m_jData[_T("DonNhan")] =  m_bDonNhan;
	m_jData[_T("DaNhan")] =  m_bDaNhan;
	m_jData[_T("TiengThoiTaiTuyen")] =  m_bTiengThoiTaiTuyen;
	m_jData[_T("RungMiuTaiTuyen")] =  m_bRungMiuTaiTuyen;
	m_jData[_T("Co1")] =  m_bCo1;
	m_jData[_T("MucDo")] =  m_szMucDo;
	m_jData[_T("Khong2")] =  m_bKhong2;
	m_jData[_T("Mach")] =  m_szMach;
	m_jData[_T("HuyetAp")] =  m_szHuyetAp;
	m_jData[_T("BatThuongKhac")] =  m_szBatThuongKhac;
	m_jData[_T("BenhKetHop")] =  m_szBenhKetHop;
	m_jData[_T("TuyenGiap")] =  m_szTuyenGiap;
	m_jData[_T("BinhThuong")] =  m_bBinhThuong;
	m_jData[_T("BatThuong")] =  m_bBatThuong;
	m_jData[_T("HongCau")] =  m_szHongCau;
	m_jData[_T("HST")] =  m_szHST;
	m_jData[_T("BC")] =  m_szBC;
	m_jData[_T("TieuCau")] =  m_szTieuCau;
	m_jData[_T("FT4")] =  m_szFT4;
	m_jData[_T("TSH")] =  m_szTSH;
	m_jData[_T("2h")] =  m_sz2h;
	m_jData[_T("6h")] =  m_sz6h;
	m_jData[_T("24h")] =  m_sz24h;
	m_jData[_T("ThoiDiem")] =  m_szThoiDiem;
	m_jData[_T("NhipXoang")] =  m_szNhipXoang;
	m_jData[_T("RoiLoanNhipX")] =  m_bRoiLoanNhipX;
	m_jData[_T("DHbatthuongNX")] =  m_szDHbatthuongNX;
	m_jData[_T("BuouLanToa")] =  m_bBuouLanToa;
	m_jData[_T("TangSinhMach")] =  m_bTangSinhMach;
	m_jData[_T("Nhan")] =  m_bNhan;
	m_jData[_T("TC99m")] =  m_bTC99m;
	m_jData[_T("I131")] =  m_bI131;
	m_jData[_T("LanToaXH")] =  m_bLanToaXH;
	m_jData[_T("DonNhanXH")] =  m_bDonNhanXH;
	m_jData[_T("DaNhan2TXH")] =  m_bDaNhan2TXH;
	m_jData[_T("XNKhac")] =  m_szXNKhac;
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	m_jData[_T("LyDoPX")] =  m_szLyDoPX;
	m_jData[_T("TinhLieuDT")] =  m_szTinhLieuDT;
	m_jData[_T("mTuyenGiap")] =  m_szmTuyenGiap;
	m_jData[_T("gxLieu")] =  m_szgxLieu;
	m_jData[_T("tti131")] =  m_sztti131;
	m_jData[_T("Thyrozol")] =  m_bThyrozol;
	m_jData[_T("Concor")] =  m_bConcor;
	m_jData[_T("ThuocKhac")] =  m_bThuocKhac;
	m_jData[_T("ThuocKhacdt")] =  m_szThuocKhacdt;
	m_jData[_T("mCi")] =  m_szmCi;
	}
	else
	{
			
	m_jData[_T("HoVaTen")].GetValue(m_szHoVaTen);
	m_jData[_T("Nam")].GetValue(m_bNam);
	m_jData[_T("Nu")].GetValue(m_bNu);
	m_jData[_T("CheDo")].GetValue(m_szCheDo);
	m_jData[_T("DiaChi")].GetValue(m_szDiaChi);
	m_jData[_T("DienThoai")].GetValue(m_szDienThoai);
	m_jData[_T("ThoiGianKhoiPhat")].GetValue(m_szThoiGianKhoiPhat);
	m_jData[_T("AnNhieu")].GetValue(m_bAnNhieu);
	m_jData[_T("UongNhieu")].GetValue(m_bUongNhieu);
	m_jData[_T("RoiLoanKinhNguyet")].GetValue(m_bRoiLoanKinhNguyet);
	m_jData[_T("HoiHop")].GetValue(m_bHoiHop);
	m_jData[_T("NongBuc")].GetValue(m_bNongBuc);
	m_jData[_T("KhoNgu")].GetValue(m_bKhoNgu);
	m_jData[_T("RoiLoanTieuHoa")].GetValue(m_bRoiLoanTieuHoa);
	m_jData[_T("MoHoi")].GetValue(m_bMoHoi);
	m_jData[_T("MetMoiThuongXuyen")].GetValue(m_bMetMoiThuongXuyen);
	m_jData[_T("RunTay")].GetValue(m_bRunTay);
	m_jData[_T("LoiMat")].GetValue(m_bLoiMat);
	m_jData[_T("SutCan")].GetValue(m_szSutCan);
	m_jData[_T("Co")].GetValue(m_bCo);
	m_jData[_T("ThuocVaThoiGianDieuTri")].GetValue(m_szThuocVaThoiGianDieuTri);
	m_jData[_T("Khong")].GetValue(m_bKhong);
	m_jData[_T("KetQuaDieuTri")].GetValue(m_szKetQuaDieuTri);
	m_jData[_T("HienTai")].GetValue(m_szHienTai);
	m_jData[_T("KhoeManh")].GetValue(m_bKhoeManh);
	m_jData[_T("HutThuoc")].GetValue(m_bHutThuoc);
	m_jData[_T("DaNiemMac")].GetValue(m_szDaNiemMac);
	m_jData[_T("CanNang")].GetValue(m_szCanNang);
	m_jData[_T("LanToa")].GetValue(m_bLanToa);
	m_jData[_T("DonNhan")].GetValue(m_bDonNhan);
	m_jData[_T("DaNhan")].GetValue(m_bDaNhan);
	m_jData[_T("TiengThoiTaiTuyen")].GetValue(m_bTiengThoiTaiTuyen);
	m_jData[_T("RungMiuTaiTuyen")].GetValue(m_bRungMiuTaiTuyen);
	m_jData[_T("Co1")].GetValue(m_bCo1);
	m_jData[_T("MucDo")].GetValue(m_szMucDo);
	m_jData[_T("Khong2")].GetValue(m_bKhong2);
	m_jData[_T("Mach")].GetValue(m_szMach);
	m_jData[_T("HuyetAp")].GetValue(m_szHuyetAp);
	m_jData[_T("BatThuongKhac")].GetValue(m_szBatThuongKhac);
	m_jData[_T("BenhKetHop")].GetValue(m_szBenhKetHop);
	m_jData[_T("TuyenGiap")].GetValue(m_szTuyenGiap);
	m_jData[_T("BinhThuong")].GetValue(m_bBinhThuong);
	m_jData[_T("BatThuong")].GetValue(m_bBatThuong);
	m_jData[_T("HongCau")].GetValue(m_szHongCau);
	m_jData[_T("HST")].GetValue(m_szHST);
	m_jData[_T("BC")].GetValue(m_szBC);
	m_jData[_T("TieuCau")].GetValue(m_szTieuCau);
	m_jData[_T("FT4")].GetValue(m_szFT4);
	m_jData[_T("TSH")].GetValue(m_szTSH);
	m_jData[_T("2h")].GetValue(m_sz2h);
	m_jData[_T("6h")].GetValue(m_sz6h);
	m_jData[_T("24h")].GetValue(m_sz24h);
	m_jData[_T("ThoiDiem")].GetValue(m_szThoiDiem);
	m_jData[_T("NhipXoang")].GetValue(m_szNhipXoang);
	m_jData[_T("RoiLoanNhipX")].GetValue(m_bRoiLoanNhipX);
	m_jData[_T("DHbatthuongNX")].GetValue(m_szDHbatthuongNX);
	m_jData[_T("BuouLanToa")].GetValue(m_bBuouLanToa);
	m_jData[_T("TangSinhMach")].GetValue(m_bTangSinhMach);
	m_jData[_T("Nhan")].GetValue(m_bNhan);
	m_jData[_T("TC99m")].GetValue(m_bTC99m);
	m_jData[_T("I131")].GetValue(m_bI131);
	m_jData[_T("LanToaXH")].GetValue(m_bLanToaXH);
	m_jData[_T("DonNhanXH")].GetValue(m_bDonNhanXH);
	m_jData[_T("DaNhan2TXH")].GetValue(m_bDaNhan2TXH);
	m_jData[_T("XNKhac")].GetValue(m_szXNKhac);
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	m_jData[_T("LyDoPX")].GetValue(m_szLyDoPX);
	m_jData[_T("TinhLieuDT")].GetValue(m_szTinhLieuDT);
	m_jData[_T("mTuyenGiap")].GetValue(m_szmTuyenGiap);
	m_jData[_T("gxLieu")].GetValue(m_szgxLieu);
	m_jData[_T("tti131")].GetValue(m_sztti131);
	m_jData[_T("Thyrozol")].GetValue(m_bThyrozol);
	m_jData[_T("Concor")].GetValue(m_bConcor);
	m_jData[_T("ThuocKhac")].GetValue(m_bThuocKhac);
	m_jData[_T("ThuocKhacdt")].GetValue(m_szThuocKhacdt);
	m_jData[_T("mCi")].GetValue(m_szmCi);
	}

}
void CHMS_OBADTCuongGiapIODEPhongXa::GetDataToScreen(){

	CHMSBenhAnView::GetData();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);

	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "), pMF->m_nDocNo, m_szRecordType, i);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hde_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
		}
		m_jData.Parse(szData);
		UpdateJson(FALSE);
		SetMode(VM_VIEW);
	}
	else
	{
		SetDefaultValues();
		SetMode(VM_VIEW);
	}
}
void CHMS_OBADTCuongGiapIODEPhongXa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBADTCuongGiapIODEPhongXa::SetDefaultValues(){

	m_szHoVaTen.Empty();
	m_bNam=FALSE;
	m_bNu=FALSE;
	m_szCheDo.Empty();
	m_szDiaChi.Empty();
	m_szDienThoai.Empty();
	m_szThoiGianKhoiPhat.Empty();
	m_bAnNhieu=FALSE;
	m_bUongNhieu=FALSE;
	m_bRoiLoanKinhNguyet=FALSE;
	m_bHoiHop=FALSE;
	m_bNongBuc=FALSE;
	m_bKhoNgu=FALSE;
	m_bRoiLoanTieuHoa=FALSE;
	m_bMoHoi=FALSE;
	m_bMetMoiThuongXuyen=FALSE;
	m_bRunTay=FALSE;
	m_bLoiMat=FALSE;
	m_szSutCan.Empty();
	m_bCo=FALSE;
	m_szThuocVaThoiGianDieuTri.Empty();
	m_bKhong=FALSE;
	m_szKetQuaDieuTri.Empty();
	m_szHienTai.Empty();
	m_bKhoeManh=FALSE;
	m_bHutThuoc=FALSE;
	m_szDaNiemMac.Empty();
	m_szCanNang.Empty();
	m_bLanToa=FALSE;
	m_bDonNhan=FALSE;
	m_bDaNhan=FALSE;
	m_bTiengThoiTaiTuyen=FALSE;
	m_bRungMiuTaiTuyen=FALSE;
	m_bCo1=FALSE;
	m_szMucDo.Empty();
	m_bKhong2=FALSE;
	m_szMach.Empty();
	m_szHuyetAp.Empty();
	m_szBatThuongKhac.Empty();
	m_szBenhKetHop.Empty();
	m_szTuyenGiap.Empty();
	m_bBinhThuong=FALSE;
	m_bBatThuong=FALSE;
	m_szHongCau.Empty();
	m_szHST.Empty();
	m_szBC.Empty();
	m_szTieuCau.Empty();
	m_szFT4.Empty();
	m_szTSH.Empty();
	m_sz2h.Empty();
	m_sz6h.Empty();
	m_sz24h.Empty();
	m_szThoiDiem.Empty();
	m_szNhipXoang.Empty();
	m_bRoiLoanNhipX=FALSE;
	m_szDHbatthuongNX.Empty();
	m_bBuouLanToa=FALSE;
	m_bTangSinhMach=FALSE;
	m_bNhan=FALSE;
	m_bTC99m=FALSE;
	m_bI131=FALSE;
	m_bLanToaXH=FALSE;
	m_bDonNhanXH=FALSE;
	m_bDaNhan2TXH=FALSE;
	m_szXNKhac.Empty();
	m_szChanDoan.Empty();
	m_szLyDoPX.Empty();
	m_szTinhLieuDT.Empty();
	m_szmTuyenGiap.Empty();
	m_szgxLieu.Empty();
	m_sztti131.Empty();
	m_bThyrozol=FALSE;
	m_bConcor=FALSE;
	m_bThuocKhac=FALSE;
	m_szThuocKhacdt.Empty();
	m_szmCi.Empty();

}
int CHMS_OBADTCuongGiapIODEPhongXa::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL, szSex;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, hp_sex,") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("hp_sex"), szSex);
				if(szSex == _T("F"))
				{
					m_bNam = false;
					m_bNu = true;
				}
				else{
					m_bNam = true;
					m_bNu = false;
				}
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndNam.EnableWindow(FALSE);
			m_wndNu.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, hp_sex,") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("hp_sex"), szSex);
				if(szSex == _T("F"))
				{
					m_bNam = false;
					m_bNu = true;
				}
				else{
					m_bNam = true;
					m_bNu = false;
				}
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndNam.EnableWindow(FALSE);
			m_wndNu.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
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
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHoVaTenChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHoVaTenSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHoVaTenKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnHoVaTenCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnNamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnNuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCheDoChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCheDoSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCheDoKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnCheDoCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDiaChiChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDiaChiSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDiaChiKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnDiaChiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDienThoaiChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDienThoaiSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDienThoaiKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnDienThoaiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiGianKhoiPhatChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiGianKhoiPhatSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiGianKhoiPhatKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnThoiGianKhoiPhatCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnAnNhieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnUongNhieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnRoiLoanKinhNguyetSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnHoiHopSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnNongBucSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnKhoNguSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnRoiLoanTieuHoaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnMoHoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnMetMoiThuongXuyenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnRunTaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnLoiMatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnSutCanChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnSutCanSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnSutCanKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnSutCanCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocVaThoiGianDieuTriChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocVaThoiGianDieuTriSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocVaThoiGianDieuTriKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnThuocVaThoiGianDieuTriCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnKetQuaDieuTriChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnKetQuaDieuTriSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnKetQuaDieuTriKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnKetQuaDieuTriCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHienTaiChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHienTaiSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHienTaiKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnHienTaiCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnKhoeManhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnHutThuocSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDaNiemMacChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDaNiemMacSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDaNiemMacKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnDaNiemMacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCanNangChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCanNangSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnCanNangKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnCanNangCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnLanToaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnDonNhanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnDaNhanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnTiengThoiTaiTuyenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnRungMiuTaiTuyenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnCo1Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMucDoChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMucDoSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMucDoKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnMucDoCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnKhong2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMachChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMachSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnMachKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnMachCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHuyetApChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHuyetApSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHuyetApKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnHuyetApCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBatThuongKhacChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBatThuongKhacSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBatThuongKhacKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnBatThuongKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBenhKetHopChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBenhKetHopSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBenhKetHopKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnBenhKetHopCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTuyenGiapChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTuyenGiapSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTuyenGiapKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnTuyenGiapCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnBinhThuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnBatThuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHongCauChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHongCauSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHongCauKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnHongCauCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHSTChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHSTSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnHSTKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnHSTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBCChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBCSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnBCKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnBCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTieuCauChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTieuCauSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTieuCauKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnTieuCauCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnFT4Change(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnFT4Setfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnFT4Killfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnFT4CheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTSHChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTSHSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTSHKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnTSHCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::On2hChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On2hSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On2hKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::On2hCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::On6hChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On6hSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On6hKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::On6hCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::On24hChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On24hSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::On24hKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::On24hCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiDiemChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiDiemSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThoiDiemKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnThoiDiemCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnNhipXoangChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnNhipXoangSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnNhipXoangKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnNhipXoangCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnRoiLoanNhipXSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDHbatthuongNXChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDHbatthuongNXSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnDHbatthuongNXKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnDHbatthuongNXCheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnBuouLanToaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnTangSinhMachSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnNhanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnTC99mSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnI131Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnLanToaXHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnDonNhanXHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnDaNhan2TXHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnXNKhacChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnXNKhacSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnXNKhacKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnXNKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnChanDoanChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnChanDoanSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnChanDoanKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnChanDoanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnLyDoPXChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnLyDoPXSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnLyDoPXKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnLyDoPXCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTinhLieuDTChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTinhLieuDTSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnTinhLieuDTKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnTinhLieuDTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmTuyenGiapChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmTuyenGiapSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmTuyenGiapKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnmTuyenGiapCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OngxLieuChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OngxLieuSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OngxLieuKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OngxLieuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::Ontti131Change(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::Ontti131Setfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::Ontti131Killfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::Ontti131CheckValue(){
	return 0;
} 
	void CHMS_OBADTCuongGiapIODEPhongXa::OnThyrozolSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnConcorSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocKhacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocKhacdtChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocKhacdtSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnThuocKhacdtKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnThuocKhacdtCheckValue(){
	return 0;
} 
void CHMS_OBADTCuongGiapIODEPhongXa::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBADTCuongGiapIODEPhongXa();
} 
void CHMS_OBADTCuongGiapIODEPhongXa::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBADTCuongGiapIODEPhongXa.RPT"));
	return;

	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTCuongGiapIODEPhongXa.RPT")))
		return;
	GetDataToScreen();
	rptHeader = rpt.GetReportHeader();

	for (int i = 0; i < m_jData.Size();i++)
	{
			
		std::wstring name;
		name = m_jData.order[i];
		tmpStr.Empty();
		JSONVALUE jv = m_jData[name.c_str()];
		CReportItem *obj = rptHeader->GetItem(name.c_str());
		if(obj->GetType() == REPORT_LABEL)
			continue;

		if(jv.jt == JT_STRING)
		{
			jv.GetValue(tmpStr);
			rptHeader->SetValue(name.c_str(), tmpStr);
		}

		if(jv.jt == JT_NUMBER)
		{
			long d;
			jv.GetValue(d);
			tmpStr.Format(_T("%d"), d);
			

			if(obj->GetType() == REPORT_CHECKBOX)
			{
				rptHeader->SetCheck(name.c_str(), d>0?true:false);
			}
			else
				rptHeader->SetValue(name.c_str(), tmpStr);
		}

		if(jv.jt == JT_BOOL)
		{
			bool b;
			jv.GetValue(b);
			rptHeader->SetCheck(name.c_str(), b);
		}
		
	}
	
	rptHeader->SetValue(_T("HoVaTen"), m_szHoVaTen);
	if(m_bNam)
		rptHeader->SetValue(_T("1"),  _T("Y"));
	else
		rptHeader->SetValue(_T("2"),  _T("Y"));
	rptHeader->SetValue(_T("CheDo"),  m_szCheDo);
	rptHeader->SetValue(_T("DiaChi"),  m_szDiaChi);
	rptHeader->SetValue(_T("DienThoai"),  m_szDienThoai);
	rptHeader->SetValue(_T("ThoiGianKhoiPhat"),  m_szThoiGianKhoiPhat);
	if(m_bAnNhieu)
		rptHeader->SetValue(_T("3"), _T("Y"));
	if(m_bUongNhieu)
		rptHeader->SetValue(_T("4"),  _T("Y"));
	if(m_bUongNhieu)
		rptHeader->SetValue(_T("5"),  _T("Y"));
	if(m_bHoiHop)
		rptHeader->SetValue(_T("6"),  _T("Y"));
	if(m_bNongBuc)
		rptHeader->SetValue(_T("7"),  _T("Y"));
	if(m_bKhoNgu)
		rptHeader->SetValue(_T("8"),  _T("Y"));
	if(m_bRoiLoanTieuHoa)
		rptHeader->SetValue(_T("9"),  _T("Y"));
	if(m_bMoHoi)
		rptHeader->SetValue(_T("10"),  _T("Y"));
	if(m_bMetMoiThuongXuyen)
		rptHeader->SetValue(_T("11"),  _T("Y"));
	if(m_bRunTay)
		rptHeader->SetValue(_T("12"),  _T("Y"));
	if(m_bLoiMat)
		rptHeader->SetValue(_T("13"),  _T("Y"));
	rptHeader->SetValue(_T("SutCan"), m_szSutCan);
	//if(m_bCo)
	//	rptHeader->SetValue(_T("14"), _T("Y"));
	rptHeader->SetValue(_T("ThuocVaThoiGianDieuTri"),  m_szThuocVaThoiGianDieuTri);
	if(m_bCo)
		rptHeader->SetValue(_T("15"),  _T("Y"));
	if(m_bKhong)
		rptHeader->SetValue(_T("16"),  _T("Y"));
	rptHeader->SetValue(_T("KetQuaDieuTri"),  m_szKetQuaDieuTri);
	rptHeader->SetValue(_T("HienTai"),  m_szHienTai);
	if(m_bKhoeManh)
		rptHeader->SetValue(_T("17"),  _T("Y"));
	if(m_bHutThuoc)
		rptHeader->SetValue(_T("18"),  _T("Y"));
	rptHeader->SetValue(_T("DaNiemMac"),  m_szDaNiemMac);
	rptHeader->SetValue(_T("CanNang"),  m_szCanNang);
	if(m_bLanToa)
		rptHeader->SetValue(_T("19"),  _T("Y"));
	if(m_bDonNhan)
		rptHeader->SetValue(_T("20"),  _T("Y"));
	if(m_bDaNhan)
		rptHeader->SetValue(_T("21"),  _T("Y"));
	if(m_bTiengThoiTaiTuyen)
		rptHeader->SetValue(_T("22"),  _T("Y"));
	if(m_bRungMiuTaiTuyen)
		rptHeader->SetValue(_T("23"),  _T("Y"));
	if(m_bCo1)
		rptHeader->SetValue(_T("24"),  _T("Y"));
	rptHeader->SetValue(_T("MucDo"),  m_szMucDo);
	if(m_bKhong2)
		rptHeader->SetValue(_T("25"),  _T("Y"));
	rptHeader->SetValue(_T("Mach"), m_szMach);
	rptHeader->SetValue(_T("HuyetAp"),  m_szHuyetAp);
	rptHeader->SetValue(_T("BatThuongKhac"), m_szBatThuongKhac);
	rptHeader->SetValue(_T("BenhKetHop"), m_szBenhKetHop);
	rptHeader->SetValue(_T("TuyenGiap"),  m_szTuyenGiap);
	if(m_bBinhThuong)
		rptHeader->SetValue(_T("26"),  _T("Y"));
	if(m_bBatThuong)
		rptHeader->SetValue(_T("27"),  _T("Y"));
	rptHeader->SetValue(_T("HongCau"),  m_szHongCau);
	rptHeader->SetValue(_T("HST"),  m_szHST);
	rptHeader->SetValue(_T("BC"), m_szBC);
	rptHeader->SetValue(_T("TieuCau"),  m_szTieuCau);
	rptHeader->SetValue(_T("FT4"),  m_szFT4);
	rptHeader->SetValue(_T("TSH"),  m_szTSH);
	rptHeader->SetValue(_T("2h"), m_sz2h);
	rptHeader->SetValue(_T("6h"),  m_sz6h);
	rptHeader->SetValue(_T("24h"),  m_sz24h);
	rptHeader->SetValue(_T("ThoiDiem"),  m_szThoiDiem);
	rptHeader->SetValue(_T("NhipXoang"),  m_szNhipXoang);
	if(m_bRoiLoanNhipX)
		rptHeader->SetValue(_T("RoiLoanNhipX"),  _T("X"));
	rptHeader->SetValue(_T("DHbatthuongNX"),  m_szDHbatthuongNX);
	if(m_bBuouLanToa)
		rptHeader->SetValue(_T("28"),  _T("Y"));
	if(m_bTangSinhMach)
		rptHeader->SetValue(_T("29"),  _T("Y"));
	if(m_bNhan)
		rptHeader->SetValue(_T("30"),  _T("Y"));
	if(m_bTC99m)
		rptHeader->SetValue(_T("31"),  _T("Y"));
	if(m_bI131)
		rptHeader->SetValue(_T("32"),  _T("Y"));
	if(m_bLanToaXH)
		rptHeader->SetValue(_T("33"),  _T("Y"));
	if(m_bDonNhanXH)
		rptHeader->SetValue(_T("34"),  _T("Y"));
	if(m_bDaNhan2TXH)
		rptHeader->SetValue(_T("35"),  _T("Y"));
	rptHeader->SetValue(_T("XNKhac"),  m_szXNKhac);
	rptHeader->SetValue(_T("ChanDoan"), m_szChanDoan);
	rptHeader->SetValue(_T("LyDoPX"), m_szLyDoPX);
	rptHeader->SetValue(_T("TinhLieuDT"), m_szTinhLieuDT);
	rptHeader->SetValue(_T("mTuyenGiap"),  m_szmTuyenGiap);
	rptHeader->SetValue(_T("gxLieu"),  m_szgxLieu);
	rptHeader->SetValue(_T("tti131"),  m_sztti131);
	if(m_bThyrozol)
		rptHeader->SetValue(_T("36"),  _T("Y"));
	if(m_bConcor)
		rptHeader->SetValue(_T("37"), _T("Y"));
	if(m_bThuocKhac)
		rptHeader->SetValue(_T("38"),  _T("Y"));
	rptHeader->SetValue(_T("ThuocKhacdt"), m_szThuocKhacdt);
	rptHeader->SetValue(_T("mCi"),  m_szmCi);
	
	szSQL.Format(_T("select hop_fromdate, hop_todate, hop_recordno from hms_outpatient ") \
		_T(" where hop_patientno = %ld and hop_recordno = '%s'"), pMF->m_nDocNo, m_szRecordType);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hop_fromdate"), tmpStr);
	rptHeader->SetValue(_T("CreatedDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_todate"), tmpStr);
	rptHeader->SetValue(_T("EndDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_recordno"), tmpStr);
	rptHeader->SetValue(_T("RecordNo"), tmpStr);


	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();*/
} 
bool CHMS_OBADTCuongGiapIODEPhongXa::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBADTCuongGiapIODEPhongXa();
	return true;
} 
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmCiChange(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmCiSetfocus(){
	
} */
/*void CHMS_OBADTCuongGiapIODEPhongXa::OnmCiKillfocus(){
	
} */
int CHMS_OBADTCuongGiapIODEPhongXa::OnmCiCheckValue(){
	return 0;
} 
int CHMS_OBADTCuongGiapIODEPhongXa::OnAddHMS_OBADTCuongGiapIODEPhongXa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBADTCuongGiapIODEPhongXa::OnEditHMS_OBADTCuongGiapIODEPhongXa(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBADTCuongGiapIODEPhongXa::OnDeleteHMS_OBADTCuongGiapIODEPhongXa(){
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
 		OnCancelHMS_OBADTCuongGiapIODEPhongXa();
 	}
	return 0;
}
int CHMS_OBADTCuongGiapIODEPhongXa::OnSaveHMS_OBADTCuongGiapIODEPhongXa(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;


	//////////////////////////////////////////
	bool res =  CHMSBenhAnView::PostData();
	//return result
	return (int) res;
	//
	/////////////////////////////////////////////

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BADT_IODEPHONGXA'"), pMF->m_nDocNo);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType, pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("IODEPhongXA"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
	{
		SetMode(VM_VIEW);
		szSQL.Format(_T("HMS_OUTPATIENT_CREATE(%ld, '%s', 0, to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), '%s', 0) "), 
				pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), pMF->GetSysDateTime(), m_szRecordType);
			pMF->ExecDML(szSQL);
	}
	else
		return -1;
	return ret;
}
int CHMS_OBADTCuongGiapIODEPhongXa::OnCancelHMS_OBADTCuongGiapIODEPhongXa(){
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
int CHMS_OBADTCuongGiapIODEPhongXa::OnHMS_OBADTCuongGiapIODEPhongXaListLoadData(){
	return 0;
}


void CHMS_OBADTCuongGiapIODEPhongXa::OnCancelSelect()
{
	OnCancelHMS_OBADTCuongGiapIODEPhongXa();

}