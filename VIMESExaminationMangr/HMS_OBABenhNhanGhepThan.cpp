#include "HMS_OBABenhNhanGhepThan.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnThoiGianGhepChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThoiGianGhepChange();
} */
/*static void _OnThoiGianGhepSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThoiGianGhepSetfocus();} */ 
/*static void _OnThoiGianGhepKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThoiGianGhepKillfocus();
} */
static int _OnThoiGianGhepCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThoiGianGhepCheckValue();
} 
/*static void _OnViTriGhepChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnViTriGhepChange();
} */
/*static void _OnViTriGhepSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnViTriGhepSetfocus();} */ 
/*static void _OnViTriGhepKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnViTriGhepKillfocus();
} */
static int _OnViTriGhepCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnViTriGhepCheckValue();
} 
/*static void _OnTinhTrangVetMoChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTinhTrangVetMoChange();
} */
/*static void _OnTinhTrangVetMoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTinhTrangVetMoSetfocus();} */ 
/*static void _OnTinhTrangVetMoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTinhTrangVetMoKillfocus();
} */
static int _OnTinhTrangVetMoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTinhTrangVetMoCheckValue();
} 
static void _OnCNIsSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnCNIsSelect();
}
/*static void _OnLieu1ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu1Change();
} */
/*static void _OnLieu1SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu1Setfocus();} */ 
/*static void _OnLieu1KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu1Killfocus();
} */
static int _OnLieu1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu1CheckValue();
} 
static void _OnCysASelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnCysASelect();
}
/*static void _OnLieu2ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu2Change();
} */
/*static void _OnLieu2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu2Setfocus();} */ 
/*static void _OnLieu2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu2Killfocus();
} */
static int _OnLieu2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu2CheckValue();
} 
static void _OnMMFSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnMMFSelect();
}
/*static void _OnLieu3ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu3Change();
} */
/*static void _OnLieu3SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu3Setfocus();} */ 
/*static void _OnLieu3KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu3Killfocus();
} */
static int _OnLieu3CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu3CheckValue();
} 
static void _OnCorticoidSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnCorticoidSelect();
}
/*static void _OnLieuChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieuChange();
} */
/*static void _OnLieuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieuSetfocus();} */ 
/*static void _OnLieuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieuKillfocus();
} */
static int _OnLieuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieuCheckValue();
} 
/*static void _OnThuocKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhacChange();
} */
/*static void _OnThuocKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhacSetfocus();} */ 
/*static void _OnThuocKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhacKillfocus();
} */
static int _OnThuocKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhacCheckValue();
} 
/*static void _OnTacDungPhuChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTacDungPhuChange();
} */
/*static void _OnTacDungPhuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTacDungPhuSetfocus();} */ 
/*static void _OnTacDungPhuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTacDungPhuKillfocus();
} */
static int _OnTacDungPhuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTacDungPhuCheckValue();
} 
static void _OnThuocTaoHongCauSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnThuocTaoHongCauSelect();
}
/*static void _OnLieu5ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu5Change();
} */
/*static void _OnLieu5SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu5Setfocus();} */ 
/*static void _OnLieu5KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu5Killfocus();
} */
static int _OnLieu5CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu5CheckValue();
} 
static void _OnThuocSatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnThuocSatSelect();
}
/*static void _OnLieu6ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu6Change();
} */
/*static void _OnLieu6SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu6Setfocus();} */ 
/*static void _OnLieu6KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu6Killfocus();
} */
static int _OnLieu6CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu6CheckValue();
} 
static void _OnTruyenMauSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnTruyenMauSelect();
}
static void _OnUcCheMenChuyenSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnUcCheMenChuyenSelect();
}
/*static void _OnLieu7ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu7Change();
} */
/*static void _OnLieu7SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu7Setfocus();} */ 
/*static void _OnLieu7KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu7Killfocus();
} */
static int _OnLieu7CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu7CheckValue();
} 
static void _OnUcCheThuTheATSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnUcCheThuTheATSelect();
}
/*static void _OnLieu8ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu8Change();
} */
/*static void _OnLieu8SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu8Setfocus();} */ 
/*static void _OnLieu8KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu8Killfocus();
} */
static int _OnLieu8CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu8CheckValue();
} 
static void _OnUcCheCanxiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnUcCheCanxiSelect();
}
/*static void _OnLieu9ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu9Change();
} */
/*static void _OnLieu9SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu9Setfocus();} */ 
/*static void _OnLieu9KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu9Killfocus();
} */
static int _OnLieu9CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu9CheckValue();
} 
static void _OnUcCheBetaSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnUcCheBetaSelect();
}
/*static void _OnLieu10ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu10Change();
} */
/*static void _OnLieu10SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu10Setfocus();} */ 
/*static void _OnLieu10KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu10Killfocus();
} */
static int _OnLieu10CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu10CheckValue();
} 
static void _OnLoiTieuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnLoiTieuSelect();
}
/*static void _OnLieu11ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu11Change();
} */
/*static void _OnLieu11SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu11Setfocus();} */ 
/*static void _OnLieu11KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu11Killfocus();
} */
static int _OnLieu11CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnLieu11CheckValue();
} 
/*static void _OnHaDuongMauChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnHaDuongMauChange();
} */
/*static void _OnHaDuongMauSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnHaDuongMauSetfocus();} */ 
/*static void _OnHaDuongMauKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnHaDuongMauKillfocus();
} */
static int _OnHaDuongMauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnHaDuongMauCheckValue();
} 
/*static void _OnGiamAcidUricChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnGiamAcidUricChange();
} */
/*static void _OnGiamAcidUricSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnGiamAcidUricSetfocus();} */ 
/*static void _OnGiamAcidUricKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnGiamAcidUricKillfocus();
} */
static int _OnGiamAcidUricCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnGiamAcidUricCheckValue();
} 
/*static void _OnThuocKhac2ChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhac2Change();
} */
/*static void _OnThuocKhac2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhac2Setfocus();} */ 
/*static void _OnThuocKhac2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhac2Killfocus();
} */
static int _OnThuocKhac2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnThuocKhac2CheckValue();
} 
static void _OnVCTMSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnVCTMSelect();
}
static void _OnTHASelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnTHASelect();
}
static void _OnDTDSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnDTDSelect();
}
static void _OnLupusSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnLupusSelect();
}
static void _OnThanBamSinhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnThanBamSinhSelect();
}
static void _OnViemKheThanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnViemKheThanSelect();
}
/*static void _OnCacBenhKemTheoChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnCacBenhKemTheoChange();
} */
/*static void _OnCacBenhKemTheoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnCacBenhKemTheoSetfocus();} */ 
/*static void _OnCacBenhKemTheoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnCacBenhKemTheoKillfocus();
} */
static int _OnCacBenhKemTheoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnCacBenhKemTheoCheckValue();
} 
static void _OnMetMoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnMetMoiSelect();
}
static void _OnBuonNonSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnBuonNonSelect();
}
static void _OnHoaMatChongMatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnHoaMatChongMatSelect();
}
static void _OnDaNiemMacNhotSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnDaNiemMacNhotSelect();
}
static void _OnPhuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnPhuSelect();
}
static void _OnNuocTieuhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnNuocTieuhSelect();
}
static void _OnTrongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnTrongSelect();
}
static void _OnHongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnHongSelect();
}
static void _OnDauVungThanGhepSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnDauVungThanGhepSelect();
}
static void _OnTiengThoiVungThanGhepSelectFnc(CWnd *pWnd){
	 ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnTiengThoiVungThanGhepSelect();
}
/*static void _OnTrieuChungKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTrieuChungKhacChange();
} */
/*static void _OnTrieuChungKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTrieuChungKhacSetfocus();} */ 
/*static void _OnTrieuChungKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTrieuChungKhacKillfocus();
} */
static int _OnTrieuChungKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBABenhNhanGhepThan *)pWnd)->OnTrieuChungKhacCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBABenhNhanGhepThan *pVw = (CHMS_OBABenhNhanGhepThan *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBABenhNhanGhepThan *pVw = (CHMS_OBABenhNhanGhepThan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBABenhNhanGhepThan *pVw = (CHMS_OBABenhNhanGhepThan *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBABenhNhanGhepThanFnc(CWnd *pWnd){
	 return ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnAddHMS_OBABenhNhanGhepThan();
} 
static int _OnEditHMS_OBABenhNhanGhepThanFnc(CWnd *pWnd){
	 return ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnEditHMS_OBABenhNhanGhepThan();
} 
static int _OnDeleteHMS_OBABenhNhanGhepThanFnc(CWnd *pWnd){
	 return ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnDeleteHMS_OBABenhNhanGhepThan();
} 
static int _OnSaveHMS_OBABenhNhanGhepThanFnc(CWnd *pWnd){
	 return ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnSaveHMS_OBABenhNhanGhepThan();
} 
static int _OnCancelHMS_OBABenhNhanGhepThanFnc(CWnd *pWnd){
	 return ((CHMS_OBABenhNhanGhepThan*)pWnd)->OnCancelHMS_OBABenhNhanGhepThan();
} 
CHMS_OBABenhNhanGhepThan::CHMS_OBABenhNhanGhepThan(CWnd *pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 875;
	SetDefaultValues();
	m_szRecordType = _T("OBA_GHEPTHAN");
}
CHMS_OBABenhNhanGhepThan::~CHMS_OBABenhNhanGhepThan(){
	
}
void CHMS_OBABenhNhanGhepThan::OnCreateComponents(){


	m_wndTitle.Create(this, _T("\x42\x1EC6NH \xC1N NGO\x1EA0I TR\xDA \x42\x1EC6NH NH\xC2N GH\xC9P TH\x1EACN"), 5, 5, 535, 30);
	m_wndTitle1.Create(this, _T("1. T\xECnh tr\x1EA1ng \x62\x1EC7nh nh\xE2n gh\xE9p th\x1EADn"), 5, 35, 274, 60);
	m_wndThoiGianGhepLabel.Create(this, _T("Th\x1EDDi gi\x61n gh\xE9p"), 5, 65, 155, 90);
	m_wndThoiGianGhep.Create(this,160, 65, 265, 90); 
	m_wndViTriGhepLabel.Create(this, _T("V\x1ECB tr\xED gh\xE9p"), 270, 65, 390, 90);
	m_wndViTriGhep.Create(this,395, 65, 785, 90); 
	m_wndTinhTrangVetMoLabel.Create(this, _T("T\xECnh tr\x1EA1ng v\x1EBFt m\x1ED5"), 5, 95, 155, 120);
	m_wndTinhTrangVetMo.Create(this,160, 95, 785, 120); 
	m_wndThuocUcCheMienDich.Create(this, _T("Thu\x1ED1\x63 \x1EE9\x63 \x63h\x1EBF mi\x1EC5n \x64\x1ECB\x63h"), 5, 125, 155, 150);
	m_wndCNIs.Create(this, _T("CNIs"), 160, 125, 220, 150);
	m_wndLieu1Label.Create(this, _T("Li\x1EC1u"), 225, 125, 265, 150);
	m_wndLieu1.Create(this,270, 125, 390, 150); 
	m_wndCysA.Create(this, _T("CysA"), 395, 125, 455, 150);
	m_wndLieu2Label.Create(this, _T("Li\x1EC1u"), 460, 125, 500, 150);
	m_wndLieu2.Create(this,505, 125, 625, 150); 
	m_wndMMF.Create(this, _T("MMF"), 160, 155, 220, 180);
	m_wndLieu3Label.Create(this, _T("Li\x1EC1u"), 225, 155, 265, 180);
	m_wndLieu3.Create(this,270, 155, 390, 180); 
	m_wndCorticoid.Create(this, _T("Corticoid"), 395, 155, 501, 180);
	m_wndLieuLabel.Create(this, _T("Li\x1EC1u"), 505, 155, 565, 180);
	m_wndLieu.Create(this,570, 155, 690, 180); 
	m_wndThuocKhacLabel.Create(this, _T("Thu\x1ED1\x63 kh\xE1\x63"), 160, 185, 265, 210);
	m_wndThuocKhac.Create(this,270, 185, 785, 210); 
	m_wndTacDungPhuLabel.Create(this, _T("T\xE1\x63 \x64\x1EE5ng ph\x1EE5"), 160, 215, 265, 240);
	m_wndTacDungPhu.Create(this,270, 215, 785, 240); 
	m_wndDieuTriThieuMau.Create(this, _T("\x110i\x1EC1u tr\x1ECB thi\x1EBFu m\xE1u"), 5, 245, 155, 270);
	m_wndThuocTaoHongCau.Create(this, _T("Thu\x1ED1\x63 t\x1EA1o h\x1ED3ng \x63\x1EA7u"), 160, 245, 320, 270);
	m_wndLieu5Label.Create(this, _T("Li\x1EC1u"), 324, 245, 374, 270);
	m_wndLieu5.Create(this,379, 245, 509, 270); 
	m_wndThuocSat.Create(this, _T("Thu\x1ED1\x63 s\x1EAFt"), 514, 245, 604, 270);
	m_wndLieu6Label.Create(this, _T("Li\x1EC1u"), 610, 245, 650, 270);
	m_wndLieu6.Create(this,655, 245, 785, 270); 
	m_wndTruyenMau.Create(this, _T("Truy\x1EC1n m\xE1u"), 160, 275, 320, 300);
	m_wndHaAp.Create(this, _T("H\x1EA1 \xE1p"), 5, 305, 155, 330);
	m_wndUcCheMenChuyen.Create(this, _T("\x1EE8\x63 \x63h\x1EBF m\x65n \x63huy\x1EC3n"), 160, 305, 320, 330);
	m_wndLieu7Label.Create(this, _T("Li\x1EC1u"), 325, 305, 375, 330);
	m_wndLieu7.Create(this,380, 305, 510, 330); 
	m_wndUcCheThuTheAT.Create(this, _T("\x1EE8\x63 \x63h\x1EBF th\x1EE5 th\x1EC3 \x41T\x31"), 160, 335, 320, 360);
	m_wndLieu8Label.Create(this, _T("Li\x1EC1u"), 325, 335, 375, 360);
	m_wndLieu8.Create(this,380, 335, 510, 360); 
	m_wndUcCheCanxi.Create(this, _T("\x1EE8\x63 \x63h\x1EBF \x63\x61n\x78i"), 515, 305, 650, 330);
	m_wndLieu9Label.Create(this, _T("Li\x1EC1u"), 655, 305, 705, 330);
	m_wndLieu9.Create(this,710, 305, 785, 330); 
	m_wndUcCheBeta.Create(this, _T("\x1EE8\x63 \x63h\x1EBF \x62\x65t\x61"), 515, 335, 650, 360);
	m_wndLieu10Label.Create(this, _T("Li\x1EC1u"), 655, 335, 705, 360);
	m_wndLieu10.Create(this,710, 335, 785, 360); 
	m_wndLoiTieu.Create(this, _T("L\x1EE3i ti\x1EC3u"), 160, 365, 320, 390);
	m_wndLieu11Label.Create(this, _T("Li\x1EC1u"), 325, 365, 375, 390);
	m_wndLieu11.Create(this,380, 365, 510, 390); 
	m_wndHaDuongMauLabel.Create(this, _T("H\x1EA1 \x111\x1B0\x1EDDng m\xE1u"), 5, 395, 155, 420);
	m_wndHaDuongMau.Create(this,160, 395, 785, 420); 
	m_wndGiamAcidUricLabel.Create(this, _T("Gi\x1EA3m \x41\x63i\x64 uri\x63"), 5, 425, 155, 450);
	m_wndGiamAcidUric.Create(this,160, 425, 785, 450); 
	m_wndThuocKhac2Label.Create(this, _T("Thu\x1ED1\x63 kh\xE1\x63"), 5, 455, 155, 480);
	m_wndThuocKhac2.Create(this,160, 455, 785, 480); 
	m_wndNguyenNhanSuyThan.Create(this, _T("2. Nguy\xEAn nh\xE2n suy th\x1EADn"), 5, 485, 274, 510);
	m_wndVCTM.Create(this, _T("VCTM"), 5, 515, 85, 540);
	m_wndTHA.Create(this, _T("THA"), 90, 515, 170, 540);
	m_wndDTD.Create(this, _T("DTD"), 175, 515, 255, 540);
	m_wndLupus.Create(this, _T("Lupus"), 260, 515, 340, 540);
	m_wndThanBamSinh.Create(this, _T("Th\x1EADn \x62\x1EA9m sinh"), 345, 515, 475, 540);
	m_wndViemKheThan.Create(this, _T("Vi\xEAm kh\x65 th\x1EADn"), 481, 515, 611, 540);
	m_wndCacBenhKemTheoLabel.Create(this, _T("\x43\xE1\x63 \x62\x1EC7nh kh\xE1\x63 k\xE8m th\x65o"), 5, 545, 155, 570);
	m_wndCacBenhKemTheo.Create(this,160, 545, 785, 570); 
	m_wndKhamBenh.Create(this, _T("3. Kh\xE1m \x62\x1EC7nh"), 5, 575, 155, 600);
	m_wndToanTrangChung.Create(this, _T("3.1 To\xE0n tr\x1EA1ng \x63hung"), 5, 605, 155, 630);
	m_wndMetMoi.Create(this, _T("M\x1EC7t m\x1ECFi"), 5, 635, 105, 660);
	m_wndBuonNon.Create(this, _T("\x42u\x1ED3n n\xF4n"), 110, 635, 210, 660);
	m_wndHoaMatChongMat.Create(this, _T("Ho\x61 m\x1EAFt \x63h\xF3ng m\x1EB7t"), 215, 635, 385, 660);
	m_wndDaNiemMacNhot.Create(this, _T("\x44\x61 ni\xEAm m\x1EA1\x63 nh\x1EE3t"), 391, 635, 561, 660);
	m_wndPhu.Create(this, _T("Phu"), 565, 635, 635, 660);
	m_wndNuocTieuh.Create(this, _T("N\x1B0\x1EDB\x63 ti\x1EC3u 24h"), 640, 635, 760, 660);
	m_wndThanTietNieu.Create(this, _T("3.2 Th\x1EADn - ti\x1EBFt ni\x1EC7u"), 5, 665, 155, 690);
	m_wndMaiSacNuocTieu.Create(this, _T("M\xE0u s\x1EAF\x63 n\x1B0\x1EDB\x63 ti\x1EC3u"), 5, 695, 155, 720);
	m_wndTrong.Create(this, _T("Trong"), 160, 695, 240, 720);
	m_wndHong.Create(this, _T("H\x1ED3ng"), 245, 695, 325, 720);
	m_wndDauVungThanGhep.Create(this, _T("\x110\x61u v\xF9ng th\x1EADn gh\xE9p"), 330, 695, 550, 720);
	m_wndTiengThoiVungThanGhep.Create(this, _T("Ti\x1EBFng th\x1ED5i v\xF9ng th\x1EADn gh\xE9p"), 555, 695, 775, 720);
	m_wndTrieuChungKhacLabel.Create(this, _T("3.3 Tri\x1EC7u \x63h\x1EE9ng kh\xE1\x63"), 5, 725, 155, 750);
	m_wndTrieuChungKhac.Create(this,160, 720, 780, 750); 
	

}
void CHMS_OBABenhNhanGhepThan::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndThoiGianGhep.SetMax(CDate(pMF->GetSysDate()));
	m_wndThoiGianGhep.SetCheckValue(true);
	m_wndViTriGhep.SetLimitText(35);
	m_wndViTriGhep.SetCheckValue(true);
	m_wndTinhTrangVetMo.SetLimitText(35);
	m_wndTinhTrangVetMo.SetCheckValue(true);
	m_wndLieu1.SetLimitText(35);
	m_wndLieu1.SetCheckValue(true);
	m_wndLieu2.SetLimitText(35);
	m_wndLieu2.SetCheckValue(true);
	m_wndLieu3.SetLimitText(35);
	m_wndLieu3.SetCheckValue(true);
	m_wndLieu.SetLimitText(35);
	m_wndLieu.SetCheckValue(true);
	m_wndThuocKhac.SetLimitText(35);
	m_wndThuocKhac.SetCheckValue(true);
	m_wndTacDungPhu.SetLimitText(35);
	m_wndTacDungPhu.SetCheckValue(true);
	m_wndLieu5.SetLimitText(35);
	m_wndLieu5.SetCheckValue(true);
	m_wndLieu6.SetLimitText(35);
	m_wndLieu6.SetCheckValue(true);
	m_wndLieu7.SetLimitText(35);
	m_wndLieu7.SetCheckValue(true);
	m_wndLieu8.SetLimitText(35);
	m_wndLieu8.SetCheckValue(true);
	m_wndLieu9.SetLimitText(35);
	m_wndLieu9.SetCheckValue(true);
	m_wndLieu10.SetLimitText(35);
	m_wndLieu10.SetCheckValue(true);
	m_wndLieu11.SetLimitText(35);
	m_wndLieu11.SetCheckValue(true);
	m_wndHaDuongMau.SetLimitText(35);
	m_wndHaDuongMau.SetCheckValue(true);
	m_wndGiamAcidUric.SetLimitText(35);
	m_wndGiamAcidUric.SetCheckValue(true);
	m_wndThuocKhac2.SetLimitText(35);
	m_wndThuocKhac2.SetCheckValue(true);
	m_wndCacBenhKemTheo.SetLimitText(35);
	m_wndCacBenhKemTheo.SetCheckValue(true);
	m_wndTrieuChungKhac.SetLimitText(35);
	m_wndTrieuChungKhac.SetCheckValue(true);*/

}
void CHMS_OBABenhNhanGhepThan::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndThoiGianGhep.SetEvent(WE_CHANGE, _OnThoiGianGhepChangeFnc);
	//m_wndThoiGianGhep.SetEvent(WE_SETFOCUS, _OnThoiGianGhepSetfocusFnc);
	//m_wndThoiGianGhep.SetEvent(WE_KILLFOCUS, _OnThoiGianGhepKillfocusFnc);
	m_wndThoiGianGhep.SetEvent(WE_CHECKVALUE, _OnThoiGianGhepCheckValueFnc);
	//m_wndViTriGhep.SetEvent(WE_CHANGE, _OnViTriGhepChangeFnc);
	//m_wndViTriGhep.SetEvent(WE_SETFOCUS, _OnViTriGhepSetfocusFnc);
	//m_wndViTriGhep.SetEvent(WE_KILLFOCUS, _OnViTriGhepKillfocusFnc);
	m_wndViTriGhep.SetEvent(WE_CHECKVALUE, _OnViTriGhepCheckValueFnc);
	//m_wndTinhTrangVetMo.SetEvent(WE_CHANGE, _OnTinhTrangVetMoChangeFnc);
	//m_wndTinhTrangVetMo.SetEvent(WE_SETFOCUS, _OnTinhTrangVetMoSetfocusFnc);
	//m_wndTinhTrangVetMo.SetEvent(WE_KILLFOCUS, _OnTinhTrangVetMoKillfocusFnc);
	m_wndTinhTrangVetMo.SetEvent(WE_CHECKVALUE, _OnTinhTrangVetMoCheckValueFnc);
	m_wndCNIs.SetEvent(WE_CLICK, _OnCNIsSelectFnc);
	//m_wndLieu1.SetEvent(WE_CHANGE, _OnLieu1ChangeFnc);
	//m_wndLieu1.SetEvent(WE_SETFOCUS, _OnLieu1SetfocusFnc);
	//m_wndLieu1.SetEvent(WE_KILLFOCUS, _OnLieu1KillfocusFnc);
	m_wndLieu1.SetEvent(WE_CHECKVALUE, _OnLieu1CheckValueFnc);
	m_wndCysA.SetEvent(WE_CLICK, _OnCysASelectFnc);
	//m_wndLieu2.SetEvent(WE_CHANGE, _OnLieu2ChangeFnc);
	//m_wndLieu2.SetEvent(WE_SETFOCUS, _OnLieu2SetfocusFnc);
	//m_wndLieu2.SetEvent(WE_KILLFOCUS, _OnLieu2KillfocusFnc);
	m_wndLieu2.SetEvent(WE_CHECKVALUE, _OnLieu2CheckValueFnc);
	m_wndMMF.SetEvent(WE_CLICK, _OnMMFSelectFnc);
	//m_wndLieu3.SetEvent(WE_CHANGE, _OnLieu3ChangeFnc);
	//m_wndLieu3.SetEvent(WE_SETFOCUS, _OnLieu3SetfocusFnc);
	//m_wndLieu3.SetEvent(WE_KILLFOCUS, _OnLieu3KillfocusFnc);
	m_wndLieu3.SetEvent(WE_CHECKVALUE, _OnLieu3CheckValueFnc);
	m_wndCorticoid.SetEvent(WE_CLICK, _OnCorticoidSelectFnc);
	//m_wndLieu.SetEvent(WE_CHANGE, _OnLieuChangeFnc);
	//m_wndLieu.SetEvent(WE_SETFOCUS, _OnLieuSetfocusFnc);
	//m_wndLieu.SetEvent(WE_KILLFOCUS, _OnLieuKillfocusFnc);
	m_wndLieu.SetEvent(WE_CHECKVALUE, _OnLieuCheckValueFnc);
	//m_wndThuocKhac.SetEvent(WE_CHANGE, _OnThuocKhacChangeFnc);
	//m_wndThuocKhac.SetEvent(WE_SETFOCUS, _OnThuocKhacSetfocusFnc);
	//m_wndThuocKhac.SetEvent(WE_KILLFOCUS, _OnThuocKhacKillfocusFnc);
	m_wndThuocKhac.SetEvent(WE_CHECKVALUE, _OnThuocKhacCheckValueFnc);
	//m_wndTacDungPhu.SetEvent(WE_CHANGE, _OnTacDungPhuChangeFnc);
	//m_wndTacDungPhu.SetEvent(WE_SETFOCUS, _OnTacDungPhuSetfocusFnc);
	//m_wndTacDungPhu.SetEvent(WE_KILLFOCUS, _OnTacDungPhuKillfocusFnc);
	m_wndTacDungPhu.SetEvent(WE_CHECKVALUE, _OnTacDungPhuCheckValueFnc);
	m_wndThuocTaoHongCau.SetEvent(WE_CLICK, _OnThuocTaoHongCauSelectFnc);
	//m_wndLieu5.SetEvent(WE_CHANGE, _OnLieu5ChangeFnc);
	//m_wndLieu5.SetEvent(WE_SETFOCUS, _OnLieu5SetfocusFnc);
	//m_wndLieu5.SetEvent(WE_KILLFOCUS, _OnLieu5KillfocusFnc);
	m_wndLieu5.SetEvent(WE_CHECKVALUE, _OnLieu5CheckValueFnc);
	m_wndThuocSat.SetEvent(WE_CLICK, _OnThuocSatSelectFnc);
	//m_wndLieu6.SetEvent(WE_CHANGE, _OnLieu6ChangeFnc);
	//m_wndLieu6.SetEvent(WE_SETFOCUS, _OnLieu6SetfocusFnc);
	//m_wndLieu6.SetEvent(WE_KILLFOCUS, _OnLieu6KillfocusFnc);
	m_wndLieu6.SetEvent(WE_CHECKVALUE, _OnLieu6CheckValueFnc);
	m_wndTruyenMau.SetEvent(WE_CLICK, _OnTruyenMauSelectFnc);
	m_wndUcCheMenChuyen.SetEvent(WE_CLICK, _OnUcCheMenChuyenSelectFnc);
	//m_wndLieu7.SetEvent(WE_CHANGE, _OnLieu7ChangeFnc);
	//m_wndLieu7.SetEvent(WE_SETFOCUS, _OnLieu7SetfocusFnc);
	//m_wndLieu7.SetEvent(WE_KILLFOCUS, _OnLieu7KillfocusFnc);
	m_wndLieu7.SetEvent(WE_CHECKVALUE, _OnLieu7CheckValueFnc);
	m_wndUcCheThuTheAT.SetEvent(WE_CLICK, _OnUcCheThuTheATSelectFnc);
	//m_wndLieu8.SetEvent(WE_CHANGE, _OnLieu8ChangeFnc);
	//m_wndLieu8.SetEvent(WE_SETFOCUS, _OnLieu8SetfocusFnc);
	//m_wndLieu8.SetEvent(WE_KILLFOCUS, _OnLieu8KillfocusFnc);
	m_wndLieu8.SetEvent(WE_CHECKVALUE, _OnLieu8CheckValueFnc);
	m_wndUcCheCanxi.SetEvent(WE_CLICK, _OnUcCheCanxiSelectFnc);
	//m_wndLieu9.SetEvent(WE_CHANGE, _OnLieu9ChangeFnc);
	//m_wndLieu9.SetEvent(WE_SETFOCUS, _OnLieu9SetfocusFnc);
	//m_wndLieu9.SetEvent(WE_KILLFOCUS, _OnLieu9KillfocusFnc);
	m_wndLieu9.SetEvent(WE_CHECKVALUE, _OnLieu9CheckValueFnc);
	m_wndUcCheBeta.SetEvent(WE_CLICK, _OnUcCheBetaSelectFnc);
	//m_wndLieu10.SetEvent(WE_CHANGE, _OnLieu10ChangeFnc);
	//m_wndLieu10.SetEvent(WE_SETFOCUS, _OnLieu10SetfocusFnc);
	//m_wndLieu10.SetEvent(WE_KILLFOCUS, _OnLieu10KillfocusFnc);
	m_wndLieu10.SetEvent(WE_CHECKVALUE, _OnLieu10CheckValueFnc);
	m_wndLoiTieu.SetEvent(WE_CLICK, _OnLoiTieuSelectFnc);
	//m_wndLieu11.SetEvent(WE_CHANGE, _OnLieu11ChangeFnc);
	//m_wndLieu11.SetEvent(WE_SETFOCUS, _OnLieu11SetfocusFnc);
	//m_wndLieu11.SetEvent(WE_KILLFOCUS, _OnLieu11KillfocusFnc);
	m_wndLieu11.SetEvent(WE_CHECKVALUE, _OnLieu11CheckValueFnc);
	//m_wndHaDuongMau.SetEvent(WE_CHANGE, _OnHaDuongMauChangeFnc);
	//m_wndHaDuongMau.SetEvent(WE_SETFOCUS, _OnHaDuongMauSetfocusFnc);
	//m_wndHaDuongMau.SetEvent(WE_KILLFOCUS, _OnHaDuongMauKillfocusFnc);
	m_wndHaDuongMau.SetEvent(WE_CHECKVALUE, _OnHaDuongMauCheckValueFnc);
	//m_wndGiamAcidUric.SetEvent(WE_CHANGE, _OnGiamAcidUricChangeFnc);
	//m_wndGiamAcidUric.SetEvent(WE_SETFOCUS, _OnGiamAcidUricSetfocusFnc);
	//m_wndGiamAcidUric.SetEvent(WE_KILLFOCUS, _OnGiamAcidUricKillfocusFnc);
	m_wndGiamAcidUric.SetEvent(WE_CHECKVALUE, _OnGiamAcidUricCheckValueFnc);
	//m_wndThuocKhac2.SetEvent(WE_CHANGE, _OnThuocKhac2ChangeFnc);
	//m_wndThuocKhac2.SetEvent(WE_SETFOCUS, _OnThuocKhac2SetfocusFnc);
	//m_wndThuocKhac2.SetEvent(WE_KILLFOCUS, _OnThuocKhac2KillfocusFnc);
	m_wndThuocKhac2.SetEvent(WE_CHECKVALUE, _OnThuocKhac2CheckValueFnc);
	m_wndVCTM.SetEvent(WE_CLICK, _OnVCTMSelectFnc);
	m_wndTHA.SetEvent(WE_CLICK, _OnTHASelectFnc);
	m_wndDTD.SetEvent(WE_CLICK, _OnDTDSelectFnc);
	m_wndLupus.SetEvent(WE_CLICK, _OnLupusSelectFnc);
	m_wndThanBamSinh.SetEvent(WE_CLICK, _OnThanBamSinhSelectFnc);
	m_wndViemKheThan.SetEvent(WE_CLICK, _OnViemKheThanSelectFnc);
	//m_wndCacBenhKemTheo.SetEvent(WE_CHANGE, _OnCacBenhKemTheoChangeFnc);
	//m_wndCacBenhKemTheo.SetEvent(WE_SETFOCUS, _OnCacBenhKemTheoSetfocusFnc);
	//m_wndCacBenhKemTheo.SetEvent(WE_KILLFOCUS, _OnCacBenhKemTheoKillfocusFnc);
	m_wndCacBenhKemTheo.SetEvent(WE_CHECKVALUE, _OnCacBenhKemTheoCheckValueFnc);
	m_wndMetMoi.SetEvent(WE_CLICK, _OnMetMoiSelectFnc);
	m_wndBuonNon.SetEvent(WE_CLICK, _OnBuonNonSelectFnc);
	m_wndHoaMatChongMat.SetEvent(WE_CLICK, _OnHoaMatChongMatSelectFnc);
	m_wndDaNiemMacNhot.SetEvent(WE_CLICK, _OnDaNiemMacNhotSelectFnc);
	m_wndPhu.SetEvent(WE_CLICK, _OnPhuSelectFnc);
	m_wndNuocTieuh.SetEvent(WE_CLICK, _OnNuocTieuhSelectFnc);
	m_wndTrong.SetEvent(WE_CLICK, _OnTrongSelectFnc);
	m_wndHong.SetEvent(WE_CLICK, _OnHongSelectFnc);
	m_wndDauVungThanGhep.SetEvent(WE_CLICK, _OnDauVungThanGhepSelectFnc);
	m_wndTiengThoiVungThanGhep.SetEvent(WE_CLICK, _OnTiengThoiVungThanGhepSelectFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_CHANGE, _OnTrieuChungKhacChangeFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_SETFOCUS, _OnTrieuChungKhacSetfocusFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_KILLFOCUS, _OnTrieuChungKhacKillfocusFnc);
	m_wndTrieuChungKhac.SetEvent(WE_CHECKVALUE, _OnTrieuChungKhacCheckValueFnc);
	
	//pMF->m_nDocumentNo = m_nDocumentNo;
	GetDataToScreen();
	SetScrollSizes(MM_TEXT, CSize(700, 800));

}
void CHMS_OBABenhNhanGhepThan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThoiGianGhep.GetDlgCtrlID(), m_szThoiGianGhep);
	DDX_Text(pDX, m_wndViTriGhep.GetDlgCtrlID(), m_szViTriGhep);
	DDX_Text(pDX, m_wndTinhTrangVetMo.GetDlgCtrlID(), m_szTinhTrangVetMo);
	DDX_Check(pDX, m_wndCNIs.GetDlgCtrlID(), m_bCNIs);
	DDX_Text(pDX, m_wndLieu1.GetDlgCtrlID(), m_szLieu1);
	DDX_Check(pDX, m_wndCysA.GetDlgCtrlID(), m_bCysA);
	DDX_Text(pDX, m_wndLieu2.GetDlgCtrlID(), m_szLieu2);
	DDX_Check(pDX, m_wndMMF.GetDlgCtrlID(), m_bMMF);
	DDX_Text(pDX, m_wndLieu3.GetDlgCtrlID(), m_szLieu3);
	DDX_Check(pDX, m_wndCorticoid.GetDlgCtrlID(), m_bCorticoid);
	DDX_Text(pDX, m_wndLieu.GetDlgCtrlID(), m_szLieu);
	DDX_Text(pDX, m_wndThuocKhac.GetDlgCtrlID(), m_szThuocKhac);
	DDX_Text(pDX, m_wndTacDungPhu.GetDlgCtrlID(), m_szTacDungPhu);
	DDX_Check(pDX, m_wndThuocTaoHongCau.GetDlgCtrlID(), m_bThuocTaoHongCau);
	DDX_Text(pDX, m_wndLieu5.GetDlgCtrlID(), m_szLieu5);
	DDX_Check(pDX, m_wndThuocSat.GetDlgCtrlID(), m_bThuocSat);
	DDX_Text(pDX, m_wndLieu6.GetDlgCtrlID(), m_szLieu6);
	DDX_Check(pDX, m_wndTruyenMau.GetDlgCtrlID(), m_bTruyenMau);
	DDX_Check(pDX, m_wndUcCheMenChuyen.GetDlgCtrlID(), m_bUcCheMenChuyen);
	DDX_Text(pDX, m_wndLieu7.GetDlgCtrlID(), m_szLieu7);
	DDX_Check(pDX, m_wndUcCheThuTheAT.GetDlgCtrlID(), m_bUcCheThuTheAT);
	DDX_Text(pDX, m_wndLieu8.GetDlgCtrlID(), m_szLieu8);
	DDX_Check(pDX, m_wndUcCheCanxi.GetDlgCtrlID(), m_bUcCheCanxi);
	DDX_Text(pDX, m_wndLieu9.GetDlgCtrlID(), m_szLieu9);
	DDX_Check(pDX, m_wndUcCheBeta.GetDlgCtrlID(), m_bUcCheBeta);
	DDX_Text(pDX, m_wndLieu10.GetDlgCtrlID(), m_szLieu10);
	DDX_Check(pDX, m_wndLoiTieu.GetDlgCtrlID(), m_bLoiTieu);
	DDX_Text(pDX, m_wndLieu11.GetDlgCtrlID(), m_szLieu11);
	DDX_Text(pDX, m_wndHaDuongMau.GetDlgCtrlID(), m_szHaDuongMau);
	DDX_Text(pDX, m_wndGiamAcidUric.GetDlgCtrlID(), m_szGiamAcidUric);
	DDX_Text(pDX, m_wndThuocKhac2.GetDlgCtrlID(), m_szThuocKhac2);
	DDX_Check(pDX, m_wndVCTM.GetDlgCtrlID(), m_bVCTM);
	DDX_Check(pDX, m_wndTHA.GetDlgCtrlID(), m_bTHA);
	DDX_Check(pDX, m_wndDTD.GetDlgCtrlID(), m_bDTD);
	DDX_Check(pDX, m_wndLupus.GetDlgCtrlID(), m_bLupus);
	DDX_Check(pDX, m_wndThanBamSinh.GetDlgCtrlID(), m_bThanBamSinh);
	DDX_Check(pDX, m_wndViemKheThan.GetDlgCtrlID(), m_bViemKheThan);
	DDX_Text(pDX, m_wndCacBenhKemTheo.GetDlgCtrlID(), m_szCacBenhKemTheo);
	DDX_Check(pDX, m_wndMetMoi.GetDlgCtrlID(), m_bMetMoi);
	DDX_Check(pDX, m_wndBuonNon.GetDlgCtrlID(), m_bBuonNon);
	DDX_Check(pDX, m_wndHoaMatChongMat.GetDlgCtrlID(), m_bHoaMatChongMat);
	DDX_Check(pDX, m_wndDaNiemMacNhot.GetDlgCtrlID(), m_bDaNiemMacNhot);
	DDX_Check(pDX, m_wndPhu.GetDlgCtrlID(), m_bPhu);
	DDX_Check(pDX, m_wndNuocTieuh.GetDlgCtrlID(), m_bNuocTieuh);
	DDX_Check(pDX, m_wndTrong.GetDlgCtrlID(), m_bTrong);
	DDX_Check(pDX, m_wndHong.GetDlgCtrlID(), m_bHong);
	DDX_Check(pDX, m_wndDauVungThanGhep.GetDlgCtrlID(), m_bDauVungThanGhep);
	DDX_Check(pDX, m_wndTiengThoiVungThanGhep.GetDlgCtrlID(), m_bTiengThoiVungThanGhep);
	DDX_Text(pDX, m_wndTrieuChungKhac.GetDlgCtrlID(), m_szTrieuChungKhac);

}
void CHMS_OBABenhNhanGhepThan::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ThoiGianGhep")] =  m_szThoiGianGhep;
	m_jData[_T("ViTriGhep")] =  m_szViTriGhep;
	m_jData[_T("TinhTrangVetMo")] =  m_szTinhTrangVetMo;
	m_jData[_T("CNIs")] =  m_bCNIs;
	m_jData[_T("Lieu1")] =  m_szLieu1;
	m_jData[_T("CysA")] =  m_bCysA;
	m_jData[_T("Lieu2")] =  m_szLieu2;
	m_jData[_T("MMF")] =  m_bMMF;
	m_jData[_T("Lieu3")] =  m_szLieu3;
	m_jData[_T("Corticoid")] =  m_bCorticoid;
	m_jData[_T("Lieu")] =  m_szLieu;
	m_jData[_T("ThuocKhac")] =  m_szThuocKhac;
	m_jData[_T("TacDungPhu")] =  m_szTacDungPhu;
	m_jData[_T("ThuocTaoHongCau")] =  m_bThuocTaoHongCau;
	m_jData[_T("Lieu5")] =  m_szLieu5;
	m_jData[_T("ThuocSat")] =  m_bThuocSat;
	m_jData[_T("Lieu6")] =  m_szLieu6;
	m_jData[_T("TruyenMau")] =  m_bTruyenMau;
	m_jData[_T("UcCheMenChuyen")] =  m_bUcCheMenChuyen;
	m_jData[_T("Lieu7")] =  m_szLieu7;
	m_jData[_T("UcCheThuTheAT")] =  m_bUcCheThuTheAT;
	m_jData[_T("Lieu8")] =  m_szLieu8;
	m_jData[_T("UcCheCanxi")] =  m_bUcCheCanxi;
	m_jData[_T("Lieu9")] =  m_szLieu9;
	m_jData[_T("UcCheBeta")] =  m_bUcCheBeta;
	m_jData[_T("Lieu10")] =  m_szLieu10;
	m_jData[_T("LoiTieu")] =  m_bLoiTieu;
	m_jData[_T("Lieu11")] =  m_szLieu11;
	m_jData[_T("HaDuongMau")] =  m_szHaDuongMau;
	m_jData[_T("GiamAcidUric")] =  m_szGiamAcidUric;
	m_jData[_T("ThuocKhac2")] =  m_szThuocKhac2;
	m_jData[_T("VCTM")] =  m_bVCTM;
	m_jData[_T("THA")] =  m_bTHA;
	m_jData[_T("DTD")] =  m_bDTD;
	m_jData[_T("Lupus")] =  m_bLupus;
	m_jData[_T("ThanBamSinh")] =  m_bThanBamSinh;
	m_jData[_T("ViemKheThan")] =  m_bViemKheThan;
	m_jData[_T("CacBenhKemTheo")] =  m_szCacBenhKemTheo;
	m_jData[_T("MetMoi")] =  m_bMetMoi;
	m_jData[_T("BuonNon")] =  m_bBuonNon;
	m_jData[_T("HoaMatChongMat")] =  m_bHoaMatChongMat;
	m_jData[_T("DaNiemMacNhot")] =  m_bDaNiemMacNhot;
	m_jData[_T("Phu")] =  m_bPhu;
	m_jData[_T("NuocTieuh")] =  m_bNuocTieuh;
	m_jData[_T("Trong")] =  m_bTrong;
	m_jData[_T("Hong")] =  m_bHong;
	m_jData[_T("DauVungThanGhep")] =  m_bDauVungThanGhep;
	m_jData[_T("TiengThoiVungThanGhep")] =  m_bTiengThoiVungThanGhep;
	m_jData[_T("TrieuChungKhac")] =  m_szTrieuChungKhac;
	}
	else
	{
			
	m_jData[_T("ThoiGianGhep")].GetValue(m_szThoiGianGhep);
	m_jData[_T("ViTriGhep")].GetValue(m_szViTriGhep);
	m_jData[_T("TinhTrangVetMo")].GetValue(m_szTinhTrangVetMo);
	m_jData[_T("CNIs")].GetValue(m_bCNIs);
	m_jData[_T("Lieu1")].GetValue(m_szLieu1);
	m_jData[_T("CysA")].GetValue(m_bCysA);
	m_jData[_T("Lieu2")].GetValue(m_szLieu2);
	m_jData[_T("MMF")].GetValue(m_bMMF);
	m_jData[_T("Lieu3")].GetValue(m_szLieu3);
	m_jData[_T("Corticoid")].GetValue(m_bCorticoid);
	m_jData[_T("Lieu")].GetValue(m_szLieu);
	m_jData[_T("ThuocKhac")].GetValue(m_szThuocKhac);
	m_jData[_T("TacDungPhu")].GetValue(m_szTacDungPhu);
	m_jData[_T("ThuocTaoHongCau")].GetValue(m_bThuocTaoHongCau);
	m_jData[_T("Lieu5")].GetValue(m_szLieu5);
	m_jData[_T("ThuocSat")].GetValue(m_bThuocSat);
	m_jData[_T("Lieu6")].GetValue(m_szLieu6);
	m_jData[_T("TruyenMau")].GetValue(m_bTruyenMau);
	m_jData[_T("UcCheMenChuyen")].GetValue(m_bUcCheMenChuyen);
	m_jData[_T("Lieu7")].GetValue(m_szLieu7);
	m_jData[_T("UcCheThuTheAT")].GetValue(m_bUcCheThuTheAT);
	m_jData[_T("Lieu8")].GetValue(m_szLieu8);
	m_jData[_T("UcCheCanxi")].GetValue(m_bUcCheCanxi);
	m_jData[_T("Lieu9")].GetValue(m_szLieu9);
	m_jData[_T("UcCheBeta")].GetValue(m_bUcCheBeta);
	m_jData[_T("Lieu10")].GetValue(m_szLieu10);
	m_jData[_T("LoiTieu")].GetValue(m_bLoiTieu);
	m_jData[_T("Lieu11")].GetValue(m_szLieu11);
	m_jData[_T("HaDuongMau")].GetValue(m_szHaDuongMau);
	m_jData[_T("GiamAcidUric")].GetValue(m_szGiamAcidUric);
	m_jData[_T("ThuocKhac2")].GetValue(m_szThuocKhac2);
	m_jData[_T("VCTM")].GetValue(m_bVCTM);
	m_jData[_T("THA")].GetValue(m_bTHA);
	m_jData[_T("DTD")].GetValue(m_bDTD);
	m_jData[_T("Lupus")].GetValue(m_bLupus);
	m_jData[_T("ThanBamSinh")].GetValue(m_bThanBamSinh);
	m_jData[_T("ViemKheThan")].GetValue(m_bViemKheThan);
	m_jData[_T("CacBenhKemTheo")].GetValue(m_szCacBenhKemTheo);
	m_jData[_T("MetMoi")].GetValue(m_bMetMoi);
	m_jData[_T("BuonNon")].GetValue(m_bBuonNon);
	m_jData[_T("HoaMatChongMat")].GetValue(m_bHoaMatChongMat);
	m_jData[_T("DaNiemMacNhot")].GetValue(m_bDaNiemMacNhot);
	m_jData[_T("Phu")].GetValue(m_bPhu);
	m_jData[_T("NuocTieuh")].GetValue(m_bNuocTieuh);
	m_jData[_T("Trong")].GetValue(m_bTrong);
	m_jData[_T("Hong")].GetValue(m_bHong);
	m_jData[_T("DauVungThanGhep")].GetValue(m_bDauVungThanGhep);
	m_jData[_T("TiengThoiVungThanGhep")].GetValue(m_bTiengThoiVungThanGhep);
	m_jData[_T("TrieuChungKhac")].GetValue(m_szTrieuChungKhac);
	}

}
void CHMS_OBABenhNhanGhepThan::GetDataToScreen(){

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
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr ") \
				_T("WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "), pMF->m_nDocNo, m_szRecordType, i);
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
void CHMS_OBABenhNhanGhepThan::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBABenhNhanGhepThan::SetDefaultValues(){

	m_szThoiGianGhep.Empty();
	m_szViTriGhep.Empty();
	m_szTinhTrangVetMo.Empty();
	m_bCNIs=FALSE;
	m_szLieu1.Empty();
	m_bCysA=FALSE;
	m_szLieu2.Empty();
	m_bMMF=FALSE;
	m_szLieu3.Empty();
	m_bCorticoid=FALSE;
	m_szLieu.Empty();
	m_szThuocKhac.Empty();
	m_szTacDungPhu.Empty();
	m_bThuocTaoHongCau=FALSE;
	m_szLieu5.Empty();
	m_bThuocSat=FALSE;
	m_szLieu6.Empty();
	m_bTruyenMau=FALSE;
	m_bUcCheMenChuyen=FALSE;
	m_szLieu7.Empty();
	m_bUcCheThuTheAT=FALSE;
	m_szLieu8.Empty();
	m_bUcCheCanxi=FALSE;
	m_szLieu9.Empty();
	m_bUcCheBeta=FALSE;
	m_szLieu10.Empty();
	m_bLoiTieu=FALSE;
	m_szLieu11.Empty();
	m_szHaDuongMau.Empty();
	m_szGiamAcidUric.Empty();
	m_szThuocKhac2.Empty();
	m_bVCTM=FALSE;
	m_bTHA=FALSE;
	m_bDTD=FALSE;
	m_bLupus=FALSE;
	m_bThanBamSinh=FALSE;
	m_bViemKheThan=FALSE;
	m_szCacBenhKemTheo.Empty();
	m_bMetMoi=FALSE;
	m_bBuonNon=FALSE;
	m_bHoaMatChongMat=FALSE;
	m_bDaNiemMacNhot=FALSE;
	m_bPhu=FALSE;
	m_bNuocTieuh=FALSE;
	m_bTrong=FALSE;
	m_bHong=FALSE;
	m_bDauVungThanGhep=FALSE;
	m_bTiengThoiVungThanGhep=FALSE;
	m_szTrieuChungKhac.Empty();

}
int CHMS_OBABenhNhanGhepThan::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 

 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
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
/*void CHMS_OBABenhNhanGhepThan::OnThoiGianGhepChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThoiGianGhepSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThoiGianGhepKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnThoiGianGhepCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnViTriGhepChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnViTriGhepSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnViTriGhepKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnViTriGhepCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnTinhTrangVetMoChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTinhTrangVetMoSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTinhTrangVetMoKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnTinhTrangVetMoCheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnCNIsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu1Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu1Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu1Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu1CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnCysASelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu2Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu2Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu2Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu2CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnMMFSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu3Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu3Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu3Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu3CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnCorticoidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieuChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieuSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieuKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieuCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhacChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhacSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhacKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnThuocKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnTacDungPhuChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTacDungPhuSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTacDungPhuKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnTacDungPhuCheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnThuocTaoHongCauSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu5Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu5Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu5Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu5CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnThuocSatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu6Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu6Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu6Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu6CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnTruyenMauSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnUcCheMenChuyenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu7Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu7Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu7Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu7CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnUcCheThuTheATSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu8Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu8Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu8Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu8CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnUcCheCanxiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu9Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu9Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu9Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu9CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnUcCheBetaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu10Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu10Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu10Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu10CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnLoiTieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnLieu11Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu11Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnLieu11Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnLieu11CheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnHaDuongMauChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnHaDuongMauSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnHaDuongMauKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnHaDuongMauCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnGiamAcidUricChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnGiamAcidUricSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnGiamAcidUricKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnGiamAcidUricCheckValue(){
	return 0;
} 
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhac2Change(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhac2Setfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnThuocKhac2Killfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnThuocKhac2CheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnVCTMSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnTHASelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnDTDSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnLupusSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnThanBamSinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnViemKheThanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnCacBenhKemTheoChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnCacBenhKemTheoSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnCacBenhKemTheoKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnCacBenhKemTheoCheckValue(){
	return 0;
} 
	void CHMS_OBABenhNhanGhepThan::OnMetMoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnBuonNonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnHoaMatChongMatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnDaNiemMacNhotSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnPhuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnNuocTieuhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnTrongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnHongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnDauVungThanGhepSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBABenhNhanGhepThan::OnTiengThoiVungThanGhepSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBABenhNhanGhepThan::OnTrieuChungKhacChange(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTrieuChungKhacSetfocus(){
	
} */
/*void CHMS_OBABenhNhanGhepThan::OnTrieuChungKhacKillfocus(){
	
} */
int CHMS_OBABenhNhanGhepThan::OnTrieuChungKhacCheckValue(){
	return 0;
} 
void CHMS_OBABenhNhanGhepThan::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBABenhNhanGhepThan();
} 
void CHMS_OBABenhNhanGhepThan::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	//gui ham in chunh tai day. Cac mau benh an tab1, 2, 
	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBABenhNhanGhepThan.RPT"));

	return;


	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBABenhNhanGhepThan.RPT")))
		return;
	GetDataToScreen();

	szSQL.Format(_T("select hop_fromdate, hop_todate, hop_recordno from hms_outpatient ") \
		_T(" where hop_patientno = %ld and hop_recordno = '%s'"), pMF->m_nPatientNo, m_szRecordNo);
	rs.ExecSQL(szSQL);

	rptHeader = rpt.GetReportHeader();

	rs.GetValue(_T("hop_fromdate"), tmpStr);
	rptHeader->SetValue(_T("CreatedDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_todate"), tmpStr);
	rptHeader->SetValue(_T("EndDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_recordno"), tmpStr);
	rptHeader->SetValue(_T("RecordNo"), tmpStr);
	

	for (size_t i = 0; i < m_jData.Size();i++)
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

/*

	szDate = CDate::Convert(m_szThoiGianGhep, yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ThoiGianGhep"),  szDate);
	rptHeader->SetValue(_T("ViTriGhep"),  m_szViTriGhep);
	rptHeader->SetValue(_T("TinhTrangVetMo"),  m_szTinhTrangVetMo);
	if(m_bCNIs)
		rptHeader->SetCheck(_T("1"), m_bCNIs);
	rptHeader->SetValue(_T("Lieu1"),  m_szLieu1);
	if(m_bCysA) rptHeader->SetCheck(_T("2"), m_bCysA);
	rptHeader->SetValue(_T("Lieu2"), m_szLieu2);
	if(m_bMMF)
		rptHeader->SetValue(_T("3"), _T("Y"));
	rptHeader->SetValue(_T("Lieu3"),  m_szLieu3);
	if(m_bCorticoid)
		rptHeader->SetValue(_T("4"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu"),  m_szLieu);
	rptHeader->SetValue(_T("ThuocKhac"),  m_szThuocKhac);
	rptHeader->SetValue(_T("TacDungPhu"),  m_szTacDungPhu);
	if(m_bThuocTaoHongCau)
		rptHeader->SetValue(_T("5"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu5"), m_szLieu5);
	if(m_bThuocSat)
		rptHeader->SetValue(_T("6"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu6"),  m_szLieu6);
	if(m_bTruyenMau)
		rptHeader->SetValue(_T("7"),  _T("Y"));
	if(m_bUcCheMenChuyen)
		rptHeader->SetValue(_T("8"), _T("Y"));
	rptHeader->SetValue(_T("Lieu7"), m_szLieu7);
	if(m_bUcCheThuTheAT)
		rptHeader->SetValue(_T("9"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu8"),  m_szLieu8);
	if(m_bUcCheCanxi)
		rptHeader->SetValue(_T("10"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu9"), m_szLieu9);
	if(m_bUcCheBeta)
		rptHeader->SetValue(_T("11"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu10"),  m_szLieu10);
	if(m_bLoiTieu)
		rptHeader->SetValue(_T("12"),  _T("Y"));
	rptHeader->SetValue(_T("Lieu11"), m_szLieu11);
	rptHeader->SetValue(_T("HaDuongMau"),  m_szHaDuongMau);
	rptHeader->SetValue(_T("GiamAcidUric"),  m_szGiamAcidUric);
	rptHeader->SetValue(_T("ThuocKhac2"),  m_szThuocKhac2);
	if(m_bVCTM)
		rptHeader->SetCheck(_T("13"),  _T("Y"));
	if(m_bTHA)
		rptHeader->SetCheck(_T("14"),  _T("Y"));
	if(m_bDTD)
		rptHeader->SetCheck(_T("15"), _T("Y"));
	if(m_bLupus)
		rptHeader->SetCheck(_T("16"),  _T("Y"));
	if(m_bThanBamSinh)
		rptHeader->SetCheck(_T("17"), _T("Y"));
	if(m_bViemKheThan)
		rptHeader->SetCheck(_T("18"),  _T("Y"));
	rptHeader->SetValue(_T("CacBenhKemTheo"),  m_szCacBenhKemTheo);
	if(m_bMetMoi)
		rptHeader->SetValue(_T("19"),  _T("Y"));
	if(m_bBuonNon)
		rptHeader->SetValue(_T("20"),  _T("Y"));
	if(m_bHoaMatChongMat)
		rptHeader->SetValue(_T("21"),  _T("Y"));
	if(m_bDaNiemMacNhot)
		rptHeader->SetValue(_T("22"),  _T("Y"));
	if(m_bPhu)
		rptHeader->SetValue(_T("23"),  _T("Y"));
	if(m_bNuocTieuh)
		rptHeader->SetValue(_T("24"), m_bNuocTieuh);
	if(m_bTrong)
		rptHeader->SetValue(_T("25"),  _T("Y"));
	if(m_bHong)
		rptHeader->SetValue(_T("26"),  _T("Y"));
	if(m_bDauVungThanGhep)
		rptHeader->SetValue(_T("27"),  _T("Y"));
	if(m_bTiengThoiVungThanGhep)
		rptHeader->SetValue(_T("28"),  _T("Y"));
	
	rptHeader->SetValue(_T("TrieuChungKhac"),  m_szTrieuChungKhac);
*/	
	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
} 
bool CHMS_OBABenhNhanGhepThan::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Kiểm tra trạng thái
	bool res = IsAllowUpdate();

	if(!res)
	{
		return false;
	}
	OnEditHMS_OBABenhNhanGhepThan();
	return true;
} 
int CHMS_OBABenhNhanGhepThan::OnAddHMS_OBABenhNhanGhepThan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBABenhNhanGhepThan::OnEditHMS_OBABenhNhanGhepThan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);


	return 0;  
}
int CHMS_OBABenhNhanGhepThan::OnDeleteHMS_OBABenhNhanGhepThan(){
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
 		OnCancelHMS_OBABenhNhanGhepThan();
 	}
	return 0;
}
int CHMS_OBABenhNhanGhepThan::OnSaveHMS_OBABenhNhanGhepThan(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	bool res =  CHMSBenhAnView::PostData();
	return (int) res;

////////////////////////////////
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	
	CString tmpStr;
	tmpStr = szData;

	
	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	
	pMF->BeginTransaction();

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
	pMF->ExecSQL(szSQL);
	
	int n =0;
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType, pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("GhepThan"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret < 0)
		{
			pMF->Rollback();
			return -1;
		}
	}
	pMF->Commit();
	


	if(n > 0)
	{
		SetMode(VM_VIEW);
		
		szSQL.Format(_T("HMS_OUTPATIENT_CREATE(%ld, '%s', 0, to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), '%s', 0) "), 
				pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), pMF->GetSysDateTime(), m_szRecordType);

		pMF->ExecDML(szSQL);
		
	}
	else
		return -1;
	return n;
}
int CHMS_OBABenhNhanGhepThan::OnCancelHMS_OBABenhNhanGhepThan(){
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
int CHMS_OBABenhNhanGhepThan::OnHMS_OBABenhNhanGhepThanListLoadData(){
	return 0;
}


void CHMS_OBABenhNhanGhepThan::OnCancelSelect()
{
	OnCancelHMS_OBABenhNhanGhepThan();
}