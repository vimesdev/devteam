#include "HMS_OBADTParkinsonDongKinh.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnHoVaTenChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnHoVaTenChange();
} */
/*static void _OnHoVaTenSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnHoVaTenSetfocus();} */ 
/*static void _OnHoVaTenKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnHoVaTenKillfocus();
} */
static int _OnHoVaTenCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnHoVaTenCheckValue();
} 
/*static void _OnNamSinhChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNamSinhChange();
} */
/*static void _OnNamSinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNamSinhSetfocus();} */ 
/*static void _OnNamSinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNamSinhKillfocus();
} */
static int _OnNamSinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNamSinhCheckValue();
} 
static void _OnNamSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnNamSelect();
}
static void _OnNuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnNuSelect();
}
/*static void _OnCapBacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnCapBacChange();
} */
/*static void _OnCapBacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnCapBacSetfocus();} */ 
/*static void _OnCapBacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnCapBacKillfocus();
} */
static int _OnCapBacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnCapBacCheckValue();
} 
/*static void _OnChucVuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChucVuChange();
} */
/*static void _OnChucVuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChucVuSetfocus();} */ 
/*static void _OnChucVuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChucVuKillfocus();
} */
static int _OnChucVuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChucVuCheckValue();
} 
/*static void _OnQueQuanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnQueQuanChange();
} */
/*static void _OnQueQuanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnQueQuanSetfocus();} */ 
/*static void _OnQueQuanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnQueQuanKillfocus();
} */
static int _OnQueQuanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnQueQuanCheckValue();
} 
/*static void _OnDonViChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnDonViChange();
} */
/*static void _OnDonViSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnDonViSetfocus();} */ 
/*static void _OnDonViKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnDonViKillfocus();
} */
static int _OnDonViCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnDonViCheckValue();
} 
/*static void _OnNgayMacBenhChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayMacBenhChange();
} */
/*static void _OnNgayMacBenhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayMacBenhSetfocus();} */ 
/*static void _OnNgayMacBenhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayMacBenhKillfocus();
} */
static int _OnNgayMacBenhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayMacBenhCheckValue();
} 
/*static void _OnNgayVaoVienChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayVaoVienChange();
} */
/*static void _OnNgayVaoVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayVaoVienSetfocus();} */ 
/*static void _OnNgayVaoVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayVaoVienKillfocus();
} */
static int _OnNgayVaoVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayVaoVienCheckValue();
} 
/*static void _OnVaoVienLanThuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnVaoVienLanThuChange();
} */
/*static void _OnVaoVienLanThuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnVaoVienLanThuSetfocus();} */ 
/*static void _OnVaoVienLanThuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnVaoVienLanThuKillfocus();
} */
static int _OnVaoVienLanThuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnVaoVienLanThuCheckValue();
} 
/*static void _OnBaoTinChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBaoTinChange();
} */
/*static void _OnBaoTinSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBaoTinSetfocus();} */ 
/*static void _OnBaoTinKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBaoTinKillfocus();
} */
static int _OnBaoTinCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBaoTinCheckValue();
} 
/*static void _OnChanDoanCuaDonViChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanCuaDonViChange();
} */
/*static void _OnChanDoanCuaDonViSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanCuaDonViSetfocus();} */ 
/*static void _OnChanDoanCuaDonViKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanCuaDonViKillfocus();
} */
static int _OnChanDoanCuaDonViCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanCuaDonViCheckValue();
} 
/*static void _OnChanDoanKhoaKBChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKBChange();
} */
/*static void _OnChanDoanKhoaKBSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKBSetfocus();} */ 
/*static void _OnChanDoanKhoaKBKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKBKillfocus();
} */
static int _OnChanDoanKhoaKBCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKBCheckValue();
} 
/*static void _OnChanDoanKhoaKB2ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKB2Change();
} */
/*static void _OnChanDoanKhoaKB2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKB2Setfocus();} */ 
/*static void _OnChanDoanKhoaKB2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKB2Killfocus();
} */
static int _OnChanDoanKhoaKB2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanKhoaKB2CheckValue();
} 
/*static void _OnChanDoanSoBoChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanSoBoChange();
} */
/*static void _OnChanDoanSoBoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanSoBoSetfocus();} */ 
/*static void _OnChanDoanSoBoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanSoBoKillfocus();
} */
static int _OnChanDoanSoBoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanSoBoCheckValue();
} 
/*static void _OnChanDoanPhanBietChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanPhanBietChange();
} */
/*static void _OnChanDoanPhanBietSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanPhanBietSetfocus();} */ 
/*static void _OnChanDoanPhanBietKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanPhanBietKillfocus();
} */
static int _OnChanDoanPhanBietCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanPhanBietCheckValue();
} 
/*static void _OnBSChanDoanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBSChanDoanChange();
} */
/*static void _OnBSChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBSChanDoanSetfocus();} */ 
/*static void _OnBSChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBSChanDoanKillfocus();
} */
static int _OnBSChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnBSChanDoanCheckValue();
} 
/*static void _OnNgayRaVienChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayRaVienChange();
} */
/*static void _OnNgayRaVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayRaVienSetfocus();} */ 
/*static void _OnNgayRaVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayRaVienKillfocus();
} */
static int _OnNgayRaVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnNgayRaVienCheckValue();
} 
/*static void _OnSoNgayDieuTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnSoNgayDieuTriChange();
} */
/*static void _OnSoNgayDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnSoNgayDieuTriSetfocus();} */ 
/*static void _OnSoNgayDieuTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnSoNgayDieuTriKillfocus();
} */
static int _OnSoNgayDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnSoNgayDieuTriCheckValue();
} 
static void _OnKhoiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnKhoiSelect();
}
static void _OnDoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnDoSelect();
}
static void _OnTuVongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnTuVongSelect();
}
/*static void _OnChanDoanRaVienChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanRaVienChange();
} */
/*static void _OnChanDoanRaVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanRaVienSetfocus();} */ 
/*static void _OnChanDoanRaVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanRaVienKillfocus();
} */
static int _OnChanDoanRaVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanRaVienCheckValue();
} 
/*static void _OnChanDoanTuVongChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanTuVongChange();
} */
/*static void _OnChanDoanTuVongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanTuVongSetfocus();} */ 
/*static void _OnChanDoanTuVongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanTuVongKillfocus();
} */
static int _OnChanDoanTuVongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh *)pWnd)->OnChanDoanTuVongCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh *pVw = (CHMS_OBADTParkinsonDongKinh *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh *pVw = (CHMS_OBADTParkinsonDongKinh *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh *pVw = (CHMS_OBADTParkinsonDongKinh *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBADTParkinsonDongKinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnAddHMS_OBADTParkinsonDongKinh();
} 
static int _OnEditHMS_OBADTParkinsonDongKinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnEditHMS_OBADTParkinsonDongKinh();
} 
static int _OnDeleteHMS_OBADTParkinsonDongKinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnDeleteHMS_OBADTParkinsonDongKinh();
} 
static int _OnSaveHMS_OBADTParkinsonDongKinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnSaveHMS_OBADTParkinsonDongKinh();
} 
static int _OnCancelHMS_OBADTParkinsonDongKinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh*)pWnd)->OnCancelHMS_OBADTParkinsonDongKinh();
} 
CHMS_OBADTParkinsonDongKinh::CHMS_OBADTParkinsonDongKinh(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szRecordType = _T("OBA_PARKINSON");
	m_szRecordGroup = _T("DONGKINH");
}
CHMS_OBADTParkinsonDongKinh::~CHMS_OBADTParkinsonDongKinh(){
}
void CHMS_OBADTParkinsonDongKinh::OnCreateComponents(){

	m_wndTitle.Create(this, _T("\x42\x1EC6NH \xC1N NGO\x1EA0I TR\xDA \x42\x1EC6NH P\x41RKINSON \x110\x1ED8NG KINH"), 120, 5, 680, 30);
	m_wndHoVaTenLabel.Create(this, _T("H\x1ECD v\xE0 t\xEAn"), 5, 35, 125, 60);
	m_wndHoVaTen.Create(this,130, 35, 510, 60); 
	m_wndNamSinhLabel.Create(this, _T("N\x103m sinh"), 515, 35, 595, 60);
	m_wndNamSinh.Create(this,600, 35, 670, 60); 
	m_wndNam.Create(this, _T("Nam"), 675, 35, 740, 60);
	m_wndNu.Create(this, _T("N\x1EEF"), 735, 35, 795, 60);
	m_wndCapBacLabel.Create(this, _T("\x43\x1EA5p \x62\x1EAD\x63"), 5, 65, 125, 90);
	m_wndCapBac.Create(this,130, 65, 510, 90); 
	m_wndChucVuLabel.Create(this, _T("\x43h\x1EE9\x63 v\x1EE5"), 515, 65, 595, 90);
	m_wndChucVu.Create(this,600, 65, 775, 90); 
	m_wndQueQuanLabel.Create(this, _T("Qu\xEA qu\xE1n"), 5, 95, 125, 120);
	m_wndQueQuan.Create(this,130, 95, 775, 120); 
	m_wndDonViLabel.Create(this, _T("\x110\x1A1n v\x1ECB"), 5, 125, 125, 150);
	m_wndDonVi.Create(this,130, 125, 775, 150); 
	m_wndNgayMacBenhLabel.Create(this, _T("Ng\xE0y m\x1EAF\x63 \x62\x1EC7nh"), 5, 155, 125, 180);
	m_wndNgayMacBenh.Create(this,130, 155, 230, 180); 
	m_wndNgayVaoVienLabel.Create(this, _T("Ng\xE0y v\xE0o vi\x1EC7n"), 235, 155, 335, 180);
	m_wndNgayVaoVien.Create(this,340, 155, 440, 180); 
	m_wndVaoVienLanThuLabel.Create(this, _T("V\xE0o vi\x1EC7n l\x1EA7n th\x1EE9"), 444, 155, 594, 180);
	m_wndVaoVienLanThu.Create(this,599, 155, 775, 180); 
	m_wndBaoTinLabel.Create(this, _T("Khi \x63\x1EA7n \x62\xE1o tin \x63ho \x61i, \x111\x1ECB\x61 \x63h\x1EC9"), 5, 185, 210, 210);
	m_wndBaoTin.Create(this,215, 185, 775, 210); 
	m_wndChanDoanCuaDonViLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n \x63\x1EE7\x61 \x111\x1A1n v\x1ECB"), 5, 215, 210, 240);
	m_wndChanDoanCuaDonVi.Create(this,215, 215, 775, 265); 
	m_wndChanDoanKhoaKBLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n kho\x61 kh\xE1m \x62\x1EC7nh"), 5, 270, 210, 295);
	m_wndChanDoanKhoaKB.Create(this,215, 270, 775, 320); 
	m_wndChanDoanKhoaKB2Label.Create(this, _T("\x43h\x1EA9n \x111o\xE1n kho\x61 kh\xE1m \x62\x1EC7nh"), 5, 325, 210, 350);
	m_wndChanDoanKhoaKB2.Create(this,215, 325, 775, 375); 
	m_wndChanDoanCuaKhoa.Create(this, _T("\x43h\x1EA9n \x111o\xE1n \x63\x1EE7\x61 kho\x61"), 5, 380, 210, 405);
	m_wndChanDoanSoBoLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n s\x1A1 \x62\x1ED9"), 5, 410, 125, 435);
	m_wndChanDoanSoBo.Create(this,130, 410, 605, 460); 
	m_wndChanDoanPhanBietLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n ph\xE2n \x62i\x1EC7t"), 5, 465, 125, 490);
	m_wndChanDoanPhanBiet.Create(this,130, 465, 605, 515); 
	m_wndBSChanDoanLabel.Create(this, _T("\x42S \x63h\x1EA9n \x111o\xE1n"), 610, 380, 795, 405);
	m_wndBSChanDoan.Create(this,610, 410, 775, 515); 
	m_wndNgayRaVienLabel.Create(this, _T("Ng\xE0y r\x61 vi\x1EC7n"), 5, 520, 125, 545);
	m_wndNgayRaVien.Create(this,130, 520, 230, 545); 
	m_wndSoNgayDieuTriLabel.Create(this, _T("S\x1ED1 ng\xE0y \x111i\x1EC1u tr\x1ECB"), 235, 520, 355, 545);
	m_wndSoNgayDieuTri.Create(this,360, 520, 440, 545); 
	m_wndKetQuaDieuTri.Create(this, _T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB"), 5, 550, 125, 575);
	m_wndKhoi.Create(this, _T("Kh\x1ECFi"), 130, 550, 230, 575);
	m_wndDo.Create(this, _T("\x110\x1EE1"), 235, 550, 335, 575);
	m_wndTuVong.Create(this, _T("T\x1EED vong"), 340, 550, 440, 575);
	m_wndChanDoanRaVienLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n r\x61 vi\x1EC7n"), 5, 580, 125, 605);
	m_wndChanDoanRaVien.Create(this,130, 580, 775, 605); 
	m_wndChanDoanTuVongLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n t\x1EED vong"), 5, 610, 125, 635);
	m_wndChanDoanTuVong.Create(this,130, 610, 775, 635); 
	
	
	

}
void CHMS_OBADTParkinsonDongKinh::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndHoVaTen.SetLimitText(35);
	m_wndHoVaTen.SetCheckValue(true);
	m_wndNamSinh.SetLimitText(16);
	m_wndNamSinh.SetCheckValue(true);
	m_wndCapBac.SetLimitText(35);
	m_wndCapBac.SetCheckValue(true);
	m_wndChucVu.SetLimitText(35);
	m_wndChucVu.SetCheckValue(true);
	m_wndQueQuan.SetLimitText(35);
	m_wndQueQuan.SetCheckValue(true);
	m_wndDonVi.SetLimitText(35);
	m_wndDonVi.SetCheckValue(true);
	m_wndNgayMacBenh.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayMacBenh.SetCheckValue(true);
	m_wndNgayVaoVien.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayVaoVien.SetCheckValue(true);
	m_wndVaoVienLanThu.SetLimitText(16);
	m_wndVaoVienLanThu.SetCheckValue(true);
	m_wndBaoTin.SetLimitText(35);
	m_wndBaoTin.SetCheckValue(true);
	m_wndChanDoanCuaDonVi.SetLimitText(35);
	m_wndChanDoanCuaDonVi.SetCheckValue(true);
	m_wndChanDoanKhoaKB.SetLimitText(35);
	m_wndChanDoanKhoaKB.SetCheckValue(true);
	m_wndChanDoanKhoaKB2.SetLimitText(35);
	m_wndChanDoanKhoaKB2.SetCheckValue(true);
	m_wndChanDoanSoBo.SetLimitText(35);
	m_wndChanDoanSoBo.SetCheckValue(true);
	m_wndChanDoanPhanBiet.SetLimitText(35);
	m_wndChanDoanPhanBiet.SetCheckValue(true);
	m_wndBSChanDoan.SetLimitText(35);
	m_wndBSChanDoan.SetCheckValue(true);
	m_wndNgayRaVien.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayRaVien.SetCheckValue(true);
	m_wndSoNgayDieuTri.SetLimitText(16);
	m_wndSoNgayDieuTri.SetCheckValue(true);
	m_wndChanDoanRaVien.SetLimitText(35);
	m_wndChanDoanRaVien.SetCheckValue(true);
	m_wndChanDoanTuVong.SetLimitText(35);
	m_wndChanDoanTuVong.SetCheckValue(true);*/

}
void CHMS_OBADTParkinsonDongKinh::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndHoVaTen.SetEvent(WE_CHANGE, _OnHoVaTenChangeFnc);
	//m_wndHoVaTen.SetEvent(WE_SETFOCUS, _OnHoVaTenSetfocusFnc);
	//m_wndHoVaTen.SetEvent(WE_KILLFOCUS, _OnHoVaTenKillfocusFnc);
	m_wndHoVaTen.SetEvent(WE_CHECKVALUE, _OnHoVaTenCheckValueFnc);
	//m_wndNamSinh.SetEvent(WE_CHANGE, _OnNamSinhChangeFnc);
	//m_wndNamSinh.SetEvent(WE_SETFOCUS, _OnNamSinhSetfocusFnc);
	//m_wndNamSinh.SetEvent(WE_KILLFOCUS, _OnNamSinhKillfocusFnc);
	m_wndNamSinh.SetEvent(WE_CHECKVALUE, _OnNamSinhCheckValueFnc);
	m_wndNam.SetEvent(WE_CLICK, _OnNamSelectFnc);
	m_wndNu.SetEvent(WE_CLICK, _OnNuSelectFnc);
	//m_wndCapBac.SetEvent(WE_CHANGE, _OnCapBacChangeFnc);
	//m_wndCapBac.SetEvent(WE_SETFOCUS, _OnCapBacSetfocusFnc);
	//m_wndCapBac.SetEvent(WE_KILLFOCUS, _OnCapBacKillfocusFnc);
	m_wndCapBac.SetEvent(WE_CHECKVALUE, _OnCapBacCheckValueFnc);
	//m_wndChucVu.SetEvent(WE_CHANGE, _OnChucVuChangeFnc);
	//m_wndChucVu.SetEvent(WE_SETFOCUS, _OnChucVuSetfocusFnc);
	//m_wndChucVu.SetEvent(WE_KILLFOCUS, _OnChucVuKillfocusFnc);
	m_wndChucVu.SetEvent(WE_CHECKVALUE, _OnChucVuCheckValueFnc);
	//m_wndQueQuan.SetEvent(WE_CHANGE, _OnQueQuanChangeFnc);
	//m_wndQueQuan.SetEvent(WE_SETFOCUS, _OnQueQuanSetfocusFnc);
	//m_wndQueQuan.SetEvent(WE_KILLFOCUS, _OnQueQuanKillfocusFnc);
	m_wndQueQuan.SetEvent(WE_CHECKVALUE, _OnQueQuanCheckValueFnc);
	//m_wndDonVi.SetEvent(WE_CHANGE, _OnDonViChangeFnc);
	//m_wndDonVi.SetEvent(WE_SETFOCUS, _OnDonViSetfocusFnc);
	//m_wndDonVi.SetEvent(WE_KILLFOCUS, _OnDonViKillfocusFnc);
	m_wndDonVi.SetEvent(WE_CHECKVALUE, _OnDonViCheckValueFnc);
	//m_wndNgayMacBenh.SetEvent(WE_CHANGE, _OnNgayMacBenhChangeFnc);
	//m_wndNgayMacBenh.SetEvent(WE_SETFOCUS, _OnNgayMacBenhSetfocusFnc);
	//m_wndNgayMacBenh.SetEvent(WE_KILLFOCUS, _OnNgayMacBenhKillfocusFnc);
	m_wndNgayMacBenh.SetEvent(WE_CHECKVALUE, _OnNgayMacBenhCheckValueFnc);
	//m_wndNgayVaoVien.SetEvent(WE_CHANGE, _OnNgayVaoVienChangeFnc);
	//m_wndNgayVaoVien.SetEvent(WE_SETFOCUS, _OnNgayVaoVienSetfocusFnc);
	//m_wndNgayVaoVien.SetEvent(WE_KILLFOCUS, _OnNgayVaoVienKillfocusFnc);
	m_wndNgayVaoVien.SetEvent(WE_CHECKVALUE, _OnNgayVaoVienCheckValueFnc);
	//m_wndVaoVienLanThu.SetEvent(WE_CHANGE, _OnVaoVienLanThuChangeFnc);
	//m_wndVaoVienLanThu.SetEvent(WE_SETFOCUS, _OnVaoVienLanThuSetfocusFnc);
	//m_wndVaoVienLanThu.SetEvent(WE_KILLFOCUS, _OnVaoVienLanThuKillfocusFnc);
	m_wndVaoVienLanThu.SetEvent(WE_CHECKVALUE, _OnVaoVienLanThuCheckValueFnc);
	//m_wndBaoTin.SetEvent(WE_CHANGE, _OnBaoTinChangeFnc);
	//m_wndBaoTin.SetEvent(WE_SETFOCUS, _OnBaoTinSetfocusFnc);
	//m_wndBaoTin.SetEvent(WE_KILLFOCUS, _OnBaoTinKillfocusFnc);
	m_wndBaoTin.SetEvent(WE_CHECKVALUE, _OnBaoTinCheckValueFnc);
	//m_wndChanDoanCuaDonVi.SetEvent(WE_CHANGE, _OnChanDoanCuaDonViChangeFnc);
	//m_wndChanDoanCuaDonVi.SetEvent(WE_SETFOCUS, _OnChanDoanCuaDonViSetfocusFnc);
	//m_wndChanDoanCuaDonVi.SetEvent(WE_KILLFOCUS, _OnChanDoanCuaDonViKillfocusFnc);
	m_wndChanDoanCuaDonVi.SetEvent(WE_CHECKVALUE, _OnChanDoanCuaDonViCheckValueFnc);
	//m_wndChanDoanKhoaKB.SetEvent(WE_CHANGE, _OnChanDoanKhoaKBChangeFnc);
	//m_wndChanDoanKhoaKB.SetEvent(WE_SETFOCUS, _OnChanDoanKhoaKBSetfocusFnc);
	//m_wndChanDoanKhoaKB.SetEvent(WE_KILLFOCUS, _OnChanDoanKhoaKBKillfocusFnc);
	m_wndChanDoanKhoaKB.SetEvent(WE_CHECKVALUE, _OnChanDoanKhoaKBCheckValueFnc);
	//m_wndChanDoanKhoaKB2.SetEvent(WE_CHANGE, _OnChanDoanKhoaKB2ChangeFnc);
	//m_wndChanDoanKhoaKB2.SetEvent(WE_SETFOCUS, _OnChanDoanKhoaKB2SetfocusFnc);
	//m_wndChanDoanKhoaKB2.SetEvent(WE_KILLFOCUS, _OnChanDoanKhoaKB2KillfocusFnc);
	m_wndChanDoanKhoaKB2.SetEvent(WE_CHECKVALUE, _OnChanDoanKhoaKB2CheckValueFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_CHANGE, _OnChanDoanSoBoChangeFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_SETFOCUS, _OnChanDoanSoBoSetfocusFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_KILLFOCUS, _OnChanDoanSoBoKillfocusFnc);
	m_wndChanDoanSoBo.SetEvent(WE_CHECKVALUE, _OnChanDoanSoBoCheckValueFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_CHANGE, _OnChanDoanPhanBietChangeFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_SETFOCUS, _OnChanDoanPhanBietSetfocusFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_KILLFOCUS, _OnChanDoanPhanBietKillfocusFnc);
	m_wndChanDoanPhanBiet.SetEvent(WE_CHECKVALUE, _OnChanDoanPhanBietCheckValueFnc);
	//m_wndBSChanDoan.SetEvent(WE_CHANGE, _OnBSChanDoanChangeFnc);
	//m_wndBSChanDoan.SetEvent(WE_SETFOCUS, _OnBSChanDoanSetfocusFnc);
	//m_wndBSChanDoan.SetEvent(WE_KILLFOCUS, _OnBSChanDoanKillfocusFnc);
	m_wndBSChanDoan.SetEvent(WE_CHECKVALUE, _OnBSChanDoanCheckValueFnc);
	//m_wndNgayRaVien.SetEvent(WE_CHANGE, _OnNgayRaVienChangeFnc);
	//m_wndNgayRaVien.SetEvent(WE_SETFOCUS, _OnNgayRaVienSetfocusFnc);
	//m_wndNgayRaVien.SetEvent(WE_KILLFOCUS, _OnNgayRaVienKillfocusFnc);
	m_wndNgayRaVien.SetEvent(WE_CHECKVALUE, _OnNgayRaVienCheckValueFnc);
	//m_wndSoNgayDieuTri.SetEvent(WE_CHANGE, _OnSoNgayDieuTriChangeFnc);
	//m_wndSoNgayDieuTri.SetEvent(WE_SETFOCUS, _OnSoNgayDieuTriSetfocusFnc);
	//m_wndSoNgayDieuTri.SetEvent(WE_KILLFOCUS, _OnSoNgayDieuTriKillfocusFnc);
	m_wndSoNgayDieuTri.SetEvent(WE_CHECKVALUE, _OnSoNgayDieuTriCheckValueFnc);
	m_wndKhoi.SetEvent(WE_CLICK, _OnKhoiSelectFnc);
	m_wndDo.SetEvent(WE_CLICK, _OnDoSelectFnc);
	m_wndTuVong.SetEvent(WE_CLICK, _OnTuVongSelectFnc);
	//m_wndChanDoanRaVien.SetEvent(WE_CHANGE, _OnChanDoanRaVienChangeFnc);
	//m_wndChanDoanRaVien.SetEvent(WE_SETFOCUS, _OnChanDoanRaVienSetfocusFnc);
	//m_wndChanDoanRaVien.SetEvent(WE_KILLFOCUS, _OnChanDoanRaVienKillfocusFnc);
	m_wndChanDoanRaVien.SetEvent(WE_CHECKVALUE, _OnChanDoanRaVienCheckValueFnc);
	//m_wndChanDoanTuVong.SetEvent(WE_CHANGE, _OnChanDoanTuVongChangeFnc);
	//m_wndChanDoanTuVong.SetEvent(WE_SETFOCUS, _OnChanDoanTuVongSetfocusFnc);
	//m_wndChanDoanTuVong.SetEvent(WE_KILLFOCUS, _OnChanDoanTuVongKillfocusFnc);
	m_wndChanDoanTuVong.SetEvent(WE_CHECKVALUE, _OnChanDoanTuVongCheckValueFnc);
	
	GetDataToScreen();
	m_wndHoVaTen.EnableWindow(FALSE);
	m_wndNam.EnableWindow(FALSE);
	m_wndNu.EnableWindow(FALSE);
	m_wndNamSinh.EnableWindow(FALSE);
	m_wndCapBac.EnableWindow(FALSE);
	m_wndChucVu.EnableWindow(FALSE);
	SetScrollSizes(MM_TEXT, CSize(700, 700));

}
void CHMS_OBADTParkinsonDongKinh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndHoVaTen.GetDlgCtrlID(), m_szHoVaTen);
	DDX_Text(pDX, m_wndNamSinh.GetDlgCtrlID(), m_nNamSinh);
	DDX_Check(pDX, m_wndNam.GetDlgCtrlID(), m_bNam);
	DDX_Check(pDX, m_wndNu.GetDlgCtrlID(), m_bNu);
	DDX_Text(pDX, m_wndCapBac.GetDlgCtrlID(), m_szCapBac);
	DDX_Text(pDX, m_wndChucVu.GetDlgCtrlID(), m_szChucVu);
	DDX_Text(pDX, m_wndQueQuan.GetDlgCtrlID(), m_szQueQuan);
	DDX_Text(pDX, m_wndDonVi.GetDlgCtrlID(), m_szDonVi);
	DDX_TextEx(pDX, m_wndNgayMacBenh.GetDlgCtrlID(), m_szNgayMacBenh);
	DDX_TextEx(pDX, m_wndNgayVaoVien.GetDlgCtrlID(), m_szNgayVaoVien);
	DDX_Text(pDX, m_wndVaoVienLanThu.GetDlgCtrlID(), m_nVaoVienLanThu);
	DDX_Text(pDX, m_wndBaoTin.GetDlgCtrlID(), m_szBaoTin);
	DDX_Text(pDX, m_wndChanDoanCuaDonVi.GetDlgCtrlID(), m_szChanDoanCuaDonVi);
	DDX_Text(pDX, m_wndChanDoanKhoaKB.GetDlgCtrlID(), m_szChanDoanKhoaKB);
	DDX_Text(pDX, m_wndChanDoanKhoaKB2.GetDlgCtrlID(), m_szChanDoanKhoaKB2);
	DDX_Text(pDX, m_wndChanDoanSoBo.GetDlgCtrlID(), m_szChanDoanSoBo);
	DDX_Text(pDX, m_wndChanDoanPhanBiet.GetDlgCtrlID(), m_szChanDoanPhanBiet);
	DDX_Text(pDX, m_wndBSChanDoan.GetDlgCtrlID(), m_szBSChanDoan);
	DDX_TextEx(pDX, m_wndNgayRaVien.GetDlgCtrlID(), m_szNgayRaVien);
	DDX_Text(pDX, m_wndSoNgayDieuTri.GetDlgCtrlID(), m_nSoNgayDieuTri);
	DDX_Check(pDX, m_wndKhoi.GetDlgCtrlID(), m_bKhoi);
	DDX_Check(pDX, m_wndDo.GetDlgCtrlID(), m_bDo);
	DDX_Check(pDX, m_wndTuVong.GetDlgCtrlID(), m_bTuVong);
	DDX_Text(pDX, m_wndChanDoanRaVien.GetDlgCtrlID(), m_szChanDoanRaVien);
	DDX_Text(pDX, m_wndChanDoanTuVong.GetDlgCtrlID(), m_szChanDoanTuVong);

}
void CHMS_OBADTParkinsonDongKinh::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("HoVaTen")] =  m_szHoVaTen;
	m_jData[_T("NamSinh")] =  m_nNamSinh;
	m_jData[_T("Nam")] =  m_bNam;
	m_jData[_T("Nu")] =  m_bNu;
	m_jData[_T("CapBac")] =  m_szCapBac;
	m_jData[_T("ChucVu")] =  m_szChucVu;
	m_jData[_T("QueQuan")] =  m_szQueQuan;
	m_jData[_T("DonVi")] =  m_szDonVi;
	m_jData[_T("NgayMacBenh")] =  m_szNgayMacBenh;
	m_jData[_T("NgayVaoVien")] =  m_szNgayVaoVien;
	m_jData[_T("VaoVienLanThu")] =  m_nVaoVienLanThu;
	m_jData[_T("BaoTin")] =  m_szBaoTin;
	m_jData[_T("ChanDoanCuaDonVi")] =  m_szChanDoanCuaDonVi;
	m_jData[_T("ChanDoanKhoaKB")] =  m_szChanDoanKhoaKB;
	m_jData[_T("ChanDoanKhoaKB2")] =  m_szChanDoanKhoaKB2;
	m_jData[_T("ChanDoanSoBo")] =  m_szChanDoanSoBo;
	m_jData[_T("ChanDoanPhanBiet")] =  m_szChanDoanPhanBiet;
	m_jData[_T("BSChanDoan")] =  m_szBSChanDoan;
	m_jData[_T("NgayRaVien")] =  m_szNgayRaVien;
	m_jData[_T("SoNgayDieuTri")] =  m_nSoNgayDieuTri;
	m_jData[_T("Khoi")] =  m_bKhoi;
	m_jData[_T("Do")] =  m_bDo;
	m_jData[_T("TuVong")] =  m_bTuVong;
	m_jData[_T("ChanDoanRaVien")] =  m_szChanDoanRaVien;
	m_jData[_T("ChanDoanTuVong")] =  m_szChanDoanTuVong;
	}
	else
	{
			
	m_jData[_T("HoVaTen")].GetValue(m_szHoVaTen);
	m_jData[_T("NamSinh")].GetValue(m_nNamSinh);
	m_jData[_T("Nam")].GetValue(m_bNam);
	m_jData[_T("Nu")].GetValue(m_bNu);
	m_jData[_T("CapBac")].GetValue(m_szCapBac);
	m_jData[_T("ChucVu")].GetValue(m_szChucVu);
	m_jData[_T("QueQuan")].GetValue(m_szQueQuan);
	m_jData[_T("DonVi")].GetValue(m_szDonVi);
	m_jData[_T("NgayMacBenh")].GetValue(m_szNgayMacBenh);
	m_jData[_T("NgayVaoVien")].GetValue(m_szNgayVaoVien);
	m_jData[_T("VaoVienLanThu")].GetValue(m_nVaoVienLanThu);
	m_jData[_T("BaoTin")].GetValue(m_szBaoTin);
	m_jData[_T("ChanDoanCuaDonVi")].GetValue(m_szChanDoanCuaDonVi);
	m_jData[_T("ChanDoanKhoaKB")].GetValue(m_szChanDoanKhoaKB);
	m_jData[_T("ChanDoanKhoaKB2")].GetValue(m_szChanDoanKhoaKB2);
	m_jData[_T("ChanDoanSoBo")].GetValue(m_szChanDoanSoBo);
	m_jData[_T("ChanDoanPhanBiet")].GetValue(m_szChanDoanPhanBiet);
	m_jData[_T("BSChanDoan")].GetValue(m_szBSChanDoan);
	m_jData[_T("NgayRaVien")].GetValue(m_szNgayRaVien);
	m_jData[_T("SoNgayDieuTri")].GetValue(m_nSoNgayDieuTri);
	m_jData[_T("Khoi")].GetValue(m_bKhoi);
	m_jData[_T("Do")].GetValue(m_bDo);
	m_jData[_T("TuVong")].GetValue(m_bTuVong);
	m_jData[_T("ChanDoanRaVien")].GetValue(m_szChanDoanRaVien);
	m_jData[_T("ChanDoanTuVong")].GetValue(m_szChanDoanTuVong);
	}

}
void CHMS_OBADTParkinsonDongKinh::GetDataToScreen(){

	GetData();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);
	
	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "), pMF->m_nDocNo, m_szRecordType,i);
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
void CHMS_OBADTParkinsonDongKinh::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBADTParkinsonDongKinh::SetDefaultValues(){

	m_szHoVaTen.Empty();
	m_nNamSinh=0;
	m_bNam=FALSE;
	m_bNu=FALSE;
	m_szCapBac.Empty();
	m_szChucVu.Empty();
	m_szQueQuan.Empty();
	m_szDonVi.Empty();
	m_szNgayMacBenh.Empty();
	m_szNgayVaoVien.Empty();
	m_nVaoVienLanThu=0;
	m_szBaoTin.Empty();
	m_szChanDoanCuaDonVi.Empty();
	m_szChanDoanKhoaKB.Empty();
	m_szChanDoanKhoaKB2.Empty();
	m_szChanDoanSoBo.Empty();
	m_szChanDoanPhanBiet.Empty();
	m_szBSChanDoan.Empty();
	m_szNgayRaVien.Empty();
	m_nSoNgayDieuTri=0;
	m_bKhoi=FALSE;
	m_bDo=FALSE;
	m_bTuVong=FALSE;
	m_szChanDoanRaVien.Empty();
	m_szChanDoanTuVong.Empty();

}
int CHMS_OBADTParkinsonDongKinh::SetMode(int nMode){
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
					_T("            || hp_firstname)             AS pname, ") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, hp_sex,") \
					_T("       Extract(year FROM hp_birthdate)   AS yob, ") \
					_T("       hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
					_T("       sys_sel_getname('sys_occupation', hp_occupation) as occupation, ") \
					_T("       sys_sel_getname('hms_rank', hp_rank) as rank, ") \
					_T("       hp_workplace ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("yob"), m_nNamSinh);
				rs.GetValue(_T("rank"), m_szCapBac);
				rs.GetValue(_T("occupation"), m_szChucVu);
				rs.GetValue(_T("address"), m_szQueQuan);
				rs.GetValue(_T("hp_workplace"), m_szDonVi);
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
			m_wndCapBac.EnableWindow(FALSE);
			m_wndChucVu.EnableWindow(FALSE);
			m_szNgayMacBenh = pMF->GetSysDate();
			m_szNgayVaoVien = pMF->GetSysDate();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, ") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, hp_sex,") \
					_T("       Extract(year FROM hp_birthdate)   AS yob, ") \
					_T("       hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
					_T("       sys_sel_getname('sys_occupation', hp_occupation) as occupation, ") \
					_T("       sys_sel_getname('hms_rank', hp_rank) as rank, ") \
					_T("       hp_workplace ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("yob"), m_nNamSinh);
				rs.GetValue(_T("rank"), m_szCapBac);
				rs.GetValue(_T("occupation"), m_szChucVu);
				rs.GetValue(_T("address"), m_szQueQuan);
				rs.GetValue(_T("hp_workplace"), m_szDonVi);
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
			m_wndCapBac.EnableWindow(FALSE);
			m_wndChucVu.EnableWindow(FALSE);
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
/*void CHMS_OBADTParkinsonDongKinh::OnHoVaTenChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnHoVaTenSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnHoVaTenKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnHoVaTenCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnNamSinhChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNamSinhSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNamSinhKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnNamSinhCheckValue(){
	return 0;
} 
	void CHMS_OBADTParkinsonDongKinh::OnNamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTParkinsonDongKinh::OnNuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTParkinsonDongKinh::OnCapBacChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnCapBacSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnCapBacKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnCapBacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChucVuChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChucVuSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChucVuKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChucVuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnQueQuanChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnQueQuanSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnQueQuanKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnQueQuanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnDonViChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnDonViSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnDonViKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnDonViCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnNgayMacBenhChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayMacBenhSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayMacBenhKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnNgayMacBenhCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnNgayVaoVienChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayVaoVienSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayVaoVienKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnNgayVaoVienCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnVaoVienLanThuChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnVaoVienLanThuSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnVaoVienLanThuKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnVaoVienLanThuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnBaoTinChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnBaoTinSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnBaoTinKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnBaoTinCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanCuaDonViChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanCuaDonViSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanCuaDonViKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanCuaDonViCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKBChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKBSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKBKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKBCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKB2Change(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKB2Setfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKB2Killfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanKhoaKB2CheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanSoBoChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanSoBoSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanSoBoKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanSoBoCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanPhanBietChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanPhanBietSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanPhanBietKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanPhanBietCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnBSChanDoanChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnBSChanDoanSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnBSChanDoanKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnBSChanDoanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnNgayRaVienChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayRaVienSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnNgayRaVienKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnNgayRaVienCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnSoNgayDieuTriChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnSoNgayDieuTriSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnSoNgayDieuTriKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnSoNgayDieuTriCheckValue(){
	return 0;
} 
	void CHMS_OBADTParkinsonDongKinh::OnKhoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTParkinsonDongKinh::OnDoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTParkinsonDongKinh::OnTuVongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanRaVienChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanRaVienSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanRaVienKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanRaVienCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanTuVongChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanTuVongSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh::OnChanDoanTuVongKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh::OnChanDoanTuVongCheckValue(){
	return 0;
} 
void CHMS_OBADTParkinsonDongKinh::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBADTParkinsonDongKinh();
} 
void CHMS_OBADTParkinsonDongKinh::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBADTParkinsonDongKinh.RPT"));
	return;

	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTParkinsonDongKinh.RPT")))
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
	
	rptHeader->SetValue(_T("HoVaTen"),  m_szHoVaTen);
	rptHeader->SetValue(_T("NamSinh"), m_nNamSinh);
	if(m_bNam)
		rptHeader->SetValue(_T("1"), _T("Y"));
	else
		rptHeader->SetValue(_T("2"), _T("Y"));
	rptHeader->SetValue(_T("CapBac"), m_szCapBac);
	rptHeader->SetValue(_T("ChucVu"),  m_szChucVu);
	rptHeader->SetValue(_T("QueQuan"),  m_szQueQuan);
	rptHeader->SetValue(_T("DonVi"), m_szDonVi);
	rptHeader->SetValue(_T("NgayMacBenh"), CDate::Convert(m_szNgayMacBenh, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("NgayVaoVien"),  CDate::Convert(m_szNgayVaoVien,yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("VaoVienLanThu"), m_nVaoVienLanThu);
	rptHeader->SetValue(_T("BaoTin"), m_szBaoTin);
	rptHeader->SetValue(_T("ChanDoanCuaDonVi"),  m_szChanDoanCuaDonVi);
	rptHeader->SetValue(_T("ChanDoanKhoaKB"),  m_szChanDoanKhoaKB);
	rptHeader->SetValue(_T("ChanDoanKhoaKB2"),  m_szChanDoanKhoaKB2);
	rptHeader->SetValue(_T("ChanDoanSoBo"), m_szChanDoanSoBo);
	rptHeader->SetValue(_T("ChanDoanPhanBiet"),  m_szChanDoanPhanBiet);
	rptHeader->SetValue(_T("BSChanDoan"),  m_szBSChanDoan);
	rptHeader->SetValue(_T("NgayRaVien"), m_szNgayRaVien);
	rptHeader->SetValue(_T("SoNgayDieuTri"),  m_nSoNgayDieuTri);
	if(m_bKhoi)
		rptHeader->SetValue(_T("3"),  _T("Y"));
	if(m_bDo)
		rptHeader->SetValue(_T("4"),  _T("Y"));
	if(m_bTuVong)
		rptHeader->SetValue(_T("5"),  _T("Y"));
	rptHeader->SetValue(_T("ChanDoanRaVien"),  m_szChanDoanRaVien);
	rptHeader->SetValue(_T("ChanDoanTuVong"),  m_szChanDoanTuVong);
	
	szSQL.Format(_T("select hop_fromdate, hop_todate, hop_recordno from hms_outpatient ") \
		_T(" where hop_docno = %ld and hop_recordtype = '%s'"), pMF->m_nDocNo, m_szRecordType);
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
bool CHMS_OBADTParkinsonDongKinh::OnUpdateSelect(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBADTParkinsonDongKinh();
	return true;
} 
int CHMS_OBADTParkinsonDongKinh::OnAddHMS_OBADTParkinsonDongKinh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBADTParkinsonDongKinh::OnEditHMS_OBADTParkinsonDongKinh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBADTParkinsonDongKinh::OnDeleteHMS_OBADTParkinsonDongKinh(){
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
 		OnCancelHMS_OBADTParkinsonDongKinh();
 	}
	return 0;
}
int CHMS_OBADTParkinsonDongKinh::OnSaveHMS_OBADTParkinsonDongKinh(){
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

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' "), pMF->m_nDocNo, m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("ParkinsonDK"), tmpStr);
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
int CHMS_OBADTParkinsonDongKinh::OnCancelHMS_OBADTParkinsonDongKinh(){
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
int CHMS_OBADTParkinsonDongKinh::OnHMS_OBADTParkinsonDongKinhListLoadData(){
	return 0;
}


void CHMS_OBADTParkinsonDongKinh::OnCancelSelect()
{
	OnCancelHMS_OBADTParkinsonDongKinh();
}