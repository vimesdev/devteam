#include "HMS_OBANTParkinsonDongKinh2.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnDangDiVaDungChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDangDiVaDungChange();
} */
/*static void _OnDangDiVaDungSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDangDiVaDungSetfocus();} */ 
/*static void _OnDangDiVaDungKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDangDiVaDungKillfocus();
} */
static int _OnDangDiVaDungCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDangDiVaDungCheckValue();
} 
/*static void _OnTuTheTayChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheTayChange();
} */
/*static void _OnTuTheTaySetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheTaySetfocus();} */ 
/*static void _OnTuTheTayKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheTayKillfocus();
} */
static int _OnTuTheTayCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheTayCheckValue();
} 
/*static void _OnTuTheChanChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheChanChange();
} */
/*static void _OnTuTheChanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheChanSetfocus();} */ 
/*static void _OnTuTheChanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheChanKillfocus();
} */
static int _OnTuTheChanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTuTheChanCheckValue();
} 
/*static void _OnTruongLucCoChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTruongLucCoChange();
} */
/*static void _OnTruongLucCoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTruongLucCoSetfocus();} */ 
/*static void _OnTruongLucCoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTruongLucCoKillfocus();
} */
static int _OnTruongLucCoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTruongLucCoCheckValue();
} 
/*static void _OnVanDongBatThuongChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongBatThuongChange();
} */
/*static void _OnVanDongBatThuongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongBatThuongSetfocus();} */ 
/*static void _OnVanDongBatThuongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongBatThuongKillfocus();
} */
static int _OnVanDongBatThuongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongBatThuongCheckValue();
} 
/*static void _OnDHcunggayChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHcunggayChange();
} */
/*static void _OnDHcunggaySetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHcunggaySetfocus();} */ 
/*static void _OnDHcunggayKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHcunggayKillfocus();
} */
static int _OnDHcunggayCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHcunggayCheckValue();
} 
/*static void _OnDHKernigChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKernigChange();
} */
/*static void _OnDHKernigSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKernigSetfocus();} */ 
/*static void _OnDHKernigKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKernigKillfocus();
} */
static int _OnDHKernigCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKernigCheckValue();
} 
/*static void _OnDHKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKhacChange();
} */
/*static void _OnDHKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKhacSetfocus();} */ 
/*static void _OnDHKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKhacKillfocus();
} */
static int _OnDHKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHKhacCheckValue();
} 
/*static void _OnMoTaThemChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnMoTaThemChange();
} */
/*static void _OnMoTaThemSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnMoTaThemSetfocus();} */ 
/*static void _OnMoTaThemKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnMoTaThemKillfocus();
} */
static int _OnMoTaThemCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnMoTaThemCheckValue();
} 
/*static void _OnKhamCamGiacSauChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacSauChange();
} */
/*static void _OnKhamCamGiacSauSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacSauSetfocus();} */ 
/*static void _OnKhamCamGiacSauKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacSauKillfocus();
} */
static int _OnKhamCamGiacSauCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacSauCheckValue();
} 
/*static void _OnKhamCamGiacNongChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacNongChange();
} */
/*static void _OnKhamCamGiacNongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacNongSetfocus();} */ 
/*static void _OnKhamCamGiacNongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacNongKillfocus();
} */
static int _OnKhamCamGiacNongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKhamCamGiacNongCheckValue();
} 
/*static void _OnCoCungCoChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCoCungCoChange();
} */
/*static void _OnCoCungCoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCoCungCoSetfocus();} */ 
/*static void _OnCoCungCoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCoCungCoKillfocus();
} */
static int _OnCoCungCoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCoCungCoCheckValue();
} 
/*static void _OnVanDongThuDongChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongThuDongChange();
} */
/*static void _OnVanDongThuDongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongThuDongSetfocus();} */ 
/*static void _OnVanDongThuDongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongThuDongKillfocus();
} */
static int _OnVanDongThuDongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnVanDongThuDongCheckValue();
} 
/*static void _OnRoiLoanCamGiacDauCoVaiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRoiLoanCamGiacDauCoVaiChange();
} */
/*static void _OnRoiLoanCamGiacDauCoVaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRoiLoanCamGiacDauCoVaiSetfocus();} */ 
/*static void _OnRoiLoanCamGiacDauCoVaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRoiLoanCamGiacDauCoVaiKillfocus();
} */
static int _OnRoiLoanCamGiacDauCoVaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRoiLoanCamGiacDauCoVaiCheckValue();
} 
/*static void _OnDiemDauCotSongChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCotSongChange();
} */
/*static void _OnDiemDauCotSongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCotSongSetfocus();} */ 
/*static void _OnDiemDauCotSongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCotSongKillfocus();
} */
static int _OnDiemDauCotSongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCotSongCheckValue();
} 
/*static void _OnDiemDauCanhCotSongChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCanhCotSongChange();
} */
/*static void _OnDiemDauCanhCotSongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCanhCotSongSetfocus();} */ 
/*static void _OnDiemDauCanhCotSongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCanhCotSongKillfocus();
} */
static int _OnDiemDauCanhCotSongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDiemDauCanhCotSongCheckValue();
} 
/*static void _OnLechVeoCotSongThatLungChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLechVeoCotSongThatLungChange();
} */
/*static void _OnLechVeoCotSongThatLungSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLechVeoCotSongThatLungSetfocus();} */ 
/*static void _OnLechVeoCotSongThatLungKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLechVeoCotSongThatLungKillfocus();
} */
static int _OnLechVeoCotSongThatLungCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLechVeoCotSongThatLungCheckValue();
} 
/*static void _OnDHSchoberChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHSchoberChange();
} */
/*static void _OnDHSchoberSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHSchoberSetfocus();} */ 
/*static void _OnDHSchoberKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHSchoberKillfocus();
} */
static int _OnDHSchoberCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDHSchoberCheckValue();
} 
/*static void _OnLThangPhaiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangPhaiChange();
} */
/*static void _OnLThangPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangPhaiSetfocus();} */ 
/*static void _OnLThangPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangPhaiKillfocus();
} */
static int _OnLThangPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangPhaiCheckValue();
} 
/*static void _OnLThangTraiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangTraiChange();
} */
/*static void _OnLThangTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangTraiSetfocus();} */ 
/*static void _OnLThangTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangTraiKillfocus();
} */
static int _OnLThangTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLThangTraiCheckValue();
} 
/*static void _OnLCheoPhaiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoPhaiChange();
} */
/*static void _OnLCheoPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoPhaiSetfocus();} */ 
/*static void _OnLCheoPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoPhaiKillfocus();
} */
static int _OnLCheoPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoPhaiCheckValue();
} 
/*static void _OnLCheoTraiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoTraiChange();
} */
/*static void _OnLCheoTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoTraiSetfocus();} */ 
/*static void _OnLCheoTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoTraiKillfocus();
} */
static int _OnLCheoTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnLCheoTraiCheckValue();
} 
/*static void _OnNCCPhaiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCPhaiChange();
} */
/*static void _OnNCCPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCPhaiSetfocus();} */ 
/*static void _OnNCCPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCPhaiKillfocus();
} */
static int _OnNCCPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCPhaiCheckValue();
} 
/*static void _OnNCCTraiChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCTraiChange();
} */
/*static void _OnNCCTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCTraiSetfocus();} */ 
/*static void _OnNCCTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCTraiKillfocus();
} */
static int _OnNCCTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNCCTraiCheckValue();
} 
/*static void _OnCacDauHieuKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCacDauHieuKhacChange();
} */
/*static void _OnCacDauHieuKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCacDauHieuKhacSetfocus();} */ 
/*static void _OnCacDauHieuKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCacDauHieuKhacKillfocus();
} */
static int _OnCacDauHieuKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnCacDauHieuKhacCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBANTParkinsonDongKinh2 *pVw = (CHMS_OBANTParkinsonDongKinh2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBANTParkinsonDongKinh2 *pVw = (CHMS_OBANTParkinsonDongKinh2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMS_OBANTParkinsonDongKinh2 *pVw = (CHMS_OBANTParkinsonDongKinh2 *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnNhiDauRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauRChange();
} */
/*static void _OnNhiDauRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauRSetfocus();} */ 
/*static void _OnNhiDauRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauRKillfocus();
} */
static int _OnNhiDauRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauRCheckValue();
} 
/*static void _OnNhiDauLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauLChange();
} */
/*static void _OnNhiDauLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauLSetfocus();} */ 
/*static void _OnNhiDauLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauLKillfocus();
} */
static int _OnNhiDauLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNhiDauLCheckValue();
} 
/*static void _OnTamDauRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauRChange();
} */
/*static void _OnTamDauRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauRSetfocus();} */ 
/*static void _OnTamDauRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauRKillfocus();
} */
static int _OnTamDauRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauRCheckValue();
} 
/*static void _OnTamDauLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauLChange();
} */
/*static void _OnTamDauLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauLSetfocus();} */ 
/*static void _OnTamDauLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauLKillfocus();
} */
static int _OnTamDauLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnTamDauLCheckValue();
} 
/*static void _OnGoiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiRChange();
} */
/*static void _OnGoiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiRSetfocus();} */ 
/*static void _OnGoiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiRKillfocus();
} */
static int _OnGoiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiRCheckValue();
} 
/*static void _OnGotRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGotRChange();
} */
/*static void _OnGotRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGotRSetfocus();} */ 
/*static void _OnGotRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGotRKillfocus();
} */
static int _OnGotRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGotRCheckValue();
} 
/*static void _OnGOTLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGOTLChange();
} */
/*static void _OnGOTLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGOTLSetfocus();} */ 
/*static void _OnGOTLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGOTLKillfocus();
} */
static int _OnGOTLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGOTLCheckValue();
} 
/*static void _OnDaBungTrenRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenRChange();
} */
/*static void _OnDaBungTrenRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenRSetfocus();} */ 
/*static void _OnDaBungTrenRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenRKillfocus();
} */
static int _OnDaBungTrenRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenRCheckValue();
} 
/*static void _OnDaBungTrenLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenLChange();
} */
/*static void _OnDaBungTrenLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenLSetfocus();} */ 
/*static void _OnDaBungTrenLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenLKillfocus();
} */
static int _OnDaBungTrenLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungTrenLCheckValue();
} 
/*static void _OnBungGiuaRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaRChange();
} */
/*static void _OnBungGiuaRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaRSetfocus();} */ 
/*static void _OnBungGiuaRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaRKillfocus();
} */
static int _OnBungGiuaRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaRCheckValue();
} 
/*static void _OnBungGiuaLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaLChange();
} */
/*static void _OnBungGiuaLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaLSetfocus();} */ 
/*static void _OnBungGiuaLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaLKillfocus();
} */
static int _OnBungGiuaLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBungGiuaLCheckValue();
} 
/*static void _OnDaBungDuoiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiRChange();
} */
/*static void _OnDaBungDuoiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiRSetfocus();} */ 
/*static void _OnDaBungDuoiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiRKillfocus();
} */
static int _OnDaBungDuoiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiRCheckValue();
} 
/*static void _OnDaBungDuoiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiLChange();
} */
/*static void _OnDaBungDuoiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiLSetfocus();} */ 
/*static void _OnDaBungDuoiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiLKillfocus();
} */
static int _OnDaBungDuoiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnDaBungDuoiLCheckValue();
} 
/*static void _OnBiuDuiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiRChange();
} */
/*static void _OnBiuDuiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiRSetfocus();} */ 
/*static void _OnBiuDuiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiRKillfocus();
} */
static int _OnBiuDuiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiRCheckValue();
} 
/*static void _OnBiuDuiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiLChange();
} */
/*static void _OnBiuDuiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiLSetfocus();} */ 
/*static void _OnBiuDuiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiLKillfocus();
} */
static int _OnBiuDuiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBiuDuiLCheckValue();
} 
/*static void _OnHTRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTRChange();
} */
/*static void _OnHTRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTRSetfocus();} */ 
/*static void _OnHTRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTRKillfocus();
} */
static int _OnHTRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTRCheckValue();
} 
/*static void _OnHTLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTLChange();
} */
/*static void _OnHTLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTLSetfocus();} */ 
/*static void _OnHTLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTLKillfocus();
} */
static int _OnHTLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnHTLCheckValue();
} 
/*static void _OnBabinskiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiRChange();
} */
/*static void _OnBabinskiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiRSetfocus();} */ 
/*static void _OnBabinskiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiRKillfocus();
} */
static int _OnBabinskiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiRCheckValue();
} 
/*static void _OnBabinskiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiLChange();
} */
/*static void _OnBabinskiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiLSetfocus();} */ 
/*static void _OnBabinskiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiLKillfocus();
} */
static int _OnBabinskiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnBabinskiLCheckValue();
} 
/*static void _OnChiTrenRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenRChange();
} */
/*static void _OnChiTrenRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenRSetfocus();} */ 
/*static void _OnChiTrenRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenRKillfocus();
} */
static int _OnChiTrenRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenRCheckValue();
} 
/*static void _OnChiTrenLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenLChange();
} */
/*static void _OnChiTrenLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenLSetfocus();} */ 
/*static void _OnChiTrenLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenLKillfocus();
} */
static int _OnChiTrenLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiTrenLCheckValue();
} 
/*static void _OnChiDuoiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiRChange();
} */
/*static void _OnChiDuoiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiRSetfocus();} */ 
/*static void _OnChiDuoiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiRKillfocus();
} */
static int _OnChiDuoiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiRCheckValue();
} 
/*static void _OnChiDuoiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiLChange();
} */
/*static void _OnChiDuoiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiLSetfocus();} */ 
/*static void _OnChiDuoiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiLKillfocus();
} */
static int _OnChiDuoiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnChiDuoiLCheckValue();
} 
/*static void _OnNPtromuiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiRChange();
} */
/*static void _OnNPtromuiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiRSetfocus();} */ 
/*static void _OnNPtromuiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiRKillfocus();
} */
static int _OnNPtromuiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiRCheckValue();
} 
/*static void _OnNPLienDongRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongRChange();
} */
/*static void _OnNPLienDongRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongRSetfocus();} */ 
/*static void _OnNPLienDongRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongRKillfocus();
} */
static int _OnNPLienDongRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongRCheckValue();
} 
/*static void _OnNPGotGoiRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiRChange();
} */
/*static void _OnNPGotGoiRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiRSetfocus();} */ 
/*static void _OnNPGotGoiRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiRKillfocus();
} */
static int _OnNPGotGoiRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiRCheckValue();
} 
/*static void _OnNystamusRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusRChange();
} */
/*static void _OnNystamusRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusRSetfocus();} */ 
/*static void _OnNystamusRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusRKillfocus();
} */
static int _OnNystamusRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusRCheckValue();
} 
/*static void _OnRomberRChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberRChange();
} */
/*static void _OnRomberRSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberRSetfocus();} */ 
/*static void _OnRomberRKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberRKillfocus();
} */
static int _OnRomberRCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberRCheckValue();
} 
/*static void _OnNPtromuiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiLChange();
} */
/*static void _OnNPtromuiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiLSetfocus();} */ 
/*static void _OnNPtromuiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiLKillfocus();
} */
static int _OnNPtromuiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPtromuiLCheckValue();
} 
/*static void _OnNPLienDongLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongLChange();
} */
/*static void _OnNPLienDongLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongLSetfocus();} */ 
/*static void _OnNPLienDongLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongLKillfocus();
} */
static int _OnNPLienDongLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPLienDongLCheckValue();
} 
/*static void _OnNystamusLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusLChange();
} */
/*static void _OnNystamusLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusLSetfocus();} */ 
/*static void _OnNystamusLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusLKillfocus();
} */
static int _OnNystamusLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNystamusLCheckValue();
} 
/*static void _OnRomberLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberLChange();
} */
/*static void _OnRomberLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberLSetfocus();} */ 
/*static void _OnRomberLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberLKillfocus();
} */
static int _OnRomberLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnRomberLCheckValue();
} 
/*static void _OnNPGotGoiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiLChange();
} */
/*static void _OnNPGotGoiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiLSetfocus();} */ 
/*static void _OnNPGotGoiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiLKillfocus();
} */
static int _OnNPGotGoiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnNPGotGoiLCheckValue();
} 
/*static void _OnGoiLChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiLChange();
} */
/*static void _OnGoiLSetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiLSetfocus();} */ 
/*static void _OnGoiLKillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiLKillfocus();
} */
static int _OnGoiLCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnGoiLCheckValue();
} 
/*static void _OnKham12ChangeFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKham12Change();
} */
/*static void _OnKham12SetfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKham12Setfocus();} */ 
/*static void _OnKham12KillfocusFnc(CWnd *pWnd){
	((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKham12Killfocus();
} */
static int _OnKham12CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBANTParkinsonDongKinh2 *)pWnd)->OnKham12CheckValue();
} 
static int _OnAddHMS_OBANTParkinsonDongKinh2Fnc(CWnd *pWnd){
	 return ((CHMS_OBANTParkinsonDongKinh2*)pWnd)->OnAddHMS_OBANTParkinsonDongKinh2();
} 
static int _OnEditHMS_OBANTParkinsonDongKinh2Fnc(CWnd *pWnd){
	 return ((CHMS_OBANTParkinsonDongKinh2*)pWnd)->OnEditHMS_OBANTParkinsonDongKinh2();
} 
static int _OnDeleteHMS_OBANTParkinsonDongKinh2Fnc(CWnd *pWnd){
	 return ((CHMS_OBANTParkinsonDongKinh2*)pWnd)->OnDeleteHMS_OBANTParkinsonDongKinh2();
} 
static int _OnSaveHMS_OBANTParkinsonDongKinh2Fnc(CWnd *pWnd){
	 return ((CHMS_OBANTParkinsonDongKinh2*)pWnd)->OnSaveHMS_OBANTParkinsonDongKinh2();
} 
static int _OnCancelHMS_OBANTParkinsonDongKinh2Fnc(CWnd *pWnd){
	 return ((CHMS_OBANTParkinsonDongKinh2*)pWnd)->OnCancelHMS_OBANTParkinsonDongKinh2();
} 
CHMS_OBANTParkinsonDongKinh2::CHMS_OBANTParkinsonDongKinh2(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 955;
	SetDefaultValues();
}
CHMS_OBANTParkinsonDongKinh2::~CHMS_OBANTParkinsonDongKinh2(){
}
void CHMS_OBANTParkinsonDongKinh2::OnCreateComponents(){
	m_wndClose.Create(this, _T("Edit"), 530, 5, 610, 30);
	m_wndSave.Create(this, _T("Save"), 615, 5, 695, 30);
	m_wndPrint.Create(this, _T("Print"), 700, 5, 780, 30);

	m_wndTitle3.Create(this, _T("III. PH\x1EA6N KH\xC1M \x43HUY\xCAN KHO\x41 N\x1ED8I TH\x1EA6N KINH(A7)"), 94, 1, 706, 26);
	m_wndKham12Label.Create(this, _T("Kh\xE1m \x31\x32 \x111\xF4i \x64\xE2y th\x1EA7n kinh s\x1ECD n\xE3o"), 5, 30, 255, 55);
	m_wndKham12.Create(this,5, 60, 395, 85); 
	m_wndDangDiVaDungLabel.Create(this, _T("\x44\xE1ng \x111i \x111\x1EE9ng"), 5, 90, 255, 115);
	m_wndDangDiVaDung.Create(this,5, 120, 395, 145); 
	m_wndTuTheTayLabel.Create(this, _T("T\x1B0 th\x1EBF t\x61y"), 5, 150, 105, 175);
	m_wndTuTheTay.Create(this,110, 150, 395, 175); 
	m_wndTuTheChanLabel.Create(this, _T("T\x1B0 th\x1EBF \x63h\xE2n"), 5, 180, 105, 205);
	m_wndTuTheChan.Create(this,110, 180, 395, 205); 
	m_wndTruongLucCoLabel.Create(this, _T("Tr\x1B0\x1A1ng l\x1EF1\x63 \x63\x1A1"), 5, 210, 105, 235);
	m_wndTruongLucCo.Create(this,110, 210, 395, 235); 
	m_wndVanDongBatThuongLabel.Create(this, _T("V\x1EADn \x111\x1ED9ng \x62\x1EA5t th\x1B0\x1EDDng"), 5, 240, 255, 265);
	m_wndVanDongBatThuong.Create(this,5, 270, 395, 295); 
	m_wndHoiChungMangNao.Create(this, _T("H\x1ED9i \x63h\x1EE9ng m\xE0ng n\xE3o"), 5, 630, 255, 655);
	m_wndDHcunggayLabel.Create(this, _T("\x44\x1EA5u hi\x1EC7u \x63\x1EE9ng g\xE1y"), 5, 660, 105, 685);
	m_wndDHcunggay.Create(this,110, 660, 395, 685); 
	m_wndDHKernigLabel.Create(this, _T("\x44\x1EA5u hi\x1EC7u K\x65rnig"), 5, 690, 105, 715);
	m_wndDHKernig.Create(this,110, 690, 395, 715); 
	m_wndDHKhacLabel.Create(this, _T("\x44\x1EA5u hi\x1EC7u kh\xE1\x63"), 5, 720, 105, 745);
	m_wndDHKhac.Create(this,110, 720, 395, 745); 
	m_wndHoiChungTieuNaoTienDinh.Create(this, _T("H\x1ED9i \x63h\x1EE9ng ti\x1EC3u n\xE3o / ti\x1EC1n \x111\xECnh"), 5, 751, 255, 776);
	m_wndMoTaThemLabel.Create(this, _T("M\xF4 t\x1EA3 th\xEAm"), 405, 30, 485, 55);
	m_wndMoTaThem.Create(this,490, 30, 775, 55); 
	m_wndKhamCamGiacSauLabel.Create(this, _T("Kh\xE1m \x63\x1EA3m gi\xE1\x63 s\xE2u"), 405, 60, 623, 85);
	m_wndKhamCamGiacSau.Create(this,405, 90, 775, 115); 
	m_wndKhamCamGiacNongLabel.Create(this, _T("Kh\xE1m \x63\x1EA3m gi\xE1\x63 n\xF4ng"), 405, 120, 623, 145);
	m_wndKhamCamGiacNong.Create(this,405, 150, 775, 175); 
	m_wndKhamCotSongCo.Create(this, _T("Kh\xE1m \x63\x1ED9t s\x1ED1ng \x63\x1ED5"), 403, 179, 622, 204);
	m_wndCoCungCoLabel.Create(this, _T("\x43o \x63\x1EE9ng \x63\x1A1"), 403, 210, 622, 235);
	m_wndCoCungCo.Create(this,405, 240, 775, 265); 
	m_wndVanDongThuDongLabel.Create(this, _T("V\x1EADn \x111\x1ED9ng th\x1EE5 \x111\x1ED9ng"), 403, 270, 622, 295);
	m_wndVanDongThuDong.Create(this,405, 300, 775, 325); 
	m_wndRoiLoanCamGiacDauCoVaiLabel.Create(this, _T("R\x1ED3i lo\x1EA1n \x63\x1EA3m gi\xE1\x63 \x111\x61u \x63\x1ED5 v\x61i"), 403, 330, 622, 355);
	m_wndRoiLoanCamGiacDauCoVai.Create(this,405, 360, 775, 385); 
	m_wndHoiChungThatLungHong.Create(this, _T("H\x1ED9i \x63h\x1EE9ng th\x1EAFt l\x1B0ng - h\xF4ng"), 405, 390, 622, 415);
	m_wndDiemDauCotSongLabel.Create(this, _T("\x110i\x1EC3m \x111\x61u \x63\x1ED9t s\x1ED1ng"), 405, 420, 620, 445);
	m_wndDiemDauCotSong.Create(this,625, 420, 775, 445); 
	m_wndDiemDauCanhCotSongLabel.Create(this, _T("\x110i\x1EC3m \x111\x61u \x63\x1EA1nh \x63\x1ED9t s\x1ED1ng"), 405, 450, 620, 475);
	m_wndDiemDauCanhCotSong.Create(this,625, 450, 775, 475); 
	m_wndLechVeoCotSongThatLungLabel.Create(this, _T("L\x1EC7\x63h v\x1EB9o \x63\x1ED9t s\x1ED1ng th\x1EAFt l\x1B0ng"), 405, 480, 620, 505);
	m_wndLechVeoCotSongThatLung.Create(this,625, 480, 775, 505); 
	m_wndDHSchoberLabel.Create(this, _T("\x44\x1EA5u hi\x1EC7u S\x63ho\x62\x65r"), 405, 510, 620, 535);
	m_wndDHSchober.Create(this,625, 510, 775, 535); 
	m_wndDHLasegueThang.Create(this, _T("D\x1EA5u hi\x1EC7u L\x61s\x65gu\x65 th\x1EB3ng"), 405, 540, 620, 565);
	m_wndLThangPhaiLabel.Create(this, _T("Ph\x1EA3i"), 405, 570, 485, 595);
	m_wndLThangPhai.Create(this,490, 570, 570, 595); 
	m_wndLThangTraiLabel.Create(this, _T("Tr\xE1i"), 575, 570, 655, 595);
	m_wndLThangTrai.Create(this,660, 570, 740, 595); 
	m_wndDHLasegueCheo.Create(this, _T("D\x1EA5u hi\x1EC7u L\x61s\x65gu\x65 \x63h\xE9o"), 404, 605, 619, 630);
	m_wndLCheoPhaiLabel.Create(this, _T("Ph\x1EA3i"), 405, 635, 485, 660);
	m_wndLCheoPhai.Create(this,490, 635, 570, 660); 
	m_wndLCheoTraiLabel.Create(this, _T("Tr\xE1i"), 575, 635, 655, 660);
	m_wndLCheoTrai.Create(this,660, 635, 740, 660); 
	m_wndSucCoDuoiNgonChanCai.Create(this, _T("S\x1EE9\x63 \x63o \x64u\x1ED7i ng\xF3n \x63h\xE2n \x63\xE1i"), 403, 661, 618, 686);
	m_wndNCCPhaiLabel.Create(this, _T("Ph\x1EA3i"), 405, 690, 485, 715);
	m_wndNCCPhai.Create(this,490, 690, 570, 715); 
	m_wndNCCTraiLabel.Create(this, _T("Tr\xE1i"), 575, 690, 655, 715);
	m_wndNCCTrai.Create(this,660, 690, 740, 715); 
	m_wndCacDauHieuKhacLabel.Create(this, _T("\x43\xE1\x63 \x64\x1EA5u hi\x1EC7u kh\xE1\x63"), 405, 720, 485, 745);
	m_wndCacDauHieuKhac.Create(this,490, 720, 775, 745); 
	
	
	m_wndRight.Create(this, _T("Ph\x1EA3i"), 230, 300, 310, 325);
	m_wndLeft.Create(this, _T("Tr\xE1i"), 310, 300, 390, 325);
	m_wndNhiDauLabel.Create(this, _T("Nh\x1ECB \x111\x1EA7u"), 110, 325, 230, 350);
	m_wndTamDauLabel.Create(this, _T("T\x61m \x111\x1EA7u"), 110, 350, 230, 375);
	m_wndGoiLabel.Create(this, _T("G\x1ED1i"), 110, 375, 230, 400);
	m_wndGotLabel.Create(this, _T("G\xF3t"), 110, 400, 230, 425);
	m_wndDaBungTrenLabel.Create(this, _T("\x44\x61 \x62\x1EE5ng tr\xEAn"), 110, 425, 230, 450);
	m_wndDaBungGiuaLabel.Create(this, _T("\x44\x61 \x62\x1EE5ng \x64\x1B0\x1EDBi"), 110, 450, 230, 475);
	m_wndDaBungDuoiLabel.Create(this, _T("\x44\x61 \x62\x1EE5ng gi\x1EEF\x61"), 110, 475, 230, 500);
	m_wndBiuDuiLabel.Create(this, _T("\x42\xECu \x111\xF9i"), 110, 500, 230, 525);
	m_wndHoffmanTromerLabel.Create(this, _T("HoffmanTromer"), 110, 525, 230, 550);
	m_wndBabinskiLabel.Create(this, _T("Babinski"), 110, 550, 230, 575);
	m_wndChiTrenLabel.Create(this, _T("\x43hi tr\xEAn"), 110, 575, 230, 600);
	m_wndChiDuoiLabel.Create(this, _T("\x43hi \x64\x1B0\x1EDBi"), 110, 600, 230, 625);
	m_wndPhanXa.Create(this, _T("Ph\x1EA3n \x78\x1EA1"), 5, 325, 85, 350);
	m_wndDauHieu.Create(this, _T("\x44\x1EA5u hi\x1EC7u"), 5, 525, 85, 550);
	m_wndSucCo.Create(this, _T("S\x1EE9\x63 \x63o"), 5, 575, 85, 600);
	m_wndNhiDauR.Create(this,230, 325, 310, 350); 
	m_wndNhiDauL.Create(this,310, 325, 390, 350); 
	m_wndTamDauR.Create(this,230, 350, 310, 375); 
	m_wndTamDauL.Create(this,310, 350, 390, 375); 
	m_wndGoiR.Create(this,230, 375, 310, 400); 
	m_wndGoiL.Create(this,310, 375, 390, 400); 
	m_wndGotR.Create(this,230, 400, 310, 425); 
	m_wndGOTL.Create(this,310, 400, 390, 425); 
	m_wndDaBungTrenR.Create(this,230, 425, 310, 450); 
	m_wndDaBungTrenL.Create(this,310, 425, 390, 450); 
	m_wndBungGiuaR.Create(this,230, 450, 310, 475); 
	m_wndBungGiuaL.Create(this,310, 450, 390, 475); 
	m_wndDaBungDuoiR.Create(this,230, 475, 310, 500); 
	m_wndDaBungDuoiL.Create(this,310, 475, 390, 500); 
	m_wndBiuDuiR.Create(this,230, 500, 310, 525); 
	m_wndBiuDuiL.Create(this,310, 500, 390, 525); 
	m_wndHTR.Create(this,230, 525, 310, 550); 
	m_wndHTL.Create(this,310, 525, 390, 550); 
	m_wndBabinskiR.Create(this,230, 550, 310, 575); 
	m_wndBabinskiL.Create(this,310, 550, 390, 575); 
	m_wndChiTrenR.Create(this,230, 575, 310, 600); 
	m_wndChiTrenL.Create(this,310, 575, 390, 600); 
	m_wndChiDuoiR.Create(this,230, 600, 310, 625); 
	m_wndChiDuoiL.Create(this,310, 600, 390, 625); 
	m_wndNPTroMuiLabel.Create(this, _T("NP tr\x1ECF m\x169i"), 5, 805, 223, 830);
	m_wndNPLienDongLabel.Create(this, _T("NP li\xEAn \x111\x1ED9ng"), 5, 830, 223, 855);
	m_wndNPGotGoiLabel.Create(this, _T("NP g\xF3t g\x1ED1i"), 5, 855, 223, 880);
	m_wndDHNystamus.Create(this, _T("DH Nystamus"), 5, 880, 223, 905);
	m_wndDHRomberLabel.Create(this, _T("DH Romber"), 5, 905, 223, 930);
	m_wndNghiemPhapDauHieu.Create(this, _T("Nghi\x1EC7m ph\xE1p/ \x44\x1EA5u hi\x1EC7u"), 5, 780, 223, 805);
	m_wndNPtromuiR.Create(this,225, 805, 305, 830); 
	m_wndNPLienDongR.Create(this,225, 830, 305, 855); 
	m_wndNPGotGoiR.Create(this,225, 855, 305, 880); 
	m_wndNystamusR.Create(this,225, 880, 305, 905); 
	m_wndRomberR.Create(this,225, 905, 305, 930); 
	m_wndNPtromuiL.Create(this,305, 805, 385, 830); 
	m_wndNPLienDongL.Create(this,305, 830, 385, 855); 
	m_wndNystamusL.Create(this,305, 880, 385, 905); 
	m_wndRomberL.Create(this,305, 905, 385, 930); 
	m_wndNPGotGoiL.Create(this,305, 855, 385, 880); 
	
	m_wndRight2.Create(this, _T("Ph\x1EA3i"), 225, 780, 305, 805);
	m_wndLeft2.Create(this, _T("Tr\xE1i"), 306, 780, 386, 805);
	

	
	

}
void CHMS_OBANTParkinsonDongKinh2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndDangDiVaDung.SetLimitText(35);
	m_wndDangDiVaDung.SetCheckValue(true);
	m_wndTuTheTay.SetLimitText(35);
	m_wndTuTheTay.SetCheckValue(true);
	m_wndTuTheChan.SetLimitText(35);
	m_wndTuTheChan.SetCheckValue(true);
	m_wndTruongLucCo.SetLimitText(35);
	m_wndTruongLucCo.SetCheckValue(true);
	m_wndVanDongBatThuong.SetLimitText(35);
	m_wndVanDongBatThuong.SetCheckValue(true);
	m_wndDHcunggay.SetLimitText(35);
	m_wndDHcunggay.SetCheckValue(true);
	m_wndDHKernig.SetLimitText(35);
	m_wndDHKernig.SetCheckValue(true);
	m_wndDHKhac.SetLimitText(35);
	m_wndDHKhac.SetCheckValue(true);
	m_wndMoTaThem.SetLimitText(35);
	m_wndMoTaThem.SetCheckValue(true);
	m_wndKhamCamGiacSau.SetLimitText(35);
	m_wndKhamCamGiacSau.SetCheckValue(true);
	m_wndKhamCamGiacNong.SetLimitText(35);
	m_wndKhamCamGiacNong.SetCheckValue(true);
	m_wndCoCungCo.SetLimitText(35);
	m_wndCoCungCo.SetCheckValue(true);
	m_wndVanDongThuDong.SetLimitText(35);
	m_wndVanDongThuDong.SetCheckValue(true);
	m_wndRoiLoanCamGiacDauCoVai.SetLimitText(35);
	m_wndRoiLoanCamGiacDauCoVai.SetCheckValue(true);
	m_wndDiemDauCotSong.SetLimitText(35);
	m_wndDiemDauCotSong.SetCheckValue(true);
	m_wndDiemDauCanhCotSong.SetLimitText(35);
	m_wndDiemDauCanhCotSong.SetCheckValue(true);
	m_wndLechVeoCotSongThatLung.SetLimitText(35);
	m_wndLechVeoCotSongThatLung.SetCheckValue(true);
	m_wndDHSchober.SetLimitText(35);
	m_wndDHSchober.SetCheckValue(true);
	m_wndLThangPhai.SetLimitText(35);
	m_wndLThangPhai.SetCheckValue(true);
	m_wndLThangTrai.SetLimitText(35);
	m_wndLThangTrai.SetCheckValue(true);
	m_wndLCheoPhai.SetLimitText(35);
	m_wndLCheoPhai.SetCheckValue(true);
	m_wndLCheoTrai.SetLimitText(35);
	m_wndLCheoTrai.SetCheckValue(true);
	m_wndNCCPhai.SetLimitText(35);
	m_wndNCCPhai.SetCheckValue(true);
	m_wndNCCTrai.SetLimitText(35);
	m_wndNCCTrai.SetCheckValue(true);
	m_wndCacDauHieuKhac.SetLimitText(35);
	m_wndCacDauHieuKhac.SetCheckValue(true);
	m_wndNhiDauR.SetLimitText(35);
	m_wndNhiDauR.SetCheckValue(true);
	m_wndNhiDauL.SetLimitText(35);
	m_wndNhiDauL.SetCheckValue(true);
	m_wndTamDauR.SetLimitText(35);
	m_wndTamDauR.SetCheckValue(true);
	m_wndTamDauL.SetLimitText(35);
	m_wndTamDauL.SetCheckValue(true);
	m_wndGoiR.SetLimitText(35);
	m_wndGoiR.SetCheckValue(true);
	m_wndGotR.SetLimitText(35);
	m_wndGotR.SetCheckValue(true);
	m_wndGOTL.SetLimitText(35);
	m_wndGOTL.SetCheckValue(true);
	m_wndDaBungTrenR.SetLimitText(35);
	m_wndDaBungTrenR.SetCheckValue(true);
	m_wndDaBungTrenL.SetLimitText(35);
	m_wndDaBungTrenL.SetCheckValue(true);
	m_wndBungGiuaR.SetLimitText(35);
	m_wndBungGiuaR.SetCheckValue(true);
	m_wndBungGiuaL.SetLimitText(35);
	m_wndBungGiuaL.SetCheckValue(true);
	m_wndDaBungDuoiR.SetLimitText(35);
	m_wndDaBungDuoiR.SetCheckValue(true);
	m_wndDaBungDuoiL.SetLimitText(35);
	m_wndDaBungDuoiL.SetCheckValue(true);
	m_wndBiuDuiR.SetLimitText(35);
	m_wndBiuDuiR.SetCheckValue(true);
	m_wndBiuDuiL.SetLimitText(35);
	m_wndBiuDuiL.SetCheckValue(true);
	m_wndHTR.SetLimitText(35);
	m_wndHTR.SetCheckValue(true);
	m_wndHTL.SetLimitText(35);
	m_wndHTL.SetCheckValue(true);
	m_wndBabinskiR.SetLimitText(35);
	m_wndBabinskiR.SetCheckValue(true);
	m_wndBabinskiL.SetLimitText(35);
	m_wndBabinskiL.SetCheckValue(true);
	m_wndChiTrenR.SetLimitText(35);
	m_wndChiTrenR.SetCheckValue(true);
	m_wndChiTrenL.SetLimitText(35);
	m_wndChiTrenL.SetCheckValue(true);
	m_wndChiDuoiR.SetLimitText(35);
	m_wndChiDuoiR.SetCheckValue(true);
	m_wndChiDuoiL.SetLimitText(35);
	m_wndChiDuoiL.SetCheckValue(true);
	m_wndNPtromuiR.SetLimitText(35);
	m_wndNPtromuiR.SetCheckValue(true);
	m_wndNPLienDongR.SetLimitText(35);
	m_wndNPLienDongR.SetCheckValue(true);
	m_wndNPGotGoiR.SetLimitText(35);
	m_wndNPGotGoiR.SetCheckValue(true);
	m_wndNystamusR.SetLimitText(35);
	m_wndNystamusR.SetCheckValue(true);
	m_wndRomberR.SetLimitText(35);
	m_wndRomberR.SetCheckValue(true);
	m_wndNPtromuiL.SetLimitText(35);
	m_wndNPtromuiL.SetCheckValue(true);
	m_wndNPLienDongL.SetLimitText(35);
	m_wndNPLienDongL.SetCheckValue(true);
	m_wndNystamusL.SetLimitText(35);
	m_wndNystamusL.SetCheckValue(true);
	m_wndRomberL.SetLimitText(35);
	m_wndRomberL.SetCheckValue(true);
	m_wndNPGotGoiL.SetLimitText(35);
	m_wndNPGotGoiL.SetCheckValue(true);
	m_wndGoiL.SetLimitText(35);
	m_wndGoiL.SetCheckValue(true);
	m_wndKham12.SetLimitText(35);
	m_wndKham12.SetCheckValue(true);*/

}
void CHMS_OBANTParkinsonDongKinh2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDangDiVaDung.SetEvent(WE_CHANGE, _OnDangDiVaDungChangeFnc);
	//m_wndDangDiVaDung.SetEvent(WE_SETFOCUS, _OnDangDiVaDungSetfocusFnc);
	//m_wndDangDiVaDung.SetEvent(WE_KILLFOCUS, _OnDangDiVaDungKillfocusFnc);
	m_wndDangDiVaDung.SetEvent(WE_CHECKVALUE, _OnDangDiVaDungCheckValueFnc);
	//m_wndTuTheTay.SetEvent(WE_CHANGE, _OnTuTheTayChangeFnc);
	//m_wndTuTheTay.SetEvent(WE_SETFOCUS, _OnTuTheTaySetfocusFnc);
	//m_wndTuTheTay.SetEvent(WE_KILLFOCUS, _OnTuTheTayKillfocusFnc);
	m_wndTuTheTay.SetEvent(WE_CHECKVALUE, _OnTuTheTayCheckValueFnc);
	//m_wndTuTheChan.SetEvent(WE_CHANGE, _OnTuTheChanChangeFnc);
	//m_wndTuTheChan.SetEvent(WE_SETFOCUS, _OnTuTheChanSetfocusFnc);
	//m_wndTuTheChan.SetEvent(WE_KILLFOCUS, _OnTuTheChanKillfocusFnc);
	m_wndTuTheChan.SetEvent(WE_CHECKVALUE, _OnTuTheChanCheckValueFnc);
	//m_wndTruongLucCo.SetEvent(WE_CHANGE, _OnTruongLucCoChangeFnc);
	//m_wndTruongLucCo.SetEvent(WE_SETFOCUS, _OnTruongLucCoSetfocusFnc);
	//m_wndTruongLucCo.SetEvent(WE_KILLFOCUS, _OnTruongLucCoKillfocusFnc);
	m_wndTruongLucCo.SetEvent(WE_CHECKVALUE, _OnTruongLucCoCheckValueFnc);
	//m_wndVanDongBatThuong.SetEvent(WE_CHANGE, _OnVanDongBatThuongChangeFnc);
	//m_wndVanDongBatThuong.SetEvent(WE_SETFOCUS, _OnVanDongBatThuongSetfocusFnc);
	//m_wndVanDongBatThuong.SetEvent(WE_KILLFOCUS, _OnVanDongBatThuongKillfocusFnc);
	m_wndVanDongBatThuong.SetEvent(WE_CHECKVALUE, _OnVanDongBatThuongCheckValueFnc);
	//m_wndDHcunggay.SetEvent(WE_CHANGE, _OnDHcunggayChangeFnc);
	//m_wndDHcunggay.SetEvent(WE_SETFOCUS, _OnDHcunggaySetfocusFnc);
	//m_wndDHcunggay.SetEvent(WE_KILLFOCUS, _OnDHcunggayKillfocusFnc);
	m_wndDHcunggay.SetEvent(WE_CHECKVALUE, _OnDHcunggayCheckValueFnc);
	//m_wndDHKernig.SetEvent(WE_CHANGE, _OnDHKernigChangeFnc);
	//m_wndDHKernig.SetEvent(WE_SETFOCUS, _OnDHKernigSetfocusFnc);
	//m_wndDHKernig.SetEvent(WE_KILLFOCUS, _OnDHKernigKillfocusFnc);
	m_wndDHKernig.SetEvent(WE_CHECKVALUE, _OnDHKernigCheckValueFnc);
	//m_wndDHKhac.SetEvent(WE_CHANGE, _OnDHKhacChangeFnc);
	//m_wndDHKhac.SetEvent(WE_SETFOCUS, _OnDHKhacSetfocusFnc);
	//m_wndDHKhac.SetEvent(WE_KILLFOCUS, _OnDHKhacKillfocusFnc);
	m_wndDHKhac.SetEvent(WE_CHECKVALUE, _OnDHKhacCheckValueFnc);
	//m_wndMoTaThem.SetEvent(WE_CHANGE, _OnMoTaThemChangeFnc);
	//m_wndMoTaThem.SetEvent(WE_SETFOCUS, _OnMoTaThemSetfocusFnc);
	//m_wndMoTaThem.SetEvent(WE_KILLFOCUS, _OnMoTaThemKillfocusFnc);
	m_wndMoTaThem.SetEvent(WE_CHECKVALUE, _OnMoTaThemCheckValueFnc);
	//m_wndKhamCamGiacSau.SetEvent(WE_CHANGE, _OnKhamCamGiacSauChangeFnc);
	//m_wndKhamCamGiacSau.SetEvent(WE_SETFOCUS, _OnKhamCamGiacSauSetfocusFnc);
	//m_wndKhamCamGiacSau.SetEvent(WE_KILLFOCUS, _OnKhamCamGiacSauKillfocusFnc);
	m_wndKhamCamGiacSau.SetEvent(WE_CHECKVALUE, _OnKhamCamGiacSauCheckValueFnc);
	//m_wndKhamCamGiacNong.SetEvent(WE_CHANGE, _OnKhamCamGiacNongChangeFnc);
	//m_wndKhamCamGiacNong.SetEvent(WE_SETFOCUS, _OnKhamCamGiacNongSetfocusFnc);
	//m_wndKhamCamGiacNong.SetEvent(WE_KILLFOCUS, _OnKhamCamGiacNongKillfocusFnc);
	m_wndKhamCamGiacNong.SetEvent(WE_CHECKVALUE, _OnKhamCamGiacNongCheckValueFnc);
	//m_wndCoCungCo.SetEvent(WE_CHANGE, _OnCoCungCoChangeFnc);
	//m_wndCoCungCo.SetEvent(WE_SETFOCUS, _OnCoCungCoSetfocusFnc);
	//m_wndCoCungCo.SetEvent(WE_KILLFOCUS, _OnCoCungCoKillfocusFnc);
	m_wndCoCungCo.SetEvent(WE_CHECKVALUE, _OnCoCungCoCheckValueFnc);
	//m_wndVanDongThuDong.SetEvent(WE_CHANGE, _OnVanDongThuDongChangeFnc);
	//m_wndVanDongThuDong.SetEvent(WE_SETFOCUS, _OnVanDongThuDongSetfocusFnc);
	//m_wndVanDongThuDong.SetEvent(WE_KILLFOCUS, _OnVanDongThuDongKillfocusFnc);
	m_wndVanDongThuDong.SetEvent(WE_CHECKVALUE, _OnVanDongThuDongCheckValueFnc);
	//m_wndRoiLoanCamGiacDauCoVai.SetEvent(WE_CHANGE, _OnRoiLoanCamGiacDauCoVaiChangeFnc);
	//m_wndRoiLoanCamGiacDauCoVai.SetEvent(WE_SETFOCUS, _OnRoiLoanCamGiacDauCoVaiSetfocusFnc);
	//m_wndRoiLoanCamGiacDauCoVai.SetEvent(WE_KILLFOCUS, _OnRoiLoanCamGiacDauCoVaiKillfocusFnc);
	m_wndRoiLoanCamGiacDauCoVai.SetEvent(WE_CHECKVALUE, _OnRoiLoanCamGiacDauCoVaiCheckValueFnc);
	//m_wndDiemDauCotSong.SetEvent(WE_CHANGE, _OnDiemDauCotSongChangeFnc);
	//m_wndDiemDauCotSong.SetEvent(WE_SETFOCUS, _OnDiemDauCotSongSetfocusFnc);
	//m_wndDiemDauCotSong.SetEvent(WE_KILLFOCUS, _OnDiemDauCotSongKillfocusFnc);
	m_wndDiemDauCotSong.SetEvent(WE_CHECKVALUE, _OnDiemDauCotSongCheckValueFnc);
	//m_wndDiemDauCanhCotSong.SetEvent(WE_CHANGE, _OnDiemDauCanhCotSongChangeFnc);
	//m_wndDiemDauCanhCotSong.SetEvent(WE_SETFOCUS, _OnDiemDauCanhCotSongSetfocusFnc);
	//m_wndDiemDauCanhCotSong.SetEvent(WE_KILLFOCUS, _OnDiemDauCanhCotSongKillfocusFnc);
	m_wndDiemDauCanhCotSong.SetEvent(WE_CHECKVALUE, _OnDiemDauCanhCotSongCheckValueFnc);
	//m_wndLechVeoCotSongThatLung.SetEvent(WE_CHANGE, _OnLechVeoCotSongThatLungChangeFnc);
	//m_wndLechVeoCotSongThatLung.SetEvent(WE_SETFOCUS, _OnLechVeoCotSongThatLungSetfocusFnc);
	//m_wndLechVeoCotSongThatLung.SetEvent(WE_KILLFOCUS, _OnLechVeoCotSongThatLungKillfocusFnc);
	m_wndLechVeoCotSongThatLung.SetEvent(WE_CHECKVALUE, _OnLechVeoCotSongThatLungCheckValueFnc);
	//m_wndDHSchober.SetEvent(WE_CHANGE, _OnDHSchoberChangeFnc);
	//m_wndDHSchober.SetEvent(WE_SETFOCUS, _OnDHSchoberSetfocusFnc);
	//m_wndDHSchober.SetEvent(WE_KILLFOCUS, _OnDHSchoberKillfocusFnc);
	m_wndDHSchober.SetEvent(WE_CHECKVALUE, _OnDHSchoberCheckValueFnc);
	//m_wndLThangPhai.SetEvent(WE_CHANGE, _OnLThangPhaiChangeFnc);
	//m_wndLThangPhai.SetEvent(WE_SETFOCUS, _OnLThangPhaiSetfocusFnc);
	//m_wndLThangPhai.SetEvent(WE_KILLFOCUS, _OnLThangPhaiKillfocusFnc);
	m_wndLThangPhai.SetEvent(WE_CHECKVALUE, _OnLThangPhaiCheckValueFnc);
	//m_wndLThangTrai.SetEvent(WE_CHANGE, _OnLThangTraiChangeFnc);
	//m_wndLThangTrai.SetEvent(WE_SETFOCUS, _OnLThangTraiSetfocusFnc);
	//m_wndLThangTrai.SetEvent(WE_KILLFOCUS, _OnLThangTraiKillfocusFnc);
	m_wndLThangTrai.SetEvent(WE_CHECKVALUE, _OnLThangTraiCheckValueFnc);
	//m_wndLCheoPhai.SetEvent(WE_CHANGE, _OnLCheoPhaiChangeFnc);
	//m_wndLCheoPhai.SetEvent(WE_SETFOCUS, _OnLCheoPhaiSetfocusFnc);
	//m_wndLCheoPhai.SetEvent(WE_KILLFOCUS, _OnLCheoPhaiKillfocusFnc);
	m_wndLCheoPhai.SetEvent(WE_CHECKVALUE, _OnLCheoPhaiCheckValueFnc);
	//m_wndLCheoTrai.SetEvent(WE_CHANGE, _OnLCheoTraiChangeFnc);
	//m_wndLCheoTrai.SetEvent(WE_SETFOCUS, _OnLCheoTraiSetfocusFnc);
	//m_wndLCheoTrai.SetEvent(WE_KILLFOCUS, _OnLCheoTraiKillfocusFnc);
	m_wndLCheoTrai.SetEvent(WE_CHECKVALUE, _OnLCheoTraiCheckValueFnc);
	//m_wndNCCPhai.SetEvent(WE_CHANGE, _OnNCCPhaiChangeFnc);
	//m_wndNCCPhai.SetEvent(WE_SETFOCUS, _OnNCCPhaiSetfocusFnc);
	//m_wndNCCPhai.SetEvent(WE_KILLFOCUS, _OnNCCPhaiKillfocusFnc);
	m_wndNCCPhai.SetEvent(WE_CHECKVALUE, _OnNCCPhaiCheckValueFnc);
	//m_wndNCCTrai.SetEvent(WE_CHANGE, _OnNCCTraiChangeFnc);
	//m_wndNCCTrai.SetEvent(WE_SETFOCUS, _OnNCCTraiSetfocusFnc);
	//m_wndNCCTrai.SetEvent(WE_KILLFOCUS, _OnNCCTraiKillfocusFnc);
	m_wndNCCTrai.SetEvent(WE_CHECKVALUE, _OnNCCTraiCheckValueFnc);
	//m_wndCacDauHieuKhac.SetEvent(WE_CHANGE, _OnCacDauHieuKhacChangeFnc);
	//m_wndCacDauHieuKhac.SetEvent(WE_SETFOCUS, _OnCacDauHieuKhacSetfocusFnc);
	//m_wndCacDauHieuKhac.SetEvent(WE_KILLFOCUS, _OnCacDauHieuKhacKillfocusFnc);
	m_wndCacDauHieuKhac.SetEvent(WE_CHECKVALUE, _OnCacDauHieuKhacCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndNhiDauR.SetEvent(WE_CHANGE, _OnNhiDauRChangeFnc);
	//m_wndNhiDauR.SetEvent(WE_SETFOCUS, _OnNhiDauRSetfocusFnc);
	//m_wndNhiDauR.SetEvent(WE_KILLFOCUS, _OnNhiDauRKillfocusFnc);
	m_wndNhiDauR.SetEvent(WE_CHECKVALUE, _OnNhiDauRCheckValueFnc);
	//m_wndNhiDauL.SetEvent(WE_CHANGE, _OnNhiDauLChangeFnc);
	//m_wndNhiDauL.SetEvent(WE_SETFOCUS, _OnNhiDauLSetfocusFnc);
	//m_wndNhiDauL.SetEvent(WE_KILLFOCUS, _OnNhiDauLKillfocusFnc);
	m_wndNhiDauL.SetEvent(WE_CHECKVALUE, _OnNhiDauLCheckValueFnc);
	//m_wndTamDauR.SetEvent(WE_CHANGE, _OnTamDauRChangeFnc);
	//m_wndTamDauR.SetEvent(WE_SETFOCUS, _OnTamDauRSetfocusFnc);
	//m_wndTamDauR.SetEvent(WE_KILLFOCUS, _OnTamDauRKillfocusFnc);
	m_wndTamDauR.SetEvent(WE_CHECKVALUE, _OnTamDauRCheckValueFnc);
	//m_wndTamDauL.SetEvent(WE_CHANGE, _OnTamDauLChangeFnc);
	//m_wndTamDauL.SetEvent(WE_SETFOCUS, _OnTamDauLSetfocusFnc);
	//m_wndTamDauL.SetEvent(WE_KILLFOCUS, _OnTamDauLKillfocusFnc);
	m_wndTamDauL.SetEvent(WE_CHECKVALUE, _OnTamDauLCheckValueFnc);
	//m_wndGoiR.SetEvent(WE_CHANGE, _OnGoiRChangeFnc);
	//m_wndGoiR.SetEvent(WE_SETFOCUS, _OnGoiRSetfocusFnc);
	//m_wndGoiR.SetEvent(WE_KILLFOCUS, _OnGoiRKillfocusFnc);
	m_wndGoiR.SetEvent(WE_CHECKVALUE, _OnGoiRCheckValueFnc);
	//m_wndGotR.SetEvent(WE_CHANGE, _OnGotRChangeFnc);
	//m_wndGotR.SetEvent(WE_SETFOCUS, _OnGotRSetfocusFnc);
	//m_wndGotR.SetEvent(WE_KILLFOCUS, _OnGotRKillfocusFnc);
	m_wndGotR.SetEvent(WE_CHECKVALUE, _OnGotRCheckValueFnc);
	//m_wndGOTL.SetEvent(WE_CHANGE, _OnGOTLChangeFnc);
	//m_wndGOTL.SetEvent(WE_SETFOCUS, _OnGOTLSetfocusFnc);
	//m_wndGOTL.SetEvent(WE_KILLFOCUS, _OnGOTLKillfocusFnc);
	m_wndGOTL.SetEvent(WE_CHECKVALUE, _OnGOTLCheckValueFnc);
	//m_wndDaBungTrenR.SetEvent(WE_CHANGE, _OnDaBungTrenRChangeFnc);
	//m_wndDaBungTrenR.SetEvent(WE_SETFOCUS, _OnDaBungTrenRSetfocusFnc);
	//m_wndDaBungTrenR.SetEvent(WE_KILLFOCUS, _OnDaBungTrenRKillfocusFnc);
	m_wndDaBungTrenR.SetEvent(WE_CHECKVALUE, _OnDaBungTrenRCheckValueFnc);
	//m_wndDaBungTrenL.SetEvent(WE_CHANGE, _OnDaBungTrenLChangeFnc);
	//m_wndDaBungTrenL.SetEvent(WE_SETFOCUS, _OnDaBungTrenLSetfocusFnc);
	//m_wndDaBungTrenL.SetEvent(WE_KILLFOCUS, _OnDaBungTrenLKillfocusFnc);
	m_wndDaBungTrenL.SetEvent(WE_CHECKVALUE, _OnDaBungTrenLCheckValueFnc);
	//m_wndBungGiuaR.SetEvent(WE_CHANGE, _OnBungGiuaRChangeFnc);
	//m_wndBungGiuaR.SetEvent(WE_SETFOCUS, _OnBungGiuaRSetfocusFnc);
	//m_wndBungGiuaR.SetEvent(WE_KILLFOCUS, _OnBungGiuaRKillfocusFnc);
	m_wndBungGiuaR.SetEvent(WE_CHECKVALUE, _OnBungGiuaRCheckValueFnc);
	//m_wndBungGiuaL.SetEvent(WE_CHANGE, _OnBungGiuaLChangeFnc);
	//m_wndBungGiuaL.SetEvent(WE_SETFOCUS, _OnBungGiuaLSetfocusFnc);
	//m_wndBungGiuaL.SetEvent(WE_KILLFOCUS, _OnBungGiuaLKillfocusFnc);
	m_wndBungGiuaL.SetEvent(WE_CHECKVALUE, _OnBungGiuaLCheckValueFnc);
	//m_wndDaBungDuoiR.SetEvent(WE_CHANGE, _OnDaBungDuoiRChangeFnc);
	//m_wndDaBungDuoiR.SetEvent(WE_SETFOCUS, _OnDaBungDuoiRSetfocusFnc);
	//m_wndDaBungDuoiR.SetEvent(WE_KILLFOCUS, _OnDaBungDuoiRKillfocusFnc);
	m_wndDaBungDuoiR.SetEvent(WE_CHECKVALUE, _OnDaBungDuoiRCheckValueFnc);
	//m_wndDaBungDuoiL.SetEvent(WE_CHANGE, _OnDaBungDuoiLChangeFnc);
	//m_wndDaBungDuoiL.SetEvent(WE_SETFOCUS, _OnDaBungDuoiLSetfocusFnc);
	//m_wndDaBungDuoiL.SetEvent(WE_KILLFOCUS, _OnDaBungDuoiLKillfocusFnc);
	m_wndDaBungDuoiL.SetEvent(WE_CHECKVALUE, _OnDaBungDuoiLCheckValueFnc);
	//m_wndBiuDuiR.SetEvent(WE_CHANGE, _OnBiuDuiRChangeFnc);
	//m_wndBiuDuiR.SetEvent(WE_SETFOCUS, _OnBiuDuiRSetfocusFnc);
	//m_wndBiuDuiR.SetEvent(WE_KILLFOCUS, _OnBiuDuiRKillfocusFnc);
	m_wndBiuDuiR.SetEvent(WE_CHECKVALUE, _OnBiuDuiRCheckValueFnc);
	//m_wndBiuDuiL.SetEvent(WE_CHANGE, _OnBiuDuiLChangeFnc);
	//m_wndBiuDuiL.SetEvent(WE_SETFOCUS, _OnBiuDuiLSetfocusFnc);
	//m_wndBiuDuiL.SetEvent(WE_KILLFOCUS, _OnBiuDuiLKillfocusFnc);
	m_wndBiuDuiL.SetEvent(WE_CHECKVALUE, _OnBiuDuiLCheckValueFnc);
	//m_wndHTR.SetEvent(WE_CHANGE, _OnHTRChangeFnc);
	//m_wndHTR.SetEvent(WE_SETFOCUS, _OnHTRSetfocusFnc);
	//m_wndHTR.SetEvent(WE_KILLFOCUS, _OnHTRKillfocusFnc);
	m_wndHTR.SetEvent(WE_CHECKVALUE, _OnHTRCheckValueFnc);
	//m_wndHTL.SetEvent(WE_CHANGE, _OnHTLChangeFnc);
	//m_wndHTL.SetEvent(WE_SETFOCUS, _OnHTLSetfocusFnc);
	//m_wndHTL.SetEvent(WE_KILLFOCUS, _OnHTLKillfocusFnc);
	m_wndHTL.SetEvent(WE_CHECKVALUE, _OnHTLCheckValueFnc);
	//m_wndBabinskiR.SetEvent(WE_CHANGE, _OnBabinskiRChangeFnc);
	//m_wndBabinskiR.SetEvent(WE_SETFOCUS, _OnBabinskiRSetfocusFnc);
	//m_wndBabinskiR.SetEvent(WE_KILLFOCUS, _OnBabinskiRKillfocusFnc);
	m_wndBabinskiR.SetEvent(WE_CHECKVALUE, _OnBabinskiRCheckValueFnc);
	//m_wndBabinskiL.SetEvent(WE_CHANGE, _OnBabinskiLChangeFnc);
	//m_wndBabinskiL.SetEvent(WE_SETFOCUS, _OnBabinskiLSetfocusFnc);
	//m_wndBabinskiL.SetEvent(WE_KILLFOCUS, _OnBabinskiLKillfocusFnc);
	m_wndBabinskiL.SetEvent(WE_CHECKVALUE, _OnBabinskiLCheckValueFnc);
	//m_wndChiTrenR.SetEvent(WE_CHANGE, _OnChiTrenRChangeFnc);
	//m_wndChiTrenR.SetEvent(WE_SETFOCUS, _OnChiTrenRSetfocusFnc);
	//m_wndChiTrenR.SetEvent(WE_KILLFOCUS, _OnChiTrenRKillfocusFnc);
	m_wndChiTrenR.SetEvent(WE_CHECKVALUE, _OnChiTrenRCheckValueFnc);
	//m_wndChiTrenL.SetEvent(WE_CHANGE, _OnChiTrenLChangeFnc);
	//m_wndChiTrenL.SetEvent(WE_SETFOCUS, _OnChiTrenLSetfocusFnc);
	//m_wndChiTrenL.SetEvent(WE_KILLFOCUS, _OnChiTrenLKillfocusFnc);
	m_wndChiTrenL.SetEvent(WE_CHECKVALUE, _OnChiTrenLCheckValueFnc);
	//m_wndChiDuoiR.SetEvent(WE_CHANGE, _OnChiDuoiRChangeFnc);
	//m_wndChiDuoiR.SetEvent(WE_SETFOCUS, _OnChiDuoiRSetfocusFnc);
	//m_wndChiDuoiR.SetEvent(WE_KILLFOCUS, _OnChiDuoiRKillfocusFnc);
	m_wndChiDuoiR.SetEvent(WE_CHECKVALUE, _OnChiDuoiRCheckValueFnc);
	//m_wndChiDuoiL.SetEvent(WE_CHANGE, _OnChiDuoiLChangeFnc);
	//m_wndChiDuoiL.SetEvent(WE_SETFOCUS, _OnChiDuoiLSetfocusFnc);
	//m_wndChiDuoiL.SetEvent(WE_KILLFOCUS, _OnChiDuoiLKillfocusFnc);
	m_wndChiDuoiL.SetEvent(WE_CHECKVALUE, _OnChiDuoiLCheckValueFnc);
	//m_wndNPtromuiR.SetEvent(WE_CHANGE, _OnNPtromuiRChangeFnc);
	//m_wndNPtromuiR.SetEvent(WE_SETFOCUS, _OnNPtromuiRSetfocusFnc);
	//m_wndNPtromuiR.SetEvent(WE_KILLFOCUS, _OnNPtromuiRKillfocusFnc);
	m_wndNPtromuiR.SetEvent(WE_CHECKVALUE, _OnNPtromuiRCheckValueFnc);
	//m_wndNPLienDongR.SetEvent(WE_CHANGE, _OnNPLienDongRChangeFnc);
	//m_wndNPLienDongR.SetEvent(WE_SETFOCUS, _OnNPLienDongRSetfocusFnc);
	//m_wndNPLienDongR.SetEvent(WE_KILLFOCUS, _OnNPLienDongRKillfocusFnc);
	m_wndNPLienDongR.SetEvent(WE_CHECKVALUE, _OnNPLienDongRCheckValueFnc);
	//m_wndNPGotGoiR.SetEvent(WE_CHANGE, _OnNPGotGoiRChangeFnc);
	//m_wndNPGotGoiR.SetEvent(WE_SETFOCUS, _OnNPGotGoiRSetfocusFnc);
	//m_wndNPGotGoiR.SetEvent(WE_KILLFOCUS, _OnNPGotGoiRKillfocusFnc);
	m_wndNPGotGoiR.SetEvent(WE_CHECKVALUE, _OnNPGotGoiRCheckValueFnc);
	//m_wndNystamusR.SetEvent(WE_CHANGE, _OnNystamusRChangeFnc);
	//m_wndNystamusR.SetEvent(WE_SETFOCUS, _OnNystamusRSetfocusFnc);
	//m_wndNystamusR.SetEvent(WE_KILLFOCUS, _OnNystamusRKillfocusFnc);
	m_wndNystamusR.SetEvent(WE_CHECKVALUE, _OnNystamusRCheckValueFnc);
	//m_wndRomberR.SetEvent(WE_CHANGE, _OnRomberRChangeFnc);
	//m_wndRomberR.SetEvent(WE_SETFOCUS, _OnRomberRSetfocusFnc);
	//m_wndRomberR.SetEvent(WE_KILLFOCUS, _OnRomberRKillfocusFnc);
	m_wndRomberR.SetEvent(WE_CHECKVALUE, _OnRomberRCheckValueFnc);
	//m_wndNPtromuiL.SetEvent(WE_CHANGE, _OnNPtromuiLChangeFnc);
	//m_wndNPtromuiL.SetEvent(WE_SETFOCUS, _OnNPtromuiLSetfocusFnc);
	//m_wndNPtromuiL.SetEvent(WE_KILLFOCUS, _OnNPtromuiLKillfocusFnc);
	m_wndNPtromuiL.SetEvent(WE_CHECKVALUE, _OnNPtromuiLCheckValueFnc);
	//m_wndNPLienDongL.SetEvent(WE_CHANGE, _OnNPLienDongLChangeFnc);
	//m_wndNPLienDongL.SetEvent(WE_SETFOCUS, _OnNPLienDongLSetfocusFnc);
	//m_wndNPLienDongL.SetEvent(WE_KILLFOCUS, _OnNPLienDongLKillfocusFnc);
	m_wndNPLienDongL.SetEvent(WE_CHECKVALUE, _OnNPLienDongLCheckValueFnc);
	//m_wndNystamusL.SetEvent(WE_CHANGE, _OnNystamusLChangeFnc);
	//m_wndNystamusL.SetEvent(WE_SETFOCUS, _OnNystamusLSetfocusFnc);
	//m_wndNystamusL.SetEvent(WE_KILLFOCUS, _OnNystamusLKillfocusFnc);
	m_wndNystamusL.SetEvent(WE_CHECKVALUE, _OnNystamusLCheckValueFnc);
	//m_wndRomberL.SetEvent(WE_CHANGE, _OnRomberLChangeFnc);
	//m_wndRomberL.SetEvent(WE_SETFOCUS, _OnRomberLSetfocusFnc);
	//m_wndRomberL.SetEvent(WE_KILLFOCUS, _OnRomberLKillfocusFnc);
	m_wndRomberL.SetEvent(WE_CHECKVALUE, _OnRomberLCheckValueFnc);
	//m_wndNPGotGoiL.SetEvent(WE_CHANGE, _OnNPGotGoiLChangeFnc);
	//m_wndNPGotGoiL.SetEvent(WE_SETFOCUS, _OnNPGotGoiLSetfocusFnc);
	//m_wndNPGotGoiL.SetEvent(WE_KILLFOCUS, _OnNPGotGoiLKillfocusFnc);
	m_wndNPGotGoiL.SetEvent(WE_CHECKVALUE, _OnNPGotGoiLCheckValueFnc);
	//m_wndGoiL.SetEvent(WE_CHANGE, _OnGoiLChangeFnc);
	//m_wndGoiL.SetEvent(WE_SETFOCUS, _OnGoiLSetfocusFnc);
	//m_wndGoiL.SetEvent(WE_KILLFOCUS, _OnGoiLKillfocusFnc);
	m_wndGoiL.SetEvent(WE_CHECKVALUE, _OnGoiLCheckValueFnc);
	//m_wndKham12.SetEvent(WE_CHANGE, _OnKham12ChangeFnc);
	//m_wndKham12.SetEvent(WE_SETFOCUS, _OnKham12SetfocusFnc);
	//m_wndKham12.SetEvent(WE_KILLFOCUS, _OnKham12KillfocusFnc);
	m_wndKham12.SetEvent(WE_CHECKVALUE, _OnKham12CheckValueFnc);
	
	GetDataToScreen();

	SetScrollSizes(MM_TEXT, CSize(700, 800));

}
void CHMS_OBANTParkinsonDongKinh2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDangDiVaDung.GetDlgCtrlID(), m_szDangDiVaDung);
	DDX_Text(pDX, m_wndTuTheTay.GetDlgCtrlID(), m_szTuTheTay);
	DDX_Text(pDX, m_wndTuTheChan.GetDlgCtrlID(), m_szTuTheChan);
	DDX_Text(pDX, m_wndTruongLucCo.GetDlgCtrlID(), m_szTruongLucCo);
	DDX_Text(pDX, m_wndVanDongBatThuong.GetDlgCtrlID(), m_szVanDongBatThuong);
	DDX_Text(pDX, m_wndDHcunggay.GetDlgCtrlID(), m_szDHcunggay);
	DDX_Text(pDX, m_wndDHKernig.GetDlgCtrlID(), m_szDHKernig);
	DDX_Text(pDX, m_wndDHKhac.GetDlgCtrlID(), m_szDHKhac);
	DDX_Text(pDX, m_wndMoTaThem.GetDlgCtrlID(), m_szMoTaThem);
	DDX_Text(pDX, m_wndKhamCamGiacSau.GetDlgCtrlID(), m_szKhamCamGiacSau);
	DDX_Text(pDX, m_wndKhamCamGiacNong.GetDlgCtrlID(), m_szKhamCamGiacNong);
	DDX_Text(pDX, m_wndCoCungCo.GetDlgCtrlID(), m_szCoCungCo);
	DDX_Text(pDX, m_wndVanDongThuDong.GetDlgCtrlID(), m_szVanDongThuDong);
	DDX_Text(pDX, m_wndRoiLoanCamGiacDauCoVai.GetDlgCtrlID(), m_szRoiLoanCamGiacDauCoVai);
	DDX_Text(pDX, m_wndDiemDauCotSong.GetDlgCtrlID(), m_szDiemDauCotSong);
	DDX_Text(pDX, m_wndDiemDauCanhCotSong.GetDlgCtrlID(), m_szDiemDauCanhCotSong);
	DDX_Text(pDX, m_wndLechVeoCotSongThatLung.GetDlgCtrlID(), m_szLechVeoCotSongThatLung);
	DDX_Text(pDX, m_wndDHSchober.GetDlgCtrlID(), m_szDHSchober);
	DDX_Text(pDX, m_wndLThangPhai.GetDlgCtrlID(), m_szLThangPhai);
	DDX_Text(pDX, m_wndLThangTrai.GetDlgCtrlID(), m_szLThangTrai);
	DDX_Text(pDX, m_wndLCheoPhai.GetDlgCtrlID(), m_szLCheoPhai);
	DDX_Text(pDX, m_wndLCheoTrai.GetDlgCtrlID(), m_szLCheoTrai);
	DDX_Text(pDX, m_wndNCCPhai.GetDlgCtrlID(), m_szNCCPhai);
	DDX_Text(pDX, m_wndNCCTrai.GetDlgCtrlID(), m_szNCCTrai);
	DDX_Text(pDX, m_wndCacDauHieuKhac.GetDlgCtrlID(), m_szCacDauHieuKhac);
	DDX_Text(pDX, m_wndNhiDauR.GetDlgCtrlID(), m_szNhiDauR);
	DDX_Text(pDX, m_wndNhiDauL.GetDlgCtrlID(), m_szNhiDauL);
	DDX_Text(pDX, m_wndTamDauR.GetDlgCtrlID(), m_szTamDauR);
	DDX_Text(pDX, m_wndTamDauL.GetDlgCtrlID(), m_szTamDauL);
	DDX_Text(pDX, m_wndGoiR.GetDlgCtrlID(), m_szGoiR);
	DDX_Text(pDX, m_wndGotR.GetDlgCtrlID(), m_szGotR);
	DDX_Text(pDX, m_wndGOTL.GetDlgCtrlID(), m_szGOTL);
	DDX_Text(pDX, m_wndDaBungTrenR.GetDlgCtrlID(), m_szDaBungTrenR);
	DDX_Text(pDX, m_wndDaBungTrenL.GetDlgCtrlID(), m_szDaBungTrenL);
	DDX_Text(pDX, m_wndBungGiuaR.GetDlgCtrlID(), m_szBungGiuaR);
	DDX_Text(pDX, m_wndBungGiuaL.GetDlgCtrlID(), m_szBungGiuaL);
	DDX_Text(pDX, m_wndDaBungDuoiR.GetDlgCtrlID(), m_szDaBungDuoiR);
	DDX_Text(pDX, m_wndDaBungDuoiL.GetDlgCtrlID(), m_szDaBungDuoiL);
	DDX_Text(pDX, m_wndBiuDuiR.GetDlgCtrlID(), m_szBiuDuiR);
	DDX_Text(pDX, m_wndBiuDuiL.GetDlgCtrlID(), m_szBiuDuiL);
	DDX_Text(pDX, m_wndHTR.GetDlgCtrlID(), m_szHTR);
	DDX_Text(pDX, m_wndHTL.GetDlgCtrlID(), m_szHTL);
	DDX_Text(pDX, m_wndBabinskiR.GetDlgCtrlID(), m_szBabinskiR);
	DDX_Text(pDX, m_wndBabinskiL.GetDlgCtrlID(), m_szBabinskiL);
	DDX_Text(pDX, m_wndChiTrenR.GetDlgCtrlID(), m_szChiTrenR);
	DDX_Text(pDX, m_wndChiTrenL.GetDlgCtrlID(), m_szChiTrenL);
	DDX_Text(pDX, m_wndChiDuoiR.GetDlgCtrlID(), m_szChiDuoiR);
	DDX_Text(pDX, m_wndChiDuoiL.GetDlgCtrlID(), m_szChiDuoiL);
	DDX_Text(pDX, m_wndNPtromuiR.GetDlgCtrlID(), m_szNPtromuiR);
	DDX_Text(pDX, m_wndNPLienDongR.GetDlgCtrlID(), m_szNPLienDongR);
	DDX_Text(pDX, m_wndNPGotGoiR.GetDlgCtrlID(), m_szNPGotGoiR);
	DDX_Text(pDX, m_wndNystamusR.GetDlgCtrlID(), m_szNystamusR);
	DDX_Text(pDX, m_wndRomberR.GetDlgCtrlID(), m_szRomberR);
	DDX_Text(pDX, m_wndNPtromuiL.GetDlgCtrlID(), m_szNPtromuiL);
	DDX_Text(pDX, m_wndNPLienDongL.GetDlgCtrlID(), m_szNPLienDongL);
	DDX_Text(pDX, m_wndNystamusL.GetDlgCtrlID(), m_szNystamusL);
	DDX_Text(pDX, m_wndRomberL.GetDlgCtrlID(), m_szRomberL);
	DDX_Text(pDX, m_wndNPGotGoiL.GetDlgCtrlID(), m_szNPGotGoiL);
	DDX_Text(pDX, m_wndGoiL.GetDlgCtrlID(), m_szGoiL);
	DDX_Text(pDX, m_wndKham12.GetDlgCtrlID(), m_szKham12);

}
void CHMS_OBANTParkinsonDongKinh2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DangDiVaDung")] =  m_szDangDiVaDung;
	m_jData[_T("TuTheTay")] =  m_szTuTheTay;
	m_jData[_T("TuTheChan")] =  m_szTuTheChan;
	m_jData[_T("TruongLucCo")] =  m_szTruongLucCo;
	m_jData[_T("VanDongBatThuong")] =  m_szVanDongBatThuong;
	m_jData[_T("DHcunggay")] =  m_szDHcunggay;
	m_jData[_T("DHKernig")] =  m_szDHKernig;
	m_jData[_T("DHKhac")] =  m_szDHKhac;
	m_jData[_T("MoTaThem")] =  m_szMoTaThem;
	m_jData[_T("KhamCamGiacSau")] =  m_szKhamCamGiacSau;
	m_jData[_T("KhamCamGiacNong")] =  m_szKhamCamGiacNong;
	m_jData[_T("CoCungCo")] =  m_szCoCungCo;
	m_jData[_T("VanDongThuDong")] =  m_szVanDongThuDong;
	m_jData[_T("RoiLoanCamGiacDauCoVai")] =  m_szRoiLoanCamGiacDauCoVai;
	m_jData[_T("DiemDauCotSong")] =  m_szDiemDauCotSong;
	m_jData[_T("DiemDauCanhCotSong")] =  m_szDiemDauCanhCotSong;
	m_jData[_T("LechVeoCotSongThatLung")] =  m_szLechVeoCotSongThatLung;
	m_jData[_T("DHSchober")] =  m_szDHSchober;
	m_jData[_T("LThangPhai")] =  m_szLThangPhai;
	m_jData[_T("LThangTrai")] =  m_szLThangTrai;
	m_jData[_T("LCheoPhai")] =  m_szLCheoPhai;
	m_jData[_T("LCheoTrai")] =  m_szLCheoTrai;
	m_jData[_T("NCCPhai")] =  m_szNCCPhai;
	m_jData[_T("NCCTrai")] =  m_szNCCTrai;
	m_jData[_T("CacDauHieuKhac")] =  m_szCacDauHieuKhac;
	m_jData[_T("NhiDauR")] =  m_szNhiDauR;
	m_jData[_T("NhiDauL")] =  m_szNhiDauL;
	m_jData[_T("TamDauR")] =  m_szTamDauR;
	m_jData[_T("TamDauL")] =  m_szTamDauL;
	m_jData[_T("GoiR")] =  m_szGoiR;
	m_jData[_T("GotR")] =  m_szGotR;
	m_jData[_T("GOTL")] =  m_szGOTL;
	m_jData[_T("DaBungTrenR")] =  m_szDaBungTrenR;
	m_jData[_T("DaBungTrenL")] =  m_szDaBungTrenL;
	m_jData[_T("BungGiuaR")] =  m_szBungGiuaR;
	m_jData[_T("BungGiuaL")] =  m_szBungGiuaL;
	m_jData[_T("DaBungDuoiR")] =  m_szDaBungDuoiR;
	m_jData[_T("DaBungDuoiL")] =  m_szDaBungDuoiL;
	m_jData[_T("BiuDuiR")] =  m_szBiuDuiR;
	m_jData[_T("BiuDuiL")] =  m_szBiuDuiL;
	m_jData[_T("HTR")] =  m_szHTR;
	m_jData[_T("HTL")] =  m_szHTL;
	m_jData[_T("BabinskiR")] =  m_szBabinskiR;
	m_jData[_T("BabinskiL")] =  m_szBabinskiL;
	m_jData[_T("ChiTrenR")] =  m_szChiTrenR;
	m_jData[_T("ChiTrenL")] =  m_szChiTrenL;
	m_jData[_T("ChiDuoiR")] =  m_szChiDuoiR;
	m_jData[_T("ChiDuoiL")] =  m_szChiDuoiL;
	m_jData[_T("NPtromuiR")] =  m_szNPtromuiR;
	m_jData[_T("NPLienDongR")] =  m_szNPLienDongR;
	m_jData[_T("NPGotGoiR")] =  m_szNPGotGoiR;
	m_jData[_T("NystamusR")] =  m_szNystamusR;
	m_jData[_T("RomberR")] =  m_szRomberR;
	m_jData[_T("NPtromuiL")] =  m_szNPtromuiL;
	m_jData[_T("NPLienDongL")] =  m_szNPLienDongL;
	m_jData[_T("NystamusL")] =  m_szNystamusL;
	m_jData[_T("RomberL")] =  m_szRomberL;
	m_jData[_T("NPGotGoiL")] =  m_szNPGotGoiL;
	m_jData[_T("GoiL")] =  m_szGoiL;
	m_jData[_T("Kham12")] =  m_szKham12;
	}
	else
	{
			
	m_jData[_T("DangDiVaDung")].GetValue(m_szDangDiVaDung);
	m_jData[_T("TuTheTay")].GetValue(m_szTuTheTay);
	m_jData[_T("TuTheChan")].GetValue(m_szTuTheChan);
	m_jData[_T("TruongLucCo")].GetValue(m_szTruongLucCo);
	m_jData[_T("VanDongBatThuong")].GetValue(m_szVanDongBatThuong);
	m_jData[_T("DHcunggay")].GetValue(m_szDHcunggay);
	m_jData[_T("DHKernig")].GetValue(m_szDHKernig);
	m_jData[_T("DHKhac")].GetValue(m_szDHKhac);
	m_jData[_T("MoTaThem")].GetValue(m_szMoTaThem);
	m_jData[_T("KhamCamGiacSau")].GetValue(m_szKhamCamGiacSau);
	m_jData[_T("KhamCamGiacNong")].GetValue(m_szKhamCamGiacNong);
	m_jData[_T("CoCungCo")].GetValue(m_szCoCungCo);
	m_jData[_T("VanDongThuDong")].GetValue(m_szVanDongThuDong);
	m_jData[_T("RoiLoanCamGiacDauCoVai")].GetValue(m_szRoiLoanCamGiacDauCoVai);
	m_jData[_T("DiemDauCotSong")].GetValue(m_szDiemDauCotSong);
	m_jData[_T("DiemDauCanhCotSong")].GetValue(m_szDiemDauCanhCotSong);
	m_jData[_T("LechVeoCotSongThatLung")].GetValue(m_szLechVeoCotSongThatLung);
	m_jData[_T("DHSchober")].GetValue(m_szDHSchober);
	m_jData[_T("LThangPhai")].GetValue(m_szLThangPhai);
	m_jData[_T("LThangTrai")].GetValue(m_szLThangTrai);
	m_jData[_T("LCheoPhai")].GetValue(m_szLCheoPhai);
	m_jData[_T("LCheoTrai")].GetValue(m_szLCheoTrai);
	m_jData[_T("NCCPhai")].GetValue(m_szNCCPhai);
	m_jData[_T("NCCTrai")].GetValue(m_szNCCTrai);
	m_jData[_T("CacDauHieuKhac")].GetValue(m_szCacDauHieuKhac);
	m_jData[_T("NhiDauR")].GetValue(m_szNhiDauR);
	m_jData[_T("NhiDauL")].GetValue(m_szNhiDauL);
	m_jData[_T("TamDauR")].GetValue(m_szTamDauR);
	m_jData[_T("TamDauL")].GetValue(m_szTamDauL);
	m_jData[_T("GoiR")].GetValue(m_szGoiR);
	m_jData[_T("GotR")].GetValue(m_szGotR);
	m_jData[_T("GOTL")].GetValue(m_szGOTL);
	m_jData[_T("DaBungTrenR")].GetValue(m_szDaBungTrenR);
	m_jData[_T("DaBungTrenL")].GetValue(m_szDaBungTrenL);
	m_jData[_T("BungGiuaR")].GetValue(m_szBungGiuaR);
	m_jData[_T("BungGiuaL")].GetValue(m_szBungGiuaL);
	m_jData[_T("DaBungDuoiR")].GetValue(m_szDaBungDuoiR);
	m_jData[_T("DaBungDuoiL")].GetValue(m_szDaBungDuoiL);
	m_jData[_T("BiuDuiR")].GetValue(m_szBiuDuiR);
	m_jData[_T("BiuDuiL")].GetValue(m_szBiuDuiL);
	m_jData[_T("HTR")].GetValue(m_szHTR);
	m_jData[_T("HTL")].GetValue(m_szHTL);
	m_jData[_T("BabinskiR")].GetValue(m_szBabinskiR);
	m_jData[_T("BabinskiL")].GetValue(m_szBabinskiL);
	m_jData[_T("ChiTrenR")].GetValue(m_szChiTrenR);
	m_jData[_T("ChiTrenL")].GetValue(m_szChiTrenL);
	m_jData[_T("ChiDuoiR")].GetValue(m_szChiDuoiR);
	m_jData[_T("ChiDuoiL")].GetValue(m_szChiDuoiL);
	m_jData[_T("NPtromuiR")].GetValue(m_szNPtromuiR);
	m_jData[_T("NPLienDongR")].GetValue(m_szNPLienDongR);
	m_jData[_T("NPGotGoiR")].GetValue(m_szNPGotGoiR);
	m_jData[_T("NystamusR")].GetValue(m_szNystamusR);
	m_jData[_T("RomberR")].GetValue(m_szRomberR);
	m_jData[_T("NPtromuiL")].GetValue(m_szNPtromuiL);
	m_jData[_T("NPLienDongL")].GetValue(m_szNPLienDongL);
	m_jData[_T("NystamusL")].GetValue(m_szNystamusL);
	m_jData[_T("RomberL")].GetValue(m_szRomberL);
	m_jData[_T("NPGotGoiL")].GetValue(m_szNPGotGoiL);
	m_jData[_T("GoiL")].GetValue(m_szGoiL);
	m_jData[_T("Kham12")].GetValue(m_szKham12);
	}

}
void CHMS_OBANTParkinsonDongKinh2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BADT_PARKINSON2'"), pMF->m_nDocNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);

	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BADT_PARKINSON2' and hde_refidx = %d "), pMF->m_nDocNo, i);
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
		SetMode(VM_ADD);
	}

}
void CHMS_OBANTParkinsonDongKinh2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBANTParkinsonDongKinh2::SetDefaultValues(){

	m_szDangDiVaDung.Empty();
	m_szTuTheTay.Empty();
	m_szTuTheChan.Empty();
	m_szTruongLucCo.Empty();
	m_szVanDongBatThuong.Empty();
	m_szDHcunggay.Empty();
	m_szDHKernig.Empty();
	m_szDHKhac.Empty();
	m_szMoTaThem.Empty();
	m_szKhamCamGiacSau.Empty();
	m_szKhamCamGiacNong.Empty();
	m_szCoCungCo.Empty();
	m_szVanDongThuDong.Empty();
	m_szRoiLoanCamGiacDauCoVai.Empty();
	m_szDiemDauCotSong.Empty();
	m_szDiemDauCanhCotSong.Empty();
	m_szLechVeoCotSongThatLung.Empty();
	m_szDHSchober.Empty();
	m_szLThangPhai.Empty();
	m_szLThangTrai.Empty();
	m_szLCheoPhai.Empty();
	m_szLCheoTrai.Empty();
	m_szNCCPhai.Empty();
	m_szNCCTrai.Empty();
	m_szCacDauHieuKhac.Empty();
	m_szNhiDauR.Empty();
	m_szNhiDauL.Empty();
	m_szTamDauR.Empty();
	m_szTamDauL.Empty();
	m_szGoiR.Empty();
	m_szGotR.Empty();
	m_szGOTL.Empty();
	m_szDaBungTrenR.Empty();
	m_szDaBungTrenL.Empty();
	m_szBungGiuaR.Empty();
	m_szBungGiuaL.Empty();
	m_szDaBungDuoiR.Empty();
	m_szDaBungDuoiL.Empty();
	m_szBiuDuiR.Empty();
	m_szBiuDuiL.Empty();
	m_szHTR.Empty();
	m_szHTL.Empty();
	m_szBabinskiR.Empty();
	m_szBabinskiL.Empty();
	m_szChiTrenR.Empty();
	m_szChiTrenL.Empty();
	m_szChiDuoiR.Empty();
	m_szChiDuoiL.Empty();
	m_szNPtromuiR.Empty();
	m_szNPLienDongR.Empty();
	m_szNPGotGoiR.Empty();
	m_szNystamusR.Empty();
	m_szRomberR.Empty();
	m_szNPtromuiL.Empty();
	m_szNPLienDongL.Empty();
	m_szNystamusL.Empty();
	m_szRomberL.Empty();
	m_szNPGotGoiL.Empty();
	m_szGoiL.Empty();
	m_szKham12.Empty();

}
int CHMS_OBANTParkinsonDongKinh2::SetMode(int nMode){
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
/*void CHMS_OBANTParkinsonDongKinh2::OnDangDiVaDungChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDangDiVaDungSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDangDiVaDungKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDangDiVaDungCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheTayChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheTaySetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheTayKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnTuTheTayCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheChanChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheChanSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTuTheChanKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnTuTheChanCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnTruongLucCoChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTruongLucCoSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTruongLucCoKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnTruongLucCoCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongBatThuongChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongBatThuongSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongBatThuongKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnVanDongBatThuongCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDHcunggayChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHcunggaySetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHcunggayKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDHcunggayCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKernigChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKernigSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKernigKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDHKernigCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKhacChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKhacSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHKhacKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDHKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnMoTaThemChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnMoTaThemSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnMoTaThemKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnMoTaThemCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacSauChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacSauSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacSauKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacSauCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacNongChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacNongSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacNongKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnKhamCamGiacNongCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnCoCungCoChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnCoCungCoSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnCoCungCoKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnCoCungCoCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongThuDongChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongThuDongSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnVanDongThuDongKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnVanDongThuDongCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnRoiLoanCamGiacDauCoVaiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRoiLoanCamGiacDauCoVaiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRoiLoanCamGiacDauCoVaiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnRoiLoanCamGiacDauCoVaiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCotSongChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCotSongSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCotSongKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDiemDauCotSongCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCanhCotSongChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCanhCotSongSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDiemDauCanhCotSongKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDiemDauCanhCotSongCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnLechVeoCotSongThatLungChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLechVeoCotSongThatLungSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLechVeoCotSongThatLungKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnLechVeoCotSongThatLungCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDHSchoberChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHSchoberSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDHSchoberKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDHSchoberCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangPhaiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangPhaiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangPhaiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnLThangPhaiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangTraiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangTraiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLThangTraiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnLThangTraiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoPhaiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoPhaiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoPhaiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnLCheoPhaiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoTraiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoTraiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnLCheoTraiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnLCheoTraiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCPhaiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCPhaiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCPhaiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNCCPhaiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCTraiChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCTraiSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNCCTraiKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNCCTraiCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnCacDauHieuKhacChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnCacDauHieuKhacSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnCacDauHieuKhacKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnCacDauHieuKhacCheckValue(){
	return 0;
} 
void CHMS_OBANTParkinsonDongKinh2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBANTParkinsonDongKinh2();
} 
void CHMS_OBANTParkinsonDongKinh2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTParkinsonDongKinh2.RPT")))
		return;
	GetDataToScreen();
	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("DangDiVaDung"),  m_szDangDiVaDung);
	rptHeader->SetValue(_T("TuTheTay"),  m_szTuTheTay);
	rptHeader->SetValue(_T("TuTheChan"),  m_szTuTheChan);
	rptHeader->SetValue(_T("TruongLucCo"),  m_szTruongLucCo);
	rptHeader->SetValue(_T("VanDongBatThuong"), m_szVanDongBatThuong);
	rptHeader->SetValue(_T("DHcunggay"),  m_szDHcunggay);
	rptHeader->SetValue(_T("DHKernig"), m_szDHKernig);
	rptHeader->SetValue(_T("DHKhac"),  m_szDHKhac);
	rptHeader->SetValue(_T("MoTaThem"),  m_szMoTaThem);
	rptHeader->SetValue(_T("KhamCamGiacSau"),  m_szKhamCamGiacSau);
	rptHeader->SetValue(_T("KhamCamGiacNong"),  m_szKhamCamGiacNong);
	rptHeader->SetValue(_T("CoCungCo"),  m_szCoCungCo);
	rptHeader->SetValue(_T("VanDongThuDong"),  m_szVanDongThuDong);
	rptHeader->SetValue(_T("RoiLoanCamGiacDauCoVai"), m_szRoiLoanCamGiacDauCoVai);
	rptHeader->SetValue(_T("DiemDauCotSong"),  m_szDiemDauCotSong);
	rptHeader->SetValue(_T("DiemDauCanhCotSong"),  m_szDiemDauCanhCotSong);
	rptHeader->SetValue(_T("LechVeoCotSongThatLung"),  m_szLechVeoCotSongThatLung);
	rptHeader->SetValue(_T("DHSchober"),  m_szDHSchober);
	rptHeader->SetValue(_T("LThangPhai"),  m_szLThangPhai);
	rptHeader->SetValue(_T("LThangTrai"),  m_szLThangTrai);
	rptHeader->SetValue(_T("LCheoPhai"),  m_szLCheoPhai);
	rptHeader->SetValue(_T("LCheoTrai"),  m_szLCheoTrai);
	rptHeader->SetValue(_T("NCCPhai"),  m_szNCCPhai);
	rptHeader->SetValue(_T("NCCTrai"), m_szNCCTrai);
	rptHeader->SetValue(_T("CacDauHieuKhac"),  m_szCacDauHieuKhac);
	rptHeader->SetValue(_T("NhiDauR"),  m_szNhiDauR);
	rptHeader->SetValue(_T("NhiDauL"),  m_szNhiDauL);
	rptHeader->SetValue(_T("TamDauR"),  m_szTamDauR);
	rptHeader->SetValue(_T("TamDauL"),  m_szTamDauL);
	rptHeader->SetValue(_T("GoiR"),  m_szGoiR);
	rptHeader->SetValue(_T("GotR"),  m_szGotR);
	rptHeader->SetValue(_T("GOTL"),  m_szGOTL);
	rptHeader->SetValue(_T("DaBungTrenR"),  m_szDaBungTrenR);
	rptHeader->SetValue(_T("DaBungTrenL"),  m_szDaBungTrenL);
	rptHeader->SetValue(_T("BungGiuaR"),  m_szBungGiuaR);
	rptHeader->SetValue(_T("BungGiuaL"),  m_szBungGiuaL);
	rptHeader->SetValue(_T("DaBungDuoiR"),  m_szDaBungDuoiR);
	rptHeader->SetValue(_T("DaBungDuoiL"), m_szDaBungDuoiL);
	rptHeader->SetValue(_T("BiuDuiR"),  m_szBiuDuiR);
	rptHeader->SetValue(_T("BiuDuiL"),  m_szBiuDuiL);
	rptHeader->SetValue(_T("HTR"),  m_szHTR);
	rptHeader->SetValue(_T("HTL"),  m_szHTL);
	rptHeader->SetValue(_T("BabinskiR"),  m_szBabinskiR);
	rptHeader->SetValue(_T("BabinskiL"),  m_szBabinskiL);
	rptHeader->SetValue(_T("ChiTrenR"),  m_szChiTrenR);
	rptHeader->SetValue(_T("ChiTrenL"),  m_szChiTrenL);
	rptHeader->SetValue(_T("ChiDuoiR"),  m_szChiDuoiR);
	rptHeader->SetValue(_T("ChiDuoiL"),  m_szChiDuoiL);
	rptHeader->SetValue(_T("NPtromuiR"),  m_szNPtromuiR);
	rptHeader->SetValue(_T("NPLienDongR"),  m_szNPLienDongR);
	rptHeader->SetValue(_T("NPGotGoiR"),  m_szNPGotGoiR);
	rptHeader->SetValue(_T("NystamusR"),  m_szNystamusR);
	rptHeader->SetValue(_T("RomberR"),  m_szRomberR);
	rptHeader->SetValue(_T("NPtromuiL"),  m_szNPtromuiL);
	rptHeader->SetValue(_T("NPLienDongL"),  m_szNPLienDongL);
	rptHeader->SetValue(_T("NystamusL"),  m_szNystamusL);
	rptHeader->SetValue(_T("RomberL"),  m_szRomberL);
	rptHeader->SetValue(_T("NPGotGoiL"),  m_szNPGotGoiL);
	rptHeader->SetValue(_T("GoiL"),  m_szGoiL);
	rptHeader->SetValue(_T("Kham12"),  m_szKham12);
	

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CHMS_OBANTParkinsonDongKinh2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMS_OBANTParkinsonDongKinh2();
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNhiDauRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNhiDauLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNhiDauLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnTamDauRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnTamDauLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnTamDauLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnGoiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnGotRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGotRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGotRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnGotRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnGOTLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGOTLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGOTLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnGOTLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDaBungTrenLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBungGiuaRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBungGiuaLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBungGiuaLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnDaBungDuoiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBiuDuiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBiuDuiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBiuDuiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnHTRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnHTRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnHTRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnHTRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnHTLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnHTLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnHTLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnHTLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBabinskiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnBabinskiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnBabinskiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnChiTrenRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiTrenLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnChiTrenLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnChiDuoiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnChiDuoiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnChiDuoiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPtromuiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPLienDongRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNystamusRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberRChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberRSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberRKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnRomberRCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPtromuiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPtromuiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPLienDongLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPLienDongLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNystamusLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNystamusLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnRomberLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnRomberLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnNPGotGoiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiLChange(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiLSetfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnGoiLKillfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnGoiLCheckValue(){
	return 0;
} 
/*void CHMS_OBANTParkinsonDongKinh2::OnKham12Change(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKham12Setfocus(){
	
} */
/*void CHMS_OBANTParkinsonDongKinh2::OnKham12Killfocus(){
	
} */
int CHMS_OBANTParkinsonDongKinh2::OnKham12CheckValue(){
	return 0;
} 
int CHMS_OBANTParkinsonDongKinh2::OnAddHMS_OBANTParkinsonDongKinh2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBANTParkinsonDongKinh2::OnEditHMS_OBANTParkinsonDongKinh2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBANTParkinsonDongKinh2::OnDeleteHMS_OBANTParkinsonDongKinh2(){
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
 		OnCancelHMS_OBANTParkinsonDongKinh2();
 	}
	return 0;
}
int CHMS_OBANTParkinsonDongKinh2::OnSaveHMS_OBANTParkinsonDongKinh2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BADT_PARKINSON2'"), pMF->m_nDocNo);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('BADT_PARKINSON2', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("Parkinson2"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
		SetMode(VM_VIEW);
	else
		return -1;
	return ret;
}
int CHMS_OBANTParkinsonDongKinh2::OnCancelHMS_OBANTParkinsonDongKinh2(){
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
int CHMS_OBANTParkinsonDongKinh2::OnHMS_OBANTParkinsonDongKinh2ListLoadData(){
	return 0;
}
