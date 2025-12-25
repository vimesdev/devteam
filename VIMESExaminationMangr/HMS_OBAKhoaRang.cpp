#include "HMS_OBAKhoaRang.h"
#include "MainFrm.h"
#include "ReportDocument.h"

/*static void _OnHoVaTenChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnHoVaTenChange();
} */
/*static void _OnHoVaTenSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnHoVaTenSetfocus();} */ 
/*static void _OnHoVaTenKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnHoVaTenKillfocus();
} */
static int _OnHoVaTenCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnHoVaTenCheckValue();
} 
/*static void _OnNamSinhChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNamSinhChange();
} */
/*static void _OnNamSinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNamSinhSetfocus();} */ 
/*static void _OnNamSinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNamSinhKillfocus();
} */
static int _OnNamSinhCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnNamSinhCheckValue();
} 
static void _OnGioiTinhSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_OBAKhoaRang* )pWnd)->OnGioiTinhSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGioiTinhSelendokFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnGioiTinhSelendok();
}
/*static void _OnGioiTinhSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnGioiTinhKillfocus();
}*/
/*static void _OnGioiTinhKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnGioiTinhKillfocus();
}*/
static long _OnGioiTinhLoadDataFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnGioiTinhLoadData();
}
/*static void _OnGioiTinhAddNewFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnGioiTinhAddNew();
}*/
static void _OnCapBacSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_OBAKhoaRang* )pWnd)->OnCapBacSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCapBacSelendokFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnCapBacSelendok();
}
/*static void _OnCapBacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnCapBacKillfocus();
}*/
/*static void _OnCapBacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnCapBacKillfocus();
}*/
static long _OnCapBacLoadDataFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnCapBacLoadData();
}
/*static void _OnCapBacAddNewFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnCapBacAddNew();
}*/
static void _OnChucVuSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_OBAKhoaRang* )pWnd)->OnChucVuSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnChucVuSelendokFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChucVuSelendok();
}
/*static void _OnChucVuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChucVuKillfocus();
}*/
/*static void _OnChucVuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChucVuKillfocus();
}*/
static long _OnChucVuLoadDataFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnChucVuLoadData();
}
/*static void _OnChucVuAddNewFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChucVuAddNew();
}*/
static void _OnDoiTuongSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_OBAKhoaRang* )pWnd)->OnDoiTuongSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoiTuongSelendokFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDoiTuongSelendok();
}
/*static void _OnDoiTuongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDoiTuongKillfocus();
}*/
/*static void _OnDoiTuongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDoiTuongKillfocus();
}*/
static long _OnDoiTuongLoadDataFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnDoiTuongLoadData();
}
/*static void _OnDoiTuongAddNewFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDoiTuongAddNew();
}*/
/*static void _OnDonViChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDonViChange();
} */
/*static void _OnDonViSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDonViSetfocus();} */ 
/*static void _OnDonViKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDonViKillfocus();
} */
static int _OnDonViCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnDonViCheckValue();
} 
/*static void _OnSoTheBHYTChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoTheBHYTChange();
} */
/*static void _OnSoTheBHYTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoTheBHYTSetfocus();} */ 
/*static void _OnSoTheBHYTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoTheBHYTKillfocus();
} */
static int _OnSoTheBHYTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnSoTheBHYTCheckValue();
} 
/*static void _OnDiaChiChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChiChange();
} */
/*static void _OnDiaChiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChiSetfocus();} */ 
/*static void _OnDiaChiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChiKillfocus();
} */
static int _OnDiaChiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnDiaChiCheckValue();
} 
/*static void _OnNgayGioVaoVienChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNgayGioVaoVienChange();
} */
/*static void _OnNgayGioVaoVienSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNgayGioVaoVienSetfocus();} */ 
/*static void _OnNgayGioVaoVienKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnNgayGioVaoVienKillfocus();
} */
static int _OnNgayGioVaoVienCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnNgayGioVaoVienCheckValue();
} 
/*static void _OnDiaChi2ChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChi2Change();
} */
/*static void _OnDiaChi2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChi2Setfocus();} */ 
/*static void _OnDiaChi2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnDiaChi2Killfocus();
} */
static int _OnDiaChi2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnDiaChi2CheckValue();
} 
/*static void _OnSoDTChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoDTChange();
} */
/*static void _OnSoDTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoDTSetfocus();} */ 
/*static void _OnSoDTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnSoDTKillfocus();
} */
static int _OnSoDTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnSoDTCheckValue();
} 
static void _OnThanhCongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang*)pWnd)->OnThanhCongSelect();
}
static void _OnThatBaiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang*)pWnd)->OnThatBaiSelect();
}
static void _OnKhacSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAKhoaRang*)pWnd)->OnKhacSelect();
}
/*static void _OnChanDoanSauPhauThuatChangeFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChanDoanSauPhauThuatChange();
} */
/*static void _OnChanDoanSauPhauThuatSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChanDoanSauPhauThuatSetfocus();} */ 
/*static void _OnChanDoanSauPhauThuatKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAKhoaRang *)pWnd)->OnChanDoanSauPhauThuatKillfocus();
} */
static int _OnChanDoanSauPhauThuatCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAKhoaRang *)pWnd)->OnChanDoanSauPhauThuatCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang *pVw = (CHMS_OBAKhoaRang *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang *pVw = (CHMS_OBAKhoaRang *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBAKhoaRang *pVw = (CHMS_OBAKhoaRang *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBAKhoaRangFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang*)pWnd)->OnAddHMS_OBAKhoaRang();
} 
static int _OnEditHMS_OBAKhoaRangFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang*)pWnd)->OnEditHMS_OBAKhoaRang();
} 
static int _OnDeleteHMS_OBAKhoaRangFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang*)pWnd)->OnDeleteHMS_OBAKhoaRang();
} 
static int _OnSaveHMS_OBAKhoaRangFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang*)pWnd)->OnSaveHMS_OBAKhoaRang();
} 
static int _OnCancelHMS_OBAKhoaRangFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRang*)pWnd)->OnCancelHMS_OBAKhoaRang();
} 
CHMS_OBAKhoaRang::CHMS_OBAKhoaRang(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szRecordType = _T("OBA_RANG");
}
CHMS_OBAKhoaRang::~CHMS_OBAKhoaRang(){
}

void CHMS_OBAKhoaRang::OnCreateComponents(){
	m_wndTitle.Create(this, _T("\x42\x1EC6NH \xC1N NGO\x1EA0I TR\xDA KHO\x41 R\x102NG (B10)"), 5, 5, 520, 30);
	m_wndHoVaTenLabel.Create(this, _T("H\x1ECD v\xE0 t\xEAn"), 5, 35, 155, 60);
	m_wndHoVaTen.Create(this,160, 35, 460, 60); 
	m_wndNamSinhLabel.Create(this, _T("N\x103m sinh"), 465, 35, 565, 60);
	m_wndNamSinh.Create(this,570, 35, 630, 60); 
	m_wndGioiTinhLabel.Create(this, _T("Gi\x1EDBi t\xEDnh"), 635, 35, 715, 60);
	m_wndGioiTinh.Create(this,720, 35, 775, 60); 
	m_wndCapBacLabel.Create(this, _T("\x43\x1EA5p \x62\x1EAD\x63"), 5, 65, 155, 90);
	m_wndCapBac.Create(this,160, 65, 260, 90); 
	m_wndChucVuLabel.Create(this, _T("\x43h\x1EE9\x63 v\x1EE5"), 265, 65, 345, 90);
	m_wndChucVu.Create(this,350, 65, 460, 90); 
	m_wndDoiTuongLabel.Create(this, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), 465, 65, 565, 90);
	m_wndDoiTuong.Create(this,570, 65, 775, 90); 
	m_wndDonViLabel.Create(this, _T("\x110\x1A1n v\x1ECB"), 5, 95, 155, 120);
	m_wndDonVi.Create(this,160, 95, 460, 120); 
	m_wndSoTheBHYTLabel.Create(this, _T("S\x1ED1 th\x1EBB BHYT"), 465, 95, 565, 120);
	m_wndSoTheBHYT.Create(this,570, 95, 775, 120); 
	m_wndDiaChiLabel.Create(this, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 5, 125, 155, 150);
	m_wndDiaChi.Create(this,160, 125, 775, 150); 
	m_wndNgayGioVaoVienLabel.Create(this, _T("Ng\xE0y gi\x1EDD v\xE0o vi\x1EC7n"), 5, 155, 155, 180);
	m_wndNgayGioVaoVien.Create(this,160, 155, 775, 180); 
	m_wndDiaChi2Label.Create(this, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 5, 185, 155, 210);
	m_wndDiaChi2.Create(this,160, 185, 775, 210); 
	m_wndSoDTLabel.Create(this, _T("S\x1ED1 \x111i\x1EC7n tho\x1EA1i"), 5, 215, 155, 240);
	m_wndSoDT.Create(this,160, 215, 460, 240); 
	m_wndChanDoanCuaKhoa.Create(this, _T("\x43h\x1EA9n \x111o\xE1n \x63\x1EE7\x61 kho\x61"), 5, 245, 155, 270);
	m_wndKetQuaDieuTri.Create(this, _T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB"), 5, 275, 155, 300);
	m_wndThanhCong.Create(this, _T("Th\xE0nh \x63\xF4ng"), 160, 275, 310, 300);
	m_wndThatBai.Create(this, _T("Th\x1EA5t \x62\x1EA1i"), 315, 275, 465, 300);
	m_wndKhac.Create(this, _T("Kh\xE1\x63"), 470, 275, 620, 300);
	m_wndChanDoanSauPhauThuatLabel.Create(this, _T("\x43h\x1EA9n \x111o\xE1n s\x61u ph\x1EABu thu\x1EADt"), 5, 305, 155, 330);
	m_wndChanDoanSauPhauThuat.Create(this,160, 305, 775, 355); 

	

}
void CHMS_OBAKhoaRang::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndHoVaTen.SetLimitText(35);
	m_wndHoVaTen.SetCheckValue(true);
	m_wndNamSinh.SetLimitText(16);
	m_wndNamSinh.SetCheckValue(true);
	m_wndGioiTinh.SetCheckValue(true);
	m_wndGioiTinh.LimitText(35);
	m_wndCapBac.SetCheckValue(true);
	m_wndCapBac.LimitText(35);
	m_wndChucVu.SetCheckValue(true);
	m_wndChucVu.LimitText(35);
	m_wndDoiTuong.SetCheckValue(true);
	m_wndDoiTuong.LimitText(35);
	m_wndDonVi.SetLimitText(35);
	m_wndDonVi.SetCheckValue(true);
	m_wndSoTheBHYT.SetLimitText(35);
	m_wndSoTheBHYT.SetCheckValue(true);
	m_wndDiaChi.SetLimitText(35);
	m_wndDiaChi.SetCheckValue(true);*/
	m_wndNgayGioVaoVien.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndNgayGioVaoVien.SetCheckValue(true);
	/*m_wndDiaChi2.SetLimitText(35);
	m_wndDiaChi2.SetCheckValue(true);
	m_wndSoDT.SetLimitText(35);
	m_wndSoDT.SetCheckValue(true);
	m_wndChanDoanSauPhauThuat.SetLimitText(35);
	m_wndChanDoanSauPhauThuat.SetCheckValue(true);*/


}
void CHMS_OBAKhoaRang::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndHoVaTen.SetEvent(WE_CHANGE, _OnHoVaTenChangeFnc);
	//m_wndHoVaTen.SetEvent(WE_SETFOCUS, _OnHoVaTenSetfocusFnc);
	//m_wndHoVaTen.SetEvent(WE_KILLFOCUS, _OnHoVaTenKillfocusFnc);
	m_wndHoVaTen.SetEvent(WE_CHECKVALUE, _OnHoVaTenCheckValueFnc);
	//m_wndNamSinh.SetEvent(WE_CHANGE, _OnNamSinhChangeFnc);
	//m_wndNamSinh.SetEvent(WE_SETFOCUS, _OnNamSinhSetfocusFnc);
	//m_wndNamSinh.SetEvent(WE_KILLFOCUS, _OnNamSinhKillfocusFnc);
	m_wndNamSinh.SetEvent(WE_CHECKVALUE, _OnNamSinhCheckValueFnc);
	m_wndGioiTinh.SetEvent(WE_SELENDOK, _OnGioiTinhSelendokFnc);
	//m_wndGioiTinh.SetEvent(WE_SETFOCUS, _OnGioiTinhSetfocusFnc);
	//m_wndGioiTinh.SetEvent(WE_KILLFOCUS, _OnGioiTinhKillfocusFnc);
	m_wndGioiTinh.SetEvent(WE_SELCHANGE, _OnGioiTinhSelectChangeFnc);
	m_wndGioiTinh.SetEvent(WE_LOADDATA, _OnGioiTinhLoadDataFnc);
	//m_wndGioiTinh.SetEvent(WE_ADDNEW, _OnGioiTinhAddNewFnc);
	m_wndCapBac.SetEvent(WE_SELENDOK, _OnCapBacSelendokFnc);
	//m_wndCapBac.SetEvent(WE_SETFOCUS, _OnCapBacSetfocusFnc);
	//m_wndCapBac.SetEvent(WE_KILLFOCUS, _OnCapBacKillfocusFnc);
	m_wndCapBac.SetEvent(WE_SELCHANGE, _OnCapBacSelectChangeFnc);
	m_wndCapBac.SetEvent(WE_LOADDATA, _OnCapBacLoadDataFnc);
	//m_wndCapBac.SetEvent(WE_ADDNEW, _OnCapBacAddNewFnc);
	m_wndChucVu.SetEvent(WE_SELENDOK, _OnChucVuSelendokFnc);
	//m_wndChucVu.SetEvent(WE_SETFOCUS, _OnChucVuSetfocusFnc);
	//m_wndChucVu.SetEvent(WE_KILLFOCUS, _OnChucVuKillfocusFnc);
	m_wndChucVu.SetEvent(WE_SELCHANGE, _OnChucVuSelectChangeFnc);
	m_wndChucVu.SetEvent(WE_LOADDATA, _OnChucVuLoadDataFnc);
	//m_wndChucVu.SetEvent(WE_ADDNEW, _OnChucVuAddNewFnc);
	m_wndDoiTuong.SetEvent(WE_SELENDOK, _OnDoiTuongSelendokFnc);
	//m_wndDoiTuong.SetEvent(WE_SETFOCUS, _OnDoiTuongSetfocusFnc);
	//m_wndDoiTuong.SetEvent(WE_KILLFOCUS, _OnDoiTuongKillfocusFnc);
	m_wndDoiTuong.SetEvent(WE_SELCHANGE, _OnDoiTuongSelectChangeFnc);
	m_wndDoiTuong.SetEvent(WE_LOADDATA, _OnDoiTuongLoadDataFnc);
	//m_wndDoiTuong.SetEvent(WE_ADDNEW, _OnDoiTuongAddNewFnc);
	//m_wndDonVi.SetEvent(WE_CHANGE, _OnDonViChangeFnc);
	//m_wndDonVi.SetEvent(WE_SETFOCUS, _OnDonViSetfocusFnc);
	//m_wndDonVi.SetEvent(WE_KILLFOCUS, _OnDonViKillfocusFnc);
	m_wndDonVi.SetEvent(WE_CHECKVALUE, _OnDonViCheckValueFnc);
	//m_wndSoTheBHYT.SetEvent(WE_CHANGE, _OnSoTheBHYTChangeFnc);
	//m_wndSoTheBHYT.SetEvent(WE_SETFOCUS, _OnSoTheBHYTSetfocusFnc);
	//m_wndSoTheBHYT.SetEvent(WE_KILLFOCUS, _OnSoTheBHYTKillfocusFnc);
	m_wndSoTheBHYT.SetEvent(WE_CHECKVALUE, _OnSoTheBHYTCheckValueFnc);
	//m_wndDiaChi.SetEvent(WE_CHANGE, _OnDiaChiChangeFnc);
	//m_wndDiaChi.SetEvent(WE_SETFOCUS, _OnDiaChiSetfocusFnc);
	//m_wndDiaChi.SetEvent(WE_KILLFOCUS, _OnDiaChiKillfocusFnc);
	m_wndDiaChi.SetEvent(WE_CHECKVALUE, _OnDiaChiCheckValueFnc);
	//m_wndNgayGioVaoVien.SetEvent(WE_CHANGE, _OnNgayGioVaoVienChangeFnc);
	//m_wndNgayGioVaoVien.SetEvent(WE_SETFOCUS, _OnNgayGioVaoVienSetfocusFnc);
	//m_wndNgayGioVaoVien.SetEvent(WE_KILLFOCUS, _OnNgayGioVaoVienKillfocusFnc);
	m_wndNgayGioVaoVien.SetEvent(WE_CHECKVALUE, _OnNgayGioVaoVienCheckValueFnc);
	//m_wndDiaChi2.SetEvent(WE_CHANGE, _OnDiaChi2ChangeFnc);
	//m_wndDiaChi2.SetEvent(WE_SETFOCUS, _OnDiaChi2SetfocusFnc);
	//m_wndDiaChi2.SetEvent(WE_KILLFOCUS, _OnDiaChi2KillfocusFnc);
	m_wndDiaChi2.SetEvent(WE_CHECKVALUE, _OnDiaChi2CheckValueFnc);
	//m_wndSoDT.SetEvent(WE_CHANGE, _OnSoDTChangeFnc);
	//m_wndSoDT.SetEvent(WE_SETFOCUS, _OnSoDTSetfocusFnc);
	//m_wndSoDT.SetEvent(WE_KILLFOCUS, _OnSoDTKillfocusFnc);
	m_wndSoDT.SetEvent(WE_CHECKVALUE, _OnSoDTCheckValueFnc);
	m_wndThanhCong.SetEvent(WE_CLICK, _OnThanhCongSelectFnc);
	m_wndThatBai.SetEvent(WE_CLICK, _OnThatBaiSelectFnc);
	m_wndKhac.SetEvent(WE_CLICK, _OnKhacSelectFnc);
	//m_wndChanDoanSauPhauThuat.SetEvent(WE_CHANGE, _OnChanDoanSauPhauThuatChangeFnc);
	//m_wndChanDoanSauPhauThuat.SetEvent(WE_SETFOCUS, _OnChanDoanSauPhauThuatSetfocusFnc);
	//m_wndChanDoanSauPhauThuat.SetEvent(WE_KILLFOCUS, _OnChanDoanSauPhauThuatKillfocusFnc);
	m_wndChanDoanSauPhauThuat.SetEvent(WE_CHECKVALUE, _OnChanDoanSauPhauThuatCheckValueFnc);

	GetDataToScreen();	
	m_wndHoVaTen.EnableWindow(FALSE);
	m_wndNamSinh.EnableWindow(FALSE);
	m_wndGioiTinh.EnableWindow(FALSE);
	m_wndCapBac.EnableWindow(FALSE);
	m_wndChucVu.EnableWindow(FALSE);
	m_wndDonVi.EnableWindow(FALSE);
	m_wndSoTheBHYT.EnableWindow(FALSE);
	m_wndDiaChi.EnableWindow(FALSE);
	m_wndDoiTuong.EnableWindow(FALSE);
	//SetScrollSizes(MM_TEXT, CSize(700, 2550));

}
void CHMS_OBAKhoaRang::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndHoVaTen.GetDlgCtrlID(), m_szHoVaTen);
	DDX_Text(pDX, m_wndNamSinh.GetDlgCtrlID(), m_nNamSinh);
	DDX_Text(pDX, m_wndGioiTinh.GetDlgCtrlID(), m_szGioiTinh);
	DDX_Text(pDX, m_wndCapBac.GetDlgCtrlID(), m_szCapBac);
	DDX_Text(pDX, m_wndChucVu.GetDlgCtrlID(), m_szChucVu);
	DDX_Text(pDX, m_wndDoiTuong.GetDlgCtrlID(), m_szDoiTuong);
	DDX_Text(pDX, m_wndDonVi.GetDlgCtrlID(), m_szDonVi);
	DDX_Text(pDX, m_wndSoTheBHYT.GetDlgCtrlID(), m_szSoTheBHYT);
	DDX_Text(pDX, m_wndDiaChi.GetDlgCtrlID(), m_szDiaChi);
	DDX_TextEx(pDX, m_wndNgayGioVaoVien.GetDlgCtrlID(), m_szNgayGioVaoVien);
	DDX_Text(pDX, m_wndDiaChi2.GetDlgCtrlID(), m_szDiaChi2);
	DDX_Text(pDX, m_wndSoDT.GetDlgCtrlID(), m_szSoDT);
	DDX_Check(pDX, m_wndThanhCong.GetDlgCtrlID(), m_bThanhCong);
	DDX_Check(pDX, m_wndThatBai.GetDlgCtrlID(), m_bThatBai);
	DDX_Check(pDX, m_wndKhac.GetDlgCtrlID(), m_bKhac);
	DDX_Text(pDX, m_wndChanDoanSauPhauThuat.GetDlgCtrlID(), m_szChanDoanSauPhauThuat);

}
void CHMS_OBAKhoaRang::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("HoVaTen")] =  m_szHoVaTen;
	m_jData[_T("NamSinh")] =  m_nNamSinh;
	m_jData[_T("GioiTinh")] =  m_szGioiTinh;
	m_jData[_T("CapBac")] =  m_szCapBac;
	m_jData[_T("ChucVu")] =  m_szChucVu;
	m_jData[_T("DoiTuong")] =  m_szDoiTuong;
	m_jData[_T("DonVi")] =  m_szDonVi;
	m_jData[_T("SoTheBHYT")] =  m_szSoTheBHYT;
	m_jData[_T("DiaChi")] =  m_szDiaChi;
	m_jData[_T("NgayGioVaoVien")] =  m_szNgayGioVaoVien;
	m_jData[_T("DiaChi2")] =  m_szDiaChi2;
	m_jData[_T("SoDT")] =  m_szSoDT;
	m_jData[_T("ThanhCong")] =  m_bThanhCong;
	m_jData[_T("ThatBai")] =  m_bThatBai;
	m_jData[_T("Khac")] =  m_bKhac;
	m_jData[_T("ChanDoanSauPhauThuat")] =  m_szChanDoanSauPhauThuat;
	}
	else
	{
			
	m_jData[_T("HoVaTen")].GetValue(m_szHoVaTen);
	m_jData[_T("NamSinh")].GetValue(m_nNamSinh);
	m_jData[_T("GioiTinh")].GetValue(m_szGioiTinh);
	m_jData[_T("CapBac")].GetValue(m_szCapBac);
	m_jData[_T("ChucVu")].GetValue(m_szChucVu);
	m_jData[_T("DoiTuong")].GetValue(m_szDoiTuong);
	m_jData[_T("DonVi")].GetValue(m_szDonVi);
	m_jData[_T("SoTheBHYT")].GetValue(m_szSoTheBHYT);
	m_jData[_T("DiaChi")].GetValue(m_szDiaChi);
	m_jData[_T("NgayGioVaoVien")].GetValue(m_szNgayGioVaoVien);
	m_jData[_T("DiaChi2")].GetValue(m_szDiaChi2);
	m_jData[_T("SoDT")].GetValue(m_szSoDT);
	m_jData[_T("ThanhCong")].GetValue(m_bThanhCong);
	m_jData[_T("ThatBai")].GetValue(m_bThatBai);
	m_jData[_T("Khac")].GetValue(m_bKhac);
	m_jData[_T("ChanDoanSauPhauThuat")].GetValue(m_szChanDoanSauPhauThuat);
	}

}
void CHMS_OBAKhoaRang::GetDataToScreen(){

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
void CHMS_OBAKhoaRang::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBAKhoaRang::SetDefaultValues(){

	m_szHoVaTen.Empty();
	m_nNamSinh=0;
	m_szGioiTinh.Empty();
	m_szCapBac.Empty();
	m_szChucVu.Empty();
	m_szDoiTuong.Empty();
	m_szDonVi.Empty();
	m_szSoTheBHYT.Empty();
	m_szDiaChi.Empty();
	m_szNgayGioVaoVien.Empty();
	m_szDiaChi2.Empty();
	m_szSoDT.Empty();
	m_bThanhCong=FALSE;
	m_bThatBai=FALSE;
	m_bKhac=FALSE;
	m_szChanDoanSauPhauThuat.Empty();

}
int CHMS_OBAKhoaRang::SetMode(int nMode){
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
			m_szNgayGioVaoVien = pMF->GetSysDateTime();
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, ") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob, ") \
					_T("       hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
					_T("       sys_sel_getname('sys_occupation', hp_occupation) as occupation, ") \
					_T("       sys_sel_getname('hms_rank', hp_rank) as rank, hd_telephone,") \
					_T("       hms_getobjectname(hd_object) as objectname,hp_workplace, hd_cardno ") \
					_T("FROM   hms_doc ") \
					_T("LEFT JOIN   hms_patient ON(hp_patientno = hd_patientno)") \
					_T("WHERE  hd_docno = %d "), pMF->m_nDocNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("yob"), m_nNamSinh);
				rs.GetValue(_T("rank"), m_szCapBac);
				rs.GetValue(_T("occupation"), m_szChucVu);
				rs.GetValue(_T("hp_workplace"), m_szDonVi);
				rs.GetValue(_T("address"), m_szDiaChi);
				rs.GetValue(_T("sex"), m_szGioiTinh);
				rs.GetValue(_T("objectname"), m_szDoiTuong);
				rs.GetValue(_T("hd_cardno"), m_szSoTheBHYT);
				rs.GetValue(_T("hd_telephone"), m_szSoDT);
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndNamSinh.EnableWindow(FALSE);
			m_wndGioiTinh.EnableWindow(FALSE);
			m_wndCapBac.EnableWindow(FALSE);
			m_wndChucVu.EnableWindow(FALSE);
			m_wndDonVi.EnableWindow(FALSE);
			m_wndSoTheBHYT.EnableWindow(FALSE);
			m_wndDiaChi.EnableWindow(FALSE);
			m_wndDoiTuong.EnableWindow(FALSE);
			
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
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob, ") \
					_T("       hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
					_T("       sys_sel_getname('sys_occupation', hp_occupation) as occupation, ") \
					_T("       sys_sel_getname('hms_rank', hp_rank) as rank, hd_telephone,") \
					_T("       hms_getobjectname(hd_object) as objectname,hp_workplace, hd_cardno ") \
					_T("FROM   hms_doc ") \
					_T("LEFT JOIN   hms_patient ON(hp_patientno = hd_patientno)") \
					_T("WHERE  hd_docno = %d "), pMF->m_nDocNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("yob"), m_nNamSinh);
				rs.GetValue(_T("rank"), m_szCapBac);
				rs.GetValue(_T("occupation"), m_szChucVu);
				rs.GetValue(_T("hp_workplace"), m_szDonVi);
				rs.GetValue(_T("address"), m_szDiaChi);
				rs.GetValue(_T("sex"), m_szGioiTinh);
				rs.GetValue(_T("objectname"), m_szDoiTuong);
				rs.GetValue(_T("hd_cardno"), m_szSoTheBHYT);
				rs.GetValue(_T("hd_telephone"), m_szSoDT);
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndNamSinh.EnableWindow(FALSE);
			m_wndGioiTinh.EnableWindow(FALSE);
			m_wndCapBac.EnableWindow(FALSE);
			m_wndChucVu.EnableWindow(FALSE);
			m_wndDonVi.EnableWindow(FALSE);
			m_wndSoTheBHYT.EnableWindow(FALSE);
			m_wndDiaChi.EnableWindow(FALSE);
			m_wndDoiTuong.EnableWindow(FALSE);
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
/*void CHMS_OBAKhoaRang::OnHoVaTenChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnHoVaTenSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnHoVaTenKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnHoVaTenCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnNamSinhChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnNamSinhSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnNamSinhKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnNamSinhCheckValue(){
	return 0;
} 
void CHMS_OBAKhoaRang::OnGioiTinhSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_OBAKhoaRang::OnGioiTinhSelendok(){
	 
}
/*void CHMS_OBAKhoaRang::OnGioiTinhSetfocus(){
	
}*/
/*void CHMS_OBAKhoaRang::OnGioiTinhKillfocus(){
	
}*/
long CHMS_OBAKhoaRang::OnGioiTinhLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGioiTinh.IsSearchKey() && !m_szGioiTinhKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGioiTinhKey
};
	m_wndGioiTinh.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGioiTinh.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMS_OBAKhoaRang::OnGioiTinhAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_OBAKhoaRang::OnCapBacSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_OBAKhoaRang::OnCapBacSelendok(){
	 
}
/*void CHMS_OBAKhoaRang::OnCapBacSetfocus(){
	
}*/
/*void CHMS_OBAKhoaRang::OnCapBacKillfocus(){
	
}*/
long CHMS_OBAKhoaRang::OnCapBacLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCapBac.IsSearchKey() && !m_szCapBacKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCapBacKey
};
	m_wndCapBac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCapBac.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMS_OBAKhoaRang::OnCapBacAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_OBAKhoaRang::OnChucVuSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_OBAKhoaRang::OnChucVuSelendok(){
	 
}
/*void CHMS_OBAKhoaRang::OnChucVuSetfocus(){
	
}*/
/*void CHMS_OBAKhoaRang::OnChucVuKillfocus(){
	
}*/
long CHMS_OBAKhoaRang::OnChucVuLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChucVu.IsSearchKey() && !m_szChucVuKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szChucVuKey
};
	m_wndChucVu.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChucVu.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMS_OBAKhoaRang::OnChucVuAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_OBAKhoaRang::OnDoiTuongSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_OBAKhoaRang::OnDoiTuongSelendok(){
	 
}
/*void CHMS_OBAKhoaRang::OnDoiTuongSetfocus(){
	
}*/
/*void CHMS_OBAKhoaRang::OnDoiTuongKillfocus(){
	
}*/
long CHMS_OBAKhoaRang::OnDoiTuongLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoiTuong.IsSearchKey() && !m_szDoiTuongKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoiTuongKey
};
	m_wndDoiTuong.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoiTuong.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMS_OBAKhoaRang::OnDoiTuongAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_OBAKhoaRang::OnDonViChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnDonViSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnDonViKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnDonViCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnSoTheBHYTChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnSoTheBHYTSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnSoTheBHYTKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnSoTheBHYTCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnDiaChiChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnDiaChiSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnDiaChiKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnDiaChiCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnNgayGioVaoVienChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnNgayGioVaoVienSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnNgayGioVaoVienKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnNgayGioVaoVienCheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnDiaChi2Change(){
	
} */
/*void CHMS_OBAKhoaRang::OnDiaChi2Setfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnDiaChi2Killfocus(){
	
} */
int CHMS_OBAKhoaRang::OnDiaChi2CheckValue(){
	return 0;
} 
/*void CHMS_OBAKhoaRang::OnSoDTChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnSoDTSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnSoDTKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnSoDTCheckValue(){
	return 0;
} 
	void CHMS_OBAKhoaRang::OnThanhCongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang::OnThatBaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBAKhoaRang::OnKhacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBAKhoaRang::OnChanDoanSauPhauThuatChange(){
	
} */
/*void CHMS_OBAKhoaRang::OnChanDoanSauPhauThuatSetfocus(){
	
} */
/*void CHMS_OBAKhoaRang::OnChanDoanSauPhauThuatKillfocus(){
	
} */
int CHMS_OBAKhoaRang::OnChanDoanSauPhauThuatCheckValue(){
	return 0;
} 
void CHMS_OBAKhoaRang::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBAKhoaRang();
} 
void CHMS_OBAKhoaRang::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBAKhoaRang.RPT"));
	return;
	
	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBAKhoaRang.RPT")))
		return;

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
	rptHeader->SetValue(_T("NamSinh"),  m_nNamSinh);
	rptHeader->SetValue(_T("GioiTinh"),  m_szGioiTinh);
	rptHeader->SetValue(_T("CapBac"),  m_szCapBac);
	rptHeader->SetValue(_T("ChucVu"), m_szChucVu);
	rptHeader->SetValue(_T("DoiTuong"), m_szDoiTuong);
	rptHeader->SetValue(_T("DonVi"), m_szDonVi);
	rptHeader->SetValue(_T("SoTheBHYT"),  m_szSoTheBHYT);
	rptHeader->SetValue(_T("DiaChi"),  m_szDiaChi);
	rptHeader->SetValue(_T("NgayGioVaoVien"), m_szNgayGioVaoVien);
	rptHeader->SetValue(_T("DiaChi2"), m_szDiaChi2);
	rptHeader->SetValue(_T("SoDT"),  m_szSoDT);
	if(m_bThanhCong)
	{
		rptHeader->SetValue(_T("1"),  _T("Y"));
	}else if(m_bThatBai){
		rptHeader->SetValue(_T("2"),  _T("Y"));
	}else
		rptHeader->SetValue(_T("3"),  _T("Y"));
	
	rptHeader->SetValue(_T("ChanDoanSauPhauThuat"),  m_szChanDoanSauPhauThuat);
	
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
bool CHMS_OBAKhoaRang::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBAKhoaRang();
	return true;
} 
int CHMS_OBAKhoaRang::OnAddHMS_OBAKhoaRang(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBAKhoaRang::OnEditHMS_OBAKhoaRang(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBAKhoaRang::OnDeleteHMS_OBAKhoaRang(){
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
 		OnCancelHMS_OBAKhoaRang();
 	}
	return 0;
}
int CHMS_OBAKhoaRang::OnSaveHMS_OBAKhoaRang(){
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

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("KhoaRang"), tmpStr);
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
int CHMS_OBAKhoaRang::OnCancelHMS_OBAKhoaRang(){
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
int CHMS_OBAKhoaRang::OnHMS_OBAKhoaRangListLoadData(){
	return 0;
}



void CHMS_OBAKhoaRang::OnCancelSelect()
{
	OnCancelHMS_OBAKhoaRang();
}