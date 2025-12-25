#include "HMS_OBAKhoaRang2.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnLyDoVaoVienChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnLyDoVaoVienChange();
} */
/*static void _OnLyDoVaoVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnLyDoVaoVienSetfocus();} */ 
/*static void _OnLyDoVaoVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnLyDoVaoVienKillfocus();
} */
static int _OnLyDoVaoVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnLyDoVaoVienCheckValue();
} 
/*static void _OnBenhSuChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnBenhSuChange();
} */
/*static void _OnBenhSuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnBenhSuSetfocus();} */ 
/*static void _OnBenhSuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnBenhSuKillfocus();
} */
static int _OnBenhSuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnBenhSuCheckValue();
} 
/*static void _OnGiaDinhChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnGiaDinhChange();
} */
/*static void _OnGiaDinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnGiaDinhSetfocus();} */ 
/*static void _OnGiaDinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnGiaDinhKillfocus();
} */
static int _OnGiaDinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnGiaDinhCheckValue();
} 
static void _OnTieuDuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnTieuDuongSelect();
}
static void _OnHuyetApSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnHuyetApSelect();
}
static void _OnDiUngSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnDiUngSelect();
}
static void _OnKhacSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnKhacSelect();
}
/*static void _OnYThucChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnYThucChange();
} */
/*static void _OnYThucSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnYThucSetfocus();} */ 
/*static void _OnYThucKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnYThucKillfocus();
} */
static int _OnYThucCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnYThucCheckValue();
} 
/*static void _OnMachChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnMachChange();
} */
/*static void _OnMachSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnMachSetfocus();} */ 
/*static void _OnMachKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnMachKillfocus();
} */
static int _OnMachCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnMachCheckValue();
} 
/*static void _OnNhietdoChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnNhietdoChange();
} */
/*static void _OnNhietdoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnNhietdoSetfocus();} */ 
/*static void _OnNhietdoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnNhietdoKillfocus();
} */
static int _OnNhietdoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnNhietdoCheckValue();
} 
/*static void _OnHAChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnHAChange();
} */
/*static void _OnHASetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnHASetfocus();} */ 
/*static void _OnHAKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnHAKillfocus();
} */
static int _OnHACheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnHACheckValue();
} 
static void _OnKhonghutSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnKhonghutSelect();
}
static void _On510dieuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->On510dieuSelect();
}
static void _Ontren10dieuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->Ontren10dieuSelect();
}
static void _OnConghienSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnConghienSelect();
}
static void _OnKonghienSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnKonghienSelect();
}
static void _OnvsrTotSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnvsrTotSelect();
}
static void _OnvsrTrungBinhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnvsrTrungBinhSelect();
}
static void _OnVsrKemSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnVsrKemSelect();
}
static void _OncrvlCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OncrvlCoSelect();
}
static void _OncrvlKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OncrvlKhongSelect();
}
static void _OnLoaiISelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnLoaiISelect();
}
static void _OnLoaiIISelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnLoaiIISelect();
}
static void _OnLoaiIIISelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnLoaiIIISelect();
}
static void _OntlrmCoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OntlrmCoSelect();
}
static void _OntlrmKhongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OntlrmKhongSelect();
}
static void _OnDaySelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnDaySelect();
}
static void _OnMongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnMongSelect();
}
static void _OnCaoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnCaoSelect();
}
static void _OndcTrungbinhSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OndcTrungbinhSelect();
}
/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang2 *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang2 *)pWnd)->OnChanDoanCheckValue();
} 
static void _OnThuongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnThuongSelect();
}
static void _OnPhauThuatSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnPhauThuatSelect();
}
static void _OnTucThiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnTucThiSelect();
}
static void _OnSomSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnSomSelect();
}
static void _OnMuonSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnMuonSelect();
}
static void _OnKinSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnKinSelect();
}
static void _OnHoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnHoSelect();
}
static void _OnBlockSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnBlockSelect();
}
static void _OnMangTitanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang2*)pWnd)->OnMangTitanSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang2 *pVw = (CHMS_OBAKhoaRang2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang2 *pVw = (CHMS_OBAKhoaRang2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang2 *pVw = (CHMS_OBAKhoaRang2 *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBAKhoaRang2Fnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang2*)pWnd)->OnAddHMS_OBAKhoaRang2();
} 
static int _OnEditHMS_OBAKhoaRang2Fnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang2*)pWnd)->OnEditHMS_OBAKhoaRang2();
} 
static int _OnDeleteHMS_OBAKhoaRang2Fnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang2*)pWnd)->OnDeleteHMS_OBAKhoaRang2();
} 
static int _OnSaveHMS_OBAKhoaRang2Fnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang2*)pWnd)->OnSaveHMS_OBAKhoaRang2();
} 
static int _OnCancelHMS_OBAKhoaRang2Fnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang2*)pWnd)->OnCancelHMS_OBAKhoaRang2();
} 
CHMS_OBAKhoaRang2::CHMS_OBAKhoaRang2(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szRecordType = _T("OBA_RANG2");
	m_szRecordGroup = _T("TAB2");
}
CHMS_OBAKhoaRang2::~CHMS_OBAKhoaRang2(){
}
void CHMS_OBAKhoaRang2::OnCreateComponents(){
	m_wndPHANHOIBENH.Create(this, _T("I PH\x1EA6N H\x1ECEI \x42\x1EC6NH"), 5, 5, 155, 30);
	m_wndLyDoVaoVienLabel.Create(this, _T("1 L\xFD \x64o v\xE0o vi\x1EC7n"), 5, 35, 156, 60);
	m_wndLyDoVaoVien.Create(this,160, 35, 775, 60); 
	m_wndBenhSuLabel.Create(this, _T("2 \x42\x1EC7nh s\x1EED"), 5, 65, 156, 90);
	m_wndBenhSu.Create(this,160, 65, 775, 90); 
	m_wndTienSu.Create(this, _T("3 Ti\x1EC1n s\x1EED"), 6, 95, 101, 120);
	m_wndGiaDinhLabel.Create(this, _T("Gia \x111\xECnh"), 5, 125, 155, 150);
	m_wndGiaDinh.Create(this,160, 125, 775, 150); 
	m_wndBanThan.Create(this, _T("\x42\x1EA3n th\xE2n"), 5, 155, 155, 180);
	m_wndTieuDuong.Create(this, _T("Ti\x1EC3u \x111\x1B0\x1EDDng"), 160, 155, 280, 180);
	m_wndHuyetAp.Create(this, _T("Huy\x1EBFt \xE1p"), 284, 155, 404, 180);
	m_wndDiUng.Create(this, _T("\x44\x1ECB \x1EE9ng"), 410, 155, 530, 180);
	m_wndKhac.Create(this, _T("Kh\xE1\x63"), 535, 155, 655, 180);
	m_wndPHANKHAMBENH.Create(this, _T("II PH\x1EA6N KH\xC1M \x42\x1EC6NH"), 4, 183, 150, 213);
	m_wndToanThan.Create(this, _T("1. Kh\xE1m \x63hung"), 2, 216, 217, 241);
	m_wndYThucLabel.Create(this, _T("- \xDD th\x1EE9\x63"), 5, 245, 155, 270);
	m_wndYThuc.Create(this,160, 245, 775, 270); 
	m_wndTimMachLabel.Create(this, _T("- Tim m\x1EA1\x63h"), 5, 275, 155, 300);
	m_wndMachLabel.Create(this, _T("m\x1EA1\x63h"), 160, 275, 240, 300);
	m_wndMach.Create(this,245, 275, 325, 300); 
	m_wndNhietdoLabel.Create(this, _T("Nhi\x1EC7t \x111\x1ED9"), 360, 275, 440, 300);
	m_wndNhietdo.Create(this,445, 275, 525, 300); 
	m_wndHALabel.Create(this, _T("Huy\x1EBFt \xE1p"), 530, 275, 610, 300);
	m_wndHA.Create(this,615, 275, 695, 300); 
	m_wndThoiQuen.Create(this, _T("2. Th\xF3i qu\x65n"), 3, 305, 115, 328);
	m_wndHutThuocLa.Create(this, _T("H\xFAt thu\x1ED1\x63 l\xE1"), 5, 335, 155, 360);
	m_wndKhonghut.Create(this, _T("Kh\xF4ng h\xFAt"), 159, 335, 324, 360);
	m_wnd510dieu.Create(this, _T("\x35-\x31\x30 \x111i\x1EBFu/ng\xE0y"), 330, 335, 450, 360);
	m_wndtren10dieu.Create(this, _T(">\x31\x30 \x111i\x1EBFu/ng\xE0y"), 455, 335, 575, 360);
	m_wndTatNghienRang.Create(this, _T("T\x1EADt nghi\x1EBFn r\x103ng"), 5, 365, 155, 390);
	m_wndConghien.Create(this, _T("\x43\xF3"), 160, 365, 240, 390);
	m_wndKonghien.Create(this, _T("Kh\xF4ng"), 330, 365, 410, 390);
	m_wndTinhHinhRangMieng.Create(this, _T("3. T\xECnh h\xECnh r\x103ng mi\x1EC7ng"), 5, 395, 155, 420);
	m_wndVeSinhRangMieng.Create(this, _T("V\x1EC7 sinh r\x103ng mi\x1EC7ng"), 5, 425, 155, 450);
	m_wndvsrTot.Create(this, _T("T\x1ED1t"), 160, 425, 260, 450);
	m_wndvsrTrungBinh.Create(this, _T("Trung \x62\xECnh"), 265, 425, 365, 450);
	m_wndVsrKem.Create(this, _T("K\xE9m"), 370, 425, 470, 450);
	m_wndCaoRangViemLoi.Create(this, _T("\x43\x61o r\x103ng vi\xEAm l\x1EE3i"), 6, 456, 156, 481);
	m_wndcrvlCo.Create(this, _T("\x43\xF3"), 160, 455, 260, 480);
	m_wndcrvlKhong.Create(this, _T("Kh\xF4ng"), 265, 455, 365, 480);
	m_wndKhopCan.Create(this, _T("Kh\x1EDBp \x63\x1EAFn"), 5, 485, 155, 510);
	m_wndLoaiI.Create(this, _T("Lo\x1EA1i I"), 160, 485, 260, 510);
	m_wndLoaiII.Create(this, _T("Lo\x1EA1i II"), 265, 485, 365, 510);
	m_wndLoaiIII.Create(this, _T("Lo\x1EA1i III"), 370, 484, 470, 509);
	m_wndTutLoiTaiRangNho.Create(this, _T("T\x1EE5t l\x1EE3i t\x1EA1i r\x103ng nh\x1ED5"), 5, 515, 155, 540);
	m_wndtlrmCo.Create(this, _T("\x43\xF3"), 160, 515, 260, 540);
	m_wndtlrmKhong.Create(this, _T("Kh\xF4ng"), 265, 515, 365, 540);
	m_wndLoaiMoLoi.Create(this, _T("Lo\x1EA1i m\xF4 l\x1EE3i"), 5, 545, 155, 570);
	m_wndDay.Create(this, _T("\x64\xE0y"), 160, 545, 260, 570);
	m_wndMong.Create(this, _T("m\x1ECFng"), 265, 545, 365, 570);
	m_wndDuongCuoi.Create(this, _T("\x110\x1B0\x1EDDng \x63\x1B0\x1EDDi"), 5, 575, 155, 600);
	m_wndCao.Create(this, _T("cao"), 160, 575, 260, 600);
	m_wnddcTrungbinh.Create(this, _T("trung \x62\xECnh"), 265, 575, 365, 600);
	m_wndCacXNDaLam.Create(this, _T("4. \x43\xE1\x63 \x58N \x111\xE3 l\xE0m"), 5, 605, 155, 629);
	m_wndChanDoanLabel.Create(this, _T("1. \x43h\x1EA9n \x111o\xE1n"), 5, 635, 155, 660);
	m_wndChanDoan.Create(this,160, 635, 775, 660); 
	m_wndKeHoachDieuTri.Create(this, _T("2. K\x1EBF ho\x1EA1\x63h \x111i\x1EC1u tr\x1ECB"), 5, 665, 155, 690);
	m_wndNhoRang.Create(this, _T("Nh\x1ED5 r\x103ng"), 5, 695, 155, 720);
	m_wndThuong.Create(this, _T("th\x1B0\x1EDDng"), 160, 695, 260, 720);
	m_wndPhauThuat.Create(this, _T("ph\x1EABu thu\x1EADt"), 265, 697, 365, 722);
	m_wndImplant.Create(this, _T("\x43\x1EA5y gh\xE9p Implant"), 5, 725, 155, 750);
	m_wndTucThi.Create(this, _T("T\x1EE9\x63 th\xEC"), 160, 725, 260, 750);
	m_wndSom.Create(this, _T("S\x1EDBm"), 265, 725, 365, 750);
	m_wndMuon.Create(this, _T("Mu\x1ED9n"), 370, 725, 470, 750);
	m_wndKetHopNangXoang.Create(this, _T("K\x1EBFt h\x1EE3p n\xE2ng \x78o\x61ng"), 6, 755, 156, 780);
	m_wndKin.Create(this, _T("k\xEDn"), 160, 755, 260, 780);
	m_wndHo.Create(this, _T("h\x1EDF"), 265, 755, 365, 780);
	m_wndGhepxuong.Create(this, _T("Gh\xE9p \x78\x1B0\x1A1ng"), 7, 785, 157, 810);
	m_wndBlock.Create(this, _T("Block"), 160, 785, 260, 810);
	m_wndMangTitan.Create(this, _T("M\xE0ng tit\x61n \x111\x1ECBnh h\xECnh"), 265, 785, 425, 810);
	
	
	m_wndlp.Create(this, _T("l/p"), 328, 275, 358, 300);
	m_wndmmHg.Create(this, _T("mmHg"), 700, 275, 780, 300);

}
void CHMS_OBAKhoaRang2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndLyDoVaoVien.SetLimitText(1024);
	m_wndLyDoVaoVien.SetCheckValue(true);
	m_wndBenhSu.SetLimitText(1024);
	m_wndBenhSu.SetCheckValue(true);
	m_wndGiaDinh.SetLimitText(1024);
	m_wndGiaDinh.SetCheckValue(true);
	m_wndYThuc.SetLimitText(1024);
	m_wndYThuc.SetCheckValue(true);
	m_wndMach.SetLimitText(1024);
	m_wndMach.SetCheckValue(true);
	m_wndNhietdo.SetLimitText(1024);
	m_wndNhietdo.SetCheckValue(true);
	m_wndHA.SetLimitText(1024);
	m_wndHA.SetCheckValue(true);
	m_wndChanDoan.SetLimitText(1024);
	m_wndChanDoan.SetCheckValue(true);*/

}
void CHMS_OBAKhoaRang2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndLyDoVaoVien.SetEvent(WE_CHANGE, _OnLyDoVaoVienChangeFnc);
	//m_wndLyDoVaoVien.SetEvent(WE_SETFOCUS, _OnLyDoVaoVienSetfocusFnc);
	//m_wndLyDoVaoVien.SetEvent(WE_KILLFOCUS, _OnLyDoVaoVienKillfocusFnc);
	m_wndLyDoVaoVien.SetEvent(WE_CHECKVALUE, _OnLyDoVaoVienCheckValueFnc);
	//m_wndBenhSu.SetEvent(WE_CHANGE, _OnBenhSuChangeFnc);
	//m_wndBenhSu.SetEvent(WE_SETFOCUS, _OnBenhSuSetfocusFnc);
	//m_wndBenhSu.SetEvent(WE_KILLFOCUS, _OnBenhSuKillfocusFnc);
	m_wndBenhSu.SetEvent(WE_CHECKVALUE, _OnBenhSuCheckValueFnc);
	//m_wndGiaDinh.SetEvent(WE_CHANGE, _OnGiaDinhChangeFnc);
	//m_wndGiaDinh.SetEvent(WE_SETFOCUS, _OnGiaDinhSetfocusFnc);
	//m_wndGiaDinh.SetEvent(WE_KILLFOCUS, _OnGiaDinhKillfocusFnc);
	m_wndGiaDinh.SetEvent(WE_CHECKVALUE, _OnGiaDinhCheckValueFnc);
	m_wndTieuDuong.SetEvent(WE_CLICK, _OnTieuDuongSelectFnc);
	m_wndHuyetAp.SetEvent(WE_CLICK, _OnHuyetApSelectFnc);
	m_wndDiUng.SetEvent(WE_CLICK, _OnDiUngSelectFnc);
	m_wndKhac.SetEvent(WE_CLICK, _OnKhacSelectFnc);
	//m_wndYThuc.SetEvent(WE_CHANGE, _OnYThucChangeFnc);
	//m_wndYThuc.SetEvent(WE_SETFOCUS, _OnYThucSetfocusFnc);
	//m_wndYThuc.SetEvent(WE_KILLFOCUS, _OnYThucKillfocusFnc);
	m_wndYThuc.SetEvent(WE_CHECKVALUE, _OnYThucCheckValueFnc);
	//m_wndMach.SetEvent(WE_CHANGE, _OnMachChangeFnc);
	//m_wndMach.SetEvent(WE_SETFOCUS, _OnMachSetfocusFnc);
	//m_wndMach.SetEvent(WE_KILLFOCUS, _OnMachKillfocusFnc);
	m_wndMach.SetEvent(WE_CHECKVALUE, _OnMachCheckValueFnc);
	//m_wndNhietdo.SetEvent(WE_CHANGE, _OnNhietdoChangeFnc);
	//m_wndNhietdo.SetEvent(WE_SETFOCUS, _OnNhietdoSetfocusFnc);
	//m_wndNhietdo.SetEvent(WE_KILLFOCUS, _OnNhietdoKillfocusFnc);
	m_wndNhietdo.SetEvent(WE_CHECKVALUE, _OnNhietdoCheckValueFnc);
	//m_wndHA.SetEvent(WE_CHANGE, _OnHAChangeFnc);
	//m_wndHA.SetEvent(WE_SETFOCUS, _OnHASetfocusFnc);
	//m_wndHA.SetEvent(WE_KILLFOCUS, _OnHAKillfocusFnc);
	m_wndHA.SetEvent(WE_CHECKVALUE, _OnHACheckValueFnc);
	m_wndKhonghut.SetEvent(WE_CLICK, _OnKhonghutSelectFnc);
	m_wnd510dieu.SetEvent(WE_CLICK, _On510dieuSelectFnc);
	m_wndtren10dieu.SetEvent(WE_CLICK, _Ontren10dieuSelectFnc);
	m_wndConghien.SetEvent(WE_CLICK, _OnConghienSelectFnc);
	m_wndKonghien.SetEvent(WE_CLICK, _OnKonghienSelectFnc);
	m_wndvsrTot.SetEvent(WE_CLICK, _OnvsrTotSelectFnc);
	m_wndvsrTrungBinh.SetEvent(WE_CLICK, _OnvsrTrungBinhSelectFnc);
	m_wndVsrKem.SetEvent(WE_CLICK, _OnVsrKemSelectFnc);
	m_wndcrvlCo.SetEvent(WE_CLICK, _OncrvlCoSelectFnc);
	m_wndcrvlKhong.SetEvent(WE_CLICK, _OncrvlKhongSelectFnc);
	m_wndLoaiI.SetEvent(WE_CLICK, _OnLoaiISelectFnc);
	m_wndLoaiII.SetEvent(WE_CLICK, _OnLoaiIISelectFnc);
	m_wndLoaiIII.SetEvent(WE_CLICK, _OnLoaiIIISelectFnc);
	m_wndtlrmCo.SetEvent(WE_CLICK, _OntlrmCoSelectFnc);
	m_wndtlrmKhong.SetEvent(WE_CLICK, _OntlrmKhongSelectFnc);
	m_wndDay.SetEvent(WE_CLICK, _OnDaySelectFnc);
	m_wndMong.SetEvent(WE_CLICK, _OnMongSelectFnc);
	m_wndCao.SetEvent(WE_CLICK, _OnCaoSelectFnc);
	m_wnddcTrungbinh.SetEvent(WE_CLICK, _OndcTrungbinhSelectFnc);
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	m_wndThuong.SetEvent(WE_CLICK, _OnThuongSelectFnc);
	m_wndPhauThuat.SetEvent(WE_CLICK, _OnPhauThuatSelectFnc);
	m_wndTucThi.SetEvent(WE_CLICK, _OnTucThiSelectFnc);
	m_wndSom.SetEvent(WE_CLICK, _OnSomSelectFnc);
	m_wndMuon.SetEvent(WE_CLICK, _OnMuonSelectFnc);
	m_wndKin.SetEvent(WE_CLICK, _OnKinSelectFnc);
	m_wndHo.SetEvent(WE_CLICK, _OnHoSelectFnc);
	m_wndBlock.SetEvent(WE_CLICK, _OnBlockSelectFnc);
	m_wndMangTitan.SetEvent(WE_CLICK, _OnMangTitanSelectFnc);

	GetDataToScreen();

	SetScrollSizes(MM_TEXT, CSize(700, 800));

}
void CHMS_OBAKhoaRang2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLyDoVaoVien.GetDlgCtrlID(), m_szLyDoVaoVien);
	DDX_Text(pDX, m_wndBenhSu.GetDlgCtrlID(), m_szBenhSu);
	DDX_Text(pDX, m_wndGiaDinh.GetDlgCtrlID(), m_szGiaDinh);
	DDX_Check(pDX, m_wndTieuDuong.GetDlgCtrlID(), m_bTieuDuong);
	DDX_Check(pDX, m_wndHuyetAp.GetDlgCtrlID(), m_bHuyetAp);
	DDX_Check(pDX, m_wndDiUng.GetDlgCtrlID(), m_bDiUng);
	DDX_Check(pDX, m_wndKhac.GetDlgCtrlID(), m_bKhac);
	DDX_Text(pDX, m_wndYThuc.GetDlgCtrlID(), m_szYThuc);
	DDX_Text(pDX, m_wndMach.GetDlgCtrlID(), m_szMach);
	DDX_Text(pDX, m_wndNhietdo.GetDlgCtrlID(), m_szNhietdo);
	DDX_Text(pDX, m_wndHA.GetDlgCtrlID(), m_szHA);
	DDX_Check(pDX, m_wndKhonghut.GetDlgCtrlID(), m_bKhonghut);
	DDX_Check(pDX, m_wnd510dieu.GetDlgCtrlID(), m_b510dieu);
	DDX_Check(pDX, m_wndtren10dieu.GetDlgCtrlID(), m_btren10dieu);
	DDX_Check(pDX, m_wndConghien.GetDlgCtrlID(), m_bConghien);
	DDX_Check(pDX, m_wndKonghien.GetDlgCtrlID(), m_bKonghien);
	DDX_Check(pDX, m_wndvsrTot.GetDlgCtrlID(), m_bvsrTot);
	DDX_Check(pDX, m_wndvsrTrungBinh.GetDlgCtrlID(), m_bvsrTrungBinh);
	DDX_Check(pDX, m_wndVsrKem.GetDlgCtrlID(), m_bVsrKem);
	DDX_Check(pDX, m_wndcrvlCo.GetDlgCtrlID(), m_bcrvlCo);
	DDX_Check(pDX, m_wndcrvlKhong.GetDlgCtrlID(), m_bcrvlKhong);
	DDX_Check(pDX, m_wndLoaiI.GetDlgCtrlID(), m_bLoaiI);
	DDX_Check(pDX, m_wndLoaiII.GetDlgCtrlID(), m_bLoaiII);
	DDX_Check(pDX, m_wndLoaiIII.GetDlgCtrlID(), m_bLoaiIII);
	DDX_Check(pDX, m_wndtlrmCo.GetDlgCtrlID(), m_btlrmCo);
	DDX_Check(pDX, m_wndtlrmKhong.GetDlgCtrlID(), m_btlrmKhong);
	DDX_Check(pDX, m_wndDay.GetDlgCtrlID(), m_bDay);
	DDX_Check(pDX, m_wndMong.GetDlgCtrlID(), m_bMong);
	DDX_Check(pDX, m_wndCao.GetDlgCtrlID(), m_bCao);
	DDX_Check(pDX, m_wnddcTrungbinh.GetDlgCtrlID(), m_bdcTrungbinh);
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Check(pDX, m_wndThuong.GetDlgCtrlID(), m_bThuong);
	DDX_Check(pDX, m_wndPhauThuat.GetDlgCtrlID(), m_bPhauThuat);
	DDX_Check(pDX, m_wndTucThi.GetDlgCtrlID(), m_bTucThi);
	DDX_Check(pDX, m_wndSom.GetDlgCtrlID(), m_bSom);
	DDX_Check(pDX, m_wndMuon.GetDlgCtrlID(), m_bMuon);
	DDX_Check(pDX, m_wndKin.GetDlgCtrlID(), m_bKin);
	DDX_Check(pDX, m_wndHo.GetDlgCtrlID(), m_bHo);
	DDX_Check(pDX, m_wndBlock.GetDlgCtrlID(), m_bBlock);
	DDX_Check(pDX, m_wndMangTitan.GetDlgCtrlID(), m_bMangTitan);

}
void CHMS_OBAKhoaRang2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("LyDoVaoVien")] =  m_szLyDoVaoVien;
	m_jData[_T("BenhSu")] =  m_szBenhSu;
	m_jData[_T("GiaDinh")] =  m_szGiaDinh;
	m_jData[_T("TieuDuong")] =  m_bTieuDuong;
	m_jData[_T("HuyetAp")] =  m_bHuyetAp;
	m_jData[_T("DiUng")] =  m_bDiUng;
	m_jData[_T("Khac")] =  m_bKhac;
	m_jData[_T("YThuc")] =  m_szYThuc;
	m_jData[_T("Mach")] =  m_szMach;
	m_jData[_T("Nhietdo")] =  m_szNhietdo;
	m_jData[_T("HA")] =  m_szHA;
	m_jData[_T("Khonghut")] =  m_bKhonghut;
	m_jData[_T("510dieu")] =  m_b510dieu;
	m_jData[_T("tren10dieu")] =  m_btren10dieu;
	m_jData[_T("Conghien")] =  m_bConghien;
	m_jData[_T("Konghien")] =  m_bKonghien;
	m_jData[_T("vsrTot")] =  m_bvsrTot;
	m_jData[_T("vsrTrungBinh")] =  m_bvsrTrungBinh;
	m_jData[_T("VsrKem")] =  m_bVsrKem;
	m_jData[_T("crvlCo")] =  m_bcrvlCo;
	m_jData[_T("crvlKhong")] =  m_bcrvlKhong;
	m_jData[_T("LoaiI")] =  m_bLoaiI;
	m_jData[_T("LoaiII")] =  m_bLoaiII;
	m_jData[_T("LoaiIII")] =  m_bLoaiIII;
	m_jData[_T("tlrmCo")] =  m_btlrmCo;
	m_jData[_T("tlrmKhong")] =  m_btlrmKhong;
	m_jData[_T("Day")] =  m_bDay;
	m_jData[_T("Mong")] =  m_bMong;
	m_jData[_T("Cao")] =  m_bCao;
	m_jData[_T("dcTrungbinh")] =  m_bdcTrungbinh;
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	m_jData[_T("Thuong")] =  m_bThuong;
	m_jData[_T("PhauThuat")] =  m_bPhauThuat;
	m_jData[_T("TucThi")] =  m_bTucThi;
	m_jData[_T("Som")] =  m_bSom;
	m_jData[_T("Muon")] =  m_bMuon;
	m_jData[_T("Kin")] =  m_bKin;
	m_jData[_T("Ho")] =  m_bHo;
	m_jData[_T("Block")] =  m_bBlock;
	m_jData[_T("MangTitan")] =  m_bMangTitan;
	}
	else
	{
			
	m_jData[_T("LyDoVaoVien")].GetValue(m_szLyDoVaoVien);
	m_jData[_T("BenhSu")].GetValue(m_szBenhSu);
	m_jData[_T("GiaDinh")].GetValue(m_szGiaDinh);
	m_jData[_T("TieuDuong")].GetValue(m_bTieuDuong);
	m_jData[_T("HuyetAp")].GetValue(m_bHuyetAp);
	m_jData[_T("DiUng")].GetValue(m_bDiUng);
	m_jData[_T("Khac")].GetValue(m_bKhac);
	m_jData[_T("YThuc")].GetValue(m_szYThuc);
	m_jData[_T("Mach")].GetValue(m_szMach);
	m_jData[_T("Nhietdo")].GetValue(m_szNhietdo);
	m_jData[_T("HA")].GetValue(m_szHA);
	m_jData[_T("Khonghut")].GetValue(m_bKhonghut);
	m_jData[_T("510dieu")].GetValue(m_b510dieu);
	m_jData[_T("tren10dieu")].GetValue(m_btren10dieu);
	m_jData[_T("Conghien")].GetValue(m_bConghien);
	m_jData[_T("Konghien")].GetValue(m_bKonghien);
	m_jData[_T("vsrTot")].GetValue(m_bvsrTot);
	m_jData[_T("vsrTrungBinh")].GetValue(m_bvsrTrungBinh);
	m_jData[_T("VsrKem")].GetValue(m_bVsrKem);
	m_jData[_T("crvlCo")].GetValue(m_bcrvlCo);
	m_jData[_T("crvlKhong")].GetValue(m_bcrvlKhong);
	m_jData[_T("LoaiI")].GetValue(m_bLoaiI);
	m_jData[_T("LoaiII")].GetValue(m_bLoaiII);
	m_jData[_T("LoaiIII")].GetValue(m_bLoaiIII);
	m_jData[_T("tlrmCo")].GetValue(m_btlrmCo);
	m_jData[_T("tlrmKhong")].GetValue(m_btlrmKhong);
	m_jData[_T("Day")].GetValue(m_bDay);
	m_jData[_T("Mong")].GetValue(m_bMong);
	m_jData[_T("Cao")].GetValue(m_bCao);
	m_jData[_T("dcTrungbinh")].GetValue(m_bdcTrungbinh);
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	m_jData[_T("Thuong")].GetValue(m_bThuong);
	m_jData[_T("PhauThuat")].GetValue(m_bPhauThuat);
	m_jData[_T("TucThi")].GetValue(m_bTucThi);
	m_jData[_T("Som")].GetValue(m_bSom);
	m_jData[_T("Muon")].GetValue(m_bMuon);
	m_jData[_T("Kin")].GetValue(m_bKin);
	m_jData[_T("Ho")].GetValue(m_bHo);
	m_jData[_T("Block")].GetValue(m_bBlock);
	m_jData[_T("MangTitan")].GetValue(m_bMangTitan);
	}

}
void CHMS_OBAKhoaRang2::GetDataToScreen(){

	/*GetData();
	return;*/

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo,m_szRecordType);
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
void CHMS_OBAKhoaRang2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBAKhoaRang2::SetDefaultValues(){

	m_szLyDoVaoVien.Empty();
	m_szBenhSu.Empty();
	m_szGiaDinh.Empty();
	m_bTieuDuong=FALSE;
	m_bHuyetAp=FALSE;
	m_bDiUng=FALSE;
	m_bKhac=FALSE;
	m_szYThuc.Empty();
	m_szMach.Empty();
	m_szNhietdo.Empty();
	m_szHA.Empty();
	m_bKhonghut=FALSE;
	m_b510dieu=FALSE;
	m_btren10dieu=FALSE;
	m_bConghien=FALSE;
	m_bKonghien=FALSE;
	m_bvsrTot=FALSE;
	m_bvsrTrungBinh=FALSE;
	m_bVsrKem=FALSE;
	m_bcrvlCo=FALSE;
	m_bcrvlKhong=FALSE;
	m_bLoaiI=FALSE;
	m_bLoaiII=FALSE;
	m_bLoaiIII=FALSE;
	m_btlrmCo=FALSE;
	m_btlrmKhong=FALSE;
	m_bDay=FALSE;
	m_bMong=FALSE;
	m_bCao=FALSE;
	m_bdcTrungbinh=FALSE;
	m_szChanDoan.Empty();
	m_bThuong=FALSE;
	m_bPhauThuat=FALSE;
	m_bTucThi=FALSE;
	m_bSom=FALSE;
	m_bMuon=FALSE;
	m_bKin=FALSE;
	m_bHo=FALSE;
	m_bBlock=FALSE;
	m_bMangTitan=FALSE;

}
int CHMS_OBAKhoaRang2::SetMode(int nMode){
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
/*void CHMS_OBAKhoaRang2::OnLyDoVaoVienChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnLyDoVaoVienSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnLyDoVaoVienKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnLyDoVaoVienCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang2::OnBenhSuChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnBenhSuSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnBenhSuKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnBenhSuCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang2::OnGiaDinhChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnGiaDinhSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnGiaDinhKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnGiaDinhCheckValue(){
	return 0;
} 
	void CHMS_OBAKhoaRang2::OnTieuDuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnHuyetApSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnDiUngSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnKhacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBAKhoaRang2::OnYThucChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnYThucSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnYThucKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnYThucCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang2::OnMachChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnMachSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnMachKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnMachCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang2::OnNhietdoChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnNhietdoSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnNhietdoKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnNhietdoCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang2::OnHAChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnHASetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnHAKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnHACheckValue(){
	return 0;
} 
	void CHMS_OBAKhoaRang2::OnKhonghutSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::On510dieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::Ontren10dieuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnConghienSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnKonghienSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnvsrTotSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnvsrTrungBinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnVsrKemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OncrvlCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OncrvlKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnLoaiISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnLoaiIISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnLoaiIIISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OntlrmCoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OntlrmKhongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnMongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnCaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OndcTrungbinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBAKhoaRang2::OnChanDoanChange(){
	
} */
/*void CHMS_OBAKhoaRang2::OnChanDoanSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang2::OnChanDoanKillfocus(){
	
} */
int CHMS_OBAKhoaRang2::OnChanDoanCheckValue(){
	return 0;
} 
	void CHMS_OBAKhoaRang2::OnThuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnPhauThuatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnTucThiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnSomSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnMuonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnKinSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnHoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnBlockSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang2::OnMangTitanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMS_OBAKhoaRang2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBAKhoaRang2();
} 
void CHMS_OBAKhoaRang2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBAKhoaRang2.RPT"));
	return;*/
	
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBAKhoaRang2.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();

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
	
	/*rptHeader->SetValue(_T("LyDoVaoVien"), m_szLyDoVaoVien);
	rptHeader->SetValue(_T("BenhSu"),  m_szBenhSu);
	rptHeader->SetValue(_T("GiaDinh"),  m_szGiaDinh);
	if(m_bTieuDuong)
		rptHeader->SetValue(_T("1"),  _T("Y"));
	if(m_bHuyetAp)
		rptHeader->SetValue(_T("2"),  _T("Y"));
	if(m_bDiUng)
		rptHeader->SetValue(_T("3"),  _T("Y"));
	if(m_bKhac)
		rptHeader->SetValue(_T("4"),  _T("Y"));
	rptHeader->SetValue(_T("YThuc"),  m_szYThuc);
	rptHeader->SetValue(_T("Mach"),  m_szMach);
	rptHeader->SetValue(_T("Nhietdo"), m_szNhietdo);
	rptHeader->SetValue(_T("HA"), m_szHA);
	if(m_bKhonghut)
		rptHeader->SetValue(_T("5"), _T("Y"));
	if(m_b510dieu)
		rptHeader->SetValue(_T("6"),  _T("Y"));
	if(m_btren10dieu)
		rptHeader->SetValue(_T("7"),  _T("Y"));
	if(m_bConghien)
		rptHeader->SetValue(_T("8"),  _T("Y"));
	if(m_bKonghien)
	rptHeader->SetValue(_T("9"),  _T("Y"));
	if(m_bvsrTot)
		rptHeader->SetValue(_T("10"),  _T("Y"));
	if(m_bvsrTrungBinh)
		rptHeader->SetValue(_T("11"), _T("Y"));
	if(m_bVsrKem)
	rptHeader->SetValue(_T("12"),  _T("Y"));
	if(m_bcrvlCo)
		rptHeader->SetValue(_T("13"),  _T("Y"));
	if(m_bcrvlKhong)
		rptHeader->SetValue(_T("14"),  _T("Y"));
	if(m_bLoaiI)
		rptHeader->SetValue(_T("15"),  _T("Y"));
	if(m_bLoaiII)
		rptHeader->SetValue(_T("16"),  _T("Y"));
	if(m_bLoaiIII)
		rptHeader->SetValue(_T("17"),  _T("Y"));
	if(m_btlrmCo)
		rptHeader->SetValue(_T("18"), _T("Y"));
	if(m_btlrmKhong)
		rptHeader->SetValue(_T("19"),  _T("Y"));
	if(m_bDay)
		rptHeader->SetValue(_T("20"),  _T("Y"));
	if(m_bMong)
		rptHeader->SetValue(_T("21"),  _T("Y"));
	if(m_bCao)
		rptHeader->SetValue(_T("22"), _T("Y"));
	if(m_bdcTrungbinh)
		rptHeader->SetValue(_T("23"),  _T("Y"));
	rptHeader->SetValue(_T("ChanDoan"),  m_szChanDoan);
	if(m_bThuong)
		rptHeader->SetValue(_T("24"),  _T("Y"));
	if(m_bPhauThuat)
		rptHeader->SetValue(_T("25"),  _T("Y"));
	if(m_bTucThi)
		rptHeader->SetValue(_T("26"),  _T("Y"));
	if(m_bSom)	
		rptHeader->SetValue(_T("27"),  _T("Y"));
	if(m_bMuon)
		rptHeader->SetValue(_T("28"),  _T("Y"));
	if(m_bKin)
		rptHeader->SetValue(_T("29"), _T("Y"));
	if(m_bHo)
		rptHeader->SetValue(_T("30"),  _T("Y"));
	if(m_bBlock)
		rptHeader->SetValue(_T("31"),  _T("Y"));
	if(m_bMangTitan)
		rptHeader->SetValue(_T("32"),  _T("Y"));*/
	

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
} 
bool CHMS_OBAKhoaRang2::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnEditHMS_OBAKhoaRang2();
	return true;
} 
int CHMS_OBAKhoaRang2::OnAddHMS_OBAKhoaRang2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBAKhoaRang2::OnEditHMS_OBAKhoaRang2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBAKhoaRang2::OnDeleteHMS_OBAKhoaRang2(){
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
 		OnCancelHMS_OBAKhoaRang2();
 	}
	return 0;
}
int CHMS_OBAKhoaRang2::OnSaveHMS_OBAKhoaRang2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	//////////////////////////////////////////
	//bool res =  CHMSBenhAnView::PostData();
	//return result
	//return (int) res;
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

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("KhoaRang2"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
		SetMode(VM_VIEW);
	else
		return -1;
	return ret;
}
int CHMS_OBAKhoaRang2::OnCancelHMS_OBAKhoaRang2(){
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
int CHMS_OBAKhoaRang2::OnHMS_OBAKhoaRang2ListLoadData(){
	return 0;
}

void CHMS_OBAKhoaRang2::OnCancelSelect()
{
	OnCancelHMS_OBAKhoaRang2();
}