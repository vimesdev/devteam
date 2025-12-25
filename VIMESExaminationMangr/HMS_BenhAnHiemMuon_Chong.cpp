#include "HMS_BenhAnHiemMuon_Chong.h"
#include "MainFrm.h"
static void _OnDaTungCoConSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnDaTungCoConSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDaTungCoConSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDaTungCoConSelendok();
}
/*static void _OnDaTungCoConSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDaTungCoConKillfocus();
}*/
/*static void _OnDaTungCoConKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDaTungCoConKillfocus();
}*/
static long _OnDaTungCoConLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDaTungCoConLoadData();
}
/*static void _OnDaTungCoConAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDaTungCoConAddNew();
}*/
static void _OnTienSuNoiKhoaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnTienSuNoiKhoaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuNoiKhoaSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNoiKhoaSelendok();
}
/*static void _OnTienSuNoiKhoaSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNoiKhoaKillfocus();
}*/
/*static void _OnTienSuNoiKhoaKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNoiKhoaKillfocus();
}*/
static long _OnTienSuNoiKhoaLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNoiKhoaLoadData();
}
/*static void _OnTienSuNoiKhoaAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNoiKhoaAddNew();
}*/
static void _OnTieuDuongSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnTieuDuongSelect();
}
static void _OnQuaiBiSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnQuaiBiSelect();
}
static void _OnLaoSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnLaoSelect();
}
/*static void _OnKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhacChange();
} */
/*static void _OnKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhacSetfocus();} */ 
/*static void _OnKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhacKillfocus();
} */
static int _OnKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhacCheckValue();
} 
static void _OnTienSuNgoaiKhoaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnTienSuNgoaiKhoaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuNgoaiKhoaSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNgoaiKhoaSelendok();
}
/*static void _OnTienSuNgoaiKhoaSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNgoaiKhoaKillfocus();
}*/
/*static void _OnTienSuNgoaiKhoaKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNgoaiKhoaKillfocus();
}*/
static long _OnTienSuNgoaiKhoaLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNgoaiKhoaLoadData();
}
/*static void _OnTienSuNgoaiKhoaAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuNgoaiKhoaAddNew();
}*/
static void _OnThoatViBenDuiSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnThoatViBenDuiSelect();
}
static void _OnTinhHoanLacChoSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnTinhHoanLacChoSelect();
}
static void _OnGianTinhMachTinhSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnGianTinhMachTinhSelect();
}
static void _OnHepNieuDaoSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnHepNieuDaoSelect();
}
static void _OnHypospadiasSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnHypospadiasSelect();
}
static void _OnTranDichTHSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnTranDichTHSelect();
}
/*static void _OnNgoaiKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnNgoaiKhacChange();
} */
/*static void _OnNgoaiKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnNgoaiKhacSetfocus();} */ 
/*static void _OnNgoaiKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnNgoaiKhacKillfocus();
} */
static int _OnNgoaiKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnNgoaiKhacCheckValue();
} 
static void _OnTienSuSTDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnTienSuSTDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuSTDSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuSTDSelendok();
}
/*static void _OnTienSuSTDSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuSTDKillfocus();
}*/
/*static void _OnTienSuSTDKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuSTDKillfocus();
}*/
static long _OnTienSuSTDLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuSTDLoadData();
}
/*static void _OnTienSuSTDAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienSuSTDAddNew();
}*/
static void _OnLauSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnLauSelect();
}
static void _OnGiangMaiSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnGiangMaiSelect();
}
static void _OnChlamydiaSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnChlamydiaSelect();
}
/*static void _OnSTDKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSTDKhacChange();
} */
/*static void _OnSTDKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSTDKhacSetfocus();} */ 
/*static void _OnSTDKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSTDKhacKillfocus();
} */
static int _OnSTDKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSTDKhacCheckValue();
} 
static void _OnHutThuocSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnHutThuocSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHutThuocSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHutThuocSelendok();
}
/*static void _OnHutThuocSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHutThuocKillfocus();
}*/
/*static void _OnHutThuocKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHutThuocKillfocus();
}*/
static long _OnHutThuocLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHutThuocLoadData();
}
/*static void _OnHutThuocAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHutThuocAddNew();
}*/
/*static void _OnHTSoLuongChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHTSoLuongChange();
} */
/*static void _OnHTSoLuongSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHTSoLuongSetfocus();} */ 
/*static void _OnHTSoLuongKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHTSoLuongKillfocus();
} */
static int _OnHTSoLuongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHTSoLuongCheckValue();
} 
static void _OnUongRuouSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnUongRuouSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUongRuouSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnUongRuouSelendok();
}
/*static void _OnUongRuouSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnUongRuouKillfocus();
}*/
/*static void _OnUongRuouKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnUongRuouKillfocus();
}*/
static long _OnUongRuouLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnUongRuouLoadData();
}
/*static void _OnUongRuouAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnUongRuouAddNew();
}*/
/*static void _OnURSoLuongChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnURSoLuongChange();
} */
/*static void _OnURSoLuongSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnURSoLuongSetfocus();} */ 
/*static void _OnURSoLuongKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnURSoLuongKillfocus();
} */
static int _OnURSoLuongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnURSoLuongCheckValue();
} 
static void _OnSongChungTXSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Chong* )pWnd)->OnSongChungTXSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSongChungTXSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSongChungTXSelendok();
}
/*static void _OnSongChungTXSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSongChungTXKillfocus();
}*/
/*static void _OnSongChungTXKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSongChungTXKillfocus();
}*/
static long _OnSongChungTXLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSongChungTXLoadData();
}
/*static void _OnSongChungTXAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSongChungTXAddNew();
}*/
/*static void _OnSoLanGiaoHopChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSoLanGiaoHopChange();
} */
/*static void _OnSoLanGiaoHopSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSoLanGiaoHopSetfocus();} */ 
/*static void _OnSoLanGiaoHopKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSoLanGiaoHopKillfocus();
} */
static int _OnSoLanGiaoHopCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnSoLanGiaoHopCheckValue();
} 
/*static void _OnCanNangChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnCanNangChange();
} */
/*static void _OnCanNangSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnCanNangSetfocus();} */ 
/*static void _OnCanNangKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnCanNangKillfocus();
} */
static int _OnCanNangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnCanNangCheckValue();
} 
/*static void _OnChieuCaoChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnChieuCaoChange();
} */
/*static void _OnChieuCaoSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnChieuCaoSetfocus();} */ 
/*static void _OnChieuCaoKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnChieuCaoKillfocus();
} */
static int _OnChieuCaoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnChieuCaoCheckValue();
} 
static void _OnNhieuSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnNhieuSelect();
}
static void _OnTrungBinhSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnTrungBinhSelect();
}
static void _OnItSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnItSelect();
}
/*static void _OnTimPhoiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTimPhoiChange();
} */
/*static void _OnTimPhoiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTimPhoiSetfocus();} */ 
/*static void _OnTimPhoiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTimPhoiKillfocus();
} */
static int _OnTimPhoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTimPhoiCheckValue();
} 
/*static void _OnTHPhaiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHPhaiChange();
} */
/*static void _OnTHPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHPhaiSetfocus();} */ 
/*static void _OnTHPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHPhaiKillfocus();
} */
static int _OnTHPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHPhaiCheckValue();
} 
/*static void _OnTHTraiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHTraiChange();
} */
/*static void _OnTHTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHTraiSetfocus();} */ 
/*static void _OnTHTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHTraiKillfocus();
} */
static int _OnTHTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTHTraiCheckValue();
} 
/*static void _OnMTPhaiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTPhaiChange();
} */
/*static void _OnMTPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTPhaiSetfocus();} */ 
/*static void _OnMTPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTPhaiKillfocus();
} */
static int _OnMTPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTPhaiCheckValue();
} 
/*static void _OnMTTraiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTTraiChange();
} */
/*static void _OnMTTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTTraiSetfocus();} */ 
/*static void _OnMTTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTTraiKillfocus();
} */
static int _OnMTTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMTTraiCheckValue();
} 
/*static void _OnTTPhaiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTPhaiChange();
} */
/*static void _OnTTPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTPhaiSetfocus();} */ 
/*static void _OnTTPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTPhaiKillfocus();
} */
static int _OnTTPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTPhaiCheckValue();
} 
/*static void _OnTTTraiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTTraiChange();
} */
/*static void _OnTTTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTTraiSetfocus();} */ 
/*static void _OnTTTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTTraiKillfocus();
} */
static int _OnTTTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTTTraiCheckValue();
} 
/*static void _OnDuongVatChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDuongVatChange();
} */
/*static void _OnDuongVatSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDuongVatSetfocus();} */ 
/*static void _OnDuongVatKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDuongVatKillfocus();
} */
static int _OnDuongVatCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnDuongVatCheckValue();
} 
/*static void _OnBiuChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnBiuChange();
} */
/*static void _OnBiuSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnBiuSetfocus();} */ 
/*static void _OnBiuKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnBiuKillfocus();
} */
static int _OnBiuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnBiuCheckValue();
} 
/*static void _OnFSHChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnFSHChange();
} */
/*static void _OnFSHSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnFSHSetfocus();} */ 
/*static void _OnFSHKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnFSHKillfocus();
} */
static int _OnFSHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnFSHCheckValue();
} 
/*static void _OnLHChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnLHChange();
} */
/*static void _OnLHSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnLHSetfocus();} */ 
/*static void _OnLHKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnLHKillfocus();
} */
static int _OnLHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnLHCheckValue();
} 
/*static void _OnProlactinChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnProlactinChange();
} */
/*static void _OnProlactinSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnProlactinSetfocus();} */ 
/*static void _OnProlactinKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnProlactinKillfocus();
} */
static int _OnProlactinCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnProlactinCheckValue();
} 
/*static void _OnTestosteronChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTestosteronChange();
} */
/*static void _OnTestosteronSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTestosteronSetfocus();} */ 
/*static void _OnTestosteronKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTestosteronKillfocus();
} */
static int _OnTestosteronCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTestosteronCheckValue();
} 
/*static void _OnTheTichChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTichChange();
} */
/*static void _OnTheTichSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTichSetfocus();} */ 
/*static void _OnTheTichKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTichKillfocus();
} */
static int _OnTheTichCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTichCheckValue();
} 
/*static void _OnMatDoChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDoChange();
} */
/*static void _OnMatDoSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDoSetfocus();} */ 
/*static void _OnMatDoKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDoKillfocus();
} */
static int _OnMatDoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDoCheckValue();
} 
/*static void _OnTienToiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToiChange();
} */
/*static void _OnTienToiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToiSetfocus();} */ 
/*static void _OnTienToiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToiKillfocus();
} */
static int _OnTienToiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToiCheckValue();
} 
/*static void _OnTaiCho1ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho1Change();
} */
/*static void _OnTaiCho1SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho1Setfocus();} */ 
/*static void _OnTaiCho1KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho1Killfocus();
} */
static int _OnTaiCho1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho1CheckValue();
} 
/*static void _OnHinhDangBT1ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT1Change();
} */
/*static void _OnHinhDangBT1SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT1Setfocus();} */ 
/*static void _OnHinhDangBT1KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT1Killfocus();
} */
static int _OnHinhDangBT1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT1CheckValue();
} 
/*static void _OnKhac1ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac1Change();
} */
/*static void _OnKhac1SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac1Setfocus();} */ 
/*static void _OnKhac1KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac1Killfocus();
} */
static int _OnKhac1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac1CheckValue();
} 
/*static void _OnTheTich2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTich2Change();
} */
/*static void _OnTheTich2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTich2Setfocus();} */ 
/*static void _OnTheTich2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTich2Killfocus();
} */
static int _OnTheTich2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTheTich2CheckValue();
} 
/*static void _OnMatDo2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDo2Change();
} */
/*static void _OnMatDo2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDo2Setfocus();} */ 
/*static void _OnMatDo2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDo2Killfocus();
} */
static int _OnMatDo2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnMatDo2CheckValue();
} 
/*static void _OnTienToi2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToi2Change();
} */
/*static void _OnTienToi2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToi2Setfocus();} */ 
/*static void _OnTienToi2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToi2Killfocus();
} */
static int _OnTienToi2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTienToi2CheckValue();
} 
/*static void _OnTaiCho2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho2Change();
} */
/*static void _OnTaiCho2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho2Setfocus();} */ 
/*static void _OnTaiCho2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho2Killfocus();
} */
static int _OnTaiCho2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnTaiCho2CheckValue();
} 
/*static void _OnHinhDangBT2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT2Change();
} */
/*static void _OnHinhDangBT2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT2Setfocus();} */ 
/*static void _OnHinhDangBT2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT2Killfocus();
} */
static int _OnHinhDangBT2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnHinhDangBT2CheckValue();
} 
/*static void _OnKhac2ChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac2Change();
} */
/*static void _OnKhac2SetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac2Setfocus();} */ 
/*static void _OnKhac2KillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac2Killfocus();
} */
static int _OnKhac2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKhac2CheckValue();
} 
/*static void _OnKetLuanChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKetLuanChange();
} */
/*static void _OnKetLuanSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKetLuanSetfocus();} */ 
/*static void _OnKetLuanKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKetLuanKillfocus();
} */
static int _OnKetLuanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Chong *)pWnd)->OnKetLuanCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Chong *pVw = (CHMS_BenhAnHiemMuon_Chong *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Chong *pVw = (CHMS_BenhAnHiemMuon_Chong *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Chong *pVw = (CHMS_BenhAnHiemMuon_Chong *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMS_BenhAnHiemMuon_ChongFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnAddHMS_BenhAnHiemMuon_Chong();
} 
static int _OnEditHMS_BenhAnHiemMuon_ChongFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnEditHMS_BenhAnHiemMuon_Chong();
} 
static int _OnDeleteHMS_BenhAnHiemMuon_ChongFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnDeleteHMS_BenhAnHiemMuon_Chong();
} 
static int _OnSaveHMS_BenhAnHiemMuon_ChongFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnSaveHMS_BenhAnHiemMuon_Chong();
} 
static int _OnCancelHMS_BenhAnHiemMuon_ChongFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Chong*)pWnd)->OnCancelHMS_BenhAnHiemMuon_Chong();
} 
CHMS_BenhAnHiemMuon_Chong::CHMS_BenhAnHiemMuon_Chong(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 995;
	SetDefaultValues();
}
CHMS_BenhAnHiemMuon_Chong::~CHMS_BenhAnHiemMuon_Chong(){
}
void CHMS_BenhAnHiemMuon_Chong::OnCreateComponents(){
	m_wndTinhDichDo1.Create(this, _T("Tinh \x64\x1ECB\x63h \x111\x1ED3 l\x1EA7n \x31"), 5, 755, 395, 930);
	m_wndTinhDichDo2.Create(this, _T("Tinh \x64\x1ECB\x63h \x111\x1ED3 l\x1EA7n \x32"), 405, 755, 804, 930);
	m_wndDaTungCoConLabel.Create(this, _T("\x110\xE3 t\x1EEBng \x63\xF3 \x63on"), 5, 35, 210, 60);
	m_wndDaTungCoCon.Create(this,215, 35, 295, 60); 
	m_wndTienSuNoiKhoaLabel.Create(this, _T("Ti\x1EC1n s\x1EED m\x1EAF\x63 \x62\x1EC7nh n\x1ED9i kho\x61"), 5, 65, 210, 90);
	m_wndTienSuNoiKhoa.Create(this,215, 65, 295, 90); 
	m_wndTieuDuong.Create(this, _T("Ti\x1EC3u \x111\x1B0\x1EDDng"), 305, 65, 405, 90);
	m_wndQuaiBi.Create(this, _T("Qu\x61i \x62\x1ECB"), 410, 65, 510, 90);
	m_wndLao.Create(this, _T("Lao"), 514, 65, 614, 90);
	m_wndKhacLabel.Create(this, _T("Kh\xE1\x63"), 75, 95, 210, 118);
	m_wndKhac.Create(this,215, 95, 793, 120); 
	m_wndTienSuNgoaiKhoaLabel.Create(this, _T("Ti\x1EC1n s\x1EED m\x1EAF\x63 \x62\x1EC7nh ngo\x1EA1i kho\x61"), 5, 125, 210, 150);
	m_wndTienSuNgoaiKhoa.Create(this,215, 125, 295, 150); 
	m_wndThoatViBenDui.Create(this, _T("Tho\xE1t v\x1ECB \x62\x1EB9n/\x111\xF9i"), 214, 155, 374, 180);
	m_wndTinhHoanLacCho.Create(this, _T("Tinh ho\xE0n l\x1EA1\x63 \x63h\x1ED7"), 379, 155, 538, 180);
	m_wndGianTinhMachTinh.Create(this, _T("Gi\xE3n t\x129nh m\x1EA1nh tinh"), 544, 155, 730, 180);
	m_wndHepNieuDao.Create(this, _T("H\x1EB9p ni\x1EC7u \x111\x1EA1o"), 214, 185, 374, 210);
	m_wndHypospadias.Create(this, _T("Hypospadias"), 379, 185, 538, 210);
	m_wndTranDichTH.Create(this, _T("Tr\xE0n \x64\x1ECB\x63h m\xE0ng tinh ho\xE0n"), 544, 185, 726, 210);
	m_wndNgoaiKhacLabel.Create(this, _T("Kh\xE1\x63"), 74, 216, 209, 241);
	m_wndNgoaiKhac.Create(this,215, 215, 793, 240); 
	m_wndTienSuSTDLabel.Create(this, _T("Ti\x1EC1n s\x1EED m\x1EAF\x63 \x62\x1EC7nh ST\x44"), 5, 245, 210, 270);
	m_wndTienSuSTD.Create(this,215, 245, 295, 270); 
	m_wndLau.Create(this, _T("L\x1EADu"), 300, 245, 380, 270);
	m_wndGiangMai.Create(this, _T("Giang mai"), 389, 245, 489, 270);
	m_wndChlamydia.Create(this, _T("Chlamydia"), 495, 245, 595, 270);
	m_wndSTDKhacLabel.Create(this, _T("Kh\xE1\x63"), 75, 275, 210, 300);
	m_wndSTDKhac.Create(this,215, 275, 793, 300); 
	m_wndThoiQuen.Create(this, _T("Th\xF3i qu\x65n"), 5, 305, 155, 330);
	m_wndHutThuocLabel.Create(this, _T("H\xFAt thu\x1ED1\x63"), 75, 335, 210, 360);
	m_wndHutThuoc.Create(this,215, 335, 295, 360); 
	m_wndHTSoLuongLabel.Create(this, _T("s\x1ED1 l\x1B0\x1EE3ng"), 300, 335, 420, 360);
	m_wndHTSoLuong.Create(this,425, 335, 505, 360); 
	m_wndUongRuouLabel.Create(this, _T("U\x1ED1ng r\x1B0\x1EE3u"), 75, 365, 210, 390);
	m_wndUongRuou.Create(this,215, 365, 295, 390); 
	m_wndURSoLuongLabel.Create(this, _T("s\x1ED1 l\x1B0\x1EE3ng"), 300, 365, 420, 390);
	m_wndURSoLuong.Create(this,425, 365, 505, 390); 
	m_wndHoatDongTD.Create(this, _T("Ho\x1EA1t \x111\x1ED9ng t\xECnh \x64\x1EE5\x63"), 5, 395, 211, 420);
	m_wndSongChungTXLabel.Create(this, _T("S\x1ED1ng \x63hung th\x1B0\x1EDDng \x78uy\xEAn"), 215, 395, 419, 420);
	m_wndSongChungTX.Create(this,425, 395, 505, 420); 
	m_wndSoLanGiaoHopLabel.Create(this, _T("S\x1ED1 l\x1EA7n gi\x61o h\x1EE3p"), 510, 395, 625, 420);
	m_wndSoLanGiaoHop.Create(this,630, 395, 795, 420); 
	m_wndKham.Create(this, _T("KH\xC1M"), 5, 425, 55, 450);
	m_wndTongQuat.Create(this, _T("T\x1ED5ng qu\xE1t"), 5, 455, 85, 480);
	m_wndCanNangLabel.Create(this, _T("\x43\xE2n n\x1EB7ng"), 90, 455, 210, 480);
	m_wndCanNang.Create(this,215, 455, 295, 480); 
	m_wndChieuCaoLabel.Create(this, _T("\x43hi\x1EC1u \x63\x61o"), 300, 454, 420, 479);
	m_wndChieuCao.Create(this,425, 454, 505, 479); 
	m_wndTinhTrangLong.Create(this, _T("T\xECnh tr\x1EA1ng l\xF4ng"), 5, 485, 210, 510);
	m_wndNhieu.Create(this, _T("Nhi\x1EC1u"), 215, 485, 295, 510);
	m_wndTrungBinh.Create(this, _T("Trung \x62\xECnh"), 301, 485, 381, 510);
	m_wndIt.Create(this, _T("It"), 386, 485, 466, 510);
	m_wndTimPhoiLabel.Create(this, _T("Tim ph\x1ED5i"), 4, 514, 209, 539);
	m_wndTimPhoi.Create(this,215, 515, 795, 540); 
	m_wndCoQuanSinhDuc.Create(this, _T("\x43\x1A1 qu\x61n sinh \x64\x1EE5\x63 :"), 5, 545, 155, 570);
	m_wndTinhHoan.Create(this, _T("Tinh ho\xE0n(th\x1EC3 t\xED\x63h)"), 5, 575, 126, 600);
	m_wndTHPhaiLabel.Create(this, _T("\x62\xEAn ph\x1EA3i"), 130, 575, 210, 600);
	m_wndTHPhai.Create(this,215, 575, 335, 600); 
	m_wndTHTraiLabel.Create(this, _T("\x62\xEAn tr\xE1i"), 340, 575, 420, 600);
	m_wndTHTrai.Create(this,424, 574, 544, 599); 
	m_wndMaoTinh.Create(this, _T("M\xE0o tinh"), 5, 605, 126, 630);
	m_wndMTPhaiLabel.Create(this, _T("\x62\xEAn ph\x1EA3i"), 130, 605, 210, 630);
	m_wndMTPhai.Create(this,215, 605, 335, 630); 
	m_wndMTTraiLabel.Create(this, _T("\x62\xEAn tr\xE1i"), 340, 605, 420, 630);
	m_wndMTTrai.Create(this,425, 605, 545, 630); 
	m_wndThungTinh.Create(this, _T("Th\x1EEBng tinh"), 5, 635, 126, 660);
	m_wndTTPhaiLabel.Create(this, _T("\x62\xEAn ph\x1EA3i"), 130, 635, 210, 660);
	m_wndTTPhai.Create(this,215, 635, 335, 660); 
	m_wndTTTraiLabel.Create(this, _T("\x62\xEAn tr\xE1i"), 340, 635, 420, 660);
	m_wndTTTrai.Create(this,425, 635, 545, 660); 
	m_wndDuongVatLabel.Create(this, _T("\x44\x1B0\x1A1ng v\x1EADt"), 5, 665, 126, 688);
	m_wndDuongVat.Create(this,130, 665, 334, 690); 
	m_wndBiuLabel.Create(this, _T("\x42\xECu"), 340, 665, 420, 690);
	m_wndBiu.Create(this,425, 665, 545, 690); 
	m_wndXetNghiem.Create(this, _T("\x58\xC9T NGHI\x1EC6M"), 5, 695, 155, 720);
	m_wndFSHLabel.Create(this, _T("FSH"), 5, 725, 125, 750);
	m_wndFSH.Create(this,130, 725, 210, 750); 
	m_wndLHLabel.Create(this, _T("LH"), 215, 725, 335, 750);
	m_wndLH.Create(this,340, 725, 420, 750); 
	m_wndProlactinLabel.Create(this, _T("Prolactin"), 425, 725, 545, 750);
	m_wndProlactin.Create(this,550, 725, 630, 750); 
	m_wndTestosteronLabel.Create(this, _T("Testosteron"), 639, 725, 719, 750);
	m_wndTestosteron.Create(this,724, 725, 804, 750); 
	m_wndTheTichLabel.Create(this, _T("Th\x1EC3 t\xED\x63h"), 10, 780, 90, 805);
	m_wndTheTich.Create(this,95, 780, 175, 805); 
	m_wndMatDoLabel.Create(this, _T("MatDo1"), 10, 810, 90, 835);
	m_wndMatDo.Create(this,95, 810, 175, 835); 
	m_wndDiDong.Create(this, _T("\x44i \x111\x1ED9ng"), 10, 840, 90, 865);
	m_wndTienToiLabel.Create(this, _T("Ti\x1EBFn t\x1EDBi"), 95, 840, 175, 865);
	m_wndTienToi.Create(this,180, 840, 240, 865); 
	m_wndTaiCho1Label.Create(this, _T("T\x1EA1i \x63h\x1ED7"), 245, 840, 325, 865);
	m_wndTaiCho1.Create(this,330, 840, 390, 865); 
	m_wndHinhDangBT1Label.Create(this, _T("H\xECnh \x64\x1EA1ng \x62\xECnh th\x1B0\x1EDDng"), 10, 870, 175, 895);
	m_wndHinhDangBT1.Create(this,180, 870, 390, 895); 
	m_wndKhac1Label.Create(this, _T("Kh\xE1\x63"), 10, 900, 90, 925);
	m_wndKhac1.Create(this,95, 900, 390, 925); 
	m_wndTheTich2Label.Create(this, _T("Th\x1EC3 t\xED\x63h"), 411, 779, 491, 804);
	m_wndTheTich2.Create(this,496, 779, 576, 804); 
	m_wndMatDo2Label.Create(this, _T("MatDo2"), 411, 809, 491, 834);
	m_wndMatDo2.Create(this,496, 809, 576, 834); 
	m_wndDiDong2.Create(this, _T("\x44i \x111\x1ED9ng"), 411, 839, 491, 864);
	m_wndTienToi2Label.Create(this, _T("Ti\x1EBFn t\x1EDBi"), 496, 839, 576, 864);
	m_wndTienToi2.Create(this,581, 839, 641, 864); 
	m_wndTaiCho2Label.Create(this, _T("T\x1EA1i \x63h\x1ED7"), 646, 839, 726, 864);
	m_wndTaiCho2.Create(this,731, 839, 791, 864); 
	m_wndHinhDangBT2Label.Create(this, _T("H\xECnh \x64\x1EA1ng \x62\xECnh th\x1B0\x1EDDng"), 411, 869, 576, 894);
	m_wndHinhDangBT2.Create(this,581, 869, 791, 894); 
	m_wndKhac2Label.Create(this, _T("Kh\xE1\x63"), 411, 899, 491, 924);
	m_wndKhac2.Create(this,496, 899, 791, 924); 
	m_wndKetLuanLabel.Create(this, _T("K\x1EBET LU\x1EACN"), 5, 935, 85, 960);
	m_wndKetLuan.Create(this,90, 935, 799, 985,1,0,1); 
	m_wndkhamchong.Create(this, _T("PH\x1EA6N KH\xC1M \x43H\x1ED2NG"), 305, 5, 438, 30);
	/*m_wndEdit.Create(this, _T("Edit"), 550, 995, 630, 1020);
	m_wndSave.Create(this, _T("Save"), 635, 995, 715, 1020);
	m_wndCancel.Create(this, _T("Cancel"), 720, 995, 800, 1020);*/

}
void CHMS_BenhAnHiemMuon_Chong::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDaTungCoCon.SetCheckValue(true);
	m_wndDaTungCoCon.LimitText(35);
	m_wndTienSuNoiKhoa.SetCheckValue(true);
	m_wndTienSuNoiKhoa.LimitText(35);
	//m_wndKhac.SetLimitText(35);
	//m_wndKhac.SetCheckValue(true);
	m_wndTienSuNgoaiKhoa.SetCheckValue(true);
	m_wndTienSuNgoaiKhoa.LimitText(35);
//	m_wndNgoaiKhac.SetLimitText(35);
	//m_wndNgoaiKhac.SetCheckValue(true);
	m_wndTienSuSTD.SetCheckValue(true);
	m_wndTienSuSTD.LimitText(35);
	//m_wndSTDKhac.SetLimitText(35);
//	m_wndSTDKhac.SetCheckValue(true);
	m_wndHutThuoc.SetCheckValue(true);
	m_wndHutThuoc.LimitText(35);
	m_wndHTSoLuong.SetLimitText(35);
	m_wndHTSoLuong.SetCheckValue(true);
	m_wndUongRuou.SetCheckValue(true);
	m_wndUongRuou.LimitText(35);
	m_wndURSoLuong.SetLimitText(35);
	m_wndURSoLuong.SetCheckValue(true);
	m_wndSongChungTX.SetCheckValue(true);
	m_wndSongChungTX.LimitText(35);
	m_wndSoLanGiaoHop.SetLimitText(35);
	m_wndSoLanGiaoHop.SetCheckValue(true);
	m_wndCanNang.SetLimitText(35);
	m_wndCanNang.SetCheckValue(true);
	m_wndChieuCao.SetLimitText(35);
	m_wndChieuCao.SetCheckValue(true);
	m_wndTimPhoi.SetLimitText(35);
	m_wndTimPhoi.SetCheckValue(true);
	m_wndTHPhai.SetLimitText(35);
	m_wndTHPhai.SetCheckValue(true);
	m_wndTHTrai.SetLimitText(35);
	m_wndTHTrai.SetCheckValue(true);
	m_wndMTPhai.SetLimitText(35);
	m_wndMTPhai.SetCheckValue(true);
	m_wndMTTrai.SetLimitText(35);
	m_wndMTTrai.SetCheckValue(true);
	m_wndTTPhai.SetLimitText(35);
	m_wndTTPhai.SetCheckValue(true);
	m_wndTTTrai.SetLimitText(35);
	m_wndTTTrai.SetCheckValue(true);
	m_wndDuongVat.SetLimitText(35);
	m_wndDuongVat.SetCheckValue(true);
	m_wndBiu.SetLimitText(35);
	m_wndBiu.SetCheckValue(true);
	m_wndFSH.SetLimitText(35);
	m_wndFSH.SetCheckValue(true);
	m_wndLH.SetLimitText(35);
	m_wndLH.SetCheckValue(true);
	m_wndProlactin.SetLimitText(35);
	m_wndProlactin.SetCheckValue(true);
	m_wndTestosteron.SetLimitText(35);
	m_wndTestosteron.SetCheckValue(true);
	m_wndTheTich.SetLimitText(35);
	m_wndTheTich.SetCheckValue(true);
	m_wndMatDo.SetLimitText(35);
	m_wndMatDo.SetCheckValue(true);
	m_wndTienToi.SetLimitText(35);
	m_wndTienToi.SetCheckValue(true);
	m_wndTaiCho1.SetLimitText(35);
	m_wndTaiCho1.SetCheckValue(true);
	m_wndHinhDangBT1.SetLimitText(35);
	m_wndHinhDangBT1.SetCheckValue(true);
	//m_wndKhac1.SetLimitText(35);
	//m_wndKhac1.SetCheckValue(true);
	m_wndTheTich2.SetLimitText(35);
	m_wndTheTich2.SetCheckValue(true);
	m_wndMatDo2.SetLimitText(35);
	m_wndMatDo2.SetCheckValue(true);
	m_wndTienToi2.SetLimitText(35);
	m_wndTienToi2.SetCheckValue(true);
	m_wndTaiCho2.SetLimitText(35);
	m_wndTaiCho2.SetCheckValue(true);
	m_wndHinhDangBT2.SetLimitText(35);
	m_wndHinhDangBT2.SetCheckValue(true);
	//m_wndKhac2.SetLimitText(35);
	//m_wndKhac2.SetCheckValue(true);
	//m_wndKetLuan.SetLimitText(35);
	//m_wndKetLuan.SetCheckValue(true);


	m_wndDaTungCoCon.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDaTungCoCon.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTienSuNoiKhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuNoiKhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTienSuNgoaiKhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuNgoaiKhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTienSuSTD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuSTD.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHutThuoc.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHutThuoc.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUongRuou.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUongRuou.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSongChungTX.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSongChungTX.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMS_BenhAnHiemMuon_Chong::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDaTungCoCon.SetEvent(WE_SELENDOK, _OnDaTungCoConSelendokFnc);
	//m_wndDaTungCoCon.SetEvent(WE_SETFOCUS, _OnDaTungCoConSetfocusFnc);
	//m_wndDaTungCoCon.SetEvent(WE_KILLFOCUS, _OnDaTungCoConKillfocusFnc);
	m_wndDaTungCoCon.SetEvent(WE_SELCHANGE, _OnDaTungCoConSelectChangeFnc);
	m_wndDaTungCoCon.SetEvent(WE_LOADDATA, _OnDaTungCoConLoadDataFnc);
	//m_wndDaTungCoCon.SetEvent(WE_ADDNEW, _OnDaTungCoConAddNewFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_SELENDOK, _OnTienSuNoiKhoaSelendokFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_SETFOCUS, _OnTienSuNoiKhoaSetfocusFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_KILLFOCUS, _OnTienSuNoiKhoaKillfocusFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_SELCHANGE, _OnTienSuNoiKhoaSelectChangeFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_LOADDATA, _OnTienSuNoiKhoaLoadDataFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_ADDNEW, _OnTienSuNoiKhoaAddNewFnc);
	m_wndTieuDuong.SetEvent(WE_CLICK, _OnTieuDuongSelectFnc);
	m_wndQuaiBi.SetEvent(WE_CLICK, _OnQuaiBiSelectFnc);
	m_wndLao.SetEvent(WE_CLICK, _OnLaoSelectFnc);
	//m_wndKhac.SetEvent(WE_CHANGE, _OnKhacChangeFnc);
	//m_wndKhac.SetEvent(WE_SETFOCUS, _OnKhacSetfocusFnc);
	//m_wndKhac.SetEvent(WE_KILLFOCUS, _OnKhacKillfocusFnc);
	m_wndKhac.SetEvent(WE_CHECKVALUE, _OnKhacCheckValueFnc);
	m_wndTienSuNgoaiKhoa.SetEvent(WE_SELENDOK, _OnTienSuNgoaiKhoaSelendokFnc);
	//m_wndTienSuNgoaiKhoa.SetEvent(WE_SETFOCUS, _OnTienSuNgoaiKhoaSetfocusFnc);
	//m_wndTienSuNgoaiKhoa.SetEvent(WE_KILLFOCUS, _OnTienSuNgoaiKhoaKillfocusFnc);
	m_wndTienSuNgoaiKhoa.SetEvent(WE_SELCHANGE, _OnTienSuNgoaiKhoaSelectChangeFnc);
	m_wndTienSuNgoaiKhoa.SetEvent(WE_LOADDATA, _OnTienSuNgoaiKhoaLoadDataFnc);
	//m_wndTienSuNgoaiKhoa.SetEvent(WE_ADDNEW, _OnTienSuNgoaiKhoaAddNewFnc);
	m_wndThoatViBenDui.SetEvent(WE_CLICK, _OnThoatViBenDuiSelectFnc);
	m_wndTinhHoanLacCho.SetEvent(WE_CLICK, _OnTinhHoanLacChoSelectFnc);
	m_wndGianTinhMachTinh.SetEvent(WE_CLICK, _OnGianTinhMachTinhSelectFnc);
	m_wndHepNieuDao.SetEvent(WE_CLICK, _OnHepNieuDaoSelectFnc);
	m_wndHypospadias.SetEvent(WE_CLICK, _OnHypospadiasSelectFnc);
	m_wndTranDichTH.SetEvent(WE_CLICK, _OnTranDichTHSelectFnc);
	//m_wndNgoaiKhac.SetEvent(WE_CHANGE, _OnNgoaiKhacChangeFnc);
	//m_wndNgoaiKhac.SetEvent(WE_SETFOCUS, _OnNgoaiKhacSetfocusFnc);
	//m_wndNgoaiKhac.SetEvent(WE_KILLFOCUS, _OnNgoaiKhacKillfocusFnc);
	m_wndNgoaiKhac.SetEvent(WE_CHECKVALUE, _OnNgoaiKhacCheckValueFnc);
	m_wndTienSuSTD.SetEvent(WE_SELENDOK, _OnTienSuSTDSelendokFnc);
	//m_wndTienSuSTD.SetEvent(WE_SETFOCUS, _OnTienSuSTDSetfocusFnc);
	//m_wndTienSuSTD.SetEvent(WE_KILLFOCUS, _OnTienSuSTDKillfocusFnc);
	m_wndTienSuSTD.SetEvent(WE_SELCHANGE, _OnTienSuSTDSelectChangeFnc);
	m_wndTienSuSTD.SetEvent(WE_LOADDATA, _OnTienSuSTDLoadDataFnc);
	//m_wndTienSuSTD.SetEvent(WE_ADDNEW, _OnTienSuSTDAddNewFnc);
	m_wndLau.SetEvent(WE_CLICK, _OnLauSelectFnc);
	m_wndGiangMai.SetEvent(WE_CLICK, _OnGiangMaiSelectFnc);
	m_wndChlamydia.SetEvent(WE_CLICK, _OnChlamydiaSelectFnc);
	//m_wndSTDKhac.SetEvent(WE_CHANGE, _OnSTDKhacChangeFnc);
	//m_wndSTDKhac.SetEvent(WE_SETFOCUS, _OnSTDKhacSetfocusFnc);
	//m_wndSTDKhac.SetEvent(WE_KILLFOCUS, _OnSTDKhacKillfocusFnc);
	m_wndSTDKhac.SetEvent(WE_CHECKVALUE, _OnSTDKhacCheckValueFnc);
	m_wndHutThuoc.SetEvent(WE_SELENDOK, _OnHutThuocSelendokFnc);
	//m_wndHutThuoc.SetEvent(WE_SETFOCUS, _OnHutThuocSetfocusFnc);
	//m_wndHutThuoc.SetEvent(WE_KILLFOCUS, _OnHutThuocKillfocusFnc);
	m_wndHutThuoc.SetEvent(WE_SELCHANGE, _OnHutThuocSelectChangeFnc);
	m_wndHutThuoc.SetEvent(WE_LOADDATA, _OnHutThuocLoadDataFnc);
	//m_wndHutThuoc.SetEvent(WE_ADDNEW, _OnHutThuocAddNewFnc);
	//m_wndHTSoLuong.SetEvent(WE_CHANGE, _OnHTSoLuongChangeFnc);
	//m_wndHTSoLuong.SetEvent(WE_SETFOCUS, _OnHTSoLuongSetfocusFnc);
	//m_wndHTSoLuong.SetEvent(WE_KILLFOCUS, _OnHTSoLuongKillfocusFnc);
	m_wndHTSoLuong.SetEvent(WE_CHECKVALUE, _OnHTSoLuongCheckValueFnc);
	m_wndUongRuou.SetEvent(WE_SELENDOK, _OnUongRuouSelendokFnc);
	//m_wndUongRuou.SetEvent(WE_SETFOCUS, _OnUongRuouSetfocusFnc);
	//m_wndUongRuou.SetEvent(WE_KILLFOCUS, _OnUongRuouKillfocusFnc);
	m_wndUongRuou.SetEvent(WE_SELCHANGE, _OnUongRuouSelectChangeFnc);
	m_wndUongRuou.SetEvent(WE_LOADDATA, _OnUongRuouLoadDataFnc);
	//m_wndUongRuou.SetEvent(WE_ADDNEW, _OnUongRuouAddNewFnc);
	//m_wndURSoLuong.SetEvent(WE_CHANGE, _OnURSoLuongChangeFnc);
	//m_wndURSoLuong.SetEvent(WE_SETFOCUS, _OnURSoLuongSetfocusFnc);
	//m_wndURSoLuong.SetEvent(WE_KILLFOCUS, _OnURSoLuongKillfocusFnc);
	m_wndURSoLuong.SetEvent(WE_CHECKVALUE, _OnURSoLuongCheckValueFnc);
	m_wndSongChungTX.SetEvent(WE_SELENDOK, _OnSongChungTXSelendokFnc);
	//m_wndSongChungTX.SetEvent(WE_SETFOCUS, _OnSongChungTXSetfocusFnc);
	//m_wndSongChungTX.SetEvent(WE_KILLFOCUS, _OnSongChungTXKillfocusFnc);
	m_wndSongChungTX.SetEvent(WE_SELCHANGE, _OnSongChungTXSelectChangeFnc);
	m_wndSongChungTX.SetEvent(WE_LOADDATA, _OnSongChungTXLoadDataFnc);
	//m_wndSongChungTX.SetEvent(WE_ADDNEW, _OnSongChungTXAddNewFnc);
	//m_wndSoLanGiaoHop.SetEvent(WE_CHANGE, _OnSoLanGiaoHopChangeFnc);
	//m_wndSoLanGiaoHop.SetEvent(WE_SETFOCUS, _OnSoLanGiaoHopSetfocusFnc);
	//m_wndSoLanGiaoHop.SetEvent(WE_KILLFOCUS, _OnSoLanGiaoHopKillfocusFnc);
	m_wndSoLanGiaoHop.SetEvent(WE_CHECKVALUE, _OnSoLanGiaoHopCheckValueFnc);
	//m_wndCanNang.SetEvent(WE_CHANGE, _OnCanNangChangeFnc);
	//m_wndCanNang.SetEvent(WE_SETFOCUS, _OnCanNangSetfocusFnc);
	//m_wndCanNang.SetEvent(WE_KILLFOCUS, _OnCanNangKillfocusFnc);
	m_wndCanNang.SetEvent(WE_CHECKVALUE, _OnCanNangCheckValueFnc);
	//m_wndChieuCao.SetEvent(WE_CHANGE, _OnChieuCaoChangeFnc);
	//m_wndChieuCao.SetEvent(WE_SETFOCUS, _OnChieuCaoSetfocusFnc);
	//m_wndChieuCao.SetEvent(WE_KILLFOCUS, _OnChieuCaoKillfocusFnc);
	m_wndChieuCao.SetEvent(WE_CHECKVALUE, _OnChieuCaoCheckValueFnc);
	m_wndNhieu.SetEvent(WE_CLICK, _OnNhieuSelectFnc);
	m_wndTrungBinh.SetEvent(WE_CLICK, _OnTrungBinhSelectFnc);
	m_wndIt.SetEvent(WE_CLICK, _OnItSelectFnc);
	//m_wndTimPhoi.SetEvent(WE_CHANGE, _OnTimPhoiChangeFnc);
	//m_wndTimPhoi.SetEvent(WE_SETFOCUS, _OnTimPhoiSetfocusFnc);
	//m_wndTimPhoi.SetEvent(WE_KILLFOCUS, _OnTimPhoiKillfocusFnc);
	m_wndTimPhoi.SetEvent(WE_CHECKVALUE, _OnTimPhoiCheckValueFnc);
	//m_wndTHPhai.SetEvent(WE_CHANGE, _OnTHPhaiChangeFnc);
	//m_wndTHPhai.SetEvent(WE_SETFOCUS, _OnTHPhaiSetfocusFnc);
	//m_wndTHPhai.SetEvent(WE_KILLFOCUS, _OnTHPhaiKillfocusFnc);
	m_wndTHPhai.SetEvent(WE_CHECKVALUE, _OnTHPhaiCheckValueFnc);
	//m_wndTHTrai.SetEvent(WE_CHANGE, _OnTHTraiChangeFnc);
	//m_wndTHTrai.SetEvent(WE_SETFOCUS, _OnTHTraiSetfocusFnc);
	//m_wndTHTrai.SetEvent(WE_KILLFOCUS, _OnTHTraiKillfocusFnc);
	m_wndTHTrai.SetEvent(WE_CHECKVALUE, _OnTHTraiCheckValueFnc);
	//m_wndMTPhai.SetEvent(WE_CHANGE, _OnMTPhaiChangeFnc);
	//m_wndMTPhai.SetEvent(WE_SETFOCUS, _OnMTPhaiSetfocusFnc);
	//m_wndMTPhai.SetEvent(WE_KILLFOCUS, _OnMTPhaiKillfocusFnc);
	m_wndMTPhai.SetEvent(WE_CHECKVALUE, _OnMTPhaiCheckValueFnc);
	//m_wndMTTrai.SetEvent(WE_CHANGE, _OnMTTraiChangeFnc);
	//m_wndMTTrai.SetEvent(WE_SETFOCUS, _OnMTTraiSetfocusFnc);
	//m_wndMTTrai.SetEvent(WE_KILLFOCUS, _OnMTTraiKillfocusFnc);
	m_wndMTTrai.SetEvent(WE_CHECKVALUE, _OnMTTraiCheckValueFnc);
	//m_wndTTPhai.SetEvent(WE_CHANGE, _OnTTPhaiChangeFnc);
	//m_wndTTPhai.SetEvent(WE_SETFOCUS, _OnTTPhaiSetfocusFnc);
	//m_wndTTPhai.SetEvent(WE_KILLFOCUS, _OnTTPhaiKillfocusFnc);
	m_wndTTPhai.SetEvent(WE_CHECKVALUE, _OnTTPhaiCheckValueFnc);
	//m_wndTTTrai.SetEvent(WE_CHANGE, _OnTTTraiChangeFnc);
	//m_wndTTTrai.SetEvent(WE_SETFOCUS, _OnTTTraiSetfocusFnc);
	//m_wndTTTrai.SetEvent(WE_KILLFOCUS, _OnTTTraiKillfocusFnc);
	m_wndTTTrai.SetEvent(WE_CHECKVALUE, _OnTTTraiCheckValueFnc);
	//m_wndDuongVat.SetEvent(WE_CHANGE, _OnDuongVatChangeFnc);
	//m_wndDuongVat.SetEvent(WE_SETFOCUS, _OnDuongVatSetfocusFnc);
	//m_wndDuongVat.SetEvent(WE_KILLFOCUS, _OnDuongVatKillfocusFnc);
	m_wndDuongVat.SetEvent(WE_CHECKVALUE, _OnDuongVatCheckValueFnc);
	//m_wndBiu.SetEvent(WE_CHANGE, _OnBiuChangeFnc);
	//m_wndBiu.SetEvent(WE_SETFOCUS, _OnBiuSetfocusFnc);
	//m_wndBiu.SetEvent(WE_KILLFOCUS, _OnBiuKillfocusFnc);
	m_wndBiu.SetEvent(WE_CHECKVALUE, _OnBiuCheckValueFnc);
	//m_wndFSH.SetEvent(WE_CHANGE, _OnFSHChangeFnc);
	//m_wndFSH.SetEvent(WE_SETFOCUS, _OnFSHSetfocusFnc);
	//m_wndFSH.SetEvent(WE_KILLFOCUS, _OnFSHKillfocusFnc);
	m_wndFSH.SetEvent(WE_CHECKVALUE, _OnFSHCheckValueFnc);
	//m_wndLH.SetEvent(WE_CHANGE, _OnLHChangeFnc);
	//m_wndLH.SetEvent(WE_SETFOCUS, _OnLHSetfocusFnc);
	//m_wndLH.SetEvent(WE_KILLFOCUS, _OnLHKillfocusFnc);
	m_wndLH.SetEvent(WE_CHECKVALUE, _OnLHCheckValueFnc);
	//m_wndProlactin.SetEvent(WE_CHANGE, _OnProlactinChangeFnc);
	//m_wndProlactin.SetEvent(WE_SETFOCUS, _OnProlactinSetfocusFnc);
	//m_wndProlactin.SetEvent(WE_KILLFOCUS, _OnProlactinKillfocusFnc);
	m_wndProlactin.SetEvent(WE_CHECKVALUE, _OnProlactinCheckValueFnc);
	//m_wndTestosteron.SetEvent(WE_CHANGE, _OnTestosteronChangeFnc);
	//m_wndTestosteron.SetEvent(WE_SETFOCUS, _OnTestosteronSetfocusFnc);
	//m_wndTestosteron.SetEvent(WE_KILLFOCUS, _OnTestosteronKillfocusFnc);
	m_wndTestosteron.SetEvent(WE_CHECKVALUE, _OnTestosteronCheckValueFnc);
	//m_wndTheTich.SetEvent(WE_CHANGE, _OnTheTichChangeFnc);
	//m_wndTheTich.SetEvent(WE_SETFOCUS, _OnTheTichSetfocusFnc);
	//m_wndTheTich.SetEvent(WE_KILLFOCUS, _OnTheTichKillfocusFnc);
	m_wndTheTich.SetEvent(WE_CHECKVALUE, _OnTheTichCheckValueFnc);
	//m_wndMatDo.SetEvent(WE_CHANGE, _OnMatDoChangeFnc);
	//m_wndMatDo.SetEvent(WE_SETFOCUS, _OnMatDoSetfocusFnc);
	//m_wndMatDo.SetEvent(WE_KILLFOCUS, _OnMatDoKillfocusFnc);
	m_wndMatDo.SetEvent(WE_CHECKVALUE, _OnMatDoCheckValueFnc);
	//m_wndTienToi.SetEvent(WE_CHANGE, _OnTienToiChangeFnc);
	//m_wndTienToi.SetEvent(WE_SETFOCUS, _OnTienToiSetfocusFnc);
	//m_wndTienToi.SetEvent(WE_KILLFOCUS, _OnTienToiKillfocusFnc);
	m_wndTienToi.SetEvent(WE_CHECKVALUE, _OnTienToiCheckValueFnc);
	//m_wndTaiCho1.SetEvent(WE_CHANGE, _OnTaiCho1ChangeFnc);
	//m_wndTaiCho1.SetEvent(WE_SETFOCUS, _OnTaiCho1SetfocusFnc);
	//m_wndTaiCho1.SetEvent(WE_KILLFOCUS, _OnTaiCho1KillfocusFnc);
	m_wndTaiCho1.SetEvent(WE_CHECKVALUE, _OnTaiCho1CheckValueFnc);
	//m_wndHinhDangBT1.SetEvent(WE_CHANGE, _OnHinhDangBT1ChangeFnc);
	//m_wndHinhDangBT1.SetEvent(WE_SETFOCUS, _OnHinhDangBT1SetfocusFnc);
	//m_wndHinhDangBT1.SetEvent(WE_KILLFOCUS, _OnHinhDangBT1KillfocusFnc);
	m_wndHinhDangBT1.SetEvent(WE_CHECKVALUE, _OnHinhDangBT1CheckValueFnc);
	//m_wndKhac1.SetEvent(WE_CHANGE, _OnKhac1ChangeFnc);
	//m_wndKhac1.SetEvent(WE_SETFOCUS, _OnKhac1SetfocusFnc);
	//m_wndKhac1.SetEvent(WE_KILLFOCUS, _OnKhac1KillfocusFnc);
	m_wndKhac1.SetEvent(WE_CHECKVALUE, _OnKhac1CheckValueFnc);
	//m_wndTheTich2.SetEvent(WE_CHANGE, _OnTheTich2ChangeFnc);
	//m_wndTheTich2.SetEvent(WE_SETFOCUS, _OnTheTich2SetfocusFnc);
	//m_wndTheTich2.SetEvent(WE_KILLFOCUS, _OnTheTich2KillfocusFnc);
	m_wndTheTich2.SetEvent(WE_CHECKVALUE, _OnTheTich2CheckValueFnc);
	//m_wndMatDo2.SetEvent(WE_CHANGE, _OnMatDo2ChangeFnc);
	//m_wndMatDo2.SetEvent(WE_SETFOCUS, _OnMatDo2SetfocusFnc);
	//m_wndMatDo2.SetEvent(WE_KILLFOCUS, _OnMatDo2KillfocusFnc);
	m_wndMatDo2.SetEvent(WE_CHECKVALUE, _OnMatDo2CheckValueFnc);
	//m_wndTienToi2.SetEvent(WE_CHANGE, _OnTienToi2ChangeFnc);
	//m_wndTienToi2.SetEvent(WE_SETFOCUS, _OnTienToi2SetfocusFnc);
	//m_wndTienToi2.SetEvent(WE_KILLFOCUS, _OnTienToi2KillfocusFnc);
	m_wndTienToi2.SetEvent(WE_CHECKVALUE, _OnTienToi2CheckValueFnc);
	//m_wndTaiCho2.SetEvent(WE_CHANGE, _OnTaiCho2ChangeFnc);
	//m_wndTaiCho2.SetEvent(WE_SETFOCUS, _OnTaiCho2SetfocusFnc);
	//m_wndTaiCho2.SetEvent(WE_KILLFOCUS, _OnTaiCho2KillfocusFnc);
	m_wndTaiCho2.SetEvent(WE_CHECKVALUE, _OnTaiCho2CheckValueFnc);
	//m_wndHinhDangBT2.SetEvent(WE_CHANGE, _OnHinhDangBT2ChangeFnc);
	//m_wndHinhDangBT2.SetEvent(WE_SETFOCUS, _OnHinhDangBT2SetfocusFnc);
	//m_wndHinhDangBT2.SetEvent(WE_KILLFOCUS, _OnHinhDangBT2KillfocusFnc);
	m_wndHinhDangBT2.SetEvent(WE_CHECKVALUE, _OnHinhDangBT2CheckValueFnc);
	//m_wndKhac2.SetEvent(WE_CHANGE, _OnKhac2ChangeFnc);
	//m_wndKhac2.SetEvent(WE_SETFOCUS, _OnKhac2SetfocusFnc);
	//m_wndKhac2.SetEvent(WE_KILLFOCUS, _OnKhac2KillfocusFnc);
	m_wndKhac2.SetEvent(WE_CHECKVALUE, _OnKhac2CheckValueFnc);
	//m_wndKetLuan.SetEvent(WE_CHANGE, _OnKetLuanChangeFnc);
	//m_wndKetLuan.SetEvent(WE_SETFOCUS, _OnKetLuanSetfocusFnc);
	//m_wndKetLuan.SetEvent(WE_KILLFOCUS, _OnKetLuanKillfocusFnc);
	m_wndKetLuan.SetEvent(WE_CHECKVALUE, _OnKetLuanCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMS_BenhAnHiemMuon_ChongFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMS_BenhAnHiemMuon_ChongFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMS_BenhAnHiemMuon_ChongFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMS_BenhAnHiemMuon_ChongFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMS_BenhAnHiemMuon_ChongFnc, 0, 'T', VK_CONTROL);
	
	GetDataToScreen();
	SetScrollSizes(MM_TEXT, CSize(700, 1250));
}
void CHMS_BenhAnHiemMuon_Chong::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDaTungCoCon.GetDlgCtrlID(), m_szDaTungCoConKey);
	DDX_TextEx(pDX, m_wndTienSuNoiKhoa.GetDlgCtrlID(), m_szTienSuNoiKhoaKey);
	DDX_Check(pDX, m_wndTieuDuong.GetDlgCtrlID(), m_bTieuDuong);
	DDX_Check(pDX, m_wndQuaiBi.GetDlgCtrlID(), m_bQuaiBi);
	DDX_Check(pDX, m_wndLao.GetDlgCtrlID(), m_bLao);
	DDX_Text(pDX, m_wndKhac.GetDlgCtrlID(), m_szKhac);
	DDX_TextEx(pDX, m_wndTienSuNgoaiKhoa.GetDlgCtrlID(), m_szTienSuNgoaiKhoaKey);
	DDX_Check(pDX, m_wndThoatViBenDui.GetDlgCtrlID(), m_bThoatViBenDui);
	DDX_Check(pDX, m_wndTinhHoanLacCho.GetDlgCtrlID(), m_bTinhHoanLacCho);
	DDX_Check(pDX, m_wndGianTinhMachTinh.GetDlgCtrlID(), m_bGianTinhMachTinh);
	DDX_Check(pDX, m_wndHepNieuDao.GetDlgCtrlID(), m_bHepNieuDao);
	DDX_Check(pDX, m_wndHypospadias.GetDlgCtrlID(), m_bHypospadias);
	DDX_Check(pDX, m_wndTranDichTH.GetDlgCtrlID(), m_bTranDichTH);
	DDX_Text(pDX, m_wndNgoaiKhac.GetDlgCtrlID(), m_szNgoaiKhac);
	DDX_TextEx(pDX, m_wndTienSuSTD.GetDlgCtrlID(), m_szTienSuSTDKey);
	DDX_Check(pDX, m_wndLau.GetDlgCtrlID(), m_bLau);
	DDX_Check(pDX, m_wndGiangMai.GetDlgCtrlID(), m_bGiangMai);
	DDX_Check(pDX, m_wndChlamydia.GetDlgCtrlID(), m_bChlamydia);
	DDX_Text(pDX, m_wndSTDKhac.GetDlgCtrlID(), m_szSTDKhac);
	DDX_TextEx(pDX, m_wndHutThuoc.GetDlgCtrlID(), m_szHutThuocKey);
	DDX_Text(pDX, m_wndHTSoLuong.GetDlgCtrlID(), m_szHTSoLuong);
	DDX_TextEx(pDX, m_wndUongRuou.GetDlgCtrlID(), m_szUongRuouKey);
	DDX_Text(pDX, m_wndURSoLuong.GetDlgCtrlID(), m_szURSoLuong);
	DDX_TextEx(pDX, m_wndSongChungTX.GetDlgCtrlID(), m_szSongChungTXKey);
	DDX_Text(pDX, m_wndSoLanGiaoHop.GetDlgCtrlID(), m_szSoLanGiaoHop);
	DDX_Text(pDX, m_wndCanNang.GetDlgCtrlID(), m_szCanNang);
	DDX_Text(pDX, m_wndChieuCao.GetDlgCtrlID(), m_szChieuCao);
	DDX_Check(pDX, m_wndNhieu.GetDlgCtrlID(), m_bNhieu);
	DDX_Check(pDX, m_wndTrungBinh.GetDlgCtrlID(), m_bTrungBinh);
	DDX_Check(pDX, m_wndIt.GetDlgCtrlID(), m_bIt);
	DDX_Text(pDX, m_wndTimPhoi.GetDlgCtrlID(), m_szTimPhoi);
	DDX_Text(pDX, m_wndTHPhai.GetDlgCtrlID(), m_szTHPhai);
	DDX_Text(pDX, m_wndTHTrai.GetDlgCtrlID(), m_szTHTrai);
	DDX_Text(pDX, m_wndMTPhai.GetDlgCtrlID(), m_szMTPhai);
	DDX_Text(pDX, m_wndMTTrai.GetDlgCtrlID(), m_szMTTrai);
	DDX_Text(pDX, m_wndTTPhai.GetDlgCtrlID(), m_szTTPhai);
	DDX_Text(pDX, m_wndTTTrai.GetDlgCtrlID(), m_szTTTrai);
	DDX_Text(pDX, m_wndDuongVat.GetDlgCtrlID(), m_szDuongVat);
	DDX_Text(pDX, m_wndBiu.GetDlgCtrlID(), m_szBiu);
	DDX_Text(pDX, m_wndFSH.GetDlgCtrlID(), m_szFSH);
	DDX_Text(pDX, m_wndLH.GetDlgCtrlID(), m_szLH);
	DDX_Text(pDX, m_wndProlactin.GetDlgCtrlID(), m_szProlactin);
	DDX_Text(pDX, m_wndTestosteron.GetDlgCtrlID(), m_szTestosteron);
	DDX_Text(pDX, m_wndTheTich.GetDlgCtrlID(), m_szTheTich);
	DDX_Text(pDX, m_wndMatDo.GetDlgCtrlID(), m_szMatDo);
	DDX_Text(pDX, m_wndTienToi.GetDlgCtrlID(), m_szTienToi);
	DDX_Text(pDX, m_wndTaiCho1.GetDlgCtrlID(), m_szTaiCho1);
	DDX_Text(pDX, m_wndHinhDangBT1.GetDlgCtrlID(), m_szHinhDangBT1);
	DDX_Text(pDX, m_wndKhac1.GetDlgCtrlID(), m_szKhac1);
	DDX_Text(pDX, m_wndTheTich2.GetDlgCtrlID(), m_szTheTich2);
	DDX_Text(pDX, m_wndMatDo2.GetDlgCtrlID(), m_szMatDo2);
	DDX_Text(pDX, m_wndTienToi2.GetDlgCtrlID(), m_szTienToi2);
	DDX_Text(pDX, m_wndTaiCho2.GetDlgCtrlID(), m_szTaiCho2);
	DDX_Text(pDX, m_wndHinhDangBT2.GetDlgCtrlID(), m_szHinhDangBT2);
	DDX_Text(pDX, m_wndKhac2.GetDlgCtrlID(), m_szKhac2);
	DDX_Text(pDX, m_wndKetLuan.GetDlgCtrlID(), m_szKetLuan);

}
void CHMS_BenhAnHiemMuon_Chong::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DaTungCoCon")] =  m_szDaTungCoConKey;
	m_jData[_T("TienSuNoiKhoa")] =  m_szTienSuNoiKhoaKey;
	m_jData[_T("TieuDuong")] =  m_bTieuDuong;
	m_jData[_T("QuaiBi")] =  m_bQuaiBi;
	m_jData[_T("Lao")] =  m_bLao;
	m_jData[_T("Khac")] =  m_szKhac;
	m_jData[_T("TienSuNgoaiKhoa")] =  m_szTienSuNgoaiKhoaKey;
	m_jData[_T("ThoatViBenDui")] =  m_bThoatViBenDui;
	m_jData[_T("TinhHoanLacCho")] =  m_bTinhHoanLacCho;
	m_jData[_T("GianTinhMachTinh")] =  m_bGianTinhMachTinh;
	m_jData[_T("HepNieuDao")] =  m_bHepNieuDao;
	m_jData[_T("Hypospadias")] =  m_bHypospadias;
	m_jData[_T("TranDichTH")] =  m_bTranDichTH;
	m_jData[_T("NgoaiKhac")] =  m_szNgoaiKhac;
	m_jData[_T("TienSuSTD")] =  m_szTienSuSTDKey;
	m_jData[_T("Lau")] =  m_bLau;
	m_jData[_T("GiangMai")] =  m_bGiangMai;
	m_jData[_T("Chlamydia")] =  m_bChlamydia;
	m_jData[_T("STDKhac")] =  m_szSTDKhac;
	m_jData[_T("HutThuoc")] =  m_szHutThuocKey;
	m_jData[_T("HTSoLuong")] =  m_szHTSoLuong;
	m_jData[_T("UongRuou")] =  m_szUongRuouKey;
	m_jData[_T("URSoLuong")] =  m_szURSoLuong;
	m_jData[_T("SongChungTX")] =  m_szSongChungTXKey;
	m_jData[_T("SoLanGiaoHop")] =  m_szSoLanGiaoHop;
	m_jData[_T("CanNang")] =  m_szCanNang;
	m_jData[_T("ChieuCao")] =  m_szChieuCao;
	m_jData[_T("Nhieu")] =  m_bNhieu;
	m_jData[_T("TrungBinh")] =  m_bTrungBinh;
	m_jData[_T("It")] =  m_bIt;
	m_jData[_T("TimPhoi")] =  m_szTimPhoi;
	m_jData[_T("THPhai")] =  m_szTHPhai;
	m_jData[_T("THTrai")] =  m_szTHTrai;
	m_jData[_T("MTPhai")] =  m_szMTPhai;
	m_jData[_T("MTTrai")] =  m_szMTTrai;
	m_jData[_T("TTPhai")] =  m_szTTPhai;
	m_jData[_T("TTTrai")] =  m_szTTTrai;
	m_jData[_T("DuongVat")] =  m_szDuongVat;
	m_jData[_T("Biu")] =  m_szBiu;
	m_jData[_T("FSH")] =  m_szFSH;
	m_jData[_T("LH")] =  m_szLH;
	m_jData[_T("Prolactin")] =  m_szProlactin;
	m_jData[_T("Testosteron")] =  m_szTestosteron;
	m_jData[_T("TheTich")] =  m_szTheTich;
	m_jData[_T("MatDo")] =  m_szMatDo;
	m_jData[_T("TienToi")] =  m_szTienToi;
	m_jData[_T("TaiCho1")] =  m_szTaiCho1;
	m_jData[_T("HinhDangBT1")] =  m_szHinhDangBT1;
	m_jData[_T("Khac1")] =  m_szKhac1;
	m_jData[_T("TheTich2")] =  m_szTheTich2;
	m_jData[_T("MatDo2")] =  m_szMatDo2;
	m_jData[_T("TienToi2")] =  m_szTienToi2;
	m_jData[_T("TaiCho2")] =  m_szTaiCho2;
	m_jData[_T("HinhDangBT2")] =  m_szHinhDangBT2;
	m_jData[_T("Khac2")] =  m_szKhac2;
	m_jData[_T("KetLuan")] =  m_szKetLuan;
	}
	else
	{
			
	m_jData[_T("DaTungCoCon")].GetValue(m_szDaTungCoConKey);
	m_jData[_T("TienSuNoiKhoa")].GetValue(m_szTienSuNoiKhoaKey);
	m_jData[_T("TieuDuong")].GetValue(m_bTieuDuong);
	m_jData[_T("QuaiBi")].GetValue(m_bQuaiBi);
	m_jData[_T("Lao")].GetValue(m_bLao);
	m_jData[_T("Khac")].GetValue(m_szKhac);
	m_jData[_T("TienSuNgoaiKhoa")].GetValue(m_szTienSuNgoaiKhoaKey);
	m_jData[_T("ThoatViBenDui")].GetValue(m_bThoatViBenDui);
	m_jData[_T("TinhHoanLacCho")].GetValue(m_bTinhHoanLacCho);
	m_jData[_T("GianTinhMachTinh")].GetValue(m_bGianTinhMachTinh);
	m_jData[_T("HepNieuDao")].GetValue(m_bHepNieuDao);
	m_jData[_T("Hypospadias")].GetValue(m_bHypospadias);
	m_jData[_T("TranDichTH")].GetValue(m_bTranDichTH);
	m_jData[_T("NgoaiKhac")].GetValue(m_szNgoaiKhac);
	m_jData[_T("TienSuSTD")].GetValue(m_szTienSuSTDKey);
	m_jData[_T("Lau")].GetValue(m_bLau);
	m_jData[_T("GiangMai")].GetValue(m_bGiangMai);
	m_jData[_T("Chlamydia")].GetValue(m_bChlamydia);
	m_jData[_T("STDKhac")].GetValue(m_szSTDKhac);
	m_jData[_T("HutThuoc")].GetValue(m_szHutThuocKey);
	m_jData[_T("HTSoLuong")].GetValue(m_szHTSoLuong);
	m_jData[_T("UongRuou")].GetValue(m_szUongRuouKey);
	m_jData[_T("URSoLuong")].GetValue(m_szURSoLuong);
	m_jData[_T("SongChungTX")].GetValue(m_szSongChungTXKey);
	m_jData[_T("SoLanGiaoHop")].GetValue(m_szSoLanGiaoHop);
	m_jData[_T("CanNang")].GetValue(m_szCanNang);
	m_jData[_T("ChieuCao")].GetValue(m_szChieuCao);
	m_jData[_T("Nhieu")].GetValue(m_bNhieu);
	m_jData[_T("TrungBinh")].GetValue(m_bTrungBinh);
	m_jData[_T("It")].GetValue(m_bIt);
	m_jData[_T("TimPhoi")].GetValue(m_szTimPhoi);
	m_jData[_T("THPhai")].GetValue(m_szTHPhai);
	m_jData[_T("THTrai")].GetValue(m_szTHTrai);
	m_jData[_T("MTPhai")].GetValue(m_szMTPhai);
	m_jData[_T("MTTrai")].GetValue(m_szMTTrai);
	m_jData[_T("TTPhai")].GetValue(m_szTTPhai);
	m_jData[_T("TTTrai")].GetValue(m_szTTTrai);
	m_jData[_T("DuongVat")].GetValue(m_szDuongVat);
	m_jData[_T("Biu")].GetValue(m_szBiu);
	m_jData[_T("FSH")].GetValue(m_szFSH);
	m_jData[_T("LH")].GetValue(m_szLH);
	m_jData[_T("Prolactin")].GetValue(m_szProlactin);
	m_jData[_T("Testosteron")].GetValue(m_szTestosteron);
	m_jData[_T("TheTich")].GetValue(m_szTheTich);
	m_jData[_T("MatDo")].GetValue(m_szMatDo);
	m_jData[_T("TienToi")].GetValue(m_szTienToi);
	m_jData[_T("TaiCho1")].GetValue(m_szTaiCho1);
	m_jData[_T("HinhDangBT1")].GetValue(m_szHinhDangBT1);
	m_jData[_T("Khac1")].GetValue(m_szKhac1);
	m_jData[_T("TheTich2")].GetValue(m_szTheTich2);
	m_jData[_T("MatDo2")].GetValue(m_szMatDo2);
	m_jData[_T("TienToi2")].GetValue(m_szTienToi2);
	m_jData[_T("TaiCho2")].GetValue(m_szTaiCho2);
	m_jData[_T("HinhDangBT2")].GetValue(m_szHinhDangBT2);
	m_jData[_T("Khac2")].GetValue(m_szKhac2);
	m_jData[_T("KetLuan")].GetValue(m_szKetLuan);
	}

}
void CHMS_BenhAnHiemMuon_Chong::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szData, tmpStr;
	szSQL.Format(_T("SELECT trim(hdi_husband||hdi_husband2) as husband FROM hms_doc_infertility WHERE hdi_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	_debug(_T("%s"), szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("husband"), tmpStr);
		szData.AppendFormat(_T("%s"), tmpStr);
		m_jData.Parse(szData);
		UpdateJson(FALSE);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}else
	{
		SetDefaultValues();
		SetMode(VM_ADD);
	}

}
void CHMS_BenhAnHiemMuon_Chong::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);

}
void CHMS_BenhAnHiemMuon_Chong::SetDefaultValues(){

	m_szDaTungCoConKey.Empty();
	m_szTienSuNoiKhoaKey.Empty();
	m_bTieuDuong=FALSE;
	m_bQuaiBi=FALSE;
	m_bLao=FALSE;
	m_szKhac.Empty();
	m_szTienSuNgoaiKhoaKey.Empty();
	m_bThoatViBenDui=FALSE;
	m_bTinhHoanLacCho=FALSE;
	m_bGianTinhMachTinh=FALSE;
	m_bHepNieuDao=FALSE;
	m_bHypospadias=FALSE;
	m_bTranDichTH=FALSE;
	m_szNgoaiKhac.Empty();
	m_szTienSuSTDKey.Empty();
	m_bLau=FALSE;
	m_bGiangMai=FALSE;
	m_bChlamydia=FALSE;
	m_szSTDKhac.Empty();
	m_szHutThuocKey.Empty();
	m_szHTSoLuong.Empty();
	m_szUongRuouKey.Empty();
	m_szURSoLuong.Empty();
	m_szSongChungTXKey.Empty();
	m_szSoLanGiaoHop.Empty();
	m_szCanNang.Empty();
	m_szChieuCao.Empty();
	m_bNhieu=FALSE;
	m_bTrungBinh=FALSE;
	m_bIt=FALSE;
	m_szTimPhoi.Empty();
	m_szTHPhai.Empty();
	m_szTHTrai.Empty();
	m_szMTPhai.Empty();
	m_szMTTrai.Empty();
	m_szTTPhai.Empty();
	m_szTTTrai.Empty();
	m_szDuongVat.Empty();
	m_szBiu.Empty();
	m_szFSH.Empty();
	m_szLH.Empty();
	m_szProlactin.Empty();
	m_szTestosteron.Empty();
	m_szTheTich.Empty();
	m_szMatDo.Empty();
	m_szTienToi.Empty();
	m_szTaiCho1.Empty();
	m_szHinhDangBT1.Empty();
	m_szKhac1.Empty();
	m_szTheTich2.Empty();
	m_szMatDo2.Empty();
	m_szTienToi2.Empty();
	m_szTaiCho2.Empty();
	m_szHinhDangBT2.Empty();
	m_szKhac2.Empty();
	m_szKetLuan.Empty();

}
int CHMS_BenhAnHiemMuon_Chong::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
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
void CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDaTungCoCon.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndDaTungCoCon.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnDaTungCoConAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTienSuNoiKhoa.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuNoiKhoa.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNoiKhoaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Chong::OnTieuDuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnQuaiBiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnLaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Chong::OnKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTienSuNgoaiKhoa.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuNgoaiKhoa.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuNgoaiKhoaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Chong::OnThoatViBenDuiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnTinhHoanLacChoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnGianTinhMachTinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnHepNieuDaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnHypospadiasSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnTranDichTHSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Chong::OnNgoaiKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnNgoaiKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnNgoaiKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnNgoaiKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTienSuSTD.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuSTD.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTienSuSTDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Chong::OnLauSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnGiangMaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnChlamydiaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Chong::OnSTDKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnSTDKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnSTDKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnSTDKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnHutThuocSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnHutThuocSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnHutThuocSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnHutThuocKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnHutThuocLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHutThuoc.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndHutThuoc.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnHutThuocAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHTSoLuongChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHTSoLuongSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHTSoLuongKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnHTSoLuongCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnUongRuouSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnUongRuouSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnUongRuouSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnUongRuouKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnUongRuouLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndUongRuou.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndUongRuou.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnUongRuouAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnURSoLuongChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnURSoLuongSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnURSoLuongKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnURSoLuongCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnSongChungTXSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Chong::OnSongChungTXSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Chong::OnSongChungTXSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Chong::OnSongChungTXKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Chong::OnSongChungTXLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSongChungTX.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndSongChungTX.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Chong::OnSongChungTXAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnSoLanGiaoHopChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnSoLanGiaoHopSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnSoLanGiaoHopKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnSoLanGiaoHopCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnCanNangChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnCanNangSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnCanNangKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnCanNangCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnChieuCaoChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnChieuCaoSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnChieuCaoKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnChieuCaoCheckValue(){
	return 0;
} 
	void CHMS_BenhAnHiemMuon_Chong::OnNhieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnTrungBinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Chong::OnItSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Chong::OnTimPhoiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTimPhoiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTimPhoiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTimPhoiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTHPhaiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTHPhaiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTHPhaiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTHPhaiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTHTraiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTHTraiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTHTraiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTHTraiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnMTPhaiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMTPhaiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMTPhaiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnMTPhaiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnMTTraiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMTTraiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMTTraiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnMTTraiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTTPhaiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTTPhaiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTTPhaiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTTPhaiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTTTraiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTTTraiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTTTraiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTTTraiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnDuongVatChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnDuongVatSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnDuongVatKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnDuongVatCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnBiuChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnBiuSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnBiuKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnBiuCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnFSHChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnFSHSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnFSHKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnFSHCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnLHChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnLHSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnLHKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnLHCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnProlactinChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnProlactinSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnProlactinKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnProlactinCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTestosteronChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTestosteronSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTestosteronKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTestosteronCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTichChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTichSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTichKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTheTichCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDoChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDoSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDoKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnMatDoCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTienToiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho1Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho1Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho1Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTaiCho1CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT1Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT1Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT1Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT1CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac1Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac1Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac1Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnKhac1CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTich2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTich2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTheTich2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTheTich2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDo2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDo2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnMatDo2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnMatDo2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToi2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToi2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTienToi2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTienToi2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnTaiCho2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnTaiCho2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnHinhDangBT2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac2Change(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac2Setfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKhac2Killfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnKhac2CheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Chong::OnKetLuanChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKetLuanSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Chong::OnKetLuanKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Chong::OnKetLuanCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Chong::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMS_BenhAnHiemMuon_Chong();
} 
void CHMS_BenhAnHiemMuon_Chong::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_BenhAnHiemMuon_Chong();
} 
void CHMS_BenhAnHiemMuon_Chong::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMS_BenhAnHiemMuon_Chong();
} 
int CHMS_BenhAnHiemMuon_Chong::OnAddHMS_BenhAnHiemMuon_Chong(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_BenhAnHiemMuon_Chong::OnEditHMS_BenhAnHiemMuon_Chong(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_BenhAnHiemMuon_Chong::OnDeleteHMS_BenhAnHiemMuon_Chong(){
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
 		OnCancelHMS_BenhAnHiemMuon_Chong();
 	}
	return 0;
}
int CHMS_BenhAnHiemMuon_Chong::OnSaveHMS_BenhAnHiemMuon_Chong(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if(!IsValidateData())
 		return -1;
	CString szSQL;
	CString szData;
	int ret = 0;
	GetScreenToData();
	m_jData.ToString(szData);
	
	int n =0;
	CString tmpStr, tmpStr2;
	tmpStr = szData;
	tmpStr2 = szData;

	if(tmpStr.GetLength()  < 2000)
	{
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', HDI_UPDATEDDATE = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" HDI_HUSBAND = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
	}else
	{
		tmpStr = szData.Mid(0, 2000);
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', HDI_UPDATEDDATE = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" HDI_HUSBAND = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);

		tmpStr2 = szData.Mid(2000, 2000);
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', HDI_UPDATEDDATE = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" HDI_HUSBAND2 = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr2, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
	}
	if(ret > 0)
		SetMode(VM_VIEW);
	else
		MessageBox(_T("Error"), 0, MB_ICONERROR);

	
 	return ret;
}
int CHMS_BenhAnHiemMuon_Chong::OnCancelHMS_BenhAnHiemMuon_Chong(){
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
int CHMS_BenhAnHiemMuon_Chong::OnHMS_BenhAnHiemMuon_ChongListLoadData(){
	return 0;
}

void CHMS_BenhAnHiemMuon_Chong::OnPrint()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_BENHANHIEMMUON_CHONG.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();
	if(m_szDaTungCoConKey == _T("1"))
		rptHeader->SetValue(_T("tiensuSTD"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("DaTungCoCon"), _T("Kh\xF4ng"));

	if(m_szTienSuNoiKhoaKey == _T("1"))
		rptHeader->SetValue(_T("TienSuNoiKhoa"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("TienSuNoiKhoa"), _T("Kh\xF4ng"));

	if(m_bTieuDuong)
		rptHeader->SetValue(_T("TieuDuong"), _T("X"));
	if(m_bQuaiBi)
		rptHeader->SetValue(_T("QuaiBi"), _T("X"));
	if(m_bLao)
		rptHeader->SetValue(_T("Lao"), _T("X"));
	rptHeader->SetValue(_T("Khac"), m_szKhac);

	if(m_szTienSuNgoaiKhoaKey == _T("1"))
		rptHeader->SetValue(_T("TienSuNgoaiKhoa"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("TienSuNgoaiKhoa"), _T("Kh\xF4ng"));

	if(m_bThoatViBenDui)
		rptHeader->SetValue(_T("ThoatViBenDui"), _T("X"));
	if(m_bTinhHoanLacCho)
		rptHeader->SetValue(_T("TinhHoanLacCho"), _T("X"));
	if(m_bGianTinhMachTinh)
		rptHeader->SetValue(_T("GianTinhMachTinh"), _T("X"));
	if(m_bHepNieuDao)
		rptHeader->SetValue(_T("HepNieuDao"), _T("X"));
	if(m_bHypospadias)
		rptHeader->SetValue(_T("Hypospadias"), _T("X"));
	if(m_bTranDichTH)
		rptHeader->SetValue(_T("TranDichTH"), _T("X"));
	rptHeader->SetValue(_T("NgoaiKhac"), m_szNgoaiKhac);

	if(m_szTienSuSTDKey == _T("1"))
		rptHeader->SetValue(_T("TienSuSTD"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("TienSuSTD"), _T("Kh\xF4ng"));
	if(m_bLau)
		rptHeader->SetValue(_T("Lau"), _T("X"));
	if(m_bGiangMai)
		rptHeader->SetValue(_T("GiangMai"), _T("X"));
	if(m_bChlamydia)
		rptHeader->SetValue(_T("Chlamydia"), _T("X"));
	rptHeader->SetValue(_T("STDKhac"), m_szSTDKhac);

	if(m_szHutThuocKey == _T("1"))
		rptHeader->SetValue(_T("HutThuoc"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("HutThuoc"), _T("Kh\xF4ng"));
	rptHeader->SetValue(_T("HTSoLuong"), m_szHTSoLuong);

	if(m_szUongRuouKey == _T("2"))
		rptHeader->SetValue(_T("UongRuou"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("UongRuou"), _T("Kh\xF4ng"));
	rptHeader->SetValue(_T("URSoLuong"), m_szURSoLuong);

	if(m_szSongChungTXKey == _T("1"))
		rptHeader->SetValue(_T("SongChungTX"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("SongChungTX"), _T("Kh\xF4ng"));

	rptHeader->SetValue(_T("SoLanGiaoHop"), m_szSoLanGiaoHop);


	rptHeader->SetValue(_T("CanNang"), m_szCanNang);
	rptHeader->SetValue(_T("ChieuCao"), m_szChieuCao);

	if(m_bNhieu)
		rptHeader->SetValue(_T("Nhieu"), _T("X"));
	if(m_bTrungBinh)
		rptHeader->SetValue(_T("TrungBinh"), _T("X"));
	if(m_bIt)
		rptHeader->SetValue(_T("It"), _T("X"));

	rptHeader->SetValue(_T("TimPhoi"), m_szTimPhoi);

	rptHeader->SetValue(_T("THPhai"), m_szTHPhai);
	rptHeader->SetValue(_T("THTrai"), m_szTHTrai);
	rptHeader->SetValue(_T("MTPhai"), m_szMTPhai);
	rptHeader->SetValue(_T("MTTrai"), m_szMTTrai);
	rptHeader->SetValue(_T("TTPhai"), m_szTTPhai);
	rptHeader->SetValue(_T("TTTrai"), m_szTTTrai);
	rptHeader->SetValue(_T("DuongVat"), m_szDuongVat);
	rptHeader->SetValue(_T("Biu"), m_szBiu);
	rptHeader->SetValue(_T("FSH"), m_szFSH);
	rptHeader->SetValue(_T("LH"), m_szLH);
	rptHeader->SetValue(_T("Prolactin"), m_szProlactin);
	rptHeader->SetValue(_T("Testosteron"), m_szTestosteron);


	rptHeader->SetValue(_T("TheTich"), m_szTheTich);
	rptHeader->SetValue(_T("MatDo"), m_szMatDo);
	rptHeader->SetValue(_T("TienToi"), m_szTienToi);
	rptHeader->SetValue(_T("TaiCho1"), m_szTaiCho1);
	rptHeader->SetValue(_T("HinhDangBT1"), m_szHinhDangBT1);
	rptHeader->SetValue(_T("Khac1"), m_szKhac1);
	

	rptHeader->SetValue(_T("TheTich2"), m_szTheTich2);
	rptHeader->SetValue(_T("MatDo2"), m_szMatDo2);
	rptHeader->SetValue(_T("TienToi2"), m_szTienToi2);
	rptHeader->SetValue(_T("TaiCho2"), m_szTaiCho2);
	rptHeader->SetValue(_T("HinhDangBT2"), m_szHinhDangBT2);
	rptHeader->SetValue(_T("Khac2"), m_szKhac2);
	
	rptHeader->SetValue(_T("KetLuan"), m_szKetLuan);

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
}