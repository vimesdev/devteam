#include "HMS_OBAChuyenKhoaXaTriXaPhau.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnHutThuocSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnHutThuocSelect();
}
/*static void _OnNamChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNamChange();
} */
/*static void _OnNamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNamSetfocus();} */ 
/*static void _OnNamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNamKillfocus();
} */
static int _OnNamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNamCheckValue();
} 
static void _OnUongRuouBiaSelectFnc(CWnd *pWnd){
	 ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnUongRuouBiaSelect();
}
/*static void _OnNam1ChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNam1Change();
} */
/*static void _OnNam1SetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNam1Setfocus();} */ 
/*static void _OnNam1KillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNam1Killfocus();
} */
static int _OnNam1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNam1CheckValue();
} 
/*static void _OnNgheNghiepChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNgheNghiepChange();
} */
/*static void _OnNgheNghiepSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNgheNghiepSetfocus();} */ 
/*static void _OnNgheNghiepKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNgheNghiepKillfocus();
} */
static int _OnNgheNghiepCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNgheNghiepCheckValue();
} 
/*static void _OnTienSuGDChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTienSuGDChange();
} */
/*static void _OnTienSuGDSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTienSuGDSetfocus();} */ 
/*static void _OnTienSuGDKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTienSuGDKillfocus();
} */
static int _OnTienSuGDCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTienSuGDCheckValue();
} 
/*static void _OnKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKhacChange();
} */
/*static void _OnKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKhacSetfocus();} */ 
/*static void _OnKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKhacKillfocus();
} */
static int _OnKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKhacCheckValue();
} 
/*static void _OnECOGChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnECOGChange();
} */
/*static void _OnECOGSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnECOGSetfocus();} */ 
/*static void _OnECOGKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnECOGKillfocus();
} */
static int _OnECOGCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnECOGCheckValue();
} 
/*static void _OnKPSChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKPSChange();
} */
/*static void _OnKPSSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKPSSetfocus();} */ 
/*static void _OnKPSKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKPSKillfocus();
} */
static int _OnKPSCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnKPSCheckValue();
} 
/*static void _OnNangChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNangChange();
} */
/*static void _OnNangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNangSetfocus();} */ 
/*static void _OnNangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNangKillfocus();
} */
static int _OnNangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnNangCheckValue();
} 
/*static void _OnCaoChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCaoChange();
} */
/*static void _OnCaoSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCaoSetfocus();} */ 
/*static void _OnCaoKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCaoKillfocus();
} */
static int _OnCaoCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCaoCheckValue();
} 
/*static void _OnTrieuChungLamSangChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTrieuChungLamSangChange();
} */
/*static void _OnTrieuChungLamSangSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTrieuChungLamSangSetfocus();} */ 
/*static void _OnTrieuChungLamSangKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTrieuChungLamSangKillfocus();
} */
static int _OnTrieuChungLamSangCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnTrieuChungLamSangCheckValue();
} 
/*static void _OnCoQuanBenhLyChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCoQuanBenhLyChange();
} */
/*static void _OnCoQuanBenhLySetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCoQuanBenhLySetfocus();} */ 
/*static void _OnCoQuanBenhLyKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCoQuanBenhLyKillfocus();
} */
static int _OnCoQuanBenhLyCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCoQuanBenhLyCheckValue();
} 
/*static void _OnCacXetNghiemCanLuuYChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCacXetNghiemCanLuuYChange();
} */
/*static void _OnCacXetNghiemCanLuuYSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCacXetNghiemCanLuuYSetfocus();} */ 
/*static void _OnCacXetNghiemCanLuuYKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCacXetNghiemCanLuuYKillfocus();
} */
static int _OnCacXetNghiemCanLuuYCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnCacXetNghiemCanLuuYCheckValue();
} 
/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnChanDoanCheckValue();
} 
/*static void _OnPPDTTruocChangeFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnPPDTTruocChange();
} */
/*static void _OnPPDTTruocSetfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnPPDTTruocSetfocus();} */ 
/*static void _OnPPDTTruocKillfocusFnc(CWnd *pWnd){
	((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnPPDTTruocKillfocus();
} */
static int _OnPPDTTruocCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd)->OnPPDTTruocCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBAChuyenKhoaXaTriXaPhau *pVw = (CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBAChuyenKhoaXaTriXaPhau *pVw = (CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBAChuyenKhoaXaTriXaPhau *pVw = (CHMS_OBAChuyenKhoaXaTriXaPhau *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBAChuyenKhoaXaTriXaPhauFnc(CWnd *pWnd){
	 return ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnAddHMS_OBAChuyenKhoaXaTriXaPhau();
} 
static int _OnEditHMS_OBAChuyenKhoaXaTriXaPhauFnc(CWnd *pWnd){
	 return ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnEditHMS_OBAChuyenKhoaXaTriXaPhau();
} 
static int _OnDeleteHMS_OBAChuyenKhoaXaTriXaPhauFnc(CWnd *pWnd){
	 return ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnDeleteHMS_OBAChuyenKhoaXaTriXaPhau();
} 
static int _OnSaveHMS_OBAChuyenKhoaXaTriXaPhauFnc(CWnd *pWnd){
	 return ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnSaveHMS_OBAChuyenKhoaXaTriXaPhau();
} 
static int _OnCancelHMS_OBAChuyenKhoaXaTriXaPhauFnc(CWnd *pWnd){
	 return ((CHMS_OBAChuyenKhoaXaTriXaPhau*)pWnd)->OnCancelHMS_OBAChuyenKhoaXaTriXaPhau();
} 
CHMS_OBAChuyenKhoaXaTriXaPhau::CHMS_OBAChuyenKhoaXaTriXaPhau(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();

	m_szRecordType = _T("OBA_XATRI");
}
CHMS_OBAChuyenKhoaXaTriXaPhau::~CHMS_OBAChuyenKhoaXaTriXaPhau(){
}
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCreateComponents(){
	

	m_wndTitle.Create(this, _T("B.PH\x1EA6N KH\xC1M \x43HUY\xCAN KHO\x41 \x58\x1EA0 TR\x1ECA - \x58\x1EA0 PH\x1EAAU"), 5, 5, 335, 30);
	m_wndTienSu.Create(this, _T("1.Ti\x1EC1n s\x1EED"), 5, 35, 85, 60);
	m_wndHutThuoc.Create(this, _T("H\xFAt thu\x1ED1\x63"), 90, 35, 190, 60);
	m_wndNamLabel.Create(this, _T("n\x103m"), 370, 35, 410, 60);
	m_wndNam.Create(this,195, 35, 365, 60); 
	m_wndUongRuouBia.Create(this, _T("U\x1ED1ng r\x1B0\x1EE3u \x62i\x61"), 415, 35, 535, 60);
	m_wndNam1Label.Create(this, _T("n\x103m"), 705, 35, 785, 60);
	m_wndNam1.Create(this,540, 35, 700, 60); 
	m_wndNgheNghiepLabel.Create(this, _T("Ngh\x1EC1 nghi\x1EC7p"), 90, 65, 190, 90);
	m_wndNgheNghiep.Create(this,195, 65, 410, 90); 
	m_wndTienSuGDLabel.Create(this, _T("Ti\x1EC1n s\x1EED gi\x61 \x111\xECnh"), 415, 65, 535, 90);
	m_wndTienSuGD.Create(this,540, 65, 785, 90); 
	m_wndKhacLabel.Create(this, _T("Kh\xE1\x63"), 90, 95, 190, 120);
	m_wndKhac.Create(this,195, 95, 785, 120); 
	m_wndToanTrang.Create(this, _T("To\xE0n tr\x1EA1ng"), 5, 125, 85, 150);
	m_wndECOGLabel.Create(this, _T("ECOG"), 90, 125, 190, 150);
	m_wndECOG.Create(this,195, 125, 410, 150); 
	m_wndKPSLabel.Create(this, _T("KPS"), 415, 125, 535, 150);
	m_wndKPS.Create(this,540, 125, 785, 150); 
	m_wndNangLabel.Create(this, _T("N\x1EB7ng"), 90, 155, 190, 180);
	m_wndNang.Create(this,195, 155, 365, 180); 
	m_wndKg.Create(this, _T("kg"), 371, 155, 411, 180);
	m_wndCaoLabel.Create(this, _T("Cao"), 415, 155, 535, 180);
	m_wndCao.Create(this,540, 155, 700, 180); 
	m_wndCm.Create(this, _T("cm"), 705, 155, 785, 180);
	m_wndKham.Create(this, _T("2.Kh\xE1m"), 5, 185, 85, 210);
	m_wndTrieuChungLamSangLabel.Create(this, _T("2.1 Tri\x1EC7u \x63h\x1EE9ng l\xE2m s\xE0ng"), 5, 215, 255, 240);
	m_wndTrieuChungLamSang.Create(this,5, 245, 785, 295,1,0,1); 
	m_wndCoQuanBenhLyLabel.Create(this, _T("2.2 \x43\x1A1 qu\x61n \x62\x1EC7nh l\xFD"), 5, 300, 255, 325);
	m_wndCoQuanBenhLy.Create(this,5, 330, 785, 380,1,0,1); 
	m_wndCacXetNghiemCanLuuYLabel.Create(this, _T("3. \x43\xE1\x63 \x78\xE9t nghi\x1EC7m \x63\x1EA7n l\x1B0u \xFD"), 5, 385, 255, 410);
	m_wndCacXetNghiemCanLuuY.Create(this,5, 415, 785, 465,1,0,1); 
	m_wndChanDoanLabel.Create(this, _T("4. \x43h\x1EA9n \x111o\xE1n"), 5, 470, 255, 495);
	m_wndChanDoan.Create(this,5, 500, 785, 550,1,0,1); 
	m_wndPPDTTruocLabel.Create(this, _T("5. \x43\xE1\x63 ph\x1B0\x1A1ng ph\xE1p \x111i\x1EC1u tr\x1ECB tr\x1B0\x1EDB\x63 \x111\xF3"), 5, 555, 255, 580);
	m_wndPPDTTruoc.Create(this,5, 585, 785, 635,1,0,1); 
	
}
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndNam.SetLimitText(35);
	m_wndNam.SetCheckValue(true);
	m_wndNam1.SetLimitText(35);
	m_wndNam1.SetCheckValue(true);
	m_wndNgheNghiep.SetLimitText(35);
	m_wndNgheNghiep.SetCheckValue(true);
	m_wndTienSuGD.SetLimitText(35);
	m_wndTienSuGD.SetCheckValue(true);
	m_wndKhac.SetLimitText(35);
	m_wndKhac.SetCheckValue(true);
	m_wndECOG.SetLimitText(35);
	m_wndECOG.SetCheckValue(true);
	m_wndKPS.SetLimitText(35);
	m_wndKPS.SetCheckValue(true);
	m_wndNang.SetLimitText(35);
	m_wndNang.SetCheckValue(true);
	m_wndCao.SetLimitText(35);
	m_wndCao.SetCheckValue(true);
	m_wndTrieuChungLamSang.SetLimitText(35);
	m_wndTrieuChungLamSang.SetCheckValue(true);
	m_wndCoQuanBenhLy.SetLimitText(35);
	m_wndCoQuanBenhLy.SetCheckValue(true);
	m_wndCacXetNghiemCanLuuY.SetLimitText(35);
	m_wndCacXetNghiemCanLuuY.SetCheckValue(true);
	m_wndChanDoan.SetLimitText(35);
	m_wndChanDoan.SetCheckValue(true);
	m_wndPPDTTruoc.SetLimitText(35);
	m_wndPPDTTruoc.SetCheckValue(true);*/

}
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHutThuoc.SetEvent(WE_CLICK, _OnHutThuocSelectFnc);
	//m_wndNam.SetEvent(WE_CHANGE, _OnNamChangeFnc);
	//m_wndNam.SetEvent(WE_SETFOCUS, _OnNamSetfocusFnc);
	//m_wndNam.SetEvent(WE_KILLFOCUS, _OnNamKillfocusFnc);
	m_wndNam.SetEvent(WE_CHECKVALUE, _OnNamCheckValueFnc);
	m_wndUongRuouBia.SetEvent(WE_CLICK, _OnUongRuouBiaSelectFnc);
	//m_wndNam1.SetEvent(WE_CHANGE, _OnNam1ChangeFnc);
	//m_wndNam1.SetEvent(WE_SETFOCUS, _OnNam1SetfocusFnc);
	//m_wndNam1.SetEvent(WE_KILLFOCUS, _OnNam1KillfocusFnc);
	m_wndNam1.SetEvent(WE_CHECKVALUE, _OnNam1CheckValueFnc);
	//m_wndNgheNghiep.SetEvent(WE_CHANGE, _OnNgheNghiepChangeFnc);
	//m_wndNgheNghiep.SetEvent(WE_SETFOCUS, _OnNgheNghiepSetfocusFnc);
	//m_wndNgheNghiep.SetEvent(WE_KILLFOCUS, _OnNgheNghiepKillfocusFnc);
	m_wndNgheNghiep.SetEvent(WE_CHECKVALUE, _OnNgheNghiepCheckValueFnc);
	//m_wndTienSuGD.SetEvent(WE_CHANGE, _OnTienSuGDChangeFnc);
	//m_wndTienSuGD.SetEvent(WE_SETFOCUS, _OnTienSuGDSetfocusFnc);
	//m_wndTienSuGD.SetEvent(WE_KILLFOCUS, _OnTienSuGDKillfocusFnc);
	m_wndTienSuGD.SetEvent(WE_CHECKVALUE, _OnTienSuGDCheckValueFnc);
	//m_wndKhac.SetEvent(WE_CHANGE, _OnKhacChangeFnc);
	//m_wndKhac.SetEvent(WE_SETFOCUS, _OnKhacSetfocusFnc);
	//m_wndKhac.SetEvent(WE_KILLFOCUS, _OnKhacKillfocusFnc);
	m_wndKhac.SetEvent(WE_CHECKVALUE, _OnKhacCheckValueFnc);
	//m_wndECOG.SetEvent(WE_CHANGE, _OnECOGChangeFnc);
	//m_wndECOG.SetEvent(WE_SETFOCUS, _OnECOGSetfocusFnc);
	//m_wndECOG.SetEvent(WE_KILLFOCUS, _OnECOGKillfocusFnc);
	m_wndECOG.SetEvent(WE_CHECKVALUE, _OnECOGCheckValueFnc);
	//m_wndKPS.SetEvent(WE_CHANGE, _OnKPSChangeFnc);
	//m_wndKPS.SetEvent(WE_SETFOCUS, _OnKPSSetfocusFnc);
	//m_wndKPS.SetEvent(WE_KILLFOCUS, _OnKPSKillfocusFnc);
	m_wndKPS.SetEvent(WE_CHECKVALUE, _OnKPSCheckValueFnc);
	//m_wndNang.SetEvent(WE_CHANGE, _OnNangChangeFnc);
	//m_wndNang.SetEvent(WE_SETFOCUS, _OnNangSetfocusFnc);
	//m_wndNang.SetEvent(WE_KILLFOCUS, _OnNangKillfocusFnc);
	m_wndNang.SetEvent(WE_CHECKVALUE, _OnNangCheckValueFnc);
	//m_wndCao.SetEvent(WE_CHANGE, _OnCaoChangeFnc);
	//m_wndCao.SetEvent(WE_SETFOCUS, _OnCaoSetfocusFnc);
	//m_wndCao.SetEvent(WE_KILLFOCUS, _OnCaoKillfocusFnc);
	m_wndCao.SetEvent(WE_CHECKVALUE, _OnCaoCheckValueFnc);
	//m_wndTrieuChungLamSang.SetEvent(WE_CHANGE, _OnTrieuChungLamSangChangeFnc);
	//m_wndTrieuChungLamSang.SetEvent(WE_SETFOCUS, _OnTrieuChungLamSangSetfocusFnc);
	//m_wndTrieuChungLamSang.SetEvent(WE_KILLFOCUS, _OnTrieuChungLamSangKillfocusFnc);
	m_wndTrieuChungLamSang.SetEvent(WE_CHECKVALUE, _OnTrieuChungLamSangCheckValueFnc);
	//m_wndCoQuanBenhLy.SetEvent(WE_CHANGE, _OnCoQuanBenhLyChangeFnc);
	//m_wndCoQuanBenhLy.SetEvent(WE_SETFOCUS, _OnCoQuanBenhLySetfocusFnc);
	//m_wndCoQuanBenhLy.SetEvent(WE_KILLFOCUS, _OnCoQuanBenhLyKillfocusFnc);
	m_wndCoQuanBenhLy.SetEvent(WE_CHECKVALUE, _OnCoQuanBenhLyCheckValueFnc);
	//m_wndCacXetNghiemCanLuuY.SetEvent(WE_CHANGE, _OnCacXetNghiemCanLuuYChangeFnc);
	//m_wndCacXetNghiemCanLuuY.SetEvent(WE_SETFOCUS, _OnCacXetNghiemCanLuuYSetfocusFnc);
	//m_wndCacXetNghiemCanLuuY.SetEvent(WE_KILLFOCUS, _OnCacXetNghiemCanLuuYKillfocusFnc);
	m_wndCacXetNghiemCanLuuY.SetEvent(WE_CHECKVALUE, _OnCacXetNghiemCanLuuYCheckValueFnc);
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	//m_wndPPDTTruoc.SetEvent(WE_CHANGE, _OnPPDTTruocChangeFnc);
	//m_wndPPDTTruoc.SetEvent(WE_SETFOCUS, _OnPPDTTruocSetfocusFnc);
	//m_wndPPDTTruoc.SetEvent(WE_KILLFOCUS, _OnPPDTTruocKillfocusFnc);
	m_wndPPDTTruoc.SetEvent(WE_CHECKVALUE, _OnPPDTTruocCheckValueFnc);
	
	GetDataToScreen();

	SetScrollSizes(MM_TEXT, CSize(700, 700));

}
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndHutThuoc.GetDlgCtrlID(), m_bHutThuoc);
	DDX_Text(pDX, m_wndNam.GetDlgCtrlID(), m_szNam);
	DDX_Check(pDX, m_wndUongRuouBia.GetDlgCtrlID(), m_bUongRuouBia);
	DDX_Text(pDX, m_wndNam1.GetDlgCtrlID(), m_szNam1);
	DDX_Text(pDX, m_wndNgheNghiep.GetDlgCtrlID(), m_szNgheNghiep);
	DDX_Text(pDX, m_wndTienSuGD.GetDlgCtrlID(), m_szTienSuGD);
	DDX_Text(pDX, m_wndKhac.GetDlgCtrlID(), m_szKhac);
	DDX_Text(pDX, m_wndECOG.GetDlgCtrlID(), m_szECOG);
	DDX_Text(pDX, m_wndKPS.GetDlgCtrlID(), m_szKPS);
	DDX_Text(pDX, m_wndNang.GetDlgCtrlID(), m_szNang);
	DDX_Text(pDX, m_wndCao.GetDlgCtrlID(), m_szCao);
	DDX_Text(pDX, m_wndTrieuChungLamSang.GetDlgCtrlID(), m_szTrieuChungLamSang);
	DDX_Text(pDX, m_wndCoQuanBenhLy.GetDlgCtrlID(), m_szCoQuanBenhLy);
	DDX_Text(pDX, m_wndCacXetNghiemCanLuuY.GetDlgCtrlID(), m_szCacXetNghiemCanLuuY);
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Text(pDX, m_wndPPDTTruoc.GetDlgCtrlID(), m_szPPDTTruoc);

}
void CHMS_OBAChuyenKhoaXaTriXaPhau::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("HutThuoc")] =  m_bHutThuoc;
	m_jData[_T("Nam")] =  m_szNam;
	m_jData[_T("UongRuouBia")] =  m_bUongRuouBia;
	m_jData[_T("Nam1")] =  m_szNam1;
	m_jData[_T("NgheNghiep")] =  m_szNgheNghiep;
	m_jData[_T("TienSuGD")] =  m_szTienSuGD;
	m_jData[_T("Khac")] =  m_szKhac;
	m_jData[_T("ECOG")] =  m_szECOG;
	m_jData[_T("KPS")] =  m_szKPS;
	m_jData[_T("Nang")] =  m_szNang;
	m_jData[_T("Cao")] =  m_szCao;
	m_jData[_T("TrieuChungLamSang")] =  m_szTrieuChungLamSang;
	m_jData[_T("CoQuanBenhLy")] =  m_szCoQuanBenhLy;
	m_jData[_T("CacXetNghiemCanLuuY")] =  m_szCacXetNghiemCanLuuY;
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	m_jData[_T("PPDTTruoc")] =  m_szPPDTTruoc;
	}
	else
	{
			
	m_jData[_T("HutThuoc")].GetValue(m_bHutThuoc);
	m_jData[_T("Nam")].GetValue(m_szNam);
	m_jData[_T("UongRuouBia")].GetValue(m_bUongRuouBia);
	m_jData[_T("Nam1")].GetValue(m_szNam1);
	m_jData[_T("NgheNghiep")].GetValue(m_szNgheNghiep);
	m_jData[_T("TienSuGD")].GetValue(m_szTienSuGD);
	m_jData[_T("Khac")].GetValue(m_szKhac);
	m_jData[_T("ECOG")].GetValue(m_szECOG);
	m_jData[_T("KPS")].GetValue(m_szKPS);
	m_jData[_T("Nang")].GetValue(m_szNang);
	m_jData[_T("Cao")].GetValue(m_szCao);
	m_jData[_T("TrieuChungLamSang")].GetValue(m_szTrieuChungLamSang);
	m_jData[_T("CoQuanBenhLy")].GetValue(m_szCoQuanBenhLy);
	m_jData[_T("CacXetNghiemCanLuuY")].GetValue(m_szCacXetNghiemCanLuuY);
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	m_jData[_T("PPDTTruoc")].GetValue(m_szPPDTTruoc);
	}

}
void CHMS_OBAChuyenKhoaXaTriXaPhau::GetDataToScreen(){

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
				_T(" WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "),  pMF->m_nDocNo, m_szRecordType, i );
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
		
	}
	SetMode(VM_VIEW);

}
void CHMS_OBAChuyenKhoaXaTriXaPhau::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBAChuyenKhoaXaTriXaPhau::SetDefaultValues(){

	m_bHutThuoc=FALSE;
	m_szNam.Empty();
	m_bUongRuouBia=FALSE;
	m_szNam1.Empty();
	m_szNgheNghiep.Empty();
	m_szTienSuGD.Empty();
	m_szKhac.Empty();
	m_szECOG.Empty();
	m_szKPS.Empty();
	m_szNang.Empty();
	m_szCao.Empty();
	m_szTrieuChungLamSang.Empty();
	m_szCoQuanBenhLy.Empty();
	m_szCacXetNghiemCanLuuY.Empty();
	m_szChanDoan.Empty();
	m_szPPDTTruoc.Empty();

}
int CHMS_OBAChuyenKhoaXaTriXaPhau::SetMode(int nMode){
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
	void CHMS_OBAChuyenKhoaXaTriXaPhau::OnHutThuocSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNamChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNamSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNamKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnNamCheckValue(){
	return 0;
} 
	void CHMS_OBAChuyenKhoaXaTriXaPhau::OnUongRuouBiaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNam1Change(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNam1Setfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNam1Killfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnNam1CheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNgheNghiepChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNgheNghiepSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNgheNghiepKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnNgheNghiepCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTienSuGDChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTienSuGDSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTienSuGDKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnTienSuGDCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKhacChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKhacSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKhacKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnECOGChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnECOGSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnECOGKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnECOGCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKPSChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKPSSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnKPSKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnKPSCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNangChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNangSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnNangKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnNangCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCaoChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCaoSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCaoKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnCaoCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTrieuChungLamSangChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTrieuChungLamSangSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnTrieuChungLamSangKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnTrieuChungLamSangCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCoQuanBenhLyChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCoQuanBenhLySetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCoQuanBenhLyKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnCoQuanBenhLyCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCacXetNghiemCanLuuYChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCacXetNghiemCanLuuYSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCacXetNghiemCanLuuYKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnCacXetNghiemCanLuuYCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnChanDoanChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnChanDoanSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnChanDoanKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnChanDoanCheckValue(){
	return 0;
} 
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnPPDTTruocChange(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnPPDTTruocSetfocus(){
	
} */
/*void CHMS_OBAChuyenKhoaXaTriXaPhau::OnPPDTTruocKillfocus(){
	
} */
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnPPDTTruocCheckValue(){
	return 0;
} 
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBAChuyenKhoaXaTriXaPhau();
} 
void CHMS_OBAChuyenKhoaXaTriXaPhau::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBAChuyenKhoaXaTriXaPhau.RPT"));
	return;

	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBAChuyenKhoaXaTriXaPhau.RPT")))
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
	if(m_bHutThuoc)
		rptHeader->SetValue(_T("24"), _T("Y"));
	rptHeader->SetValue(_T("Nam"),  m_szNam);
	if(m_bUongRuouBia)
		rptHeader->SetValue(_T("25"),  _T("Y"));
	
	rptHeader->SetValue(_T("Nam1"),  m_szNam1);
	rptHeader->SetValue(_T("NgheNghiep"),  m_szNgheNghiep);
	rptHeader->SetValue(_T("TienSuGD"),  m_szTienSuGD);
	rptHeader->SetValue(_T("Khac"), m_szKhac);
	rptHeader->SetValue(_T("ECOG"),  m_szECOG);
	rptHeader->SetValue(_T("KPS"),  m_szKPS);
	rptHeader->SetValue(_T("Nang"),  m_szNang);
	rptHeader->SetValue(_T("Cao"),  m_szCao);
	rptHeader->SetValue(_T("TrieuChungLamSang"),  m_szTrieuChungLamSang);
	rptHeader->SetValue(_T("CoQuanBenhLy"), m_szCoQuanBenhLy);
	rptHeader->SetValue(_T("CacXetNghiemCanLuuY"),  m_szCacXetNghiemCanLuuY);
	rptHeader->SetValue(_T("ChanDoan"), m_szChanDoan);
	rptHeader->SetValue(_T("PPDTTruoc"),  m_szPPDTTruoc);
	
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
bool CHMS_OBAChuyenKhoaXaTriXaPhau::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBAChuyenKhoaXaTriXaPhau();
	return true;
} 
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnAddHMS_OBAChuyenKhoaXaTriXaPhau(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnEditHMS_OBAChuyenKhoaXaTriXaPhau(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnDeleteHMS_OBAChuyenKhoaXaTriXaPhau(){
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
 		OnCancelHMS_OBAChuyenKhoaXaTriXaPhau();
 	}
	return 0;
}
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnSaveHMS_OBAChuyenKhoaXaTriXaPhau(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	//////////////////////////////////////////
	bool res =  CHMSBenhAnView::PostData();
	
	return (int) res;
	//////////////////////////////////////////
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"),  pMF->m_nDocNo, m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType, pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("XaTriXaPhau"), tmpStr);
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
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnCancelHMS_OBAChuyenKhoaXaTriXaPhau(){
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
int CHMS_OBAChuyenKhoaXaTriXaPhau::OnHMS_OBAChuyenKhoaXaTriXaPhauListLoadData(){
	return 0;
}


void CHMS_OBAChuyenKhoaXaTriXaPhau::OnCancelSelect()
{
	OnCancelHMS_OBAChuyenKhoaXaTriXaPhau();
}