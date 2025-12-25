#include "PhieuChamSocNguoiBenhCuaDieuDuong.h"
#include "MainFrm.h"
static void _Ontu_diSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ontu_diSelect();
}
static void _Onxe_lanSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onxe_lanSelect();
}
static void _OngiuongSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OngiuongSelect();
}
static void _OncangSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OncangSelect();
}
/*static void _OnmachChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmachChange();
} */
/*static void _OnmachSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmachSetfocus();} */ 
/*static void _OnmachKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmachKillfocus();
} */
static int _OnmachCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmachCheckValue();
} 
/*static void _OnhaChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnhaChange();
} */
/*static void _OnhaSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnhaSetfocus();} */ 
/*static void _OnhaKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnhaKillfocus();
} */
static int _OnhaCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnhaCheckValue();
} 
/*static void _Onha2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onha2Change();
} */
/*static void _Onha2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onha2Setfocus();} */ 
/*static void _Onha2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onha2Killfocus();
} */
static int _Onha2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onha2CheckValue();
} 
/*static void _Onthan_nhietChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onthan_nhietChange();
} */
/*static void _Onthan_nhietSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onthan_nhietSetfocus();} */ 
/*static void _Onthan_nhietKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onthan_nhietKillfocus();
} */
static int _Onthan_nhietCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onthan_nhietCheckValue();
} 
/*static void _Onnhip_thoChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhip_thoChange();
} */
/*static void _Onnhip_thoSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhip_thoSetfocus();} */ 
/*static void _Onnhip_thoKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhip_thoKillfocus();
} */
static int _Onnhip_thoCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhip_thoCheckValue();
} 
/*static void _Onchieu_caoChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchieu_caoChange();
} */
/*static void _Onchieu_caoSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchieu_caoSetfocus();} */ 
/*static void _Onchieu_caoKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchieu_caoKillfocus();
} */
static int _Onchieu_caoCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchieu_caoCheckValue();
} 
/*static void _Oncan_nangChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncan_nangChange();
} */
/*static void _Oncan_nangSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncan_nangSetfocus();} */ 
/*static void _Oncan_nangKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncan_nangKillfocus();
} */
static int _Oncan_nangCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncan_nangCheckValue();
} 
static void _OngaySelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OngaySelect();
}
static void _Ontrung_binhSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ontrung_binhSelect();
}
static void _Onbeo_phiSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onbeo_phiSelect();
}
/*static void _Ontien_suChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontien_suChange();
} */
/*static void _Ontien_suSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontien_suSetfocus();} */ 
/*static void _Ontien_suKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontien_suKillfocus();
} */
static int _Ontien_suCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontien_suCheckValue();
} 
static void _Ondi_ung_noSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ondi_ung_noSelect();
}
static void _Ondi_ung_yesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ondi_ung_yesSelect();
}
/*static void _Onchat_thuoc_di_ungChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchat_thuoc_di_ungChange();
} */
/*static void _Onchat_thuoc_di_ungSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchat_thuoc_di_ungSetfocus();} */ 
/*static void _Onchat_thuoc_di_ungKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchat_thuoc_di_ungKillfocus();
} */
static int _Onchat_thuoc_di_ungCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchat_thuoc_di_ungCheckValue();
} 
/*static void _Ondg_tam_than_kinhChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondg_tam_than_kinhChange();
} */
/*static void _Ondg_tam_than_kinhSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondg_tam_than_kinhSetfocus();} */ 
/*static void _Ondg_tam_than_kinhKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondg_tam_than_kinhKillfocus();
} */
static int _Ondg_tam_than_kinhCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondg_tam_than_kinhCheckValue();
} 
static void _Ontinh_taoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ontinh_taoSelect();
}
static void _Onlo_moSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onlo_moSelect();
}
static void _OnmeSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnmeSelect();
}
static void _Onbl_tim_mach_noSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onbl_tim_mach_noSelect();
}
static void _Onbl_tim_mach_yesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onbl_tim_mach_yesSelect();
}
static void _Onkho_tho_noSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onkho_tho_noSelect();
}
static void _Onkho_tho_yesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onkho_tho_yesSelect();
}
static void _Onroi_loan_tt_noSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onroi_loan_tt_noSelect();
}
static void _Onroi_loan_tt_yesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onroi_loan_tt_yesSelect();
}
static void _Onan_binh_thuongSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onan_binh_thuongSelect();
}
static void _Onngon_miengSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onngon_miengSelect();
}
static void _Onchan_anSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onchan_anSelect();
}
static void _OnmiengSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnmiengSelect();
}
static void _Onsonde_da_daySelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onsonde_da_daySelect();
}
static void _Onan_uong_khacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onan_uong_khacSelect();
}
static void _Onmau_sac_binh_thuongSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onmau_sac_binh_thuongSelect();
}
static void _Onnhot_nhatSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnhot_nhatSelect();
}
static void _Ontim_taiSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ontim_taiSelect();
}
static void _Onvang_daSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onvang_daSelect();
}
static void _Onloet_noSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onloet_noSelect();
}
static void _Onloet_yesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onloet_yesSelect();
}
/*static void _Onvi_triChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onvi_triChange();
} */
/*static void _Onvi_triSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onvi_triSetfocus();} */ 
/*static void _Onvi_triKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onvi_triKillfocus();
} */
static int _Onvi_triCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onvi_triCheckValue();
} 
static void _Onbinh_tinhSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onbinh_tinhSelect();
}
static void _Onhop_tacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onhop_tacSelect();
}
static void _Onkhong_hop_tacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onkhong_hop_tacSelect();
}
static void _Onso_haiSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onso_haiSelect();
}
static void _Ontamly_khacSelectFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ontamly_khacSelect();
}
static void _Onnghe_dlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnghe_dlSelect();
}
static void _Onnghe_gsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnghe_gsSelect();
}
static void _Onnghe_htSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnghe_htSelect();
}
static void _Onnghe_ptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnghe_ptSelect();
}
static void _Onnoi_dlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnoi_dlSelect();
}
static void _Onnoi_gsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnoi_gsSelect();
}
static void _Onnoi_htSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnoi_htSelect();
}
static void _Onnoi_ptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnoi_ptSelect();
}
static void _Onnhin_dlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnhin_dlSelect();
}
static void _Onnhin_gsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnhin_gsSelect();
}
static void _Onnhin_htSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnhin_htSelect();
}
static void _Onnhin_ptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onnhin_ptSelect();
}
static void _Onve_sinh_dlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onve_sinh_dlSelect();
}
static void _Onve_sinh_gsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onve_sinh_gsSelect();
}
static void _Onve_sinh_htSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onve_sinh_htSelect();
}
static void _Onve_sinh_ptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onve_sinh_ptSelect();
}
static void _Onvan_dong_dlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onvan_dong_dlSelect();
}
static void _Onvan_dong_gsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onvan_dong_gsSelect();
}
static void _Onvan_dong_htSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onvan_dong_htSelect();
}
static void _Onvan_dong_ptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Onvan_dong_ptSelect();
}
// /*static void _Onchan_doan_cua_bsChangeFnc(CWnd *pWnd){
// 	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchan_doan_cua_bsChange();
// } */
// /*static void _Onchan_doan_cua_bsSetfocusFnc(CWnd *pWnd){
// 	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchan_doan_cua_bsSetfocus();} */ 
// /*static void _Onchan_doan_cua_bsKillfocusFnc(CWnd *pWnd){
// 	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchan_doan_cua_bsKillfocus();
// } */
// static int _Onchan_doan_cua_bsCheckValueFnc(CWnd *pWnd){
// 	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onchan_doan_cua_bsCheckValue();
// } 
static void _Oncap1SelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Oncap1Select();
}
static void _Oncap2SelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Oncap2Select();
}
static void _Oncap3SelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Oncap3Select();
}
/*static void _OnmhaChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmhaChange();
} */
/*static void _OnmhaSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmhaSetfocus();} */ 
/*static void _OnmhaKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmhaKillfocus();
} */
static int _OnmhaCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnmhaCheckValue();
} 
/*static void _Onnhiet_doChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhiet_doChange();
} */
/*static void _Onnhiet_doSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhiet_doSetfocus();} */ 
/*static void _Onnhiet_doKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhiet_doKillfocus();
} */
static int _Onnhiet_doCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onnhiet_doCheckValue();
} 
/*static void _OnthoChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthoChange();
} */
/*static void _OnthoSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthoSetfocus();} */ 
/*static void _OnthoKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthoKillfocus();
} */
static int _OnthoCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthoCheckValue();
} 
/*static void _Ony_thucChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_thucChange();
} */
/*static void _Ony_thucSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_thucSetfocus();} */ 
/*static void _Ony_thucKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_thucKillfocus();
} */
static int _Ony_thucCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_thucCheckValue();
} 
/*static void _Ontai_choChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontai_choChange();
} */
/*static void _Ontai_choSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontai_choSetfocus();} */ 
/*static void _Ontai_choKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontai_choKillfocus();
} */
static int _Ontai_choCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ontai_choCheckValue();
} 
/*static void _OnthuocChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthuocChange();
} */
/*static void _OnthuocSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthuocSetfocus();} */ 
/*static void _OnthuocKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthuocKillfocus();
} */
static int _OnthuocCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->OnthuocCheckValue();
} 
/*static void _Onxet_nghiemChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onxet_nghiemChange();
} */
/*static void _Onxet_nghiemSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onxet_nghiemSetfocus();} */ 
/*static void _Onxet_nghiemKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onxet_nghiemKillfocus();
} */
static int _Onxet_nghiemCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onxet_nghiemCheckValue();
} 
/*static void _Ony_lenh_khacChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_lenh_khacChange();
} */
/*static void _Ony_lenh_khacSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_lenh_khacSetfocus();} */ 
/*static void _Ony_lenh_khacKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_lenh_khacKillfocus();
} */
static int _Ony_lenh_khacCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ony_lenh_khacCheckValue();
} 
/*static void _Ondu_kien_cham_socChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondu_kien_cham_socChange();
} */
/*static void _Ondu_kien_cham_socSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondu_kien_cham_socSetfocus();} */ 
/*static void _Ondu_kien_cham_socKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondu_kien_cham_socKillfocus();
} */
static int _Ondu_kien_cham_socCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondu_kien_cham_socCheckValue();
} 
static void _OncomSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OncomSelect();
}
static void _OnchaoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnchaoSelect();
}
static void _OnotSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnotSelect();
}
static void _OnnhinSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnnhinSelect();
}
static void _Ondinh_duong_khacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->Ondinh_duong_khacSelect();
}
/*static void _Ondinh_duong_khac_textChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondinh_duong_khac_textChange();
} */
/*static void _Ondinh_duong_khac_textSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondinh_duong_khac_textSetfocus();} */ 
/*static void _Ondinh_duong_khac_textKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondinh_duong_khac_textKillfocus();
} */
static int _Ondinh_duong_khac_textCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ondinh_duong_khac_textCheckValue();
} 
/*static void _Onve_sinh_ca_nhan_textChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onve_sinh_ca_nhan_textChange();
} */
/*static void _Onve_sinh_ca_nhan_textSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onve_sinh_ca_nhan_textSetfocus();} */ 
/*static void _Onve_sinh_ca_nhan_textKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onve_sinh_ca_nhan_textKillfocus();
} */
static int _Onve_sinh_ca_nhan_textCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Onve_sinh_ca_nhan_textCheckValue();
} 
/*static void _Ongiao_duc_skChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ongiao_duc_skChange();
} */
/*static void _Ongiao_duc_skSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ongiao_duc_skSetfocus();} */ 
/*static void _Ongiao_duc_skKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ongiao_duc_skKillfocus();
} */
static int _Ongiao_duc_skCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Ongiao_duc_skCheckValue();
} 
/*static void _Oncham_soc_khacChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncham_soc_khacChange();
} */
/*static void _Oncham_soc_khacSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncham_soc_khacSetfocus();} */ 
/*static void _Oncham_soc_khacKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncham_soc_khacKillfocus();
} */
static int _Oncham_soc_khacCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd)->Oncham_soc_khacCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuong *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuong *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuong *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuong *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddPhieuChamSocNguoiBenhCuaDieuDuongFnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnAddPhieuChamSocNguoiBenhCuaDieuDuong();
} 
static int _OnEditPhieuChamSocNguoiBenhCuaDieuDuongFnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnEditPhieuChamSocNguoiBenhCuaDieuDuong();
} 
static int _OnDeletePhieuChamSocNguoiBenhCuaDieuDuongFnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnDeletePhieuChamSocNguoiBenhCuaDieuDuong();
} 
static int _OnSavePhieuChamSocNguoiBenhCuaDieuDuongFnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnSavePhieuChamSocNguoiBenhCuaDieuDuong();
} 
static int _OnCancelPhieuChamSocNguoiBenhCuaDieuDuongFnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuong*)pWnd)->OnCancelPhieuChamSocNguoiBenhCuaDieuDuong();
} 
CPhieuChamSocNguoiBenhCuaDieuDuong::CPhieuChamSocNguoiBenhCuaDieuDuong(CWnd *pParent, int nMode, long nDocNo, int nRefIdx):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
		m_nDocumentNo = nDocNo;
		m_nRefIdx = nRefIdx;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPhieuChamSocNguoiBenhCuaDieuDuong::~CPhieuChamSocNguoiBenhCuaDieuDuong(){
}
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnCreateComponents(){
	m_wndAllInformation.Create(this, _T("All Information"), 5, 5, 1005, 614);
	m_wndDDDG.Create(this, _T("I. Dieu duong danh gia:"), 10, 55, 1000, 382);
	m_wndKHCSDD.Create(this, _T("III. Ke hoach cham soc dieu duong:"), 10, 384, 1000, 611);
	m_wndvan_chuyen.Create(this, _T("Van chuyen:"), 10, 28, 90, 53);
	m_wndtu_di.Create(this, _T("Tu di"), 95, 28, 175, 53);
	m_wndxe_lan.Create(this, _T("Xe lan"), 180, 28, 260, 53);
	m_wndgiuong.Create(this, _T("Giuong"), 265, 28, 345, 53);
	m_wndcang.Create(this, _T("Cang"), 350, 28, 430, 53);
	m_wnddanh_gia_chung.Create(this, _T("1. Danh gia chung:"), 15, 78, 135, 103);
	m_wndmachLabel.Create(this, _T("Mach"), 140, 78, 170, 103);
	m_wndmach.Create(this,175, 78, 205, 103); 
	m_wndhaLabel.Create(this, _T("HA"), 210, 78, 230, 103);
	m_wndha.Create(this,235, 78, 265, 103); 
	m_wndha2.Create(this,270, 78, 300, 103); 
	m_wndthannhietLabel.Create(this, _T("Than nhiet"), 305, 78, 370, 103);
	m_wndthan_nhiet.Create(this,375, 78, 410, 103); 
	m_wndnhipthoLabel.Create(this, _T("Nhip tho"), 415, 78, 470, 103);
	m_wndnhip_tho.Create(this,475, 78, 510, 103); 
	m_wndchieucaoLabel.Create(this, _T("Chieu cao"), 15, 103, 75, 128);
	m_wndchieu_cao.Create(this,80, 103, 120, 128); 
	m_wndcannangLabel.Create(this, _T("Can nang"), 125, 103, 185, 128);
	m_wndcan_nang.Create(this,190, 103, 230, 128); 
	m_wndthe_trang.Create(this, _T("The trang:"), 235, 103, 300, 128);
	m_wndgay.Create(this, _T("Gay"), 305, 103, 355, 128);
	m_wndtrung_binh.Create(this, _T("Trung binh"), 355, 103, 440, 128);
	m_wndbeo_phi.Create(this, _T("Beo phi"), 440, 103, 510, 128);
	m_wndtiensuLabel.Create(this, _T("2. Tien su:"), 15, 128, 185, 153);
	m_wndtien_su.Create(this,190, 128, 510, 153, 1, 0, 1); 
	m_wnddi_ung.Create(this, _T("Di ung:"), 15, 153, 65, 178);
	m_wnddi_ung_no.Create(this, _T("No"), 70, 153, 130, 178);
	m_wnddi_ung_yes.Create(this, _T("Yes"), 145, 153, 185, 178);
	m_wndchatthuocdiungLabel.Create(this, _T("Chat, thuoc di ung:"), 190, 153, 310, 178);
	m_wndchat_thuoc_di_ung.Create(this,315, 153, 510, 178, 1, 0, 1); 
	m_wnddgtamthankinhLabel.Create(this, _T("3. Danh gia ve tam than kinh:"), 15, 178, 185, 203);
	m_wnddg_tam_than_kinh.Create(this,190, 178, 510, 203, 1, 0, 1); 
	m_wndtinh_trang_bn.Create(this, _T("Tinh trang BN:"), 16, 203, 185, 228);
	m_wndtinh_tao.Create(this, _T("Tinh tao"), 190, 203, 280, 228);
	m_wndlo_mo.Create(this, _T("Lo mo"), 295, 203, 395, 228);
	m_wndme.Create(this, _T("Me"), 410, 203, 510, 228);
	m_wnddgtimmach.Create(this, _T("4. Danh gia ve tim mach, ho hap va tiet nieu:"), 15, 228, 185, 303);
	m_wndco_bl_tm.Create(this, _T("Co benh ly tim mach"), 190, 228, 395, 253);
	m_wndbl_tim_mach_no.Create(this, _T("No"), 410, 228, 470, 253);
	m_wndbl_tim_mach_yes.Create(this, _T("Yes"), 470, 228, 510, 253);
	m_wndco_kho_tho.Create(this, _T("Co kho tho"), 190, 253, 395, 278);
	m_wndkho_tho_no.Create(this, _T("No"), 410, 253, 470, 278);
	m_wndkho_tho_yes.Create(this, _T("Yes"), 470, 253, 510, 278);
	m_wndco_rl_tt.Create(this, _T("Co roi loan tieu tien"), 190, 278, 395, 303);
	m_wndroi_loan_tt_no.Create(this, _T("No"), 410, 278, 470, 303);
	m_wndroi_loan_tt_yes.Create(this, _T("Yes"), 470, 278, 510, 303);
	m_wnddgtieuhoadinhduong.Create(this, _T("5. Danh gia ve tieu hoa va dinh duong:"), 15, 303, 510, 328);
	m_wndcan_giac_khi_an.Create(this, _T("Cam giac khi an"), 15, 328, 185, 353);
	m_wndan_binh_thuong.Create(this, _T("Binh thuong"), 190, 328, 280, 353);
	m_wndngon_mieng.Create(this, _T("Ngon mieng"), 295, 328, 395, 353);
	m_wndchan_an.Create(this, _T("Chan an"), 410, 328, 510, 353);
	m_wndduong_an_uong.Create(this, _T("Duong an uong"), 15, 353, 185, 378);
	m_wndmieng.Create(this, _T("Mieng"), 190, 353, 280, 378);
	m_wndsonde_da_day.Create(this, _T("Sonde da day"), 295, 353, 395, 378);
	m_wndan_uong_khac.Create(this, _T("Khac"), 410, 353, 510, 378);
	m_wnddgdaniemmac.Create(this, _T("6. Danh gia ve da, niem mac:"), 520, 78, 995, 103);
	m_wndmau_sac.Create(this, _T("Mau sac"), 520, 103, 600, 128);
	m_wndmau_sac_binh_thuong.Create(this, _T("Binh thuong"), 605, 103, 710, 128);
	m_wndnhot_nhat.Create(this, _T("Nhot nhat"), 715, 103, 795, 128);
	m_wndtim_tai.Create(this, _T("Tim tai"), 800, 103, 880, 128);
	m_wndvang_da.Create(this, _T("Vang da"), 915, 103, 995, 128);
	m_wndloet_do_ti_de.Create(this, _T("Loet do ti de"), 520, 128, 600, 153);
	m_wndloet_no.Create(this, _T("No"), 605, 128, 665, 153);
	m_wndloet_yes.Create(this, _T("Yes"), 670, 128, 710, 153);
	m_wndvitriLabel.Create(this, _T("Vi tri"), 715, 128, 795, 153);
	m_wndvi_tri.Create(this,800, 128, 995, 153, 1, 0, 1); 
	m_wnddgtamly.Create(this, _T("7. Danh gia ve tam ly:"), 520, 153, 995, 178);
	m_wndbinh_tinh.Create(this, _T("Binh tinh"), 520, 178, 615, 203);
	m_wndhop_tac.Create(this, _T("Hop tac"), 631, 178, 711, 203);
	m_wndkhong_hop_tac.Create(this, _T("Khong hop tac"), 715, 178, 825, 203);
	m_wndso_hai.Create(this, _T("So hai"), 835, 178, 903, 203);
	m_wndtamly_khac.Create(this, _T("Khac"), 915, 178, 995, 203);
	m_wnddghoatdong.Create(this, _T("8. Danh gia cac hoat dong hang ngay:"), 520, 203, 995, 228);
	m_wndmuc_do.Create(this, _T("Muc do"), 520, 228, 635, 253);
	m_wnddoc_lap.Create(this, _T("1: Doc lap"), 640, 228, 715, 253);
	m_wndcan_giam_sat.Create(this, _T("2: Can giam sat"), 720, 228, 815, 253);
	m_wndcan_ho_tro.Create(this, _T("3: Can ho tro"), 820, 228, 900, 253);
	m_wndphu_thuoc_hoan_toan.Create(this, _T("4: Phu thuoc ht"), 905, 228, 995, 253);
	m_wndkha_nang_nghe.Create(this, _T("Kha nang nghe"), 520, 253, 635, 278);
	m_wndkha_nang_noi.Create(this, _T("Kha nang noi"), 520, 278, 635, 303);
	m_wndkha_nang_nhin.Create(this, _T("Kha nang nhin"), 520, 303, 635, 328);
	m_wndve_sinh_ca_nhan.Create(this, _T("Ve sinh ca nhan"), 520, 328, 635, 353);
	m_wndkha_nang_van_dong.Create(this, _T("Kha nang van dong"), 520, 353, 635, 378);
	m_wndnghe_dl.Create(this, _T(""), 670, 253, 710, 278);
	m_wndnghe_gs.Create(this, _T(""), 760, 253, 800, 278);
	m_wndnghe_ht.Create(this, _T(""), 850, 253, 890, 278);
	m_wndnghe_pt.Create(this, _T(""), 940, 253, 980, 278);
	m_wndnoi_dl.Create(this, _T(""), 670, 278, 710, 303);
	m_wndnoi_gs.Create(this, _T(""), 760, 278, 800, 303);
	m_wndnoi_ht.Create(this, _T(""), 850, 278, 890, 303);
	m_wndnoi_pt.Create(this, _T(""), 940, 278, 980, 303);
	m_wndnhin_dl.Create(this, _T(""), 670, 303, 710, 328);
	m_wndnhin_gs.Create(this, _T(""), 760, 303, 800, 328);
	m_wndnhin_ht.Create(this, _T(""), 850, 303, 890, 328);
	m_wndnhin_pt.Create(this, _T(""), 940, 303, 980, 328);
	m_wndve_sinh_dl.Create(this, _T(""), 670, 328, 710, 353);
	m_wndve_sinh_gs.Create(this, _T(""), 760, 328, 800, 353);
	m_wndve_sinh_ht.Create(this, _T(""), 850, 328, 890, 353);
	m_wndve_sinh_pt.Create(this, _T(""), 940, 328, 980, 353);
	m_wndvan_dong_dl.Create(this, _T(""), 670, 353, 710, 378);
	m_wndvan_dong_gs.Create(this, _T(""), 760, 353, 800, 378);
	m_wndvan_dong_ht.Create(this, _T(""), 850, 353, 890, 378);
	m_wndvan_dong_pt.Create(this, _T(""), 940, 353, 980, 378);
	m_wndchedochamsoc.Create(this, _T("1. Che do cham soc:"), 15, 407, 185, 432);
	m_wndcap1.Create(this, _T("Cap I"), 190, 407, 280, 432);
	m_wndcap2.Create(this, _T("Cap II"), 295, 407, 395, 432);
	m_wndcap3.Create(this, _T("Cap III"), 410, 407, 510, 432);
	m_wndtheodoi.Create(this, _T("2. Theo doi:"), 15, 432, 85, 457);
	m_wndtoanthan.Create(this, _T("Toan than:"), 85, 432, 145, 457);
	m_wndmhaLabel.Create(this, _T("M, HA"), 145, 432, 185, 457);
	m_wndmha.Create(this,190, 432, 230, 457); 
	m_wndnhietdoLabel.Create(this, _T("Nhiet do"), 235, 432, 285, 457);
	m_wndnhiet_do.Create(this,290, 432, 325, 457); 
	m_wndthoLabel.Create(this, _T("Tho"), 330, 432, 370, 457);
	m_wndtho.Create(this,375, 432, 410, 457); 
	m_wndythucLabel.Create(this, _T("Y thuc"), 415, 432, 470, 457);
	m_wndy_thuc.Create(this,475, 432, 510, 457); 
	m_wndtaichoLabel.Create(this, _T("Tai cho"), 15, 457, 185, 482);
	m_wndtai_cho.Create(this,190, 457, 510, 482, 1, 0, 1); 
	m_wndylenhdieutri.Create(this, _T("3. Thuc hien y lenh dieu tri:"), 15, 482, 510, 507);
	m_wndthuocLabel.Create(this, _T("- Thuoc"), 15, 507, 185, 532);
	m_wndthuoc.Create(this,190, 507, 510, 532, 1, 0, 1); 
	m_wndxetnghiemLabel.Create(this, _T("- Xet nghiem"), 15, 532, 185, 557);
	m_wndxet_nghiem.Create(this,190, 532, 510, 557, 1, 0, 1); 
	m_wndkhacLabel.Create(this, _T("- Khac"), 15, 557, 185, 582);
	m_wndy_lenh_khac.Create(this,190, 557, 510, 582, 1, 0, 1); 
	m_wnddukienchamsocLabel.Create(this, _T("4. Du kien cham soc:"), 15, 582, 185, 607);
	m_wnddu_kien_cham_soc.Create(this,190, 582, 510, 607, 1, 0, 1); 
	m_wndchedodinhduong.Create(this, _T("5. Che do dinh duong:"), 520, 407, 645, 432);
	m_wndcom.Create(this, _T("Com"), 650, 407, 710, 432);
	m_wndchao.Create(this, _T("Chao"), 715, 407, 780, 432);
	m_wndot.Create(this, _T("OT"), 785, 407, 845, 432);
	m_wndnhin.Create(this, _T("Nhin"), 850, 407, 920, 432);
	m_wnddinh_duong_khac.Create(this, _T("Khac"), 925, 407, 995, 432);
	m_wndkhactextLabel.Create(this, _T("Khac"), 520, 432, 645, 457);
	m_wnddinh_duong_khac_text.Create(this,650, 432, 995, 457, 1, 0, 1); 
	m_wndvesinhcanhanLabel.Create(this, _T("6. Huong dan tro giup nguoi benh ve sinh ca nhan:"), 520, 457, 995, 482);
	m_wndve_sinh_ca_nhan_text.Create(this,520, 482, 995, 507, 1, 0, 1); 
	m_wndgiaoducskLabel.Create(this, _T("7. Huong dan, giao duc suc khoe:"), 520, 507, 995, 532);
	m_wndgiao_duc_sk.Create(this,520, 532, 995, 557, 1, 0, 1); 
	m_wndchamsockhacLabel.Create(this, _T("8. Cham soc khac:"), 520, 557, 995, 582);
	m_wndcham_soc_khac.Create(this,520, 582, 995, 607, 1, 0, 1);  
	m_wndSave.Create(this, _T("Save"), 750, 616, 830, 641);
	m_wndPrint.Create(this, _T("Print"), 835, 616, 915, 641);
	m_wndCancel.Create(this, _T("Cancel"), 920, 616, 1000, 641);

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndmach.SetLimitText(35);
// 	m_wndmach.SetCheckValue(true);
// 	m_wndha.SetLimitText(35);
// 	m_wndha.SetCheckValue(true);
// 	m_wndha2.SetLimitText(35);
// 	m_wndha2.SetCheckValue(true);
// 	m_wndthan_nhiet.SetLimitText(35);
// 	m_wndthan_nhiet.SetCheckValue(true);
// 	m_wndnhip_tho.SetLimitText(35);
// 	m_wndnhip_tho.SetCheckValue(true);
// 	m_wndchieu_cao.SetLimitText(35);
// 	m_wndchieu_cao.SetCheckValue(true);
// 	m_wndcan_nang.SetLimitText(35);
// 	m_wndcan_nang.SetCheckValue(true);
// 	m_wndtien_su.SetLimitText(35);
// 	m_wndtien_su.SetCheckValue(true);
// 	m_wndchat_thuoc_di_ung.SetLimitText(35);
// 	m_wndchat_thuoc_di_ung.SetCheckValue(true);
// 	m_wnddg_tam_than_kinh.SetLimitText(35);
// 	m_wnddg_tam_than_kinh.SetCheckValue(true);
// 	m_wndvi_tri.SetLimitText(35);
// 	m_wndvi_tri.SetCheckValue(true);
// 	m_wndchan_doan_cua_bs.SetLimitText(35);
// 	m_wndchan_doan_cua_bs.SetCheckValue(true);
// 	m_wndmha.SetLimitText(35);
// 	m_wndmha.SetCheckValue(true);
// 	m_wndnhiet_do.SetLimitText(35);
// 	m_wndnhiet_do.SetCheckValue(true);
// 	m_wndtho.SetLimitText(35);
// 	m_wndtho.SetCheckValue(true);
// 	m_wndy_thuc.SetLimitText(35);
// 	m_wndy_thuc.SetCheckValue(true);
// 	m_wndtai_cho.SetLimitText(35);
// 	m_wndtai_cho.SetCheckValue(true);
// 	m_wndthuoc.SetLimitText(35);
// 	m_wndthuoc.SetCheckValue(true);
// 	m_wndxet_nghiem.SetLimitText(35);
// 	m_wndxet_nghiem.SetCheckValue(true);
// 	m_wndy_lenh_khac.SetLimitText(35);
// 	m_wndy_lenh_khac.SetCheckValue(true);
// 	m_wnddu_kien_cham_soc.SetLimitText(35);
// 	m_wnddu_kien_cham_soc.SetCheckValue(true);
// 	m_wnddinh_duong_khac_text.SetLimitText(35);
// 	m_wnddinh_duong_khac_text.SetCheckValue(true);
// 	m_wndve_sinh_ca_nhan_text.SetLimitText(35);
// 	m_wndve_sinh_ca_nhan_text.SetCheckValue(true);
// 	m_wndgiao_duc_sk.SetLimitText(35);
// 	m_wndgiao_duc_sk.SetCheckValue(true);
// 	m_wndcham_soc_khac.SetLimitText(35);
// 	m_wndcham_soc_khac.SetCheckValue(true);

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndtu_di.SetEvent(WE_CLICK, _Ontu_diSelectFnc);
	m_wndxe_lan.SetEvent(WE_CLICK, _Onxe_lanSelectFnc);
	m_wndgiuong.SetEvent(WE_CLICK, _OngiuongSelectFnc);
	m_wndcang.SetEvent(WE_CLICK, _OncangSelectFnc);
	//m_wndmach.SetEvent(WE_CHANGE, _OnmachChangeFnc);
	//m_wndmach.SetEvent(WE_SETFOCUS, _OnmachSetfocusFnc);
	//m_wndmach.SetEvent(WE_KILLFOCUS, _OnmachKillfocusFnc);
	m_wndmach.SetEvent(WE_CHECKVALUE, _OnmachCheckValueFnc);
	//m_wndha.SetEvent(WE_CHANGE, _OnhaChangeFnc);
	//m_wndha.SetEvent(WE_SETFOCUS, _OnhaSetfocusFnc);
	//m_wndha.SetEvent(WE_KILLFOCUS, _OnhaKillfocusFnc);
	m_wndha.SetEvent(WE_CHECKVALUE, _OnhaCheckValueFnc);
	//m_wndha2.SetEvent(WE_CHANGE, _OnhaChangeFnc);
	//m_wndha2.SetEvent(WE_SETFOCUS, _OnhaSetfocusFnc);
	//m_wndha2.SetEvent(WE_KILLFOCUS, _OnhaKillfocusFnc);
	m_wndha2.SetEvent(WE_CHECKVALUE, _OnhaCheckValueFnc);
	//m_wndthan_nhiet.SetEvent(WE_CHANGE, _Onthan_nhietChangeFnc);
	//m_wndthan_nhiet.SetEvent(WE_SETFOCUS, _Onthan_nhietSetfocusFnc);
	//m_wndthan_nhiet.SetEvent(WE_KILLFOCUS, _Onthan_nhietKillfocusFnc);
	m_wndthan_nhiet.SetEvent(WE_CHECKVALUE, _Onthan_nhietCheckValueFnc);
	//m_wndnhip_tho.SetEvent(WE_CHANGE, _Onnhip_thoChangeFnc);
	//m_wndnhip_tho.SetEvent(WE_SETFOCUS, _Onnhip_thoSetfocusFnc);
	//m_wndnhip_tho.SetEvent(WE_KILLFOCUS, _Onnhip_thoKillfocusFnc);
	m_wndnhip_tho.SetEvent(WE_CHECKVALUE, _Onnhip_thoCheckValueFnc);
	//m_wndchieu_cao.SetEvent(WE_CHANGE, _Onchieu_caoChangeFnc);
	//m_wndchieu_cao.SetEvent(WE_SETFOCUS, _Onchieu_caoSetfocusFnc);
	//m_wndchieu_cao.SetEvent(WE_KILLFOCUS, _Onchieu_caoKillfocusFnc);
	m_wndchieu_cao.SetEvent(WE_CHECKVALUE, _Onchieu_caoCheckValueFnc);
	//m_wndcan_nang.SetEvent(WE_CHANGE, _Oncan_nangChangeFnc);
	//m_wndcan_nang.SetEvent(WE_SETFOCUS, _Oncan_nangSetfocusFnc);
	//m_wndcan_nang.SetEvent(WE_KILLFOCUS, _Oncan_nangKillfocusFnc);
	m_wndcan_nang.SetEvent(WE_CHECKVALUE, _Oncan_nangCheckValueFnc);
	m_wndgay.SetEvent(WE_CLICK, _OngaySelectFnc);
	m_wndtrung_binh.SetEvent(WE_CLICK, _Ontrung_binhSelectFnc);
	m_wndbeo_phi.SetEvent(WE_CLICK, _Onbeo_phiSelectFnc);
	//m_wndtien_su.SetEvent(WE_CHANGE, _Ontien_suChangeFnc);
	//m_wndtien_su.SetEvent(WE_SETFOCUS, _Ontien_suSetfocusFnc);
	//m_wndtien_su.SetEvent(WE_KILLFOCUS, _Ontien_suKillfocusFnc);
	m_wndtien_su.SetEvent(WE_CHECKVALUE, _Ontien_suCheckValueFnc);
	m_wnddi_ung_no.SetEvent(WE_CLICK, _Ondi_ung_noSelectFnc);
	m_wnddi_ung_yes.SetEvent(WE_CLICK, _Ondi_ung_yesSelectFnc);
	//m_wndchat_thuoc_di_ung.SetEvent(WE_CHANGE, _Onchat_thuoc_di_ungChangeFnc);
	//m_wndchat_thuoc_di_ung.SetEvent(WE_SETFOCUS, _Onchat_thuoc_di_ungSetfocusFnc);
	//m_wndchat_thuoc_di_ung.SetEvent(WE_KILLFOCUS, _Onchat_thuoc_di_ungKillfocusFnc);
	m_wndchat_thuoc_di_ung.SetEvent(WE_CHECKVALUE, _Onchat_thuoc_di_ungCheckValueFnc);
	//m_wnddg_tam_than_kinh.SetEvent(WE_CHANGE, _Ondg_tam_than_kinhChangeFnc);
	//m_wnddg_tam_than_kinh.SetEvent(WE_SETFOCUS, _Ondg_tam_than_kinhSetfocusFnc);
	//m_wnddg_tam_than_kinh.SetEvent(WE_KILLFOCUS, _Ondg_tam_than_kinhKillfocusFnc);
	m_wnddg_tam_than_kinh.SetEvent(WE_CHECKVALUE, _Ondg_tam_than_kinhCheckValueFnc);
	m_wndtinh_tao.SetEvent(WE_CLICK, _Ontinh_taoSelectFnc);
	m_wndlo_mo.SetEvent(WE_CLICK, _Onlo_moSelectFnc);
	m_wndme.SetEvent(WE_CLICK, _OnmeSelectFnc);
	m_wndbl_tim_mach_no.SetEvent(WE_CLICK, _Onbl_tim_mach_noSelectFnc);
	m_wndbl_tim_mach_yes.SetEvent(WE_CLICK, _Onbl_tim_mach_yesSelectFnc);
	m_wndkho_tho_no.SetEvent(WE_CLICK, _Onkho_tho_noSelectFnc);
	m_wndkho_tho_yes.SetEvent(WE_CLICK, _Onkho_tho_yesSelectFnc);
	m_wndroi_loan_tt_no.SetEvent(WE_CLICK, _Onroi_loan_tt_noSelectFnc);
	m_wndroi_loan_tt_yes.SetEvent(WE_CLICK, _Onroi_loan_tt_yesSelectFnc);
	m_wndan_binh_thuong.SetEvent(WE_CLICK, _Onan_binh_thuongSelectFnc);
	m_wndngon_mieng.SetEvent(WE_CLICK, _Onngon_miengSelectFnc);
	m_wndchan_an.SetEvent(WE_CLICK, _Onchan_anSelectFnc);
	m_wndmieng.SetEvent(WE_CLICK, _OnmiengSelectFnc);
	m_wndsonde_da_day.SetEvent(WE_CLICK, _Onsonde_da_daySelectFnc);
	m_wndan_uong_khac.SetEvent(WE_CLICK, _Onan_uong_khacSelectFnc);
	m_wndmau_sac_binh_thuong.SetEvent(WE_CLICK, _Onmau_sac_binh_thuongSelectFnc);
	m_wndnhot_nhat.SetEvent(WE_CLICK, _Onnhot_nhatSelectFnc);
	m_wndtim_tai.SetEvent(WE_CLICK, _Ontim_taiSelectFnc);
	m_wndvang_da.SetEvent(WE_CLICK, _Onvang_daSelectFnc);
	m_wndloet_no.SetEvent(WE_CLICK, _Onloet_noSelectFnc);
	m_wndloet_yes.SetEvent(WE_CLICK, _Onloet_yesSelectFnc);
	//m_wndvi_tri.SetEvent(WE_CHANGE, _Onvi_triChangeFnc);
	//m_wndvi_tri.SetEvent(WE_SETFOCUS, _Onvi_triSetfocusFnc);
	//m_wndvi_tri.SetEvent(WE_KILLFOCUS, _Onvi_triKillfocusFnc);
	m_wndvi_tri.SetEvent(WE_CHECKVALUE, _Onvi_triCheckValueFnc);
	m_wndbinh_tinh.SetEvent(WE_CLICK, _Onbinh_tinhSelectFnc);
	m_wndhop_tac.SetEvent(WE_CLICK, _Onhop_tacSelectFnc);
	m_wndkhong_hop_tac.SetEvent(WE_CLICK, _Onkhong_hop_tacSelectFnc);
	m_wndso_hai.SetEvent(WE_CLICK, _Onso_haiSelectFnc);
	m_wndtamly_khac.SetEvent(WE_CLICK, _Ontamly_khacSelectFnc);
	m_wndnghe_dl.SetEvent(WE_CLICK, _Onnghe_dlSelectFnc);
	m_wndnghe_gs.SetEvent(WE_CLICK, _Onnghe_gsSelectFnc);
	m_wndnghe_ht.SetEvent(WE_CLICK, _Onnghe_htSelectFnc);
	m_wndnghe_pt.SetEvent(WE_CLICK, _Onnghe_ptSelectFnc);
	m_wndnoi_dl.SetEvent(WE_CLICK, _Onnoi_dlSelectFnc);
	m_wndnoi_gs.SetEvent(WE_CLICK, _Onnoi_gsSelectFnc);
	m_wndnoi_ht.SetEvent(WE_CLICK, _Onnoi_htSelectFnc);
	m_wndnoi_pt.SetEvent(WE_CLICK, _Onnoi_ptSelectFnc);
	m_wndnhin_dl.SetEvent(WE_CLICK, _Onnhin_dlSelectFnc);
	m_wndnhin_gs.SetEvent(WE_CLICK, _Onnhin_gsSelectFnc);
	m_wndnhin_ht.SetEvent(WE_CLICK, _Onnhin_htSelectFnc);
	m_wndnhin_pt.SetEvent(WE_CLICK, _Onnhin_ptSelectFnc);
	m_wndve_sinh_dl.SetEvent(WE_CLICK, _Onve_sinh_dlSelectFnc);
	m_wndve_sinh_gs.SetEvent(WE_CLICK, _Onve_sinh_gsSelectFnc);
	m_wndve_sinh_ht.SetEvent(WE_CLICK, _Onve_sinh_htSelectFnc);
	m_wndve_sinh_pt.SetEvent(WE_CLICK, _Onve_sinh_ptSelectFnc);
	m_wndvan_dong_dl.SetEvent(WE_CLICK, _Onvan_dong_dlSelectFnc);
	m_wndvan_dong_gs.SetEvent(WE_CLICK, _Onvan_dong_gsSelectFnc);
	m_wndvan_dong_ht.SetEvent(WE_CLICK, _Onvan_dong_htSelectFnc);
	m_wndvan_dong_pt.SetEvent(WE_CLICK, _Onvan_dong_ptSelectFnc);
// 	//m_wndchan_doan_cua_bs.SetEvent(WE_CHANGE, _Onchan_doan_cua_bsChangeFnc);
// 	//m_wndchan_doan_cua_bs.SetEvent(WE_SETFOCUS, _Onchan_doan_cua_bsSetfocusFnc);
// 	//m_wndchan_doan_cua_bs.SetEvent(WE_KILLFOCUS, _Onchan_doan_cua_bsKillfocusFnc);
// 	m_wndchan_doan_cua_bs.SetEvent(WE_CHECKVALUE, _Onchan_doan_cua_bsCheckValueFnc);
	m_wndcap1.SetEvent(WE_CLICK, _Oncap1SelectFnc);
	m_wndcap2.SetEvent(WE_CLICK, _Oncap2SelectFnc);
	m_wndcap3.SetEvent(WE_CLICK, _Oncap3SelectFnc);
	//m_wndmha.SetEvent(WE_CHANGE, _OnmhaChangeFnc);
	//m_wndmha.SetEvent(WE_SETFOCUS, _OnmhaSetfocusFnc);
	//m_wndmha.SetEvent(WE_KILLFOCUS, _OnmhaKillfocusFnc);
	m_wndmha.SetEvent(WE_CHECKVALUE, _OnmhaCheckValueFnc);
	//m_wndnhiet_do.SetEvent(WE_CHANGE, _Onnhiet_doChangeFnc);
	//m_wndnhiet_do.SetEvent(WE_SETFOCUS, _Onnhiet_doSetfocusFnc);
	//m_wndnhiet_do.SetEvent(WE_KILLFOCUS, _Onnhiet_doKillfocusFnc);
	m_wndnhiet_do.SetEvent(WE_CHECKVALUE, _Onnhiet_doCheckValueFnc);
	//m_wndtho.SetEvent(WE_CHANGE, _OnthoChangeFnc);
	//m_wndtho.SetEvent(WE_SETFOCUS, _OnthoSetfocusFnc);
	//m_wndtho.SetEvent(WE_KILLFOCUS, _OnthoKillfocusFnc);
	m_wndtho.SetEvent(WE_CHECKVALUE, _OnthoCheckValueFnc);
	//m_wndy_thuc.SetEvent(WE_CHANGE, _Ony_thucChangeFnc);
	//m_wndy_thuc.SetEvent(WE_SETFOCUS, _Ony_thucSetfocusFnc);
	//m_wndy_thuc.SetEvent(WE_KILLFOCUS, _Ony_thucKillfocusFnc);
	m_wndy_thuc.SetEvent(WE_CHECKVALUE, _Ony_thucCheckValueFnc);
	//m_wndtai_cho.SetEvent(WE_CHANGE, _Ontai_choChangeFnc);
	//m_wndtai_cho.SetEvent(WE_SETFOCUS, _Ontai_choSetfocusFnc);
	//m_wndtai_cho.SetEvent(WE_KILLFOCUS, _Ontai_choKillfocusFnc);
	m_wndtai_cho.SetEvent(WE_CHECKVALUE, _Ontai_choCheckValueFnc);
	//m_wndthuoc.SetEvent(WE_CHANGE, _OnthuocChangeFnc);
	//m_wndthuoc.SetEvent(WE_SETFOCUS, _OnthuocSetfocusFnc);
	//m_wndthuoc.SetEvent(WE_KILLFOCUS, _OnthuocKillfocusFnc);
	m_wndthuoc.SetEvent(WE_CHECKVALUE, _OnthuocCheckValueFnc);
	//m_wndxet_nghiem.SetEvent(WE_CHANGE, _Onxet_nghiemChangeFnc);
	//m_wndxet_nghiem.SetEvent(WE_SETFOCUS, _Onxet_nghiemSetfocusFnc);
	//m_wndxet_nghiem.SetEvent(WE_KILLFOCUS, _Onxet_nghiemKillfocusFnc);
	m_wndxet_nghiem.SetEvent(WE_CHECKVALUE, _Onxet_nghiemCheckValueFnc);
	//m_wndy_lenh_khac.SetEvent(WE_CHANGE, _Ony_lenh_khacChangeFnc);
	//m_wndy_lenh_khac.SetEvent(WE_SETFOCUS, _Ony_lenh_khacSetfocusFnc);
	//m_wndy_lenh_khac.SetEvent(WE_KILLFOCUS, _Ony_lenh_khacKillfocusFnc);
	m_wndy_lenh_khac.SetEvent(WE_CHECKVALUE, _Ony_lenh_khacCheckValueFnc);
	//m_wnddu_kien_cham_soc.SetEvent(WE_CHANGE, _Ondu_kien_cham_socChangeFnc);
	//m_wnddu_kien_cham_soc.SetEvent(WE_SETFOCUS, _Ondu_kien_cham_socSetfocusFnc);
	//m_wnddu_kien_cham_soc.SetEvent(WE_KILLFOCUS, _Ondu_kien_cham_socKillfocusFnc);
	m_wnddu_kien_cham_soc.SetEvent(WE_CHECKVALUE, _Ondu_kien_cham_socCheckValueFnc);
	m_wndcom.SetEvent(WE_CLICK, _OncomSelectFnc);
	m_wndchao.SetEvent(WE_CLICK, _OnchaoSelectFnc);
	m_wndot.SetEvent(WE_CLICK, _OnotSelectFnc);
	m_wndnhin.SetEvent(WE_CLICK, _OnnhinSelectFnc);
	m_wnddinh_duong_khac.SetEvent(WE_CLICK, _Ondinh_duong_khacSelectFnc);
	//m_wnddinh_duong_khac_text.SetEvent(WE_CHANGE, _Ondinh_duong_khac_textChangeFnc);
	//m_wnddinh_duong_khac_text.SetEvent(WE_SETFOCUS, _Ondinh_duong_khac_textSetfocusFnc);
	//m_wnddinh_duong_khac_text.SetEvent(WE_KILLFOCUS, _Ondinh_duong_khac_textKillfocusFnc);
	m_wnddinh_duong_khac_text.SetEvent(WE_CHECKVALUE, _Ondinh_duong_khac_textCheckValueFnc);
	//m_wndve_sinh_ca_nhan_text.SetEvent(WE_CHANGE, _Onve_sinh_ca_nhan_textChangeFnc);
	//m_wndve_sinh_ca_nhan_text.SetEvent(WE_SETFOCUS, _Onve_sinh_ca_nhan_textSetfocusFnc);
	//m_wndve_sinh_ca_nhan_text.SetEvent(WE_KILLFOCUS, _Onve_sinh_ca_nhan_textKillfocusFnc);
	m_wndve_sinh_ca_nhan_text.SetEvent(WE_CHECKVALUE, _Onve_sinh_ca_nhan_textCheckValueFnc);
	//m_wndgiao_duc_sk.SetEvent(WE_CHANGE, _Ongiao_duc_skChangeFnc);
	//m_wndgiao_duc_sk.SetEvent(WE_SETFOCUS, _Ongiao_duc_skSetfocusFnc);
	//m_wndgiao_duc_sk.SetEvent(WE_KILLFOCUS, _Ongiao_duc_skKillfocusFnc);
	m_wndgiao_duc_sk.SetEvent(WE_CHECKVALUE, _Ongiao_duc_skCheckValueFnc);
	//m_wndcham_soc_khac.SetEvent(WE_CHANGE, _Oncham_soc_khacChangeFnc);
	//m_wndcham_soc_khac.SetEvent(WE_SETFOCUS, _Oncham_soc_khacSetfocusFnc);
	//m_wndcham_soc_khac.SetEvent(WE_KILLFOCUS, _Oncham_soc_khacKillfocusFnc);
	m_wndcham_soc_khac.SetEvent(WE_CHECKVALUE, _Oncham_soc_khacCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	int nMode = GetMode();

	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();

	SetMode(nMode);

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndtu_di.GetDlgCtrlID(), m_btu_di);
	DDX_Check(pDX, m_wndxe_lan.GetDlgCtrlID(), m_bxe_lan);
	DDX_Check(pDX, m_wndgiuong.GetDlgCtrlID(), m_bgiuong);
	DDX_Check(pDX, m_wndcang.GetDlgCtrlID(), m_bcang);
	DDX_Text(pDX, m_wndmach.GetDlgCtrlID(), m_szmach);
	DDX_Text(pDX, m_wndha.GetDlgCtrlID(), m_szha);
	DDX_Text(pDX, m_wndha2.GetDlgCtrlID(), m_szha2);
	DDX_Text(pDX, m_wndthan_nhiet.GetDlgCtrlID(), m_szthan_nhiet);
	DDX_Text(pDX, m_wndnhip_tho.GetDlgCtrlID(), m_sznhip_tho);
	DDX_Text(pDX, m_wndchieu_cao.GetDlgCtrlID(), m_szchieu_cao);
	DDX_Text(pDX, m_wndcan_nang.GetDlgCtrlID(), m_szcan_nang);
	DDX_Check(pDX, m_wndgay.GetDlgCtrlID(), m_bgay);
	DDX_Check(pDX, m_wndtrung_binh.GetDlgCtrlID(), m_btrung_binh);
	DDX_Check(pDX, m_wndbeo_phi.GetDlgCtrlID(), m_bbeo_phi);
	DDX_Text(pDX, m_wndtien_su.GetDlgCtrlID(), m_sztien_su);
	DDX_Check(pDX, m_wnddi_ung_no.GetDlgCtrlID(), m_bdi_ung_no);
	DDX_Check(pDX, m_wnddi_ung_yes.GetDlgCtrlID(), m_bdi_ung_yes);
	DDX_Text(pDX, m_wndchat_thuoc_di_ung.GetDlgCtrlID(), m_szchat_thuoc_di_ung);
	DDX_Text(pDX, m_wnddg_tam_than_kinh.GetDlgCtrlID(), m_szdg_tam_than_kinh);
	DDX_Check(pDX, m_wndtinh_tao.GetDlgCtrlID(), m_btinh_tao);
	DDX_Check(pDX, m_wndlo_mo.GetDlgCtrlID(), m_blo_mo);
	DDX_Check(pDX, m_wndme.GetDlgCtrlID(), m_bme);
	DDX_Check(pDX, m_wndbl_tim_mach_no.GetDlgCtrlID(), m_bbl_tim_mach_no);
	DDX_Check(pDX, m_wndbl_tim_mach_yes.GetDlgCtrlID(), m_bbl_tim_mach_yes);
	DDX_Check(pDX, m_wndkho_tho_no.GetDlgCtrlID(), m_bkho_tho_no);
	DDX_Check(pDX, m_wndkho_tho_yes.GetDlgCtrlID(), m_bkho_tho_yes);
	DDX_Check(pDX, m_wndroi_loan_tt_no.GetDlgCtrlID(), m_broi_loan_tt_no);
	DDX_Check(pDX, m_wndroi_loan_tt_yes.GetDlgCtrlID(), m_broi_loan_tt_yes);
	DDX_Check(pDX, m_wndan_binh_thuong.GetDlgCtrlID(), m_ban_binh_thuong);
	DDX_Check(pDX, m_wndngon_mieng.GetDlgCtrlID(), m_bngon_mieng);
	DDX_Check(pDX, m_wndchan_an.GetDlgCtrlID(), m_bchan_an);
	DDX_Check(pDX, m_wndmieng.GetDlgCtrlID(), m_bmieng);
	DDX_Check(pDX, m_wndsonde_da_day.GetDlgCtrlID(), m_bsonde_da_day);
	DDX_Check(pDX, m_wndan_uong_khac.GetDlgCtrlID(), m_ban_uong_khac);
	DDX_Check(pDX, m_wndmau_sac_binh_thuong.GetDlgCtrlID(), m_bmau_sac_binh_thuong);
	DDX_Check(pDX, m_wndnhot_nhat.GetDlgCtrlID(), m_bnhot_nhat);
	DDX_Check(pDX, m_wndtim_tai.GetDlgCtrlID(), m_btim_tai);
	DDX_Check(pDX, m_wndvang_da.GetDlgCtrlID(), m_bvang_da);
	DDX_Check(pDX, m_wndloet_no.GetDlgCtrlID(), m_bloet_no);
	DDX_Check(pDX, m_wndloet_yes.GetDlgCtrlID(), m_bloet_yes);
	DDX_Text(pDX, m_wndvi_tri.GetDlgCtrlID(), m_szvi_tri);
	DDX_Check(pDX, m_wndbinh_tinh.GetDlgCtrlID(), m_bbinh_tinh);
	DDX_Check(pDX, m_wndhop_tac.GetDlgCtrlID(), m_bhop_tac);
	DDX_Check(pDX, m_wndkhong_hop_tac.GetDlgCtrlID(), m_bkhong_hop_tac);
	DDX_Check(pDX, m_wndso_hai.GetDlgCtrlID(), m_bso_hai);
	DDX_Check(pDX, m_wndtamly_khac.GetDlgCtrlID(), m_btamly_khac);
	DDX_Check(pDX, m_wndnghe_dl.GetDlgCtrlID(), m_bnghe_dl);
	DDX_Check(pDX, m_wndnghe_gs.GetDlgCtrlID(), m_bnghe_gs);
	DDX_Check(pDX, m_wndnghe_ht.GetDlgCtrlID(), m_bnghe_ht);
	DDX_Check(pDX, m_wndnghe_pt.GetDlgCtrlID(), m_bnghe_pt);
	DDX_Check(pDX, m_wndnoi_dl.GetDlgCtrlID(), m_bnoi_dl);
	DDX_Check(pDX, m_wndnoi_gs.GetDlgCtrlID(), m_bnoi_gs);
	DDX_Check(pDX, m_wndnoi_ht.GetDlgCtrlID(), m_bnoi_ht);
	DDX_Check(pDX, m_wndnoi_pt.GetDlgCtrlID(), m_bnoi_pt);
	DDX_Check(pDX, m_wndnhin_dl.GetDlgCtrlID(), m_bnhin_dl);
	DDX_Check(pDX, m_wndnhin_gs.GetDlgCtrlID(), m_bnhin_gs);
	DDX_Check(pDX, m_wndnhin_ht.GetDlgCtrlID(), m_bnhin_ht);
	DDX_Check(pDX, m_wndnhin_pt.GetDlgCtrlID(), m_bnhin_pt);
	DDX_Check(pDX, m_wndve_sinh_dl.GetDlgCtrlID(), m_bve_sinh_dl);
	DDX_Check(pDX, m_wndve_sinh_gs.GetDlgCtrlID(), m_bve_sinh_gs);
	DDX_Check(pDX, m_wndve_sinh_ht.GetDlgCtrlID(), m_bve_sinh_ht);
	DDX_Check(pDX, m_wndve_sinh_pt.GetDlgCtrlID(), m_bve_sinh_pt);
	DDX_Check(pDX, m_wndvan_dong_dl.GetDlgCtrlID(), m_bvan_dong_dl);
	DDX_Check(pDX, m_wndvan_dong_gs.GetDlgCtrlID(), m_bvan_dong_gs);
	DDX_Check(pDX, m_wndvan_dong_ht.GetDlgCtrlID(), m_bvan_dong_ht);
	DDX_Check(pDX, m_wndvan_dong_pt.GetDlgCtrlID(), m_bvan_dong_pt);
//	DDX_Text(pDX, m_wndchan_doan_cua_bs.GetDlgCtrlID(), m_szchan_doan_cua_bs);
	DDX_Check(pDX, m_wndcap1.GetDlgCtrlID(), m_bcap1);
	DDX_Check(pDX, m_wndcap2.GetDlgCtrlID(), m_bcap2);
	DDX_Check(pDX, m_wndcap3.GetDlgCtrlID(), m_bcap3);
	DDX_Text(pDX, m_wndmha.GetDlgCtrlID(), m_szmha);
	DDX_Text(pDX, m_wndnhiet_do.GetDlgCtrlID(), m_sznhiet_do);
	DDX_Text(pDX, m_wndtho.GetDlgCtrlID(), m_sztho);
	DDX_Text(pDX, m_wndy_thuc.GetDlgCtrlID(), m_szy_thuc);
	DDX_Text(pDX, m_wndtai_cho.GetDlgCtrlID(), m_sztai_cho);
	DDX_Text(pDX, m_wndthuoc.GetDlgCtrlID(), m_szthuoc);
	DDX_Text(pDX, m_wndxet_nghiem.GetDlgCtrlID(), m_szxet_nghiem);
	DDX_Text(pDX, m_wndy_lenh_khac.GetDlgCtrlID(), m_szy_lenh_khac);
	DDX_Text(pDX, m_wnddu_kien_cham_soc.GetDlgCtrlID(), m_szdu_kien_cham_soc);
	DDX_Check(pDX, m_wndcom.GetDlgCtrlID(), m_bcom);
	DDX_Check(pDX, m_wndchao.GetDlgCtrlID(), m_bchao);
	DDX_Check(pDX, m_wndot.GetDlgCtrlID(), m_bot);
	DDX_Check(pDX, m_wndnhin.GetDlgCtrlID(), m_bnhin);
	DDX_Check(pDX, m_wnddinh_duong_khac.GetDlgCtrlID(), m_bdinh_duong_khac);
	DDX_Text(pDX, m_wnddinh_duong_khac_text.GetDlgCtrlID(), m_szdinh_duong_khac_text);
	DDX_Text(pDX, m_wndve_sinh_ca_nhan_text.GetDlgCtrlID(), m_szve_sinh_ca_nhan_text);
	DDX_Text(pDX, m_wndgiao_duc_sk.GetDlgCtrlID(), m_szgiao_duc_sk);
	DDX_Text(pDX, m_wndcham_soc_khac.GetDlgCtrlID(), m_szcham_soc_khac);

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("tu_di")] =  m_btu_di;
	m_jData[_T("xe_lan")] =  m_bxe_lan;
	m_jData[_T("giuong")] =  m_bgiuong;
	m_jData[_T("cang")] =  m_bcang;
	m_jData[_T("mach")] =  m_szmach;
	m_jData[_T("ha")] =  m_szha;
	m_jData[_T("ha2")] =  m_szha2;
	m_jData[_T("than_nhiet")] =  m_szthan_nhiet;
	m_jData[_T("nhip_tho")] =  m_sznhip_tho;
	m_jData[_T("chieu_cao")] =  m_szchieu_cao;
	m_jData[_T("can_nang")] =  m_szcan_nang;
	m_jData[_T("gay")] =  m_bgay;
	m_jData[_T("trung_binh")] =  m_btrung_binh;
	m_jData[_T("beo_phi")] =  m_bbeo_phi;
	m_jData[_T("tien_su")] =  m_sztien_su;
	m_jData[_T("di_ung_no")] =  m_bdi_ung_no;
	m_jData[_T("di_ung_yes")] =  m_bdi_ung_yes;
	m_jData[_T("chat_thuoc_di_ung")] =  m_szchat_thuoc_di_ung;
	m_jData[_T("dg_tam_than_kinh")] =  m_szdg_tam_than_kinh;
	m_jData[_T("tinh_tao")] =  m_btinh_tao;
	m_jData[_T("lo_mo")] =  m_blo_mo;
	m_jData[_T("me")] =  m_bme;
	m_jData[_T("bl_tim_mach_no")] =  m_bbl_tim_mach_no;
	m_jData[_T("bl_tim_mach_yes")] =  m_bbl_tim_mach_yes;
	m_jData[_T("kho_tho_no")] =  m_bkho_tho_no;
	m_jData[_T("kho_tho_yes")] =  m_bkho_tho_yes;
	m_jData[_T("roi_loan_tt_no")] =  m_broi_loan_tt_no;
	m_jData[_T("roi_loan_tt_yes")] =  m_broi_loan_tt_yes;
	m_jData[_T("an_binh_thuong")] =  m_ban_binh_thuong;
	m_jData[_T("ngon_mieng")] =  m_bngon_mieng;
	m_jData[_T("chan_an")] =  m_bchan_an;
	m_jData[_T("mieng")] =  m_bmieng;
	m_jData[_T("sonde_da_day")] =  m_bsonde_da_day;
	m_jData[_T("an_uong_khac")] =  m_ban_uong_khac;
	m_jData[_T("mau_sac_binh_thuong")] =  m_bmau_sac_binh_thuong;
	m_jData[_T("nhot_nhat")] =  m_bnhot_nhat;
	m_jData[_T("tim_tai")] =  m_btim_tai;
	m_jData[_T("vang_da")] =  m_bvang_da;
	m_jData[_T("loet_no")] =  m_bloet_no;
	m_jData[_T("loet_yes")] =  m_bloet_yes;
	m_jData[_T("vi_tri")] =  m_szvi_tri;
	m_jData[_T("binh_tinh")] =  m_bbinh_tinh;
	m_jData[_T("hop_tac")] =  m_bhop_tac;
	m_jData[_T("khong_hop_tac")] =  m_bkhong_hop_tac;
	m_jData[_T("so_hai")] =  m_bso_hai;
	m_jData[_T("tamly_khac")] =  m_btamly_khac;
	m_jData[_T("nghe_dl")] =  m_bnghe_dl;
	m_jData[_T("nghe_gs")] =  m_bnghe_gs;
	m_jData[_T("nghe_ht")] =  m_bnghe_ht;
	m_jData[_T("nghe_pt")] =  m_bnghe_pt;
	m_jData[_T("noi_dl")] =  m_bnoi_dl;
	m_jData[_T("noi_gs")] =  m_bnoi_gs;
	m_jData[_T("noi_ht")] =  m_bnoi_ht;
	m_jData[_T("noi_pt")] =  m_bnoi_pt;
	m_jData[_T("nhin_dl")] =  m_bnhin_dl;
	m_jData[_T("nhin_gs")] =  m_bnhin_gs;
	m_jData[_T("nhin_ht")] =  m_bnhin_ht;
	m_jData[_T("nhin_pt")] =  m_bnhin_pt;
	m_jData[_T("ve_sinh_dl")] =  m_bve_sinh_dl;
	m_jData[_T("ve_sinh_gs")] =  m_bve_sinh_gs;
	m_jData[_T("ve_sinh_ht")] =  m_bve_sinh_ht;
	m_jData[_T("ve_sinh_pt")] =  m_bve_sinh_pt;
	m_jData[_T("van_dong_dl")] =  m_bvan_dong_dl;
	m_jData[_T("van_dong_gs")] =  m_bvan_dong_gs;
	m_jData[_T("van_dong_ht")] =  m_bvan_dong_ht;
	m_jData[_T("van_dong_pt")] =  m_bvan_dong_pt;
//	m_jData[_T("chan_doan_cua_bs")] =  m_szchan_doan_cua_bs;
	m_jData[_T("cap1")] =  m_bcap1;
	m_jData[_T("cap2")] =  m_bcap2;
	m_jData[_T("cap3")] =  m_bcap3;
	m_jData[_T("mha")] =  m_szmha;
	m_jData[_T("nhiet_do")] =  m_sznhiet_do;
	m_jData[_T("tho")] =  m_sztho;
	m_jData[_T("y_thuc")] =  m_szy_thuc;
	m_jData[_T("tai_cho")] =  m_sztai_cho;
	m_jData[_T("thuoc")] =  m_szthuoc;
	m_jData[_T("xet_nghiem")] =  m_szxet_nghiem;
	m_jData[_T("y_lenh_khac")] =  m_szy_lenh_khac;
	m_jData[_T("du_kien_cham_soc")] =  m_szdu_kien_cham_soc;
	m_jData[_T("com")] =  m_bcom;
	m_jData[_T("chao")] =  m_bchao;
	m_jData[_T("ot")] =  m_bot;
	m_jData[_T("nhin")] =  m_bnhin;
	m_jData[_T("dinh_duong_khac")] =  m_bdinh_duong_khac;
	m_jData[_T("dinh_duong_khac_text")] =  m_szdinh_duong_khac_text;
	m_jData[_T("ve_sinh_ca_nhan_text")] =  m_szve_sinh_ca_nhan_text;
	m_jData[_T("giao_duc_sk")] =  m_szgiao_duc_sk;
	m_jData[_T("cham_soc_khac")] =  m_szcham_soc_khac;
	}
	else
	{
			
	m_jData[_T("tu_di")].GetValue(m_btu_di);
	m_jData[_T("xe_lan")].GetValue(m_bxe_lan);
	m_jData[_T("giuong")].GetValue(m_bgiuong);
	m_jData[_T("cang")].GetValue(m_bcang);
	m_jData[_T("mach")].GetValue(m_szmach);
	m_jData[_T("ha")].GetValue(m_szha);
	m_jData[_T("ha2")].GetValue(m_szha2);
	m_jData[_T("than_nhiet")].GetValue(m_szthan_nhiet);
	m_jData[_T("nhip_tho")].GetValue(m_sznhip_tho);
	m_jData[_T("chieu_cao")].GetValue(m_szchieu_cao);
	m_jData[_T("can_nang")].GetValue(m_szcan_nang);
	m_jData[_T("gay")].GetValue(m_bgay);
	m_jData[_T("trung_binh")].GetValue(m_btrung_binh);
	m_jData[_T("beo_phi")].GetValue(m_bbeo_phi);
	m_jData[_T("tien_su")].GetValue(m_sztien_su);
	m_jData[_T("di_ung_no")].GetValue(m_bdi_ung_no);
	m_jData[_T("di_ung_yes")].GetValue(m_bdi_ung_yes);
	m_jData[_T("chat_thuoc_di_ung")].GetValue(m_szchat_thuoc_di_ung);
	m_jData[_T("dg_tam_than_kinh")].GetValue(m_szdg_tam_than_kinh);
	m_jData[_T("tinh_tao")].GetValue(m_btinh_tao);
	m_jData[_T("lo_mo")].GetValue(m_blo_mo);
	m_jData[_T("me")].GetValue(m_bme);
	m_jData[_T("bl_tim_mach_no")].GetValue(m_bbl_tim_mach_no);
	m_jData[_T("bl_tim_mach_yes")].GetValue(m_bbl_tim_mach_yes);
	m_jData[_T("kho_tho_no")].GetValue(m_bkho_tho_no);
	m_jData[_T("kho_tho_yes")].GetValue(m_bkho_tho_yes);
	m_jData[_T("roi_loan_tt_no")].GetValue(m_broi_loan_tt_no);
	m_jData[_T("roi_loan_tt_yes")].GetValue(m_broi_loan_tt_yes);
	m_jData[_T("an_binh_thuong")].GetValue(m_ban_binh_thuong);
	m_jData[_T("ngon_mieng")].GetValue(m_bngon_mieng);
	m_jData[_T("chan_an")].GetValue(m_bchan_an);
	m_jData[_T("mieng")].GetValue(m_bmieng);
	m_jData[_T("sonde_da_day")].GetValue(m_bsonde_da_day);
	m_jData[_T("an_uong_khac")].GetValue(m_ban_uong_khac);
	m_jData[_T("mau_sac_binh_thuong")].GetValue(m_bmau_sac_binh_thuong);
	m_jData[_T("nhot_nhat")].GetValue(m_bnhot_nhat);
	m_jData[_T("tim_tai")].GetValue(m_btim_tai);
	m_jData[_T("vang_da")].GetValue(m_bvang_da);
	m_jData[_T("loet_no")].GetValue(m_bloet_no);
	m_jData[_T("loet_yes")].GetValue(m_bloet_yes);
	m_jData[_T("vi_tri")].GetValue(m_szvi_tri);
	m_jData[_T("binh_tinh")].GetValue(m_bbinh_tinh);
	m_jData[_T("hop_tac")].GetValue(m_bhop_tac);
	m_jData[_T("khong_hop_tac")].GetValue(m_bkhong_hop_tac);
	m_jData[_T("so_hai")].GetValue(m_bso_hai);
	m_jData[_T("tamly_khac")].GetValue(m_btamly_khac);
	m_jData[_T("nghe_dl")].GetValue(m_bnghe_dl);
	m_jData[_T("nghe_gs")].GetValue(m_bnghe_gs);
	m_jData[_T("nghe_ht")].GetValue(m_bnghe_ht);
	m_jData[_T("nghe_pt")].GetValue(m_bnghe_pt);
	m_jData[_T("noi_dl")].GetValue(m_bnoi_dl);
	m_jData[_T("noi_gs")].GetValue(m_bnoi_gs);
	m_jData[_T("noi_ht")].GetValue(m_bnoi_ht);
	m_jData[_T("noi_pt")].GetValue(m_bnoi_pt);
	m_jData[_T("nhin_dl")].GetValue(m_bnhin_dl);
	m_jData[_T("nhin_gs")].GetValue(m_bnhin_gs);
	m_jData[_T("nhin_ht")].GetValue(m_bnhin_ht);
	m_jData[_T("nhin_pt")].GetValue(m_bnhin_pt);
	m_jData[_T("ve_sinh_dl")].GetValue(m_bve_sinh_dl);
	m_jData[_T("ve_sinh_gs")].GetValue(m_bve_sinh_gs);
	m_jData[_T("ve_sinh_ht")].GetValue(m_bve_sinh_ht);
	m_jData[_T("ve_sinh_pt")].GetValue(m_bve_sinh_pt);
	m_jData[_T("van_dong_dl")].GetValue(m_bvan_dong_dl);
	m_jData[_T("van_dong_gs")].GetValue(m_bvan_dong_gs);
	m_jData[_T("van_dong_ht")].GetValue(m_bvan_dong_ht);
	m_jData[_T("van_dong_pt")].GetValue(m_bvan_dong_pt);
//	m_jData[_T("chan_doan_cua_bs")].GetValue(m_szchan_doan_cua_bs);
	m_jData[_T("cap1")].GetValue(m_bcap1);
	m_jData[_T("cap2")].GetValue(m_bcap2);
	m_jData[_T("cap3")].GetValue(m_bcap3);
	m_jData[_T("mha")].GetValue(m_szmha);
	m_jData[_T("nhiet_do")].GetValue(m_sznhiet_do);
	m_jData[_T("tho")].GetValue(m_sztho);
	m_jData[_T("y_thuc")].GetValue(m_szy_thuc);
	m_jData[_T("tai_cho")].GetValue(m_sztai_cho);
	m_jData[_T("thuoc")].GetValue(m_szthuoc);
	m_jData[_T("xet_nghiem")].GetValue(m_szxet_nghiem);
	m_jData[_T("y_lenh_khac")].GetValue(m_szy_lenh_khac);
	m_jData[_T("du_kien_cham_soc")].GetValue(m_szdu_kien_cham_soc);
	m_jData[_T("com")].GetValue(m_bcom);
	m_jData[_T("chao")].GetValue(m_bchao);
	m_jData[_T("ot")].GetValue(m_bot);
	m_jData[_T("nhin")].GetValue(m_bnhin);
	m_jData[_T("dinh_duong_khac")].GetValue(m_bdinh_duong_khac);
	m_jData[_T("dinh_duong_khac_text")].GetValue(m_szdinh_duong_khac_text);
	m_jData[_T("ve_sinh_ca_nhan_text")].GetValue(m_szve_sinh_ca_nhan_text);
	m_jData[_T("giao_duc_sk")].GetValue(m_szgiao_duc_sk);
	m_jData[_T("cham_soc_khac")].GetValue(m_szcham_soc_khac);
	}

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType;

	szSQL.Format(_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno=%ld and hde_refidx=%ld and hde_type='PATIENT_CARE' "), m_nDocumentNo, m_nRefIdx);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		CString szData;
		rs.GetValue(_T("hde_value"), szData);
		rs.GetValue(_T("hde_createdby"), m_szCreatedBy);
		m_jData.Parse(szData);
		UpdateJson(FALSE);
	}
	else
	{
		SetDefaultValues();
	}

}
void CPhieuChamSocNguoiBenhCuaDieuDuong::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CPhieuChamSocNguoiBenhCuaDieuDuong::SetDefaultValues(){

	m_btu_di=FALSE;
	m_bxe_lan=FALSE;
	m_bgiuong=FALSE;
	m_bcang=FALSE;
	m_szmach.Empty();
	m_szha.Empty();
	m_szha2.Empty();
	m_szthan_nhiet.Empty();
	m_sznhip_tho.Empty();
	m_szchieu_cao.Empty();
	m_szcan_nang.Empty();
	m_bgay=FALSE;
	m_btrung_binh=FALSE;
	m_bbeo_phi=FALSE;
	m_sztien_su.Empty();
	m_bdi_ung_no=FALSE;
	m_bdi_ung_yes=FALSE;
	m_szchat_thuoc_di_ung.Empty();
	m_szdg_tam_than_kinh.Empty();
	m_btinh_tao=FALSE;
	m_blo_mo=FALSE;
	m_bme=FALSE;
	m_bbl_tim_mach_no=FALSE;
	m_bbl_tim_mach_yes=FALSE;
	m_bkho_tho_no=FALSE;
	m_bkho_tho_yes=FALSE;
	m_broi_loan_tt_no=FALSE;
	m_broi_loan_tt_yes=FALSE;
	m_ban_binh_thuong=FALSE;
	m_bngon_mieng=FALSE;
	m_bchan_an=FALSE;
	m_bmieng=FALSE;
	m_bsonde_da_day=FALSE;
	m_ban_uong_khac=FALSE;
	m_bmau_sac_binh_thuong=FALSE;
	m_bnhot_nhat=FALSE;
	m_btim_tai=FALSE;
	m_bvang_da=FALSE;
	m_bloet_no=FALSE;
	m_bloet_yes=FALSE;
	m_szvi_tri.Empty();
	m_bbinh_tinh=FALSE;
	m_bhop_tac=FALSE;
	m_bkhong_hop_tac=FALSE;
	m_bso_hai=FALSE;
	m_btamly_khac=FALSE;
	m_bnghe_dl=FALSE;
	m_bnghe_gs=FALSE;
	m_bnghe_ht=FALSE;
	m_bnghe_pt=FALSE;
	m_bnoi_dl=FALSE;
	m_bnoi_gs=FALSE;
	m_bnoi_ht=FALSE;
	m_bnoi_pt=FALSE;
	m_bnhin_dl=FALSE;
	m_bnhin_gs=FALSE;
	m_bnhin_ht=FALSE;
	m_bnhin_pt=FALSE;
	m_bve_sinh_dl=FALSE;
	m_bve_sinh_gs=FALSE;
	m_bve_sinh_ht=FALSE;
	m_bve_sinh_pt=FALSE;
	m_bvan_dong_dl=FALSE;
	m_bvan_dong_gs=FALSE;
	m_bvan_dong_ht=FALSE;
	m_bvan_dong_pt=FALSE;
//	m_szchan_doan_cua_bs.Empty();
	m_bcap1=FALSE;
	m_bcap2=FALSE;
	m_bcap3=FALSE;
	m_szmha.Empty();
	m_sznhiet_do.Empty();
	m_sztho.Empty();
	m_szy_thuc.Empty();
	m_sztai_cho.Empty();
	m_szthuoc.Empty();
	m_szxet_nghiem.Empty();
	m_szy_lenh_khac.Empty();
	m_szdu_kien_cham_soc.Empty();
	m_bcom=FALSE;
	m_bchao=FALSE;
	m_bot=FALSE;
	m_bnhin=FALSE;
	m_bdinh_duong_khac=FALSE;
	m_szdinh_duong_khac_text.Empty();
	m_szve_sinh_ca_nhan_text.Empty();
	m_szgiao_duc_sk.Empty();
	m_szcham_soc_khac.Empty();
	m_szCreatedBy.Empty();

}
int CPhieuChamSocNguoiBenhCuaDieuDuong::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 4, -1);
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
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontu_diSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onxe_lanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OngiuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OncangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmachChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmachSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmachKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnmachCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnhaChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnhaSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnhaKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnhaCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onha2Change(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onha2Setfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onha2Killfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onha2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onthan_nhietChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onthan_nhietSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onthan_nhietKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onthan_nhietCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhip_thoChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhip_thoSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhip_thoKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhip_thoCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchieu_caoChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchieu_caoSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchieu_caoKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onchieu_caoCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncan_nangChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncan_nangSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncan_nangKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Oncan_nangCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OngaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontrung_binhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onbeo_phiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontien_suChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontien_suSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontien_suKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ontien_suCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondi_ung_noSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondi_ung_yesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchat_thuoc_di_ungChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchat_thuoc_di_ungSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchat_thuoc_di_ungKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onchat_thuoc_di_ungCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondg_tam_than_kinhChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondg_tam_than_kinhSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondg_tam_than_kinhKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ondg_tam_than_kinhCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontinh_taoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onlo_moSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onbl_tim_mach_noSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onbl_tim_mach_yesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onkho_tho_noSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onkho_tho_yesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onroi_loan_tt_noSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onroi_loan_tt_yesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onan_binh_thuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onngon_miengSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchan_anSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmiengSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onsonde_da_daySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onan_uong_khacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onmau_sac_binh_thuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhot_nhatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontim_taiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvang_daSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onloet_noSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onloet_yesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvi_triChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvi_triSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvi_triKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onvi_triCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onbinh_tinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onhop_tacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onkhong_hop_tacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onso_haiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontamly_khacSelect(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnghe_dlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnghe_gsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnghe_htSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnghe_ptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnoi_dlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnoi_gsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnoi_htSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnoi_ptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhin_dlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhin_gsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhin_htSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhin_ptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_dlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_gsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_htSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_ptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvan_dong_dlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvan_dong_gsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvan_dong_htSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Onvan_dong_ptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
// /*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchan_doan_cua_bsChange(){
// 	
// } */
// /*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchan_doan_cua_bsSetfocus(){
// 	
// } */
// /*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onchan_doan_cua_bsKillfocus(){
// 	
// } */
// int CPhieuChamSocNguoiBenhCuaDieuDuong::Onchan_doan_cua_bsCheckValue(){
// 	return 0;
// } 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncap1Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncap2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncap3Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmhaChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmhaSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnmhaKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnmhaCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhiet_doChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhiet_doSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhiet_doKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onnhiet_doCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthoChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthoSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthoKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnthoCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_thucChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_thucSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_thucKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_thucCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontai_choChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontai_choSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ontai_choKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ontai_choCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthuocChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthuocSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::OnthuocKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnthuocCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onxet_nghiemChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onxet_nghiemSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onxet_nghiemKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onxet_nghiemCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_lenh_khacChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_lenh_khacSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_lenh_khacKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ony_lenh_khacCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondu_kien_cham_socChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondu_kien_cham_socSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondu_kien_cham_socKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ondu_kien_cham_socCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OncomSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OnchaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OnotSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::OnnhinSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondinh_duong_khacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondinh_duong_khac_textChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondinh_duong_khac_textSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ondinh_duong_khac_textKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ondinh_duong_khac_textCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_ca_nhan_textChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_ca_nhan_textSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_ca_nhan_textKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Onve_sinh_ca_nhan_textCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ongiao_duc_skChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ongiao_duc_skSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Ongiao_duc_skKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Ongiao_duc_skCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncham_soc_khacChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncham_soc_khacSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuong::Oncham_soc_khacKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuong::Oncham_soc_khacCheckValue(){
	return 0;
} 
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSavePhieuChamSocNguoiBenhCuaDieuDuong() > 0)
	{
		ShowMessageBox(_T("Data saved"));
	}
	
} 
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CPhieuChamSocNguoiBenhCuaDieuDuong::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt, rpt2;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptGroup = NULL,* rptDetail;
	CString szSQL, tmpStr, szDate, szWhere, szDoctorDept, szSubSelect;
	int nIdx = 1;

// 	if (!rpt.Init(_T("Reports\\HMS\\HOSOCHAMSOCNGUOIBENHCUADIEUDUONG.RPT")))
// 		return;

	if (!rpt.Init(_T("Reports\\HMS\\TM_HOSOCHAMSOCNGUOIBENHCUADIEUDUONG_1.RPT")))
		return;

	if (!rpt2.Init(_T("Reports\\HMS\\TM_HOSOCHAMSOCNGUOIBENHCUADIEUDUONG_2.RPT")))
		return;

	szSQL.Format(_T(" SELECT get_patientname(htr_docno)                 AS patientname,") \
		_T("   CAST(TO_CHAR(hp_birthdate, 'YYYY') AS INTEGER)  AS birthyear,") \
		_T("   hms_getsex(hp_sex)                              AS psex,") \
		_T("   htr_admitdate                                   AS admitdate,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("   hd_telephone                                    AS telephone,") \
		_T("   htr_maindisease                                 AS maindisease,") \
		_T("   get_username(htr_doctor)                        AS doctor,") \
		_T("   get_username(hb_nurse)                          AS nurse,") \
		_T("   hd_relative                                     AS relative,") \
		_T("   hd_contacttel                                   AS contacttel,") \
		_T("   CASE WHEN htr_idx = 1 THEN hd_admitdept ELSE htr_tdeptid END AS indept,") \
		_T("   htr_recordno									   AS recordno") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(htr_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(htr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_bed") \
		_T(" ON(htr_docno    = hb_docno") \
		_T(" AND htr_idx     = hb_idx)") \
		_T(" WHERE htr_docno = %ld") \
		_T(" AND htr_idx     = %ld"), m_nDocumentNo, m_nRefIdx);
	_debug(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	rptDetail = rpt.AddDetail();

	rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	rptDetail->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	rptDetail->SetValue(_T("Recordno"), rs.GetValue(_T("recordno")));
	rptDetail->SetValue(_T("PATIENTNAME"), rs.GetValue(_T("patientname")));
	rptDetail->SetValue(_T("Yearofbirth"), rs.GetValue(_T("birthyear")));
	rptDetail->SetValue(_T("Sex"), rs.GetValue(_T("psex")));
	rs.GetValue(_T("admitdate"), tmpStr);
	rptDetail->SetValue(_T("InDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptDetail->SetValue(_T("Address"), rs.GetValue(_T("address")));
	rptDetail->SetValue(_T("Phone"), rs.GetValue(_T("telephone")));

	rs.GetValue(_T("indept"), tmpStr);
	if(tmpStr == _T("C1.3"))
		rptDetail->SetValue(_T("khoacc"), _T("X"));
	else if(tmpStr == _T("C1.1") || tmpStr == _T("C1.2") || tmpStr == _T("TYC"))
		rptDetail->SetValue(_T("pk"), _T("X"));
	else
		rptDetail->SetValue(_T("vkkhac"), _T("X"));

	rptDetail->SetValue(_T("contact"), rs.GetValue(_T("relative")));
	rptDetail->SetValue(_T("contacttel"), rs.GetValue(_T("contacttel")));
	rptDetail->SetValue(_T("dieuduong"), rs.GetValue(_T("nurse")));
	rptDetail->SetValue(_T("doctorname"), rs.GetValue(_T("doctor")));

	if(m_btu_di == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tudi"), tmpStr);
	if(m_bxe_lan == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("xelan"), tmpStr);
	if(m_bgiuong == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("giuong"), tmpStr);
	if(m_bcang == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("cang"), tmpStr);

	rptDetail->SetValue(_T("Pulse"), m_szmach);
	rptDetail->SetValue(_T("BloodPressure"), m_szha);
	rptDetail->SetValue(_T("BloodPressure2"), m_szha2);
	rptDetail->SetValue(_T("Temperature"), m_szthan_nhiet);
	rptDetail->SetValue(_T("BreathInterval"), m_sznhip_tho);
	rptDetail->SetValue(_T("height"), m_szchieu_cao);
	rptDetail->SetValue(_T("Weight"), m_szcan_nang);

	if(m_bgay == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("gay"), tmpStr);
	if(m_btrung_binh == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("trungbinh"), tmpStr);
	if(m_bbeo_phi == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("beophi"), tmpStr);

	rptDetail->SetValue(_T("tiensu"), m_sztien_su);
	if(m_bdi_ung_no == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("duno"), tmpStr);
	if(m_bdi_ung_yes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("duyes"), tmpStr);
	rptDetail->SetValue(_T("thuoc_di_ung"), m_szchat_thuoc_di_ung);

	rptDetail->SetValue(_T("dgtamthan"), m_szdg_tam_than_kinh);
	if(m_btinh_tao == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tinhtao"), tmpStr);
	if(m_blo_mo == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("lomo"), tmpStr);
	if(m_bme == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("me"), tmpStr);
	
	if(m_bbl_tim_mach_no == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tmno"), tmpStr);
	if(m_bbl_tim_mach_yes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tmyes"), tmpStr);
	if(m_bkho_tho_no == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ktno"), tmpStr);
	if(m_bkho_tho_yes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ktyes"), tmpStr);
	if(m_broi_loan_tt_no == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ttno"), tmpStr);
	if(m_broi_loan_tt_yes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ttyes"), tmpStr);
	
	if(m_ban_binh_thuong == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("binhthuong"), tmpStr);
	if(m_bngon_mieng == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ngonmieng"), tmpStr);
	if(m_bchan_an == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("chanan"), tmpStr);
	if(m_bmieng == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("mieng"), tmpStr);
	if(m_bsonde_da_day == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("sond"), tmpStr);
	if(m_ban_uong_khac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ddkhac"), tmpStr);

	if(m_bmau_sac_binh_thuong == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("dabt"), tmpStr);
	if(m_bnhot_nhat == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhotnhat"), tmpStr);
	if(m_btim_tai == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("timtai"), tmpStr);
	if(m_bvang_da == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vangda"), tmpStr);
	if(m_bloet_no == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tideno"), tmpStr);
	if(m_bloet_yes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tideyes"), tmpStr);
	rptDetail->SetValue(_T("location"), m_szvi_tri);
	
	if(m_bbinh_tinh == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("binhtinh"), tmpStr);
	if(m_bhop_tac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hoptac"), tmpStr);
	if(m_bkhong_hop_tac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("khoptac"), tmpStr);
	if(m_bso_hai == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("sohai"), tmpStr);
	if(m_btamly_khac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tlkhac"), tmpStr);

	if(m_bnghe_dl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghedl"), tmpStr);
	if(m_bnghe_gs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghegs"), tmpStr);
	if(m_bnghe_ht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ngheht"), tmpStr);
	if(m_bnghe_pt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghept"), tmpStr);

	if(m_bnoi_dl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noidl"), tmpStr);
	if(m_bnoi_gs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noigs"), tmpStr);
	if(m_bnoi_ht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noiht"), tmpStr);
	if(m_bnoi_pt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noipt"), tmpStr);

	if(m_bnhin_dl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhindl"), tmpStr);
	if(m_bnhin_gs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhings"), tmpStr);
	if(m_bnhin_ht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhinht"), tmpStr);
	if(m_bnhin_pt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhinpt"), tmpStr);

	if(m_bve_sinh_dl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsdl"), tmpStr);
	if(m_bve_sinh_gs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsgs"), tmpStr);
	if(m_bve_sinh_ht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsht"), tmpStr);
	if(m_bve_sinh_pt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vspt"), tmpStr);

	if(m_bvan_dong_dl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vddl"), tmpStr);
	if(m_bvan_dong_gs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdgs"), tmpStr);
	if(m_bvan_dong_ht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdht"), tmpStr);
	if(m_bvan_dong_pt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdpt"), tmpStr);

	rptDetail->SetPageBreak();
	rptDetail = rpt2.AddDetail();

	rptDetail->SetValue(_T("chandoan"), rs.GetValue(_T("maindisease")));

	if(m_bcap1 == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("Cap1"), tmpStr);
	if(m_bcap2 == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("Cap2"), tmpStr);
	if(m_bcap3 == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("Cap3"), tmpStr);

	rptDetail->SetValue(_T("mha"), m_szmha);
	rptDetail->SetValue(_T("nhietdo"), m_sznhiet_do);
	rptDetail->SetValue(_T("tho"), m_sztho);
	rptDetail->SetValue(_T("ythuc"), m_szy_thuc);
	rptDetail->SetValue(_T("taicho"), m_sztai_cho);

	rptDetail->SetValue(_T("thuoc"), m_szthuoc);
	rptDetail->SetValue(_T("xetnghiem"), m_szxet_nghiem);
	rptDetail->SetValue(_T("ylenhkhac"), m_szy_lenh_khac);

	rptDetail->SetValue(_T("chamsoc"), m_szdu_kien_cham_soc);

	if(m_bcom == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("com"), tmpStr);
	if(m_bchao == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("chao"), tmpStr);
	if(m_bot == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ot"), tmpStr);
	if(m_bnhin == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhin"), tmpStr);
	if(m_bdinh_duong_khac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ankhac"), tmpStr);
	rptDetail->SetValue(_T("textkhac"), m_szdinh_duong_khac_text);

	rptDetail->SetValue(_T("vesinhcanhan"), m_szve_sinh_ca_nhan_text);

	rptDetail->SetValue(_T("giaoducsk"), m_szgiao_duc_sk);

	rptDetail->SetValue(_T("chamsockhac"), m_szcham_soc_khac);

	szDate = pMF->GetSysDate();
	tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), szDate.Mid(8, 2), szDate.Mid(5, 2), szDate.Left(4));
	rptDetail->SetValue(_T("PrintDate"), tmpStr);

	rptDetail->SetValue(_T("UserName"), pMF->GetDoctorName(m_szCreatedBy));

	rpt.AddDetail((rptDetail));
	rpt.PrintPreview();
} 
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnAddPhieuChamSocNguoiBenhCuaDieuDuong(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnEditPhieuChamSocNguoiBenhCuaDieuDuong(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnDeletePhieuChamSocNguoiBenhCuaDieuDuong(){
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
 		OnCancelPhieuChamSocNguoiBenhCuaDieuDuong();
 	}
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnSavePhieuChamSocNguoiBenhCuaDieuDuong(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	m_jData.ToString(szData);

	szSQL.Format(_T("HMS_DOC_EMR_CREATE('PATIENT_CARE', %ld, '%s', %ld, %d, '%s', 'XXX', '%s') "),
		m_nDocumentNo, pMF->m_szDept, m_nRefIdx, 0, pMF->GetCurrentUser(), szData);

	int ret = str2int(pMF->ExecDML(szSQL));
	return ret;
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnCancelPhieuChamSocNguoiBenhCuaDieuDuong(){
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
int CPhieuChamSocNguoiBenhCuaDieuDuong::OnPhieuChamSocNguoiBenhCuaDieuDuongListLoadData(){
	return 0;
}
