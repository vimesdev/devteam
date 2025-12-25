#include "HMS_OBADTParkinsonDongKinh1.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnLyDoVaoVienChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnLyDoVaoVienChange();
} */
/*static void _OnLyDoVaoVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnLyDoVaoVienSetfocus();} */ 
/*static void _OnLyDoVaoVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnLyDoVaoVienKillfocus();
} */
static int _OnLyDoVaoVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnLyDoVaoVienCheckValue();
} 
/*static void _OnBenhSuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBenhSuChange();
} */
/*static void _OnBenhSuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBenhSuSetfocus();} */ 
/*static void _OnBenhSuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBenhSuKillfocus();
} */
static int _OnBenhSuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBenhSuCheckValue();
} 
/*static void _OnBanThanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBanThanChange();
} */
/*static void _OnBanThanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBanThanSetfocus();} */ 
/*static void _OnBanThanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBanThanKillfocus();
} */
static int _OnBanThanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnBanThanCheckValue();
} 
/*static void _OnGiaDinhChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnGiaDinhChange();
} */
/*static void _OnGiaDinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnGiaDinhSetfocus();} */ 
/*static void _OnGiaDinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnGiaDinhKillfocus();
} */
static int _OnGiaDinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnGiaDinhCheckValue();
} 
/*static void _OnToanThanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnToanThanChange();
} */
/*static void _OnToanThanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnToanThanSetfocus();} */ 
/*static void _OnToanThanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnToanThanKillfocus();
} */
static int _OnToanThanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnToanThanCheckValue();
} 
/*static void _OnThanTietNieuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnThanTietNieuChange();
} */
/*static void _OnThanTietNieuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnThanTietNieuSetfocus();} */ 
/*static void _OnThanTietNieuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnThanTietNieuKillfocus();
} */
static int _OnThanTietNieuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnThanTietNieuCheckValue();
} 
/*static void _OnTuanHoanChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTuanHoanChange();
} */
/*static void _OnTuanHoanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTuanHoanSetfocus();} */ 
/*static void _OnTuanHoanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTuanHoanKillfocus();
} */
static int _OnTuanHoanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTuanHoanCheckValue();
} 
/*static void _OnHoHapChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnHoHapChange();
} */
/*static void _OnHoHapSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnHoHapSetfocus();} */ 
/*static void _OnHoHapKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnHoHapKillfocus();
} */
static int _OnHoHapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnHoHapCheckValue();
} 
/*static void _OnTieuHoaChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTieuHoaChange();
} */
/*static void _OnTieuHoaSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTieuHoaSetfocus();} */ 
/*static void _OnTieuHoaKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTieuHoaKillfocus();
} */
static int _OnTieuHoaCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTieuHoaCheckValue();
} 
/*static void _OnTamThanKinhChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTamThanKinhChange();
} */
/*static void _OnTamThanKinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTamThanKinhSetfocus();} */ 
/*static void _OnTamThanKinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTamThanKinhKillfocus();
} */
static int _OnTamThanKinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTamThanKinhCheckValue();
} 
/*static void _OnChuyenKhoacKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChuyenKhoacKhacChange();
} */
/*static void _OnChuyenKhoacKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChuyenKhoacKhacSetfocus();} */ 
/*static void _OnChuyenKhoacKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChuyenKhoacKhacKillfocus();
} */
static int _OnChuyenKhoacKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChuyenKhoacKhacCheckValue();
} 
/*static void _OnCacXNDaLamChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnCacXNDaLamChange();
} */
/*static void _OnCacXNDaLamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnCacXNDaLamSetfocus();} */ 
/*static void _OnCacXNDaLamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnCacXNDaLamKillfocus();
} */
static int _OnCacXNDaLamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnCacXNDaLamCheckValue();
} 
/*static void _OnChanDoanSoBoChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanSoBoChange();
} */
/*static void _OnChanDoanSoBoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanSoBoSetfocus();} */ 
/*static void _OnChanDoanSoBoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanSoBoKillfocus();
} */
static int _OnChanDoanSoBoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanSoBoCheckValue();
} 
/*static void _OnChanDoanPhanBietChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanPhanBietChange();
} */
/*static void _OnChanDoanPhanBietSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanPhanBietSetfocus();} */ 
/*static void _OnChanDoanPhanBietKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanPhanBietKillfocus();
} */
static int _OnChanDoanPhanBietCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanPhanBietCheckValue();
} 
/*static void _OnChanDoanQuyetDinhChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanQuyetDinhChange();
} */
/*static void _OnChanDoanQuyetDinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanQuyetDinhSetfocus();} */ 
/*static void _OnChanDoanQuyetDinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanQuyetDinhKillfocus();
} */
static int _OnChanDoanQuyetDinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnChanDoanQuyetDinhCheckValue();
} 
/*static void _OnXNThuongQuyChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnXNThuongQuyChange();
} */
/*static void _OnXNThuongQuySetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnXNThuongQuySetfocus();} */ 
/*static void _OnXNThuongQuyKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnXNThuongQuyKillfocus();
} */
static int _OnXNThuongQuyCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnXNThuongQuyCheckValue();
} 
/*static void _OnKetHoachDieuTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnKetHoachDieuTriChange();
} */
/*static void _OnKetHoachDieuTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnKetHoachDieuTriSetfocus();} */ 
/*static void _OnKetHoachDieuTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnKetHoachDieuTriKillfocus();
} */
static int _OnKetHoachDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnKetHoachDieuTriCheckValue();
} 
/*static void _OnTienLuongChangeFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTienLuongChange();
} */
/*static void _OnTienLuongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTienLuongSetfocus();} */ 
/*static void _OnTienLuongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTienLuongKillfocus();
} */
static int _OnTienLuongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTParkinsonDongKinh1 *)pWnd)->OnTienLuongCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh1 *pVw = (CHMS_OBADTParkinsonDongKinh1 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh1 *pVw = (CHMS_OBADTParkinsonDongKinh1 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBADTParkinsonDongKinh1 *pVw = (CHMS_OBADTParkinsonDongKinh1 *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBADTParkinsonDongKinh1Fnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh1*)pWnd)->OnAddHMS_OBADTParkinsonDongKinh1();
} 
static int _OnEditHMS_OBADTParkinsonDongKinh1Fnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh1*)pWnd)->OnEditHMS_OBADTParkinsonDongKinh1();
} 
static int _OnDeleteHMS_OBADTParkinsonDongKinh1Fnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh1*)pWnd)->OnDeleteHMS_OBADTParkinsonDongKinh1();
} 
static int _OnSaveHMS_OBADTParkinsonDongKinh1Fnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh1*)pWnd)->OnSaveHMS_OBADTParkinsonDongKinh1();
} 
static int _OnCancelHMS_OBADTParkinsonDongKinh1Fnc(CWnd *pWnd){
	 return ((CHMS_OBADTParkinsonDongKinh1*)pWnd)->OnCancelHMS_OBADTParkinsonDongKinh1();
} 
CHMS_OBADTParkinsonDongKinh1::CHMS_OBADTParkinsonDongKinh1(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szRecordType = _T("OBA_PARKINSON");
	m_szRecordGroup = _T("DONGKINH1");
}
CHMS_OBADTParkinsonDongKinh1::~CHMS_OBADTParkinsonDongKinh1(){
}
void CHMS_OBADTParkinsonDongKinh1::OnCreateComponents(){

	m_wndTitle1.Create(this, _T("I. PH\x1EA6N H\x1ECEI \x42\x1EC6NH"), 141, 5, 619, 30);
	m_wndLyDoVaoVienLabel.Create(this, _T("1- L\xFD \x64o v\xE0o vi\x1EC7n"), 5, 35, 125, 60);
	m_wndLyDoVaoVien.Create(this,130, 35, 775, 60); 
	m_wndBenhSuLabel.Create(this, _T("2- \x42\x1EC7nh s\x1EED: (Kh\x1EDFi ph\xE1t, \x62i\x1EC3u \x64i\x1EC5n, \x63h\x1EA9n \x111o\xE1n, \x111i\x1EC1u tr\x1ECB \x63\x1EE7\x61 tuy\x1EBFn tr\x1B0\x1EDB\x63...)"), 5, 65, 794, 90);
	m_wndBenhSu.Create(this,130, 95, 775, 120); 
	m_wndTienSu.Create(this, _T("3- Ti\x1EC1n s\x1EED"), 5, 125, 125, 150);
	m_wndBanThanLabel.Create(this, _T("-\x42\x1EA3n th\xE2n :"), 5, 155, 125, 180);
	m_wndBanThan.Create(this,130, 155, 775, 180); 
	m_wndGiaDinhLabel.Create(this, _T("-Gi\x61 \x111\xECnh :"), 5, 185, 125, 210);
	m_wndGiaDinh.Create(this,130, 185, 775, 210); 
	m_wndTitle2.Create(this, _T("II. PH\x1EA6N KH\xC1M \x42\x1EC6NH"), 140, 216, 618, 241);
	m_wndToanThanLabel.Create(this, _T("1-To\xE0n th\xE2n"), 5, 245, 125, 270);
	m_wndToanThan.Create(this,130, 245, 775, 270); 
	m_wndThanTietNieuLabel.Create(this, _T("2-Th\x1EADn ti\x1EBFt ni\x1EC7u"), 5, 275, 125, 300);
	m_wndThanTietNieu.Create(this,130, 275, 775, 300); 
	m_wndTuanHoanLabel.Create(this, _T("3-Tu\x1EA7n Ho\xE0n"), 5, 305, 125, 330);
	m_wndTuanHoan.Create(this,130, 305, 775, 330); 
	m_wndHoHapLabel.Create(this, _T("4-H\xF4 h\x1EA5p"), 5, 335, 125, 360);
	m_wndHoHap.Create(this,130, 335, 775, 360); 
	m_wndTieuHoaLabel.Create(this, _T("5-Ti\xEAu h\xF3\x61"), 5, 365, 125, 390);
	m_wndTieuHoa.Create(this,130, 365, 775, 390); 
	m_wndTamThanKinhLabel.Create(this, _T("6-T\xE2m th\x1EA7n kinh"), 5, 395, 125, 420);
	m_wndTamThanKinh.Create(this,130, 395, 775, 420); 
	m_wndChuyenKhoacKhacLabel.Create(this, _T("7-\x43huy\xEAn kho\x61 kh\xE1\x63"), 5, 425, 125, 450);
	m_wndChuyenKhoacKhac.Create(this,130, 425, 775, 450); 
	m_wndCacXNDaLamLabel.Create(this, _T("8-\x43\xE1\x63 \x58N \x111\xE3 l\xE0m"), 5, 455, 125, 480);
	m_wndCacXNDaLam.Create(this,130, 455, 775, 480); 
	m_wndChanDoan.Create(this, _T("9-\x43h\x1EA9n \x111o\xE1n"), 5, 485, 125, 510);
	m_wndChanDoanSoBoLabel.Create(this, _T("-\x43h\x1EA9n \x111o\xE1n s\x1A1 \x62\x1ED9"), 5, 515, 125, 540);
	m_wndChanDoanSoBo.Create(this,130, 515, 775, 540); 
	m_wndChanDoanPhanBietLabel.Create(this, _T("-\x43h\x1EA9n \x111o\xE1n ph\xE2n \x62i\x1EC7t"), 5, 545, 125, 570);
	m_wndChanDoanPhanBiet.Create(this,130, 545, 775, 570); 
	m_wndChanDoanQuyetDinhLabel.Create(this, _T("-\x43h\x1EA9n \x111o\xE1n quy\x1EBFt \x111\x1ECBnh"), 5, 575, 125, 600);
	m_wndChanDoanQuyetDinh.Create(this,130, 575, 775, 600); 
	m_wndKeHoachXN.Create(this, _T("10-K\x1EBF ho\x1EA1\x63h \x78\xE9t nghi\x1EC7m"), 5, 605, 125, 630);
	m_wndXNThuongQuyLabel.Create(this, _T("-XN th\x1B0\x1EDDng quy"), 5, 635, 125, 660);
	m_wndXNThuongQuy.Create(this,130, 635, 775, 660); 
	m_wndKetHoachDieuTriLabel.Create(this, _T("11 K\x1EBF ho\x1EA1\x63h \x111i\x1EC1u tr\x1ECB"), 5, 665, 125, 690);
	m_wndKetHoachDieuTri.Create(this,130, 665, 775, 690); 
	m_wndTienLuongLabel.Create(this, _T("12-Ti\x1EC1n l\x1B0\x1A1ng"), 5, 695, 125, 720);
	m_wndTienLuong.Create(this,130, 695, 775, 720); 

	
	

}
void CHMS_OBADTParkinsonDongKinh1::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndLyDoVaoVien.SetLimitText(35);
	m_wndLyDoVaoVien.SetCheckValue(true);
	m_wndBenhSu.SetLimitText(35);
	m_wndBenhSu.SetCheckValue(true);
	m_wndBanThan.SetLimitText(35);
	m_wndBanThan.SetCheckValue(true);
	m_wndGiaDinh.SetLimitText(35);
	m_wndGiaDinh.SetCheckValue(true);
	m_wndToanThan.SetLimitText(35);
	m_wndToanThan.SetCheckValue(true);
	m_wndThanTietNieu.SetLimitText(35);
	m_wndThanTietNieu.SetCheckValue(true);
	m_wndTuanHoan.SetLimitText(35);
	m_wndTuanHoan.SetCheckValue(true);
	m_wndHoHap.SetLimitText(35);
	m_wndHoHap.SetCheckValue(true);
	m_wndTieuHoa.SetLimitText(35);
	m_wndTieuHoa.SetCheckValue(true);
	m_wndTamThanKinh.SetLimitText(35);
	m_wndTamThanKinh.SetCheckValue(true);
	m_wndChuyenKhoacKhac.SetLimitText(35);
	m_wndChuyenKhoacKhac.SetCheckValue(true);
	m_wndCacXNDaLam.SetLimitText(35);
	m_wndCacXNDaLam.SetCheckValue(true);
	m_wndChanDoanSoBo.SetLimitText(35);
	m_wndChanDoanSoBo.SetCheckValue(true);
	m_wndChanDoanPhanBiet.SetLimitText(35);
	m_wndChanDoanPhanBiet.SetCheckValue(true);
	m_wndChanDoanQuyetDinh.SetLimitText(35);
	m_wndChanDoanQuyetDinh.SetCheckValue(true);
	m_wndXNThuongQuy.SetLimitText(35);
	m_wndXNThuongQuy.SetCheckValue(true);
	m_wndKetHoachDieuTri.SetLimitText(35);
	m_wndKetHoachDieuTri.SetCheckValue(true);
	m_wndTienLuong.SetLimitText(35);
	m_wndTienLuong.SetCheckValue(true);*/

}
void CHMS_OBADTParkinsonDongKinh1::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndLyDoVaoVien.SetEvent(WE_CHANGE, _OnLyDoVaoVienChangeFnc);
	//m_wndLyDoVaoVien.SetEvent(WE_SETFOCUS, _OnLyDoVaoVienSetfocusFnc);
	//m_wndLyDoVaoVien.SetEvent(WE_KILLFOCUS, _OnLyDoVaoVienKillfocusFnc);
	m_wndLyDoVaoVien.SetEvent(WE_CHECKVALUE, _OnLyDoVaoVienCheckValueFnc);
	//m_wndBenhSu.SetEvent(WE_CHANGE, _OnBenhSuChangeFnc);
	//m_wndBenhSu.SetEvent(WE_SETFOCUS, _OnBenhSuSetfocusFnc);
	//m_wndBenhSu.SetEvent(WE_KILLFOCUS, _OnBenhSuKillfocusFnc);
	m_wndBenhSu.SetEvent(WE_CHECKVALUE, _OnBenhSuCheckValueFnc);
	//m_wndBanThan.SetEvent(WE_CHANGE, _OnBanThanChangeFnc);
	//m_wndBanThan.SetEvent(WE_SETFOCUS, _OnBanThanSetfocusFnc);
	//m_wndBanThan.SetEvent(WE_KILLFOCUS, _OnBanThanKillfocusFnc);
	m_wndBanThan.SetEvent(WE_CHECKVALUE, _OnBanThanCheckValueFnc);
	//m_wndGiaDinh.SetEvent(WE_CHANGE, _OnGiaDinhChangeFnc);
	//m_wndGiaDinh.SetEvent(WE_SETFOCUS, _OnGiaDinhSetfocusFnc);
	//m_wndGiaDinh.SetEvent(WE_KILLFOCUS, _OnGiaDinhKillfocusFnc);
	m_wndGiaDinh.SetEvent(WE_CHECKVALUE, _OnGiaDinhCheckValueFnc);
	//m_wndToanThan.SetEvent(WE_CHANGE, _OnToanThanChangeFnc);
	//m_wndToanThan.SetEvent(WE_SETFOCUS, _OnToanThanSetfocusFnc);
	//m_wndToanThan.SetEvent(WE_KILLFOCUS, _OnToanThanKillfocusFnc);
	m_wndToanThan.SetEvent(WE_CHECKVALUE, _OnToanThanCheckValueFnc);
	//m_wndThanTietNieu.SetEvent(WE_CHANGE, _OnThanTietNieuChangeFnc);
	//m_wndThanTietNieu.SetEvent(WE_SETFOCUS, _OnThanTietNieuSetfocusFnc);
	//m_wndThanTietNieu.SetEvent(WE_KILLFOCUS, _OnThanTietNieuKillfocusFnc);
	m_wndThanTietNieu.SetEvent(WE_CHECKVALUE, _OnThanTietNieuCheckValueFnc);
	//m_wndTuanHoan.SetEvent(WE_CHANGE, _OnTuanHoanChangeFnc);
	//m_wndTuanHoan.SetEvent(WE_SETFOCUS, _OnTuanHoanSetfocusFnc);
	//m_wndTuanHoan.SetEvent(WE_KILLFOCUS, _OnTuanHoanKillfocusFnc);
	m_wndTuanHoan.SetEvent(WE_CHECKVALUE, _OnTuanHoanCheckValueFnc);
	//m_wndHoHap.SetEvent(WE_CHANGE, _OnHoHapChangeFnc);
	//m_wndHoHap.SetEvent(WE_SETFOCUS, _OnHoHapSetfocusFnc);
	//m_wndHoHap.SetEvent(WE_KILLFOCUS, _OnHoHapKillfocusFnc);
	m_wndHoHap.SetEvent(WE_CHECKVALUE, _OnHoHapCheckValueFnc);
	//m_wndTieuHoa.SetEvent(WE_CHANGE, _OnTieuHoaChangeFnc);
	//m_wndTieuHoa.SetEvent(WE_SETFOCUS, _OnTieuHoaSetfocusFnc);
	//m_wndTieuHoa.SetEvent(WE_KILLFOCUS, _OnTieuHoaKillfocusFnc);
	m_wndTieuHoa.SetEvent(WE_CHECKVALUE, _OnTieuHoaCheckValueFnc);
	//m_wndTamThanKinh.SetEvent(WE_CHANGE, _OnTamThanKinhChangeFnc);
	//m_wndTamThanKinh.SetEvent(WE_SETFOCUS, _OnTamThanKinhSetfocusFnc);
	//m_wndTamThanKinh.SetEvent(WE_KILLFOCUS, _OnTamThanKinhKillfocusFnc);
	m_wndTamThanKinh.SetEvent(WE_CHECKVALUE, _OnTamThanKinhCheckValueFnc);
	//m_wndChuyenKhoacKhac.SetEvent(WE_CHANGE, _OnChuyenKhoacKhacChangeFnc);
	//m_wndChuyenKhoacKhac.SetEvent(WE_SETFOCUS, _OnChuyenKhoacKhacSetfocusFnc);
	//m_wndChuyenKhoacKhac.SetEvent(WE_KILLFOCUS, _OnChuyenKhoacKhacKillfocusFnc);
	m_wndChuyenKhoacKhac.SetEvent(WE_CHECKVALUE, _OnChuyenKhoacKhacCheckValueFnc);
	//m_wndCacXNDaLam.SetEvent(WE_CHANGE, _OnCacXNDaLamChangeFnc);
	//m_wndCacXNDaLam.SetEvent(WE_SETFOCUS, _OnCacXNDaLamSetfocusFnc);
	//m_wndCacXNDaLam.SetEvent(WE_KILLFOCUS, _OnCacXNDaLamKillfocusFnc);
	m_wndCacXNDaLam.SetEvent(WE_CHECKVALUE, _OnCacXNDaLamCheckValueFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_CHANGE, _OnChanDoanSoBoChangeFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_SETFOCUS, _OnChanDoanSoBoSetfocusFnc);
	//m_wndChanDoanSoBo.SetEvent(WE_KILLFOCUS, _OnChanDoanSoBoKillfocusFnc);
	m_wndChanDoanSoBo.SetEvent(WE_CHECKVALUE, _OnChanDoanSoBoCheckValueFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_CHANGE, _OnChanDoanPhanBietChangeFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_SETFOCUS, _OnChanDoanPhanBietSetfocusFnc);
	//m_wndChanDoanPhanBiet.SetEvent(WE_KILLFOCUS, _OnChanDoanPhanBietKillfocusFnc);
	m_wndChanDoanPhanBiet.SetEvent(WE_CHECKVALUE, _OnChanDoanPhanBietCheckValueFnc);
	//m_wndChanDoanQuyetDinh.SetEvent(WE_CHANGE, _OnChanDoanQuyetDinhChangeFnc);
	//m_wndChanDoanQuyetDinh.SetEvent(WE_SETFOCUS, _OnChanDoanQuyetDinhSetfocusFnc);
	//m_wndChanDoanQuyetDinh.SetEvent(WE_KILLFOCUS, _OnChanDoanQuyetDinhKillfocusFnc);
	m_wndChanDoanQuyetDinh.SetEvent(WE_CHECKVALUE, _OnChanDoanQuyetDinhCheckValueFnc);
	//m_wndXNThuongQuy.SetEvent(WE_CHANGE, _OnXNThuongQuyChangeFnc);
	//m_wndXNThuongQuy.SetEvent(WE_SETFOCUS, _OnXNThuongQuySetfocusFnc);
	//m_wndXNThuongQuy.SetEvent(WE_KILLFOCUS, _OnXNThuongQuyKillfocusFnc);
	m_wndXNThuongQuy.SetEvent(WE_CHECKVALUE, _OnXNThuongQuyCheckValueFnc);
	//m_wndKetHoachDieuTri.SetEvent(WE_CHANGE, _OnKetHoachDieuTriChangeFnc);
	//m_wndKetHoachDieuTri.SetEvent(WE_SETFOCUS, _OnKetHoachDieuTriSetfocusFnc);
	//m_wndKetHoachDieuTri.SetEvent(WE_KILLFOCUS, _OnKetHoachDieuTriKillfocusFnc);
	m_wndKetHoachDieuTri.SetEvent(WE_CHECKVALUE, _OnKetHoachDieuTriCheckValueFnc);
	//m_wndTienLuong.SetEvent(WE_CHANGE, _OnTienLuongChangeFnc);
	//m_wndTienLuong.SetEvent(WE_SETFOCUS, _OnTienLuongSetfocusFnc);
	//m_wndTienLuong.SetEvent(WE_KILLFOCUS, _OnTienLuongKillfocusFnc);
	m_wndTienLuong.SetEvent(WE_CHECKVALUE, _OnTienLuongCheckValueFnc);
	
		GetDataToScreen();

	SetScrollSizes(MM_TEXT, CSize(700, 750));

}
void CHMS_OBADTParkinsonDongKinh1::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLyDoVaoVien.GetDlgCtrlID(), m_szLyDoVaoVien);
	DDX_Text(pDX, m_wndBenhSu.GetDlgCtrlID(), m_szBenhSu);
	DDX_Text(pDX, m_wndBanThan.GetDlgCtrlID(), m_szBanThan);
	DDX_Text(pDX, m_wndGiaDinh.GetDlgCtrlID(), m_szGiaDinh);
	DDX_Text(pDX, m_wndToanThan.GetDlgCtrlID(), m_szToanThan);
	DDX_Text(pDX, m_wndThanTietNieu.GetDlgCtrlID(), m_szThanTietNieu);
	DDX_Text(pDX, m_wndTuanHoan.GetDlgCtrlID(), m_szTuanHoan);
	DDX_Text(pDX, m_wndHoHap.GetDlgCtrlID(), m_szHoHap);
	DDX_Text(pDX, m_wndTieuHoa.GetDlgCtrlID(), m_szTieuHoa);
	DDX_Text(pDX, m_wndTamThanKinh.GetDlgCtrlID(), m_szTamThanKinh);
	DDX_Text(pDX, m_wndChuyenKhoacKhac.GetDlgCtrlID(), m_szChuyenKhoacKhac);
	DDX_Text(pDX, m_wndCacXNDaLam.GetDlgCtrlID(), m_szCacXNDaLam);
	DDX_Text(pDX, m_wndChanDoanSoBo.GetDlgCtrlID(), m_szChanDoanSoBo);
	DDX_Text(pDX, m_wndChanDoanPhanBiet.GetDlgCtrlID(), m_szChanDoanPhanBiet);
	DDX_Text(pDX, m_wndChanDoanQuyetDinh.GetDlgCtrlID(), m_szChanDoanQuyetDinh);
	DDX_Text(pDX, m_wndXNThuongQuy.GetDlgCtrlID(), m_szXNThuongQuy);
	DDX_Text(pDX, m_wndKetHoachDieuTri.GetDlgCtrlID(), m_szKetHoachDieuTri);
	DDX_Text(pDX, m_wndTienLuong.GetDlgCtrlID(), m_szTienLuong);

}
void CHMS_OBADTParkinsonDongKinh1::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("LyDoVaoVien")] =  m_szLyDoVaoVien;
	m_jData[_T("BenhSu")] =  m_szBenhSu;
	m_jData[_T("BanThan")] =  m_szBanThan;
	m_jData[_T("GiaDinh")] =  m_szGiaDinh;
	m_jData[_T("ToanThan")] =  m_szToanThan;
	m_jData[_T("ThanTietNieu")] =  m_szThanTietNieu;
	m_jData[_T("TuanHoan")] =  m_szTuanHoan;
	m_jData[_T("HoHap")] =  m_szHoHap;
	m_jData[_T("TieuHoa")] =  m_szTieuHoa;
	m_jData[_T("TamThanKinh")] =  m_szTamThanKinh;
	m_jData[_T("ChuyenKhoacKhac")] =  m_szChuyenKhoacKhac;
	m_jData[_T("CacXNDaLam")] =  m_szCacXNDaLam;
	m_jData[_T("ChanDoanSoBo")] =  m_szChanDoanSoBo;
	m_jData[_T("ChanDoanPhanBiet")] =  m_szChanDoanPhanBiet;
	m_jData[_T("ChanDoanQuyetDinh")] =  m_szChanDoanQuyetDinh;
	m_jData[_T("XNThuongQuy")] =  m_szXNThuongQuy;
	m_jData[_T("KetHoachDieuTri")] =  m_szKetHoachDieuTri;
	m_jData[_T("TienLuong")] =  m_szTienLuong;
	}
	else
	{
			
	m_jData[_T("LyDoVaoVien")].GetValue(m_szLyDoVaoVien);
	m_jData[_T("BenhSu")].GetValue(m_szBenhSu);
	m_jData[_T("BanThan")].GetValue(m_szBanThan);
	m_jData[_T("GiaDinh")].GetValue(m_szGiaDinh);
	m_jData[_T("ToanThan")].GetValue(m_szToanThan);
	m_jData[_T("ThanTietNieu")].GetValue(m_szThanTietNieu);
	m_jData[_T("TuanHoan")].GetValue(m_szTuanHoan);
	m_jData[_T("HoHap")].GetValue(m_szHoHap);
	m_jData[_T("TieuHoa")].GetValue(m_szTieuHoa);
	m_jData[_T("TamThanKinh")].GetValue(m_szTamThanKinh);
	m_jData[_T("ChuyenKhoacKhac")].GetValue(m_szChuyenKhoacKhac);
	m_jData[_T("CacXNDaLam")].GetValue(m_szCacXNDaLam);
	m_jData[_T("ChanDoanSoBo")].GetValue(m_szChanDoanSoBo);
	m_jData[_T("ChanDoanPhanBiet")].GetValue(m_szChanDoanPhanBiet);
	m_jData[_T("ChanDoanQuyetDinh")].GetValue(m_szChanDoanQuyetDinh);
	m_jData[_T("XNThuongQuy")].GetValue(m_szXNThuongQuy);
	m_jData[_T("KetHoachDieuTri")].GetValue(m_szKetHoachDieuTri);
	m_jData[_T("TienLuong")].GetValue(m_szTienLuong);
	}

}
void CHMS_OBADTParkinsonDongKinh1::GetDataToScreen(){

	GetData();
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
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "), pMF->m_nDocNo,m_szRecordType, i);
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
void CHMS_OBADTParkinsonDongKinh1::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBADTParkinsonDongKinh1::SetDefaultValues(){

	m_szLyDoVaoVien.Empty();
	m_szBenhSu.Empty();
	m_szBanThan.Empty();
	m_szGiaDinh.Empty();
	m_szToanThan.Empty();
	m_szThanTietNieu.Empty();
	m_szTuanHoan.Empty();
	m_szHoHap.Empty();
	m_szTieuHoa.Empty();
	m_szTamThanKinh.Empty();
	m_szChuyenKhoacKhac.Empty();
	m_szCacXNDaLam.Empty();
	m_szChanDoanSoBo.Empty();
	m_szChanDoanPhanBiet.Empty();
	m_szChanDoanQuyetDinh.Empty();
	m_szXNThuongQuy.Empty();
	m_szKetHoachDieuTri.Empty();
	m_szTienLuong.Empty();

}
int CHMS_OBADTParkinsonDongKinh1::SetMode(int nMode){
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
/*void CHMS_OBADTParkinsonDongKinh1::OnLyDoVaoVienChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnLyDoVaoVienSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnLyDoVaoVienKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnLyDoVaoVienCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnBenhSuChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnBenhSuSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnBenhSuKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnBenhSuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnBanThanChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnBanThanSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnBanThanKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnBanThanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnGiaDinhChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnGiaDinhSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnGiaDinhKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnGiaDinhCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnToanThanChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnToanThanSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnToanThanKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnToanThanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnThanTietNieuChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnThanTietNieuSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnThanTietNieuKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnThanTietNieuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnTuanHoanChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTuanHoanSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTuanHoanKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnTuanHoanCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnHoHapChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnHoHapSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnHoHapKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnHoHapCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnTieuHoaChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTieuHoaSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTieuHoaKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnTieuHoaCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnTamThanKinhChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTamThanKinhSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTamThanKinhKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnTamThanKinhCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnChuyenKhoacKhacChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChuyenKhoacKhacSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChuyenKhoacKhacKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnChuyenKhoacKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnCacXNDaLamChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnCacXNDaLamSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnCacXNDaLamKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnCacXNDaLamCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanSoBoChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanSoBoSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanSoBoKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnChanDoanSoBoCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanPhanBietChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanPhanBietSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanPhanBietKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnChanDoanPhanBietCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanQuyetDinhChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanQuyetDinhSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnChanDoanQuyetDinhKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnChanDoanQuyetDinhCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnXNThuongQuyChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnXNThuongQuySetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnXNThuongQuyKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnXNThuongQuyCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnKetHoachDieuTriChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnKetHoachDieuTriSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnKetHoachDieuTriKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnKetHoachDieuTriCheckValue(){
	return 0;
} 
/*void CHMS_OBADTParkinsonDongKinh1::OnTienLuongChange(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTienLuongSetfocus(){
	
} */
/*void CHMS_OBADTParkinsonDongKinh1::OnTienLuongKillfocus(){
	
} */
int CHMS_OBADTParkinsonDongKinh1::OnTienLuongCheckValue(){
	return 0;
} 
void CHMS_OBADTParkinsonDongKinh1::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBADTParkinsonDongKinh1();
} 
void CHMS_OBADTParkinsonDongKinh1::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTParkinsonDongKinh1.RPT")))
		return;
	GetDataToScreen();
	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("LyDoVaoVien"), m_szLyDoVaoVien);
	rptHeader->SetValue(_T("BenhSu"), m_szBenhSu);
	rptHeader->SetValue(_T("BanThan"),  m_szBanThan);
	rptHeader->SetValue(_T("GiaDinh"),  m_szGiaDinh);
	rptHeader->SetValue(_T("ToanThan"), m_szToanThan);
	rptHeader->SetValue(_T("ThanTietNieu"),  m_szThanTietNieu);
	rptHeader->SetValue(_T("TuanHoan"),  m_szTuanHoan);
	rptHeader->SetValue(_T("HoHap"),  m_szHoHap);
	rptHeader->SetValue(_T("TieuHoa"),  m_szTieuHoa);
	rptHeader->SetValue(_T("TamThanKinh"),  m_szTamThanKinh);
	rptHeader->SetValue(_T("ChuyenKhoacKhac"),  m_szChuyenKhoacKhac);
	rptHeader->SetValue(_T("CacXNDaLam"), m_szCacXNDaLam);
	rptHeader->SetValue(_T("ChanDoanSoBo"),  m_szChanDoanSoBo);
	rptHeader->SetValue(_T("ChanDoanPhanBiet"),  m_szChanDoanPhanBiet);
	rptHeader->SetValue(_T("ChanDoanQuyetDinh"),  m_szChanDoanQuyetDinh);
	rptHeader->SetValue(_T("XNThuongQuy"), m_szXNThuongQuy);
	rptHeader->SetValue(_T("KetHoachDieuTri"),  m_szKetHoachDieuTri);
	rptHeader->SetValue(_T("TienLuong"),  m_szTienLuong);
	

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
} 
bool CHMS_OBADTParkinsonDongKinh1::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	bool res = IsAllowUpdate();

	if(!res)
	{
		CString tmpStr;
		tmpStr.Format(_T("Ðang t?n t?i b?nh án ngo?i trú. Không th? t?o du?c b?nh án m?i"));
		ShowMessageBox(tmpStr);
		return false;
	}
	OnEditHMS_OBADTParkinsonDongKinh1();
	return true;
} 
int CHMS_OBADTParkinsonDongKinh1::OnAddHMS_OBADTParkinsonDongKinh1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBADTParkinsonDongKinh1::OnEditHMS_OBADTParkinsonDongKinh1(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBADTParkinsonDongKinh1::OnDeleteHMS_OBADTParkinsonDongKinh1(){
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
 		OnCancelHMS_OBADTParkinsonDongKinh1();
 	}
	return 0;
}
int CHMS_OBADTParkinsonDongKinh1::OnSaveHMS_OBADTParkinsonDongKinh1(){
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

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo,m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("Parkinson1"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
	{
		SetMode(VM_VIEW);
	}
	else
		return -1;
	return ret;
}
int CHMS_OBADTParkinsonDongKinh1::OnCancelHMS_OBADTParkinsonDongKinh1(){
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
int CHMS_OBADTParkinsonDongKinh1::OnHMS_OBADTParkinsonDongKinh1ListLoadData(){
	return 0;
}


void CHMS_OBADTParkinsonDongKinh1::OnCancelSelect()
{
	OnCancelHMS_OBADTParkinsonDongKinh1();
}