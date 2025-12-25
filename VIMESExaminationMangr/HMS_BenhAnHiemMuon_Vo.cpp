#include "HMS_BenhAnHiemMuon_Vo.h"
#include "MainFrm.h"
/*static void _OntgMongConChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OntgMongConChange();
} */
/*static void _OntgMongConSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OntgMongConSetfocus();} */ 
/*static void _OntgMongConKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OntgMongConKillfocus();
} */
static int _OntgMongConCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OntgMongConCheckValue();
} 
/*static void _OnPARAChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPARAChange();
} */
/*static void _OnPARASetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPARASetfocus();} */ 
/*static void _OnPARAKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPARAKillfocus();
} */
static int _OnPARACheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPARACheckValue();
} 
static void _OnTienSuNoiKhoaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Vo* )pWnd)->OnTienSuNoiKhoaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuNoiKhoaSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuNoiKhoaSelendok();
}
/*static void _OnTienSuNoiKhoaSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuNoiKhoaKillfocus();
}*/
/*static void _OnTienSuNoiKhoaKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuNoiKhoaKillfocus();
}*/
static long _OnTienSuNoiKhoaLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuNoiKhoaLoadData();
}
/*static void _OnTienSuNoiKhoaAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuNoiKhoaAddNew();
}*/
static void _OnTuyenGiapSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnTuyenGiapSelect();
}
static void _OnLaoSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnLaoSelect();
}
static void _OnTieuDuongSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnTieuDuongSelect();
}
static void _OnCaoHuyetApSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnCaoHuyetApSelect();
}
/*static void _OnKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhacChange();
} */
/*static void _OnKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhacSetfocus();} */ 
/*static void _OnKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhacKillfocus();
} */
static int _OnKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhacCheckValue();
} 
static void _OnTienSuPTBungSPKSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Vo* )pWnd)->OnTienSuPTBungSPKSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuPTBungSPKSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuPTBungSPKSelendok();
}
/*static void _OnTienSuPTBungSPKSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuPTBungSPKKillfocus();
}*/
/*static void _OnTienSuPTBungSPKKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuPTBungSPKKillfocus();
}*/
static long _OnTienSuPTBungSPKLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuPTBungSPKLoadData();
}
/*static void _OnTienSuPTBungSPKAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuPTBungSPKAddNew();
}*/
static void _OnVRTSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnVRTSelect();
}
static void _OnVPMSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnVPMSelect();
}
static void _OnMoDeSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnMoDeSelect();
}
static void _OnUBuongTrungSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnUBuongTrungSelect();
}
static void _OnChuaNgoaiTCSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnChuaNgoaiTCSelect();
}
static void _OnPTTaiVoiSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnPTTaiVoiSelect();
}
/*static void _OnPTKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPTKhacChange();
} */
/*static void _OnPTKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPTKhacSetfocus();} */ 
/*static void _OnPTKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPTKhacKillfocus();
} */
static int _OnPTKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnPTKhacCheckValue();
} 
static void _OnTienSuSTDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Vo* )pWnd)->OnTienSuSTDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTienSuSTDSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuSTDSelendok();
}
/*static void _OnTienSuSTDSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuSTDKillfocus();
}*/
/*static void _OnTienSuSTDKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuSTDKillfocus();
}*/
static long _OnTienSuSTDLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuSTDLoadData();
}
/*static void _OnTienSuSTDAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTienSuSTDAddNew();
}*/
static void _OnLauSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnLauSelect();
}
static void _OnGiangMaiSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnGiangMaiSelect();
}
static void _OnChlamydiaSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnChlamydiaSelect();
}
/*static void _OnSTDKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSTDKhacChange();
} */
/*static void _OnSTDKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSTDKhacSetfocus();} */ 
/*static void _OnSTDKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSTDKhacKillfocus();
} */
static int _OnSTDKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSTDKhacCheckValue();
} 
/*static void _OnNamKNDauChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNamKNDauChange();
} */
/*static void _OnNamKNDauSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNamKNDauSetfocus();} */ 
/*static void _OnNamKNDauKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNamKNDauKillfocus();
} */
static int _OnNamKNDauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNamKNDauCheckValue();
} 
static void _OnDeuSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnDeuSelect();
}
static void _OnKhongDeuSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnKhongDeuSelect();
}
/*static void _OnChuKyChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChuKyChange();
} */
/*static void _OnChuKySetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChuKySetfocus();} */ 
/*static void _OnChuKyKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChuKyKillfocus();
} */
static int _OnChuKyCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChuKyCheckValue();
} 
/*static void _OnNgayHKChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayHKChange();
} */
/*static void _OnNgayHKSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayHKSetfocus();} */ 
/*static void _OnNgayHKKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayHKKillfocus();
} */
static int _OnNgayHKCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayHKCheckValue();
} 
static void _OnThongKinhSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnThongKinhSelect();
}
/*static void _OnCanNangChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCanNangChange();
} */
/*static void _OnCanNangSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCanNangSetfocus();} */ 
/*static void _OnCanNangKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCanNangKillfocus();
} */
static int _OnCanNangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCanNangCheckValue();
} 
/*static void _OnChieuCaoChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChieuCaoChange();
} */
/*static void _OnChieuCaoSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChieuCaoSetfocus();} */ 
/*static void _OnChieuCaoKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChieuCaoKillfocus();
} */
static int _OnChieuCaoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnChieuCaoCheckValue();
} 
static void _OnNhieuSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnNhieuSelect();
}
static void _OnItSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnItSelect();
}
static void _OnTrungBinhSelectFnc(CWnd *pWnd){
	 ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnTrungBinhSelect();
}
/*static void _OnKhamKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhamKhacChange();
} */
/*static void _OnKhamKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhamKhacSetfocus();} */ 
/*static void _OnKhamKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhamKhacKillfocus();
} */
static int _OnKhamKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnKhamKhacCheckValue();
} 
static void _OnVuChaySuaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_BenhAnHiemMuon_Vo* )pWnd)->OnVuChaySuaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVuChaySuaSelendokFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVuChaySuaSelendok();
}
/*static void _OnVuChaySuaSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVuChaySuaKillfocus();
}*/
/*static void _OnVuChaySuaKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVuChaySuaKillfocus();
}*/
static long _OnVuChaySuaLoadDataFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVuChaySuaLoadData();
}
/*static void _OnVuChaySuaAddNewFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVuChaySuaAddNew();
}*/
/*static void _OnNgayDauKinhCuoiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayDauKinhCuoiChange();
} */
/*static void _OnNgayDauKinhCuoiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayDauKinhCuoiSetfocus();} */ 
/*static void _OnNgayDauKinhCuoiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayDauKinhCuoiKillfocus();
} */
static int _OnNgayDauKinhCuoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNgayDauKinhCuoiCheckValue();
} 
/*static void _OnAmDaoChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAmDaoChange();
} */
/*static void _OnAmDaoSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAmDaoSetfocus();} */ 
/*static void _OnAmDaoKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAmDaoKillfocus();
} */
static int _OnAmDaoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAmDaoCheckValue();
} 
/*static void _OnCoTuCungChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCoTuCungChange();
} */
/*static void _OnCoTuCungSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCoTuCungSetfocus();} */ 
/*static void _OnCoTuCungKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCoTuCungKillfocus();
} */
static int _OnCoTuCungCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCoTuCungCheckValue();
} 
/*static void _OnTuCungChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTuCungChange();
} */
/*static void _OnTuCungSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTuCungSetfocus();} */ 
/*static void _OnTuCungKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTuCungKillfocus();
} */
static int _OnTuCungCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTuCungCheckValue();
} 
/*static void _OnHaiPhanPhuChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnHaiPhanPhuChange();
} */
/*static void _OnHaiPhanPhuSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnHaiPhanPhuSetfocus();} */ 
/*static void _OnHaiPhanPhuKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnHaiPhanPhuKillfocus();
} */
static int _OnHaiPhanPhuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnHaiPhanPhuCheckValue();
} 
/*static void _OnAMHChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAMHChange();
} */
/*static void _OnAMHSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAMHSetfocus();} */ 
/*static void _OnAMHKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAMHKillfocus();
} */
static int _OnAMHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnAMHCheckValue();
} 
/*static void _OnFSHChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnFSHChange();
} */
/*static void _OnFSHSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnFSHSetfocus();} */ 
/*static void _OnFSHKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnFSHKillfocus();
} */
static int _OnFSHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnFSHCheckValue();
} 
/*static void _OnLHChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnLHChange();
} */
/*static void _OnLHSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnLHSetfocus();} */ 
/*static void _OnLHKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnLHKillfocus();
} */
static int _OnLHCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnLHCheckValue();
} 
/*static void _OnProlactinChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProlactinChange();
} */
/*static void _OnProlactinSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProlactinSetfocus();} */ 
/*static void _OnProlactinKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProlactinKillfocus();
} */
static int _OnProlactinCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProlactinCheckValue();
} 
/*static void _OnEstradiolChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnEstradiolChange();
} */
/*static void _OnEstradiolSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnEstradiolSetfocus();} */ 
/*static void _OnEstradiolKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnEstradiolKillfocus();
} */
static int _OnEstradiolCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnEstradiolCheckValue();
} 
/*static void _OnProgesteroneChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProgesteroneChange();
} */
/*static void _OnProgesteroneSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProgesteroneSetfocus();} */ 
/*static void _OnProgesteroneKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProgesteroneKillfocus();
} */
static int _OnProgesteroneCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnProgesteroneCheckValue();
} 
/*static void _OnTestosteronChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTestosteronChange();
} */
/*static void _OnTestosteronSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTestosteronSetfocus();} */ 
/*static void _OnTestosteronKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTestosteronKillfocus();
} */
static int _OnTestosteronCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnTestosteronCheckValue();
} 
/*static void _OnMatDoChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnMatDoChange();
} */
/*static void _OnMatDoSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnMatDoSetfocus();} */ 
/*static void _OnMatDoKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnMatDoKillfocus();
} */
static int _OnMatDoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnMatDoCheckValue();
} 
/*static void _OnDKtruocsauChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnDKtruocsauChange();
} */
/*static void _OnDKtruocsauSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnDKtruocsauSetfocus();} */ 
/*static void _OnDKtruocsauKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnDKtruocsauKillfocus();
} */
static int _OnDKtruocsauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnDKtruocsauCheckValue();
} 
/*static void _OnNMTCChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNMTCChange();
} */
/*static void _OnNMTCSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNMTCSetfocus();} */ 
/*static void _OnNMTCKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNMTCKillfocus();
} */
static int _OnNMTCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnNMTCCheckValue();
} 
/*static void _OnBTPhaiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTPhaiChange();
} */
/*static void _OnBTPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTPhaiSetfocus();} */ 
/*static void _OnBTPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTPhaiKillfocus();
} */
static int _OnBTPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTPhaiCheckValue();
} 
/*static void _OnBTTraiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTTraiChange();
} */
/*static void _OnBTTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTTraiSetfocus();} */ 
/*static void _OnBTTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTTraiKillfocus();
} */
static int _OnBTTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBTTraiCheckValue();
} 
/*static void _OnSoNangThuCapChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSoNangThuCapChange();
} */
/*static void _OnSoNangThuCapSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSoNangThuCapSetfocus();} */ 
/*static void _OnSoNangThuCapKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSoNangThuCapKillfocus();
} */
static int _OnSoNangThuCapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnSoNangThuCapCheckValue();
} 
/*static void _OnVTPhaiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTPhaiChange();
} */
/*static void _OnVTPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTPhaiSetfocus();} */ 
/*static void _OnVTPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTPhaiKillfocus();
} */
static int _OnVTPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTPhaiCheckValue();
} 
/*static void _OnVTTraiChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTTraiChange();
} */
/*static void _OnVTTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTTraiSetfocus();} */ 
/*static void _OnVTTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTTraiKillfocus();
} */
static int _OnVTTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnVTTraiCheckValue();
} 
/*static void _OnBatThuongKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBatThuongKhacChange();
} */
/*static void _OnBatThuongKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBatThuongKhacSetfocus();} */ 
/*static void _OnBatThuongKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBatThuongKhacKillfocus();
} */
static int _OnBatThuongKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBatThuongKhacCheckValue();
} 
/*static void _OnCottePChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCottePChange();
} */
/*static void _OnCottePSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCottePSetfocus();} */ 
/*static void _OnCottePKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCottePKillfocus();
} */
static int _OnCottePCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCottePCheckValue();
} 
/*static void _OnCotteTChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCotteTChange();
} */
/*static void _OnCotteTSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCotteTSetfocus();} */ 
/*static void _OnCotteTKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCotteTKillfocus();
} */
static int _OnCotteTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnCotteTCheckValue();
} 
/*static void _OnBuongTCChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBuongTCChange();
} */
/*static void _OnBuongTCSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBuongTCSetfocus();} */ 
/*static void _OnBuongTCKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBuongTCKillfocus();
} */
static int _OnBuongTCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnBuongTCCheckValue();
} 
/*static void _OnXQKhacChangeFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnXQKhacChange();
} */
/*static void _OnXQKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnXQKhacSetfocus();} */ 
/*static void _OnXQKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnXQKhacKillfocus();
} */
static int _OnXQKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_BenhAnHiemMuon_Vo *)pWnd)->OnXQKhacCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Vo *pVw = (CHMS_BenhAnHiemMuon_Vo *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Vo *pVw = (CHMS_BenhAnHiemMuon_Vo *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS_BenhAnHiemMuon_Vo *pVw = (CHMS_BenhAnHiemMuon_Vo *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMS_BenhAnHiemMuon_VoFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnAddHMS_BenhAnHiemMuon_Vo();
} 
static int _OnEditHMS_BenhAnHiemMuon_VoFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnEditHMS_BenhAnHiemMuon_Vo();
} 
static int _OnDeleteHMS_BenhAnHiemMuon_VoFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnDeleteHMS_BenhAnHiemMuon_Vo();
} 
static int _OnSaveHMS_BenhAnHiemMuon_VoFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnSaveHMS_BenhAnHiemMuon_Vo();
} 
static int _OnCancelHMS_BenhAnHiemMuon_VoFnc(CWnd *pWnd){
	 return ((CHMS_BenhAnHiemMuon_Vo*)pWnd)->OnCancelHMS_BenhAnHiemMuon_Vo();
} 
CHMS_BenhAnHiemMuon_Vo::CHMS_BenhAnHiemMuon_Vo(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 1124;
	SetDefaultValues();
}
CHMS_BenhAnHiemMuon_Vo::~CHMS_BenhAnHiemMuon_Vo(){
}
void CHMS_BenhAnHiemMuon_Vo::OnCreateComponents(){
	m_wndcontrol_0.Create(this, _T("H\x1ECEI \x42\x1EC6NH"), 5, 5, 125, 30);
	m_wndtgMongConLabel.Create(this, _T("Th\x1EDDi gi\x61n mong \x63on"), 5, 35, 170, 60);
	m_wndtgMongCon.Create(this,175, 35, 775, 60); 
	m_wndPARALabel.Create(this, _T("PARA"), 5, 65, 170, 90);
	m_wndPARA.Create(this,175, 65, 775, 90); 
	m_wndTienSuNoiKhoaLabel.Create(this, _T("Ti\x1EC1n s\x1EED m\x1EAF\x63 \x62\x1EC7nh n\x1ED9i kho\x61"), 5, 95, 170, 120);
	m_wndTienSuNoiKhoa.Create(this,175, 95, 316, 120); 
	m_wndTuyenGiap.Create(this, _T("Tuy\x1EBFn gi\xE1p"), 175, 125, 316, 150);
	m_wndLao.Create(this, _T("Lao"), 320, 125, 420, 150);
	m_wndTieuDuong.Create(this, _T("Ti\x1EC3u \x110\x1B0\x1EDDng"), 580, 125, 730, 150);
	m_wndCaoHuyetAp.Create(this, _T("\x43\x61o huy\x1EBFt \xE1p"), 425, 125, 575, 150);
	m_wndKhac.Create(this,175, 155, 775, 180); 
	m_wndTienSuPTBungSPKLabel.Create(this, _T("Ti\x1EC1n s\x1EED PT \x62\x1EE5ng v\xE0 SPK"), 4, 185, 169, 210);
	m_wndTienSuPTBungSPK.Create(this,175, 185, 315, 210); 
	m_wndVRT.Create(this, _T("M\x1ED5 VRT"), 175, 215, 315, 240);
	m_wndVPM.Create(this, _T("M\x1ED5 VPM"), 320, 215, 460, 242);
	m_wndMoDe.Create(this, _T("M\x1ED5 \x111\x1EBB"), 465, 217, 595, 242);
	m_wndUBuongTrung.Create(this, _T("U \x62u\x1ED3ng tr\x1EE9ng"), 599, 218, 729, 243);
	m_wndChuaNgoaiTC.Create(this, _T("\x43h\x1EED\x61 ngo\xE0i t\x1EED \x63ung"), 175, 245, 375, 270);
	m_wndPTTaiVoi.Create(this, _T("PT t\x1EA1i t\x61i v\xF2i"), 465, 245, 675, 270);
	m_wndPTKhac.Create(this,175, 275, 775, 300); 
	m_wndTienSuSTDLabel.Create(this, _T("Ti\x1EC1n s\x1EED m\x1EAF\x63 \x62\x1EC7nh ST\x44"), 5, 305, 170, 330);
	m_wndTienSuSTD.Create(this,175, 305, 315, 330); 
	m_wndLau.Create(this, _T("L\x1EADu"), 175, 335, 275, 360);
	m_wndGiangMai.Create(this, _T("Giang Mai"), 280, 335, 380, 360);
	m_wndChlamydia.Create(this, _T("Chlamydia"), 385, 335, 485, 360);
	m_wndSTDKhac.Create(this,575, 335, 775, 360); 
	m_wndPhuKhoaLabel.Create(this, _T("Ph\x1EE5 kho\x61"), 6, 365, 171, 390);
	m_wndNamKNDau.Create(this,175, 395, 255, 420); 
	m_wndDeu.Create(this, _T("\x110\x1EC1u"), 260, 397, 340, 422);
	m_wndKhongDeu.Create(this, _T("Kh\xF4ng \x111\x1EC1u"), 345, 398, 509, 423);
	m_wndChuKy.Create(this,175, 425, 255, 450); 
	m_wndNgayHK.Create(this,430, 425, 510, 450); 
	m_wndThongKinh.Create(this, _T("Th\x1ED1ng kinh"), 515, 425, 635, 450);
	m_wndKham.Create(this, _T("KH\xC1M"), 5, 460, 85, 485);
	m_wndTongQuat.Create(this, _T("T\x1ED5ng qu\xE1t"), 5, 490, 85, 515);
	m_wndCanNangLabel.Create(this, _T("\x43\xE2n n\x1EB7ng"), 90, 490, 170, 515);
	m_wndCanNang.Create(this,175, 490, 255, 515); 
	m_wndChieuCaoLabel.Create(this, _T("\x43hi\x1EC1u \x63\x61o"), 260, 490, 340, 515);
	m_wndChieuCao.Create(this,345, 490, 425, 515); 
	m_wndTinhTrangLong.Create(this, _T("T\xECnh tr\x1EA1ng l\xF4ng"), 5, 520, 170, 545);
	m_wndNhieu.Create(this, _T("Nhi\x1EC1u"), 175, 520, 255, 545);
	m_wndIt.Create(this, _T("It"), 260, 520, 340, 545);
	m_wndTrungBinh.Create(this, _T("Trung \x62\xECnh"), 345, 520, 465, 545);
	m_wndKhamKhacLabel.Create(this, _T("Kh\xE1\x63"), 5, 550, 170, 575);
	m_wndKhamKhac.Create(this,175, 550, 775, 575); 
	m_wndVuChaySuaLabel.Create(this, _T("V\xFA \x63h\x1EA3y s\x1EEF\x61"), 6, 580, 171, 605);
	m_wndVuChaySua.Create(this,175, 580, 316, 605); 
	m_wndPK.Create(this, _T("Ph\x1EE5 kho\x61"), 5, 610, 85, 635);
	m_wndNgayDauKinhCuoiLabel.Create(this, _T("Ng\xE0y \x111\x1EA7u kinh \x63u\x1ED1i"), 5, 640, 170, 665);
	m_wndNgayDauKinhCuoi.Create(this,175, 640, 255, 665); 
	m_wndAmDaoLabel.Create(this, _T("\xC2m \x111\x1EA1o"), 90, 669, 170, 694);
	m_wndAmDao.Create(this,175, 669, 435, 694); 
	m_wndCoTuCungLabel.Create(this, _T("\x43\x1ED5 t\x1EED \x63ung"), 440, 669, 530, 694);
	m_wndCoTuCung.Create(this,535, 669, 775, 694); 
	m_wndTuCungLabel.Create(this, _T("T\x1EED \x63ung"), 90, 700, 170, 725);
	m_wndTuCung.Create(this,175, 700, 435, 725); 
	m_wndHaiPhanPhuLabel.Create(this, _T("H\x61i ph\x1EA7n ph\x1EE5"), 440, 700, 530, 725);
	m_wndHaiPhanPhu.Create(this,535, 700, 775, 725); 
	m_wndKhacLabel.Create(this, _T("Kh\xE1\x63"), 5, 155, 170, 180);
	m_wndSPKKhacLabel.Create(this, _T("Kh\xE1\x63"), 5, 274, 85, 299);
	m_wndNgayKNDau.Create(this, _T("N\x103m \x63\xF3 kinh l\x1EA7n \x111\x1EA7u"), 5, 395, 170, 420);
	m_wndXetNghiem.Create(this, _T("\x58\xC9T NGHI\x1EC6M"), 5, 730, 170, 755);
	m_wndAMHLabel.Create(this, _T("AMH"), 90, 760, 170, 785);
	m_wndAMH.Create(this,175, 760, 255, 785); 
	m_wndFSHLabel.Create(this, _T("FSH"), 260, 760, 350, 785);
	m_wndFSH.Create(this,355, 760, 435, 785); 
	m_wndLHLabel.Create(this, _T("LH"), 440, 760, 530, 785);
	m_wndLH.Create(this,535, 760, 605, 785); 
	m_wndProlactinLabel.Create(this, _T("Prolactin"), 610, 760, 690, 785);
	m_wndProlactin.Create(this,695, 760, 775, 785); 
	m_wndEstradiolLabel.Create(this, _T("Estradiol"), 90, 790, 170, 815);
	m_wndEstradiol.Create(this,175, 790, 255, 815); 
	m_wndProgesteroneLabel.Create(this, _T("Progesterone"), 260, 790, 350, 815);
	m_wndProgesterone.Create(this,355, 790, 435, 815); 
	m_wndTestosteronLabel.Create(this, _T("Testosteron"), 440, 790, 530, 815);
	m_wndTestosteron.Create(this,535, 790, 605, 815); 
	m_wndSieuAmPhuKhoa.Create(this, _T("Si\xEAu \xE2m ph\x1EE5 kho\x61"), 5, 820, 170, 845);
	m_wndTC.Create(this, _T("TC"), 51, 850, 84, 875);
	m_wndMatDoLabel.Create(this, _T("M\x1EADt \x111\x1ED9"), 90, 850, 170, 875);
	m_wndMatDo.Create(this,175, 850, 255, 875); 
	m_wndDKtruocsauLabel.Create(this, _T("\x44K tr\x1B0\x1EDB\x63 s\x61u"), 260, 850, 350, 875);
	m_wndDKtruocsau.Create(this,355, 850, 435, 875); 
	m_wndNMTCLabel.Create(this, _T("NMTC"), 440, 850, 530, 875);
	m_wndNMTC.Create(this,535, 850, 605, 875); 
	m_wndBTPhaiLabel.Create(this, _T("BT Ph\x1EA3i"), 90, 880, 170, 905);
	m_wndBTPhai.Create(this,175, 880, 255, 905); 
	m_wndBTTraiLabel.Create(this, _T("BT Tr\xE1i"), 260, 880, 350, 905);
	m_wndBTTrai.Create(this,355, 880, 435, 905); 
	m_wndSoNangThuCapLabel.Create(this, _T("S\x1ED1 n\x61ng th\x1EE9 \x63\x1EA5p"), 440, 880, 605, 905);
	m_wndSoNangThuCap.Create(this,610, 878, 690, 903); 
	m_wndVTPhaiLabel.Create(this, _T("VT Ph\x1EA3i"), 90, 910, 170, 935);
	m_wndVTPhai.Create(this,175, 910, 255, 935); 
	m_wndVTTraiLabel.Create(this, _T("VT Tr\xE1i"), 260, 910, 350, 935);
	m_wndVTTrai.Create(this,355, 910, 435, 935); 
	m_wndBatThuongKhacLabel.Create(this, _T("\x42\x1EA5t th\x1B0\x1EDDng"), 90, 940, 170, 965);
	m_wndBatThuongKhac.Create(this,175, 940, 775, 965); 
	m_wndXQTuCungVoiTrung.Create(this, _T("\x58Q t\x1EED \x63ung v\xF2i tr\x1EE9ng"), 5, 970, 170, 995);
	m_wndCottePLabel.Create(this, _T("CotteP"), 175, 970, 255, 995);
	m_wndCotteP.Create(this,260, 970, 340, 995); 
	m_wndCotteTLabel.Create(this, _T("CotteT"), 345, 970, 425, 995);
	m_wndCotteT.Create(this,430, 970, 510, 995); 
	m_wndBuongTCLabel.Create(this, _T("\x42u\x1ED3ng T\x43"), 515, 970, 595, 995);
	m_wndBuongTC.Create(this,600, 970, 680, 995); 
	m_wndXQKhacLabel.Create(this, _T("Kh\xE1\x63"), 5, 1000, 170, 1025);
	m_wndXQKhac.Create(this,175, 1000, 775, 1025); 
	m_wndChuKyLabel.Create(this, _T("\x43hu k\x1EF3"), 75, 425, 155, 450);
	m_wndSoNgayHKLabel.Create(this, _T("S\x1ED1 ng\xE0y h\xE0nh kinh"), 260, 425, 427, 450);
	m_wndSTDKhacLabel.Create(this, _T("Kh\xE1\x63"), 490, 335, 570, 360);

}
void CHMS_BenhAnHiemMuon_Vo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndtgMongCon.SetLimitText(64);
	m_wndtgMongCon.SetCheckValue(true);
	m_wndPARA.SetLimitText(254);
	m_wndPARA.SetCheckValue(true);
	m_wndTienSuNoiKhoa.SetCheckValue(false);
	m_wndTienSuNoiKhoa.LimitText(254);
	//m_wndKhac.SetLimitText(1024);
	//m_wndKhac.SetCheckValue(true);
	m_wndTienSuPTBungSPK.SetCheckValue(false);
	m_wndTienSuPTBungSPK.LimitText(254);
	//m_wndPTKhac.SetLimitText(1024);
	//m_wndPTKhac.SetCheckValue(true);
	m_wndTienSuSTD.SetCheckValue(false);
	m_wndTienSuSTD.LimitText(254);
	//m_wndSTDKhac.SetLimitText(1024);
	//m_wndSTDKhac.SetCheckValue(true);
	m_wndNamKNDau.SetLimitText(1024);
	m_wndNamKNDau.SetCheckValue(true);
	m_wndChuKy.SetLimitText(1024);
	m_wndChuKy.SetCheckValue(true);
	m_wndNgayHK.SetLimitText(1024);
	m_wndNgayHK.SetCheckValue(true);
	m_wndCanNang.SetLimitText(35);
	m_wndCanNang.SetCheckValue(true);
	m_wndChieuCao.SetLimitText(35);
	m_wndChieuCao.SetCheckValue(true);
	//m_wndKhamKhac.SetLimitText(35);
	//m_wndKhamKhac.SetCheckValue(true);
	m_wndVuChaySua.SetCheckValue(true);
	m_wndVuChaySua.LimitText(35);
	m_wndNgayDauKinhCuoi.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayDauKinhCuoi.SetCheckValue(true);
	m_wndAmDao.SetLimitText(35);
	m_wndAmDao.SetCheckValue(true);
	m_wndCoTuCung.SetLimitText(35);
	m_wndCoTuCung.SetCheckValue(true);
	m_wndTuCung.SetLimitText(35);
	m_wndTuCung.SetCheckValue(true);
	m_wndHaiPhanPhu.SetLimitText(35);
	m_wndHaiPhanPhu.SetCheckValue(true);
	m_wndAMH.SetLimitText(35);
	m_wndAMH.SetCheckValue(true);
	m_wndFSH.SetLimitText(35);
	m_wndFSH.SetCheckValue(true);
	m_wndLH.SetLimitText(35);
	m_wndLH.SetCheckValue(true);
	m_wndProlactin.SetLimitText(35);
	m_wndProlactin.SetCheckValue(true);
	m_wndEstradiol.SetLimitText(35);
	m_wndEstradiol.SetCheckValue(true);
	m_wndProgesterone.SetLimitText(35);
	m_wndProgesterone.SetCheckValue(true);
	m_wndTestosteron.SetLimitText(35);
	m_wndTestosteron.SetCheckValue(true);
	m_wndMatDo.SetLimitText(35);
	m_wndMatDo.SetCheckValue(true);
	m_wndDKtruocsau.SetLimitText(35);
	m_wndDKtruocsau.SetCheckValue(true);
	m_wndNMTC.SetLimitText(35);
	m_wndNMTC.SetCheckValue(true);
	m_wndBTPhai.SetLimitText(35);
	m_wndBTPhai.SetCheckValue(true);
	m_wndBTTrai.SetLimitText(35);
	m_wndBTTrai.SetCheckValue(true);
	m_wndSoNangThuCap.SetLimitText(35);
	m_wndSoNangThuCap.SetCheckValue(true);
	m_wndVTPhai.SetLimitText(35);
	m_wndVTPhai.SetCheckValue(true);
	m_wndVTTrai.SetLimitText(35);
	m_wndVTTrai.SetCheckValue(true);
	//m_wndBatThuongKhac.SetLimitText(35);
	//m_wndBatThuongKhac.SetCheckValue(true);
	m_wndCotteP.SetLimitText(35);
	m_wndCotteP.SetCheckValue(true);
	m_wndCotteT.SetLimitText(35);
	m_wndCotteT.SetCheckValue(true);
	m_wndBuongTC.SetLimitText(35);
	m_wndBuongTC.SetCheckValue(true);
	//m_wndXQKhac.SetCheckValue(true);

	m_wndTienSuPTBungSPK.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuPTBungSPK.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTienSuSTD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuSTD.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndVuChaySua.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVuChaySua.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTienSuNoiKhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTienSuNoiKhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMS_BenhAnHiemMuon_Vo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndtgMongCon.SetEvent(WE_CHANGE, _OntgMongConChangeFnc);
	//m_wndtgMongCon.SetEvent(WE_SETFOCUS, _OntgMongConSetfocusFnc);
	//m_wndtgMongCon.SetEvent(WE_KILLFOCUS, _OntgMongConKillfocusFnc);
	m_wndtgMongCon.SetEvent(WE_CHECKVALUE, _OntgMongConCheckValueFnc);
	//m_wndPARA.SetEvent(WE_CHANGE, _OnPARAChangeFnc);
	//m_wndPARA.SetEvent(WE_SETFOCUS, _OnPARASetfocusFnc);
	//m_wndPARA.SetEvent(WE_KILLFOCUS, _OnPARAKillfocusFnc);
	m_wndPARA.SetEvent(WE_CHECKVALUE, _OnPARACheckValueFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_SELENDOK, _OnTienSuNoiKhoaSelendokFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_SETFOCUS, _OnTienSuNoiKhoaSetfocusFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_KILLFOCUS, _OnTienSuNoiKhoaKillfocusFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_SELCHANGE, _OnTienSuNoiKhoaSelectChangeFnc);
	m_wndTienSuNoiKhoa.SetEvent(WE_LOADDATA, _OnTienSuNoiKhoaLoadDataFnc);
	//m_wndTienSuNoiKhoa.SetEvent(WE_ADDNEW, _OnTienSuNoiKhoaAddNewFnc);
	m_wndTuyenGiap.SetEvent(WE_CLICK, _OnTuyenGiapSelectFnc);
	m_wndLao.SetEvent(WE_CLICK, _OnLaoSelectFnc);
	m_wndTieuDuong.SetEvent(WE_CLICK, _OnTieuDuongSelectFnc);
	m_wndCaoHuyetAp.SetEvent(WE_CLICK, _OnCaoHuyetApSelectFnc);
	//m_wndKhac.SetEvent(WE_CHANGE, _OnKhacChangeFnc);
	//m_wndKhac.SetEvent(WE_SETFOCUS, _OnKhacSetfocusFnc);
	//m_wndKhac.SetEvent(WE_KILLFOCUS, _OnKhacKillfocusFnc);
	m_wndKhac.SetEvent(WE_CHECKVALUE, _OnKhacCheckValueFnc);
	m_wndTienSuPTBungSPK.SetEvent(WE_SELENDOK, _OnTienSuPTBungSPKSelendokFnc);
	//m_wndTienSuPTBungSPK.SetEvent(WE_SETFOCUS, _OnTienSuPTBungSPKSetfocusFnc);
	//m_wndTienSuPTBungSPK.SetEvent(WE_KILLFOCUS, _OnTienSuPTBungSPKKillfocusFnc);
	m_wndTienSuPTBungSPK.SetEvent(WE_SELCHANGE, _OnTienSuPTBungSPKSelectChangeFnc);
	m_wndTienSuPTBungSPK.SetEvent(WE_LOADDATA, _OnTienSuPTBungSPKLoadDataFnc);
	//m_wndTienSuPTBungSPK.SetEvent(WE_ADDNEW, _OnTienSuPTBungSPKAddNewFnc);
	m_wndVRT.SetEvent(WE_CLICK, _OnVRTSelectFnc);
	m_wndVPM.SetEvent(WE_CLICK, _OnVPMSelectFnc);
	m_wndMoDe.SetEvent(WE_CLICK, _OnMoDeSelectFnc);
	m_wndUBuongTrung.SetEvent(WE_CLICK, _OnUBuongTrungSelectFnc);
	m_wndChuaNgoaiTC.SetEvent(WE_CLICK, _OnChuaNgoaiTCSelectFnc);
	m_wndPTTaiVoi.SetEvent(WE_CLICK, _OnPTTaiVoiSelectFnc);
	//m_wndPTKhac.SetEvent(WE_CHANGE, _OnPTKhacChangeFnc);
	//m_wndPTKhac.SetEvent(WE_SETFOCUS, _OnPTKhacSetfocusFnc);
	//m_wndPTKhac.SetEvent(WE_KILLFOCUS, _OnPTKhacKillfocusFnc);
	m_wndPTKhac.SetEvent(WE_CHECKVALUE, _OnPTKhacCheckValueFnc);
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
	//m_wndNamKNDau.SetEvent(WE_CHANGE, _OnNamKNDauChangeFnc);
	//m_wndNamKNDau.SetEvent(WE_SETFOCUS, _OnNamKNDauSetfocusFnc);
	//m_wndNamKNDau.SetEvent(WE_KILLFOCUS, _OnNamKNDauKillfocusFnc);
	m_wndNamKNDau.SetEvent(WE_CHECKVALUE, _OnNamKNDauCheckValueFnc);
	m_wndDeu.SetEvent(WE_CLICK, _OnDeuSelectFnc);
	m_wndKhongDeu.SetEvent(WE_CLICK, _OnKhongDeuSelectFnc);
	//m_wndChuKy.SetEvent(WE_CHANGE, _OnChuKyChangeFnc);
	//m_wndChuKy.SetEvent(WE_SETFOCUS, _OnChuKySetfocusFnc);
	//m_wndChuKy.SetEvent(WE_KILLFOCUS, _OnChuKyKillfocusFnc);
	m_wndChuKy.SetEvent(WE_CHECKVALUE, _OnChuKyCheckValueFnc);
	//m_wndNgayHK.SetEvent(WE_CHANGE, _OnNgayHKChangeFnc);
	//m_wndNgayHK.SetEvent(WE_SETFOCUS, _OnNgayHKSetfocusFnc);
	//m_wndNgayHK.SetEvent(WE_KILLFOCUS, _OnNgayHKKillfocusFnc);
	m_wndNgayHK.SetEvent(WE_CHECKVALUE, _OnNgayHKCheckValueFnc);
	m_wndThongKinh.SetEvent(WE_CLICK, _OnThongKinhSelectFnc);
	//m_wndCanNang.SetEvent(WE_CHANGE, _OnCanNangChangeFnc);
	//m_wndCanNang.SetEvent(WE_SETFOCUS, _OnCanNangSetfocusFnc);
	//m_wndCanNang.SetEvent(WE_KILLFOCUS, _OnCanNangKillfocusFnc);
	m_wndCanNang.SetEvent(WE_CHECKVALUE, _OnCanNangCheckValueFnc);
	//m_wndChieuCao.SetEvent(WE_CHANGE, _OnChieuCaoChangeFnc);
	//m_wndChieuCao.SetEvent(WE_SETFOCUS, _OnChieuCaoSetfocusFnc);
	//m_wndChieuCao.SetEvent(WE_KILLFOCUS, _OnChieuCaoKillfocusFnc);
	m_wndChieuCao.SetEvent(WE_CHECKVALUE, _OnChieuCaoCheckValueFnc);
	m_wndNhieu.SetEvent(WE_CLICK, _OnNhieuSelectFnc);
	m_wndIt.SetEvent(WE_CLICK, _OnItSelectFnc);
	m_wndTrungBinh.SetEvent(WE_CLICK, _OnTrungBinhSelectFnc);
	//m_wndKhamKhac.SetEvent(WE_CHANGE, _OnKhamKhacChangeFnc);
	//m_wndKhamKhac.SetEvent(WE_SETFOCUS, _OnKhamKhacSetfocusFnc);
	//m_wndKhamKhac.SetEvent(WE_KILLFOCUS, _OnKhamKhacKillfocusFnc);
	m_wndKhamKhac.SetEvent(WE_CHECKVALUE, _OnKhamKhacCheckValueFnc);
	m_wndVuChaySua.SetEvent(WE_SELENDOK, _OnVuChaySuaSelendokFnc);
	//m_wndVuChaySua.SetEvent(WE_SETFOCUS, _OnVuChaySuaSetfocusFnc);
	//m_wndVuChaySua.SetEvent(WE_KILLFOCUS, _OnVuChaySuaKillfocusFnc);
	m_wndVuChaySua.SetEvent(WE_SELCHANGE, _OnVuChaySuaSelectChangeFnc);
	m_wndVuChaySua.SetEvent(WE_LOADDATA, _OnVuChaySuaLoadDataFnc);
	//m_wndVuChaySua.SetEvent(WE_ADDNEW, _OnVuChaySuaAddNewFnc);
	//m_wndNgayDauKinhCuoi.SetEvent(WE_CHANGE, _OnNgayDauKinhCuoiChangeFnc);
	//m_wndNgayDauKinhCuoi.SetEvent(WE_SETFOCUS, _OnNgayDauKinhCuoiSetfocusFnc);
	//m_wndNgayDauKinhCuoi.SetEvent(WE_KILLFOCUS, _OnNgayDauKinhCuoiKillfocusFnc);
	m_wndNgayDauKinhCuoi.SetEvent(WE_CHECKVALUE, _OnNgayDauKinhCuoiCheckValueFnc);
	//m_wndAmDao.SetEvent(WE_CHANGE, _OnAmDaoChangeFnc);
	//m_wndAmDao.SetEvent(WE_SETFOCUS, _OnAmDaoSetfocusFnc);
	//m_wndAmDao.SetEvent(WE_KILLFOCUS, _OnAmDaoKillfocusFnc);
	m_wndAmDao.SetEvent(WE_CHECKVALUE, _OnAmDaoCheckValueFnc);
	//m_wndCoTuCung.SetEvent(WE_CHANGE, _OnCoTuCungChangeFnc);
	//m_wndCoTuCung.SetEvent(WE_SETFOCUS, _OnCoTuCungSetfocusFnc);
	//m_wndCoTuCung.SetEvent(WE_KILLFOCUS, _OnCoTuCungKillfocusFnc);
	m_wndCoTuCung.SetEvent(WE_CHECKVALUE, _OnCoTuCungCheckValueFnc);
	//m_wndTuCung.SetEvent(WE_CHANGE, _OnTuCungChangeFnc);
	//m_wndTuCung.SetEvent(WE_SETFOCUS, _OnTuCungSetfocusFnc);
	//m_wndTuCung.SetEvent(WE_KILLFOCUS, _OnTuCungKillfocusFnc);
	m_wndTuCung.SetEvent(WE_CHECKVALUE, _OnTuCungCheckValueFnc);
	//m_wndHaiPhanPhu.SetEvent(WE_CHANGE, _OnHaiPhanPhuChangeFnc);
	//m_wndHaiPhanPhu.SetEvent(WE_SETFOCUS, _OnHaiPhanPhuSetfocusFnc);
	//m_wndHaiPhanPhu.SetEvent(WE_KILLFOCUS, _OnHaiPhanPhuKillfocusFnc);
	m_wndHaiPhanPhu.SetEvent(WE_CHECKVALUE, _OnHaiPhanPhuCheckValueFnc);
	//m_wndAMH.SetEvent(WE_CHANGE, _OnAMHChangeFnc);
	//m_wndAMH.SetEvent(WE_SETFOCUS, _OnAMHSetfocusFnc);
	//m_wndAMH.SetEvent(WE_KILLFOCUS, _OnAMHKillfocusFnc);
	m_wndAMH.SetEvent(WE_CHECKVALUE, _OnAMHCheckValueFnc);
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
	//m_wndEstradiol.SetEvent(WE_CHANGE, _OnEstradiolChangeFnc);
	//m_wndEstradiol.SetEvent(WE_SETFOCUS, _OnEstradiolSetfocusFnc);
	//m_wndEstradiol.SetEvent(WE_KILLFOCUS, _OnEstradiolKillfocusFnc);
	m_wndEstradiol.SetEvent(WE_CHECKVALUE, _OnEstradiolCheckValueFnc);
	//m_wndProgesterone.SetEvent(WE_CHANGE, _OnProgesteroneChangeFnc);
	//m_wndProgesterone.SetEvent(WE_SETFOCUS, _OnProgesteroneSetfocusFnc);
	//m_wndProgesterone.SetEvent(WE_KILLFOCUS, _OnProgesteroneKillfocusFnc);
	m_wndProgesterone.SetEvent(WE_CHECKVALUE, _OnProgesteroneCheckValueFnc);
	//m_wndTestosteron.SetEvent(WE_CHANGE, _OnTestosteronChangeFnc);
	//m_wndTestosteron.SetEvent(WE_SETFOCUS, _OnTestosteronSetfocusFnc);
	//m_wndTestosteron.SetEvent(WE_KILLFOCUS, _OnTestosteronKillfocusFnc);
	m_wndTestosteron.SetEvent(WE_CHECKVALUE, _OnTestosteronCheckValueFnc);
	//m_wndMatDo.SetEvent(WE_CHANGE, _OnMatDoChangeFnc);
	//m_wndMatDo.SetEvent(WE_SETFOCUS, _OnMatDoSetfocusFnc);
	//m_wndMatDo.SetEvent(WE_KILLFOCUS, _OnMatDoKillfocusFnc);
	m_wndMatDo.SetEvent(WE_CHECKVALUE, _OnMatDoCheckValueFnc);
	//m_wndDKtruocsau.SetEvent(WE_CHANGE, _OnDKtruocsauChangeFnc);
	//m_wndDKtruocsau.SetEvent(WE_SETFOCUS, _OnDKtruocsauSetfocusFnc);
	//m_wndDKtruocsau.SetEvent(WE_KILLFOCUS, _OnDKtruocsauKillfocusFnc);
	m_wndDKtruocsau.SetEvent(WE_CHECKVALUE, _OnDKtruocsauCheckValueFnc);
	//m_wndNMTC.SetEvent(WE_CHANGE, _OnNMTCChangeFnc);
	//m_wndNMTC.SetEvent(WE_SETFOCUS, _OnNMTCSetfocusFnc);
	//m_wndNMTC.SetEvent(WE_KILLFOCUS, _OnNMTCKillfocusFnc);
	m_wndNMTC.SetEvent(WE_CHECKVALUE, _OnNMTCCheckValueFnc);
	//m_wndBTPhai.SetEvent(WE_CHANGE, _OnBTPhaiChangeFnc);
	//m_wndBTPhai.SetEvent(WE_SETFOCUS, _OnBTPhaiSetfocusFnc);
	//m_wndBTPhai.SetEvent(WE_KILLFOCUS, _OnBTPhaiKillfocusFnc);
	m_wndBTPhai.SetEvent(WE_CHECKVALUE, _OnBTPhaiCheckValueFnc);
	//m_wndBTTrai.SetEvent(WE_CHANGE, _OnBTTraiChangeFnc);
	//m_wndBTTrai.SetEvent(WE_SETFOCUS, _OnBTTraiSetfocusFnc);
	//m_wndBTTrai.SetEvent(WE_KILLFOCUS, _OnBTTraiKillfocusFnc);
	m_wndBTTrai.SetEvent(WE_CHECKVALUE, _OnBTTraiCheckValueFnc);
	//m_wndSoNangThuCap.SetEvent(WE_CHANGE, _OnSoNangThuCapChangeFnc);
	//m_wndSoNangThuCap.SetEvent(WE_SETFOCUS, _OnSoNangThuCapSetfocusFnc);
	//m_wndSoNangThuCap.SetEvent(WE_KILLFOCUS, _OnSoNangThuCapKillfocusFnc);
	m_wndSoNangThuCap.SetEvent(WE_CHECKVALUE, _OnSoNangThuCapCheckValueFnc);
	//m_wndVTPhai.SetEvent(WE_CHANGE, _OnVTPhaiChangeFnc);
	//m_wndVTPhai.SetEvent(WE_SETFOCUS, _OnVTPhaiSetfocusFnc);
	//m_wndVTPhai.SetEvent(WE_KILLFOCUS, _OnVTPhaiKillfocusFnc);
	m_wndVTPhai.SetEvent(WE_CHECKVALUE, _OnVTPhaiCheckValueFnc);
	//m_wndVTTrai.SetEvent(WE_CHANGE, _OnVTTraiChangeFnc);
	//m_wndVTTrai.SetEvent(WE_SETFOCUS, _OnVTTraiSetfocusFnc);
	//m_wndVTTrai.SetEvent(WE_KILLFOCUS, _OnVTTraiKillfocusFnc);
	m_wndVTTrai.SetEvent(WE_CHECKVALUE, _OnVTTraiCheckValueFnc);
	//m_wndBatThuongKhac.SetEvent(WE_CHANGE, _OnBatThuongKhacChangeFnc);
	//m_wndBatThuongKhac.SetEvent(WE_SETFOCUS, _OnBatThuongKhacSetfocusFnc);
	//m_wndBatThuongKhac.SetEvent(WE_KILLFOCUS, _OnBatThuongKhacKillfocusFnc);
	m_wndBatThuongKhac.SetEvent(WE_CHECKVALUE, _OnBatThuongKhacCheckValueFnc);
	//m_wndCotteP.SetEvent(WE_CHANGE, _OnCottePChangeFnc);
	//m_wndCotteP.SetEvent(WE_SETFOCUS, _OnCottePSetfocusFnc);
	//m_wndCotteP.SetEvent(WE_KILLFOCUS, _OnCottePKillfocusFnc);
	m_wndCotteP.SetEvent(WE_CHECKVALUE, _OnCottePCheckValueFnc);
	//m_wndCotteT.SetEvent(WE_CHANGE, _OnCotteTChangeFnc);
	//m_wndCotteT.SetEvent(WE_SETFOCUS, _OnCotteTSetfocusFnc);
	//m_wndCotteT.SetEvent(WE_KILLFOCUS, _OnCotteTKillfocusFnc);
	m_wndCotteT.SetEvent(WE_CHECKVALUE, _OnCotteTCheckValueFnc);
	//m_wndBuongTC.SetEvent(WE_CHANGE, _OnBuongTCChangeFnc);
	//m_wndBuongTC.SetEvent(WE_SETFOCUS, _OnBuongTCSetfocusFnc);
	//m_wndBuongTC.SetEvent(WE_KILLFOCUS, _OnBuongTCKillfocusFnc);
	m_wndBuongTC.SetEvent(WE_CHECKVALUE, _OnBuongTCCheckValueFnc);
	//m_wndXQKhac.SetEvent(WE_CHANGE, _OnXQKhacChangeFnc);
	//m_wndXQKhac.SetEvent(WE_SETFOCUS, _OnXQKhacSetfocusFnc);
	//m_wndXQKhac.SetEvent(WE_KILLFOCUS, _OnXQKhacKillfocusFnc);
	m_wndXQKhac.SetEvent(WE_CHECKVALUE, _OnXQKhacCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMS_BenhAnHiemMuon_VoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMS_BenhAnHiemMuon_VoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMS_BenhAnHiemMuon_VoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMS_BenhAnHiemMuon_VoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMS_BenhAnHiemMuon_VoFnc, 0, 'T', VK_CONTROL);
	GetDataToScreen();
	SetScrollSizes(MM_TEXT, CSize(700, 1250));
}
void CHMS_BenhAnHiemMuon_Vo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndtgMongCon.GetDlgCtrlID(), m_sztgMongCon);
	DDX_Text(pDX, m_wndPARA.GetDlgCtrlID(), m_szPARA);
	DDX_TextEx(pDX, m_wndTienSuNoiKhoa.GetDlgCtrlID(), m_szTienSuNoiKhoaKey);
	DDX_Check(pDX, m_wndTuyenGiap.GetDlgCtrlID(), m_bTuyenGiap);
	DDX_Check(pDX, m_wndLao.GetDlgCtrlID(), m_bLao);
	DDX_Check(pDX, m_wndTieuDuong.GetDlgCtrlID(), m_bTieuDuong);
	DDX_Check(pDX, m_wndCaoHuyetAp.GetDlgCtrlID(), m_bCaoHuyetAp);
	DDX_Text(pDX, m_wndKhac.GetDlgCtrlID(), m_szKhac);
	DDX_TextEx(pDX, m_wndTienSuPTBungSPK.GetDlgCtrlID(), m_szTienSuPTBungSPKKey);
	DDX_Check(pDX, m_wndVRT.GetDlgCtrlID(), m_bVRT);
	DDX_Check(pDX, m_wndVPM.GetDlgCtrlID(), m_bVPM);
	DDX_Check(pDX, m_wndMoDe.GetDlgCtrlID(), m_bMoDe);
	DDX_Check(pDX, m_wndUBuongTrung.GetDlgCtrlID(), m_bUBuongTrung);
	DDX_Check(pDX, m_wndChuaNgoaiTC.GetDlgCtrlID(), m_bChuaNgoaiTC);
	DDX_Check(pDX, m_wndPTTaiVoi.GetDlgCtrlID(), m_bPTTaiVoi);
	DDX_Text(pDX, m_wndPTKhac.GetDlgCtrlID(), m_szPTKhac);
	DDX_TextEx(pDX, m_wndTienSuSTD.GetDlgCtrlID(), m_szTienSuSTDKey);
	DDX_Check(pDX, m_wndLau.GetDlgCtrlID(), m_bLau);
	DDX_Check(pDX, m_wndGiangMai.GetDlgCtrlID(), m_bGiangMai);
	DDX_Check(pDX, m_wndChlamydia.GetDlgCtrlID(), m_bChlamydia);
	DDX_Text(pDX, m_wndSTDKhac.GetDlgCtrlID(), m_szSTDKhac);
	DDX_Text(pDX, m_wndNamKNDau.GetDlgCtrlID(), m_nNamKNDau);
	DDX_Check(pDX, m_wndDeu.GetDlgCtrlID(), m_bDeu);
	DDX_Check(pDX, m_wndKhongDeu.GetDlgCtrlID(), m_bKhongDeu);
	DDX_Text(pDX, m_wndChuKy.GetDlgCtrlID(), m_szChuKy);
	DDX_Text(pDX, m_wndNgayHK.GetDlgCtrlID(), m_szNgayHK);
	DDX_Check(pDX, m_wndThongKinh.GetDlgCtrlID(), m_bThongKinh);
	DDX_Text(pDX, m_wndCanNang.GetDlgCtrlID(), m_szCanNang);
	DDX_Text(pDX, m_wndChieuCao.GetDlgCtrlID(), m_szChieuCao);
	DDX_Check(pDX, m_wndNhieu.GetDlgCtrlID(), m_bNhieu);
	DDX_Check(pDX, m_wndIt.GetDlgCtrlID(), m_bIt);
	DDX_Check(pDX, m_wndTrungBinh.GetDlgCtrlID(), m_bTrungBinh);
	DDX_Text(pDX, m_wndKhamKhac.GetDlgCtrlID(), m_szKhamKhac);
	DDX_TextEx(pDX, m_wndVuChaySua.GetDlgCtrlID(), m_szVuChaySuaKey);
	DDX_TextEx(pDX, m_wndNgayDauKinhCuoi.GetDlgCtrlID(), m_szNgayDauKinhCuoi);
	DDX_Text(pDX, m_wndAmDao.GetDlgCtrlID(), m_szAmDao);
	DDX_Text(pDX, m_wndCoTuCung.GetDlgCtrlID(), m_szCoTuCung);
	DDX_Text(pDX, m_wndTuCung.GetDlgCtrlID(), m_szTuCung);
	DDX_Text(pDX, m_wndHaiPhanPhu.GetDlgCtrlID(), m_szHaiPhanPhu);
	DDX_Text(pDX, m_wndAMH.GetDlgCtrlID(), m_szAMH);
	DDX_Text(pDX, m_wndFSH.GetDlgCtrlID(), m_szFSH);
	DDX_Text(pDX, m_wndLH.GetDlgCtrlID(), m_szLH);
	DDX_Text(pDX, m_wndProlactin.GetDlgCtrlID(), m_szProlactin);
	DDX_Text(pDX, m_wndEstradiol.GetDlgCtrlID(), m_szEstradiol);
	DDX_Text(pDX, m_wndProgesterone.GetDlgCtrlID(), m_szProgesterone);
	DDX_Text(pDX, m_wndTestosteron.GetDlgCtrlID(), m_szTestosteron);
	DDX_Text(pDX, m_wndMatDo.GetDlgCtrlID(), m_szMatDo);
	DDX_Text(pDX, m_wndDKtruocsau.GetDlgCtrlID(), m_szDKtruocsau);
	DDX_Text(pDX, m_wndNMTC.GetDlgCtrlID(), m_szNMTC);
	DDX_Text(pDX, m_wndBTPhai.GetDlgCtrlID(), m_szBTPhai);
	DDX_Text(pDX, m_wndBTTrai.GetDlgCtrlID(), m_szBTTrai);
	DDX_Text(pDX, m_wndSoNangThuCap.GetDlgCtrlID(), m_szSoNangThuCap);
	DDX_Text(pDX, m_wndVTPhai.GetDlgCtrlID(), m_szVTPhai);
	DDX_Text(pDX, m_wndVTTrai.GetDlgCtrlID(), m_szVTTrai);
	DDX_Text(pDX, m_wndBatThuongKhac.GetDlgCtrlID(), m_szBatThuongKhac);
	DDX_Text(pDX, m_wndCotteP.GetDlgCtrlID(), m_szCotteP);
	DDX_Text(pDX, m_wndCotteT.GetDlgCtrlID(), m_szCotteT);
	DDX_Text(pDX, m_wndBuongTC.GetDlgCtrlID(), m_szBuongTC);
	DDX_Text(pDX, m_wndXQKhac.GetDlgCtrlID(), m_szXQKhac);

}
void CHMS_BenhAnHiemMuon_Vo::UpdateJson(BOOL bSave){
	if(bSave)
	{
		m_jData[_T("tgMongCon")] =  m_sztgMongCon;
		m_jData[_T("PARA")] =  m_szPARA;
		m_jData[_T("TienSuNoiKhoa")] =  m_szTienSuNoiKhoaKey;
		m_jData[_T("TuyenGiap")] =  m_bTuyenGiap;
		m_jData[_T("Lao")] =  m_bLao;
		m_jData[_T("TieuDuong")] =  m_bTieuDuong;
		m_jData[_T("CaoHuyetAp")] =  m_bCaoHuyetAp;
		m_jData[_T("Khac")] =  m_szKhac;
		m_jData[_T("TienSuPTBungSPK")] =  m_szTienSuPTBungSPKKey;
		m_jData[_T("VRT")] =  m_bVRT;
		m_jData[_T("VPM")] =  m_bVPM;
		m_jData[_T("MoDe")] =  m_bMoDe;
		m_jData[_T("UBuongTrung")] =  m_bUBuongTrung;
		m_jData[_T("ChuaNgoaiTC")] =  m_bChuaNgoaiTC;
		m_jData[_T("PTTaiVoi")] =  m_bPTTaiVoi;
		m_jData[_T("PTKhac")] =  m_szPTKhac;
		m_jData[_T("TienSuSTD")] =  m_szTienSuSTDKey;
		m_jData[_T("Lau")] =  m_bLau;
		m_jData[_T("GiangMai")] =  m_bGiangMai;
		m_jData[_T("Chlamydia")] =  m_bChlamydia;
		m_jData[_T("STDKhac")] =  m_szSTDKhac;
		m_jData[_T("NamKNDau")] =  m_nNamKNDau;
		m_jData[_T("Deu")] =  m_bDeu;
		m_jData[_T("KhongDeu")] =  m_bKhongDeu;
		m_jData[_T("ChuKy")] =  m_szChuKy;
		m_jData[_T("NgayHK")] =  m_szNgayHK;
		m_jData[_T("ThongKinh")] =  m_bThongKinh;
		m_jData[_T("CanNang")] =  m_szCanNang;
		m_jData[_T("ChieuCao")] =  m_szChieuCao;
		m_jData[_T("Nhieu")] =  m_bNhieu;
		m_jData[_T("It")] =  m_bIt;
		m_jData[_T("TrungBinh")] =  m_bTrungBinh;
		m_jData[_T("KhamKhac")] =  m_szKhamKhac;
		m_jData[_T("VuChaySua")] =  m_szVuChaySuaKey;
		m_jData[_T("NgayDauKinhCuoi")] =  m_szNgayDauKinhCuoi;
		m_jData[_T("AmDao")] =  m_szAmDao;
		m_jData[_T("CoTuCung")] =  m_szCoTuCung;
		m_jData[_T("TuCung")] =  m_szTuCung;
		m_jData[_T("HaiPhanPhu")] =  m_szHaiPhanPhu;
		m_jData[_T("AMH")] =  m_szAMH;
		m_jData[_T("FSH")] =  m_szFSH;
		m_jData[_T("LH")] =  m_szLH;
		m_jData[_T("Prolactin")] =  m_szProlactin;
		m_jData[_T("Estradiol")] =  m_szEstradiol;
		m_jData[_T("Progesterone")] =  m_szProgesterone;
		m_jData[_T("Testosteron")] =  m_szTestosteron;
		m_jData[_T("MatDo")] =  m_szMatDo;
		m_jData[_T("DKtruocsau")] =  m_szDKtruocsau;
		m_jData[_T("NMTC")] =  m_szNMTC;
		m_jData[_T("BTPhai")] =  m_szBTPhai;
		m_jData[_T("BTTrai")] =  m_szBTTrai;
		m_jData[_T("SoNangThuCap")] =  m_szSoNangThuCap;
		m_jData[_T("VTPhai")] =  m_szVTPhai;
		m_jData[_T("VTTrai")] =  m_szVTTrai;
		m_jData[_T("BatThuongKhac")] =  m_szBatThuongKhac;
		m_jData[_T("CotteP")] =  m_szCotteP;
		m_jData[_T("CotteT")] =  m_szCotteT;
		m_jData[_T("BuongTC")] =  m_szBuongTC;
		m_jData[_T("XQKhac")] =  m_szXQKhac;
	}
	else
	{
			
		m_jData[_T("tgMongCon")].GetValue(m_sztgMongCon);
		m_jData[_T("PARA")].GetValue(m_szPARA);
		m_jData[_T("TienSuNoiKhoa")].GetValue(m_szTienSuNoiKhoaKey);
		m_jData[_T("TuyenGiap")].GetValue(m_bTuyenGiap);
		m_jData[_T("Lao")].GetValue(m_bLao);
		m_jData[_T("TieuDuong")].GetValue(m_bTieuDuong);
		m_jData[_T("CaoHuyetAp")].GetValue(m_bCaoHuyetAp);
		m_jData[_T("Khac")].GetValue(m_szKhac);
		m_jData[_T("TienSuPTBungSPK")].GetValue(m_szTienSuPTBungSPKKey);
		m_jData[_T("VRT")].GetValue(m_bVRT);
		m_jData[_T("VPM")].GetValue(m_bVPM);
		m_jData[_T("MoDe")].GetValue(m_bMoDe);
		m_jData[_T("UBuongTrung")].GetValue(m_bUBuongTrung);
		m_jData[_T("ChuaNgoaiTC")].GetValue(m_bChuaNgoaiTC);
		m_jData[_T("PTTaiVoi")].GetValue(m_bPTTaiVoi);
		m_jData[_T("PTKhac")].GetValue(m_szPTKhac);
		m_jData[_T("TienSuSTD")].GetValue(m_szTienSuSTDKey);
		m_jData[_T("Lau")].GetValue(m_bLau);
		m_jData[_T("GiangMai")].GetValue(m_bGiangMai);
		m_jData[_T("Chlamydia")].GetValue(m_bChlamydia);
		m_jData[_T("STDKhac")].GetValue(m_szSTDKhac);
		m_jData[_T("NamKNDau")].GetValue(m_nNamKNDau);
		m_jData[_T("Deu")].GetValue(m_bDeu);
		m_jData[_T("KhongDeu")].GetValue(m_bKhongDeu);
		m_jData[_T("ChuKy")].GetValue(m_szChuKy);
		m_jData[_T("NgayHK")].GetValue(m_szNgayHK);
		m_jData[_T("ThongKinh")].GetValue(m_bThongKinh);
		m_jData[_T("CanNang")].GetValue(m_szCanNang);
		m_jData[_T("ChieuCao")].GetValue(m_szChieuCao);
		m_jData[_T("Nhieu")].GetValue(m_bNhieu);
		m_jData[_T("It")].GetValue(m_bIt);
		m_jData[_T("TrungBinh")].GetValue(m_bTrungBinh);
		m_jData[_T("KhamKhac")].GetValue(m_szKhamKhac);
		m_jData[_T("VuChaySua")].GetValue(m_szVuChaySuaKey);
		m_jData[_T("NgayDauKinhCuoi")].GetValue(m_szNgayDauKinhCuoi);
		m_jData[_T("AmDao")].GetValue(m_szAmDao);
		m_jData[_T("CoTuCung")].GetValue(m_szCoTuCung);
		m_jData[_T("TuCung")].GetValue(m_szTuCung);
		m_jData[_T("HaiPhanPhu")].GetValue(m_szHaiPhanPhu);
		m_jData[_T("AMH")].GetValue(m_szAMH);
		m_jData[_T("FSH")].GetValue(m_szFSH);
		m_jData[_T("LH")].GetValue(m_szLH);
		m_jData[_T("Prolactin")].GetValue(m_szProlactin);
		m_jData[_T("Estradiol")].GetValue(m_szEstradiol);
		m_jData[_T("Progesterone")].GetValue(m_szProgesterone);
		m_jData[_T("Testosteron")].GetValue(m_szTestosteron);
		m_jData[_T("MatDo")].GetValue(m_szMatDo);
		m_jData[_T("DKtruocsau")].GetValue(m_szDKtruocsau);
		m_jData[_T("NMTC")].GetValue(m_szNMTC);
		m_jData[_T("BTPhai")].GetValue(m_szBTPhai);
		m_jData[_T("BTTrai")].GetValue(m_szBTTrai);
		m_jData[_T("SoNangThuCap")].GetValue(m_szSoNangThuCap);
		m_jData[_T("VTPhai")].GetValue(m_szVTPhai);
		m_jData[_T("VTTrai")].GetValue(m_szVTTrai);
		m_jData[_T("BatThuongKhac")].GetValue(m_szBatThuongKhac);
		m_jData[_T("CotteP")].GetValue(m_szCotteP);
		m_jData[_T("CotteT")].GetValue(m_szCotteT);
		m_jData[_T("BuongTC")].GetValue(m_szBuongTC);
		m_jData[_T("XQKhac")].GetValue(m_szXQKhac);
	}

}
void CHMS_BenhAnHiemMuon_Vo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szData, tmpStr;
	szSQL.Format(_T("SELECT trim(hdi_wife||hdi_wife2) as wife FROM hms_doc_infertility WHERE hdi_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	_debug(_T("%s"), szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("wife"), tmpStr);
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
void CHMS_BenhAnHiemMuon_Vo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_BenhAnHiemMuon_Vo::SetDefaultValues(){

	m_sztgMongCon.Empty();
	m_szPARA.Empty();
	m_szTienSuNoiKhoaKey.Empty();
	m_bTuyenGiap=FALSE;
	m_bLao=FALSE;
	m_bTieuDuong=FALSE;
	m_bCaoHuyetAp=FALSE;
	m_szKhac.Empty();
	m_szTienSuPTBungSPKKey.Empty();
	m_bVRT=FALSE;
	m_bVPM=FALSE;
	m_bMoDe=FALSE;
	m_bUBuongTrung=FALSE;
	m_bChuaNgoaiTC=FALSE;
	m_bPTTaiVoi=FALSE;
	m_szPTKhac.Empty();
	m_szTienSuSTDKey.Empty();
	m_bLau=FALSE;
	m_bGiangMai=FALSE;
	m_bChlamydia=FALSE;
	m_szSTDKhac.Empty();
	m_nNamKNDau=0;
	m_bDeu=FALSE;
	m_bKhongDeu=FALSE;
	m_szChuKy.Empty();
	m_szNgayHK.Empty();
	m_bThongKinh=FALSE;
	m_szCanNang.Empty();
	m_szChieuCao.Empty();
	m_bNhieu=FALSE;
	m_bIt=FALSE;
	m_bTrungBinh=FALSE;
	m_szKhamKhac.Empty();
	m_szVuChaySuaKey.Empty();
	m_szNgayDauKinhCuoi.Empty();
	m_szAmDao.Empty();
	m_szCoTuCung.Empty();
	m_szTuCung.Empty();
	m_szHaiPhanPhu.Empty();
	m_szAMH.Empty();
	m_szFSH.Empty();
	m_szLH.Empty();
	m_szProlactin.Empty();
	m_szEstradiol.Empty();
	m_szProgesterone.Empty();
	m_szTestosteron.Empty();
	m_szMatDo.Empty();
	m_szDKtruocsau.Empty();
	m_szNMTC.Empty();
	m_szBTPhai.Empty();
	m_szBTTrai.Empty();
	m_szSoNangThuCap.Empty();
	m_szVTPhai.Empty();
	m_szVTTrai.Empty();
	m_szBatThuongKhac.Empty();
	m_szCotteP.Empty();
	m_szCotteT.Empty();
	m_szBuongTC.Empty();
	m_szXQKhac.Empty();

}
int CHMS_BenhAnHiemMuon_Vo::SetMode(int nMode){
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
/*void CHMS_BenhAnHiemMuon_Vo::OntgMongConChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OntgMongConSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OntgMongConKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OntgMongConCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnPARAChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnPARASetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnPARAKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnPARACheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd(); 
	m_wndTienSuNoiKhoa.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuNoiKhoa.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuNoiKhoaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Vo::OnTuyenGiapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bTuyenGiap)
		m_szTuyenGiap.Format(_T("Y"));
	else
		m_szTuyenGiap.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnLaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bLao)
		m_szLao.Format(_T("Y"));
	else
		m_szLao.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnTieuDuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bTieuDuong)
		m_szTieuDuong.Format(_T("Y"));
	else
		m_szTieuDuong.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnCaoHuyetApSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bCaoHuyetAp)
		m_szCaoHuyetAp.Format(_T("Y"));
	else
		m_szCaoHuyetAp.Format(_T("N"));
}
/*void CHMS_BenhAnHiemMuon_Vo::OnKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTienSuPTBungSPK.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuPTBungSPK.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuPTBungSPKAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Vo::OnVRTSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bVRT)
		m_szVRT.Format(_T("Y"));
	else
		m_szVRT.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnVPMSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bVPM)
		m_szVPM.Format(_T("Y"));
	else
		m_szVPM.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnMoDeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bMoDe)
		m_szMoDe.Format(_T("Y"));
	else
		m_szMoDe.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnUBuongTrungSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bUBuongTrung)
		m_szUBuongTrung.Format(_T("Y"));
	else
		m_szUBuongTrung.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnChuaNgoaiTCSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bChuaNgoaiTC)
		m_szChuaNgoaiTC.Format(_T("Y"));
	else
		m_szChuaNgoaiTC.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnPTTaiVoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bPTTaiVoi)
		m_szPTTaiVoi.Format(_T("Y"));
	else
		m_szPTTaiVoi.Format(_T("N"));
}
/*void CHMS_BenhAnHiemMuon_Vo::OnPTKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnPTKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnPTKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnPTKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTienSuSTD.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndTienSuSTD.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Vo::OnTienSuSTDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMS_BenhAnHiemMuon_Vo::OnLauSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Vo::OnGiangMaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_BenhAnHiemMuon_Vo::OnChlamydiaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Vo::OnSTDKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnSTDKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnSTDKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnSTDKhacCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnNamKNDauChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNamKNDauSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNamKNDauKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnNamKNDauCheckValue(){
	return 0;
} 
	void CHMS_BenhAnHiemMuon_Vo::OnDeuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bDeu)
		m_szDeu.Format(_T("Y"));
	else
		m_szDeu.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnKhongDeuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bKhongDeu)
		m_szKhongDeu.Format(_T("Y"));
	else
		m_szKhongDeu.Format(_T("N"));
}
/*void CHMS_BenhAnHiemMuon_Vo::OnChuKyChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnChuKySetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnChuKyKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnChuKyCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayHKChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayHKSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayHKKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnNgayHKCheckValue(){
	return 0;
} 
	void CHMS_BenhAnHiemMuon_Vo::OnThongKinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_BenhAnHiemMuon_Vo::OnCanNangChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCanNangSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCanNangKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnCanNangCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnChieuCaoChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnChieuCaoSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnChieuCaoKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnChieuCaoCheckValue(){
	return 0;
} 
	void CHMS_BenhAnHiemMuon_Vo::OnNhieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bNhieu)
		m_szNhieu.Format(_T("Y"));
	else
		m_szNhieu.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnItSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bIt)
		m_szIt.Format(_T("Y"));
	else
		m_szIt.Format(_T("N"));
}
	void CHMS_BenhAnHiemMuon_Vo::OnTrungBinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bTrungBinh)
		m_szTrungBinh.Format(_T("Y"));
	else
		m_szTrungBinh.Format(_T("N"));
}
/*void CHMS_BenhAnHiemMuon_Vo::OnKhamKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnKhamKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnKhamKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnKhamKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaSelendok(){
	 
}
/*void CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaSetfocus(){
	
}*/
/*void CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaKillfocus(){
	
}*/
long CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndVuChaySua.AddItems(_T("1"), _T("\x43\xF3"));
	m_wndVuChaySua.AddItems(_T("2"), _T("Kh\xF4ng"));
	return 0;
}
/*void CHMS_BenhAnHiemMuon_Vo::OnVuChaySuaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayDauKinhCuoiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayDauKinhCuoiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNgayDauKinhCuoiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnNgayDauKinhCuoiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnAmDaoChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnAmDaoSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnAmDaoKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnAmDaoCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnCoTuCungChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCoTuCungSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCoTuCungKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnCoTuCungCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnTuCungChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnTuCungSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnTuCungKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnTuCungCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnHaiPhanPhuChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnHaiPhanPhuSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnHaiPhanPhuKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnHaiPhanPhuCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnAMHChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnAMHSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnAMHKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnAMHCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnFSHChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnFSHSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnFSHKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnFSHCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnLHChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnLHSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnLHKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnLHCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnProlactinChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnProlactinSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnProlactinKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnProlactinCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnEstradiolChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnEstradiolSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnEstradiolKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnEstradiolCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnProgesteroneChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnProgesteroneSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnProgesteroneKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnProgesteroneCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnTestosteronChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnTestosteronSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnTestosteronKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnTestosteronCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnMatDoChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnMatDoSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnMatDoKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnMatDoCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnDKtruocsauChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnDKtruocsauSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnDKtruocsauKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnDKtruocsauCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnNMTCChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNMTCSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnNMTCKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnNMTCCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnBTPhaiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBTPhaiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBTPhaiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnBTPhaiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnBTTraiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBTTraiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBTTraiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnBTTraiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnSoNangThuCapChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnSoNangThuCapSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnSoNangThuCapKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnSoNangThuCapCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnVTPhaiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnVTPhaiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnVTPhaiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnVTPhaiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnVTTraiChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnVTTraiSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnVTTraiKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnVTTraiCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnBatThuongKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBatThuongKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBatThuongKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnBatThuongKhacCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnCottePChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCottePSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCottePKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnCottePCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnCotteTChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCotteTSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnCotteTKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnCotteTCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnBuongTCChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBuongTCSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnBuongTCKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnBuongTCCheckValue(){
	return 0;
} 
/*void CHMS_BenhAnHiemMuon_Vo::OnXQKhacChange(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnXQKhacSetfocus(){
	
} */
/*void CHMS_BenhAnHiemMuon_Vo::OnXQKhacKillfocus(){
	
} */
int CHMS_BenhAnHiemMuon_Vo::OnXQKhacCheckValue(){
	return 0;
} 
void CHMS_BenhAnHiemMuon_Vo::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMS_BenhAnHiemMuon_Vo();
} 
void CHMS_BenhAnHiemMuon_Vo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_BenhAnHiemMuon_Vo();
} 
void CHMS_BenhAnHiemMuon_Vo::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMS_BenhAnHiemMuon_Vo();
} 
int CHMS_BenhAnHiemMuon_Vo::OnAddHMS_BenhAnHiemMuon_Vo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_BenhAnHiemMuon_Vo::OnEditHMS_BenhAnHiemMuon_Vo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_BenhAnHiemMuon_Vo::OnDeleteHMS_BenhAnHiemMuon_Vo(){
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
 		OnCancelHMS_BenhAnHiemMuon_Vo();
 	}
	return 0;
}
int CHMS_BenhAnHiemMuon_Vo::OnSaveHMS_BenhAnHiemMuon_Vo(){
 	
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
			_T(" HDI_WIFE = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
	}else
	{
		tmpStr = szData.Mid(0, 2000);
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', HDI_UPDATEDDATE = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" HDI_WIFE = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);

		tmpStr2 = szData.Mid(2000, 2000);
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', HDI_UPDATEDDATE = to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
			_T(" HDI_WIFE2 = '%s' WHERE HDI_DOCNO = '%ld'"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), tmpStr2, m_nDocumentNo);
		ret = pMF->ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
	}
	if(ret > 0)
		SetMode(VM_VIEW);
	else
		MessageBox(_T("Error"), 0, MB_ICONERROR);

	
 	return ret;
}
int CHMS_BenhAnHiemMuon_Vo::OnCancelHMS_BenhAnHiemMuon_Vo(){
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
int CHMS_BenhAnHiemMuon_Vo::OnHMS_BenhAnHiemMuon_VoListLoadData(){
	return 0;
}
void CHMS_BenhAnHiemMuon_Vo::OnPrint()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_BENHANHIEMMUON_VO.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("thoigianmongcon"), m_sztgMongCon);
	rptHeader->SetValue(_T("para"), m_szPARA);
	if(m_szTienSuNoiKhoaKey == _T("1"))
	{
		rptHeader->SetValue(_T("tiensunoikhoa"), _T("\x43\xF3"));
	}else
		rptHeader->SetValue(_T("tiensunoikhoa"), _T("Kh\xF4ng"));
	if(m_bTuyenGiap)
		rptHeader->SetValue(_T("tuyengiap"), _T("X"));
	if(m_bLao)
		rptHeader->SetValue(_T("lao"), _T("X"));
	if(m_bCaoHuyetAp)
		rptHeader->SetValue(_T("caohuyetap"), _T("X"));
	if(m_bTieuDuong)
		rptHeader->SetValue(_T("tieuduong"), _T("X"));
	
	rptHeader->SetValue(_T("khacnoikhoa"), m_szKhac);

	if(m_szTienSuPTBungSPKKey == _T("1"))
		rptHeader->SetValue(_T("tiensuspk"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("tiensuspk"), _T("Kh\xF4ng"));

	if(m_bVRT)
		rptHeader->SetValue(_T("VRT"), _T("X"));
	if(m_bVPM)
		rptHeader->SetValue(_T("VPM"), _T("X"));
	if(m_bMoDe)
		rptHeader->SetValue(_T("mode"), _T("X"));
	if(m_bUBuongTrung)
		rptHeader->SetValue(_T("ubuongtrung"), _T("X"));
	if(m_bChuaNgoaiTC)
		rptHeader->SetValue(_T("chuaNTC"), _T("X"));
	if(m_bPTTaiVoi)
		rptHeader->SetValue(_T("PTtaitaivoi"), _T("X"));
	//SPK khac
	rptHeader->SetValue(_T("SPKKhac"), m_szPTKhac);
	
	if(m_szTienSuSTDKey == _T("1"))
		rptHeader->SetValue(_T("tiensuSTD"), _T("\x43\xF3"));
	else
		rptHeader->SetValue(_T("tiensuSTD"), _T("Kh\xF4ng"));

	if(m_bLau)
		rptHeader->SetValue(_T("lau"), _T("X"));
	if(m_bGiangMai)
		rptHeader->SetValue(_T("giangmai"), _T("X"));
	if(m_bChlamydia)
		rptHeader->SetValue(_T("chlamydia"), _T("X"));

	rptHeader->SetValue(_T("khacSTD"), m_szSTDKhac);
	rptHeader->SetValue(_T("namkinhdau"), m_nNamKNDau);
	
	if(m_bDeu)
		rptHeader->SetValue(_T("deu"), _T("X"));
	if(m_bKhongDeu)
		rptHeader->SetValue(_T("kdeu"), _T("X"));

	rptHeader->SetValue(_T("chuky"), m_szChuKy);
	rptHeader->SetValue(_T("songayhanhkinh"), m_szNgayHK);

	if(m_bThongKinh)
		rptHeader->SetValue(_T("thongkinh"), _T("X"));

	rptHeader->SetValue(_T("CanNang"), m_szCanNang);
	rptHeader->SetValue(_T("ChieuCao"), m_szChieuCao);

	if(m_bNhieu)
		rptHeader->SetValue(_T("Nhieu"), _T("X"));
	if(m_bTrungBinh)
		rptHeader->SetValue(_T("TrungBinh"), _T("X"));
	if(m_bIt)
		rptHeader->SetValue(_T("It"), _T("X"));

	rptHeader->SetValue(_T("KhamKhac"), m_szKhamKhac);
	rptHeader->SetValue(_T("VuChaySua"), m_wndVuChaySua.GetCurrent(1));
	rptHeader->SetValue(_T("NgayDauKinhCuoi"), m_szNgayDauKinhCuoi);
	rptHeader->SetValue(_T("AmDao"), m_szAmDao);
	rptHeader->SetValue(_T("CoTuCung"), m_szCoTuCung);
	rptHeader->SetValue(_T("TuCung"), m_szTuCung);
	rptHeader->SetValue(_T("HaiPhanPhu"), m_szHaiPhanPhu);
	rptHeader->SetValue(_T("AMH"), m_szAMH);
	rptHeader->SetValue(_T("FSH"), m_szFSH);
	rptHeader->SetValue(_T("LH"), m_szLH);
	rptHeader->SetValue(_T("Prolactin"), m_szProlactin);
	rptHeader->SetValue(_T("Estradiol"), m_szEstradiol);
	rptHeader->SetValue(_T("Progesterone"), m_szProgesterone);
	rptHeader->SetValue(_T("Testosteron"), m_szTestosteron);

	rptHeader->SetValue(_T("MatDo"), m_szMatDo);
	rptHeader->SetValue(_T("DKtruocsau"), m_szDKtruocsau);
	rptHeader->SetValue(_T("NMTC"), m_szNMTC);
	rptHeader->SetValue(_T("BTPhai"), m_szBTPhai);
	rptHeader->SetValue(_T("BTTrai"), m_szBTTrai);
	rptHeader->SetValue(_T("SoNangThuCap"), m_szSoNangThuCap);
	rptHeader->SetValue(_T("VTPhai"), m_szVTPhai);
	rptHeader->SetValue(_T("VTTrai"), m_szVTTrai);
	rptHeader->SetValue(_T("BatThuongKhac"), m_szBatThuongKhac);
	rptHeader->SetValue(_T("CotteP"), m_szCotteP);
	rptHeader->SetValue(_T("CotteT"), m_szCotteT);
	rptHeader->SetValue(_T("BuongTC"), m_szBuongTC);
	rptHeader->SetValue(_T("XQKhac"), m_szXQKhac);
	

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
}