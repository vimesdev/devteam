#include "TMThongTinHoiChan.h"
#include "MainFrm.h"
static void _OnCapSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMThongTinHoiChan* )pWnd)->OnCapSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCapSelendokFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCapSelendok();
}
/*static void _OnCapSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCapKillfocus();
}*/
/*static void _OnCapKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCapKillfocus();
}*/
static long _OnCapLoadDataFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnCapLoadData();
}
/*static void _OnCapAddNewFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCapAddNew();
}*/
/*static void _OnLanChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLanChange();
} */
/*static void _OnLanSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLanSetfocus();} */ 
/*static void _OnLanKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLanKillfocus();
} */
static int _OnLanCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnLanCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDiaDiemChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDiaDiemChange();
} */
/*static void _OnDiaDiemSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDiaDiemSetfocus();} */ 
/*static void _OnDiaDiemKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDiaDiemKillfocus();
} */
static int _OnDiaDiemCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnDiaDiemCheckValue();
} 
/*static void _OnTGHoiChanChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGHoiChanChange();
} */
/*static void _OnTGHoiChanSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGHoiChanSetfocus();} */ 
/*static void _OnTGHoiChanKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGHoiChanKillfocus();
} */
static int _OnTGHoiChanCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnTGHoiChanCheckValue();
} 
static void _OnThanhVienThamGiaSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnThanhVienThamGiaSelect();
} 
/*static void _OnLyDoChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLyDoChange();
} */
/*static void _OnLyDoSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLyDoSetfocus();} */ 
/*static void _OnLyDoKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnLyDoKillfocus();
} */
static int _OnLyDoCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnLyDoCheckValue();
} 
/*static void _OnTGBatDauChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGBatDauChange();
} */
/*static void _OnTGBatDauSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGBatDauSetfocus();} */ 
/*static void _OnTGBatDauKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGBatDauKillfocus();
} */
static int _OnTGBatDauCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnTGBatDauCheckValue();
} 
/*static void _OnChuTriChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChuTriChange();
} */
/*static void _OnChuTriSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChuTriSetfocus();} */ 
/*static void _OnChuTriKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChuTriKillfocus();
} */
static int _OnChuTriCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnChuTriCheckValue();
} 
/*static void _OnThuKyChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnThuKyChange();
} */
/*static void _OnThuKySetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnThuKySetfocus();} */ 
/*static void _OnThuKyKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnThuKyKillfocus();
} */
static int _OnThuKyCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnThuKyCheckValue();
} 
/*static void _OnBenhLyChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnBenhLyChange();
} */
/*static void _OnBenhLySetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnBenhLySetfocus();} */ 
/*static void _OnBenhLyKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnBenhLyKillfocus();
} */
static int _OnBenhLyCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnBenhLyCheckValue();
} 
/*static void _OnYKienChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYKienChange();
} */
/*static void _OnYKienSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYKienSetfocus();} */ 
/*static void _OnYKienKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYKienKillfocus();
} */
static int _OnYKienCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnYKienCheckValue();
} 
/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnChanDoanCheckValue();
} 
/*static void _OnCLSThemChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCLSThemChange();
} */
/*static void _OnCLSThemSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCLSThemSetfocus();} */ 
/*static void _OnCLSThemKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnCLSThemKillfocus();
} */
static int _OnCLSThemCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnCLSThemCheckValue();
} 
/*static void _OnDieuTriChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDieuTriChange();
} */
/*static void _OnDieuTriSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDieuTriSetfocus();} */ 
/*static void _OnDieuTriKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnDieuTriKillfocus();
} */
static int _OnDieuTriCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnDieuTriCheckValue();
} 
/*static void _OnYeuCauKhacChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYeuCauKhacChange();
} */
/*static void _OnYeuCauKhacSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYeuCauKhacSetfocus();} */ 
/*static void _OnYeuCauKhacKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnYeuCauKhacKillfocus();
} */
static int _OnYeuCauKhacCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnYeuCauKhacCheckValue();
} 
/*static void _OnTGKetThucChangeFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGKetThucChange();
} */
/*static void _OnTGKetThucSetfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGKetThucSetfocus();} */ 
/*static void _OnTGKetThucKillfocusFnc(CWnd *pWnd){
	((CTMThongTinHoiChan *)pWnd)->OnTGKetThucKillfocus();
} */
static int _OnTGKetThucCheckValueFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChan *)pWnd)->OnTGKetThucCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChan *pVw = (CTMThongTinHoiChan *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddTMThongTinHoiChanFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChan*)pWnd)->OnAddTMThongTinHoiChan();
} 
static int _OnEditTMThongTinHoiChanFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChan*)pWnd)->OnEditTMThongTinHoiChan();
} 
static int _OnDeleteTMThongTinHoiChanFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChan*)pWnd)->OnDeleteTMThongTinHoiChan();
} 
static int _OnSaveTMThongTinHoiChanFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChan*)pWnd)->OnSaveTMThongTinHoiChan();
} 
static int _OnCancelTMThongTinHoiChanFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChan*)pWnd)->OnCancelTMThongTinHoiChan();
} 
CTMThongTinHoiChan::CTMThongTinHoiChan(CWnd *pParent, long nDocNo, CString szName, CString szDeptID):
	CGuiDialog(pParent){
		m_nDocumentNo = nDocNo;
		m_szPatientName = szName;
		m_szDeptID = szDeptID;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMThongTinHoiChan::~CTMThongTinHoiChan(){
}
void CTMThongTinHoiChan::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 1005, 585);
	m_wndLabelCap.Create(this, _T("Cấp"), 10, 30, 100, 55);
	m_wndCap.Create(this,105, 30, 295, 55); 
	m_wndLabelLan.Create(this, _T("Lần"), 300, 30, 360, 55);
	m_wndLan.Create(this,365, 30, 485, 55); 
	m_wndLabelDocNo.Create(this, _T("DocNo"), 490, 30, 550, 55);
	m_wndDocNo.Create(this,555, 30, 675, 55); 
	m_wndLabelName.Create(this, _T("Name"), 680, 30, 740, 55);
	m_wndName.Create(this,745, 30, 1000, 55); 
	m_wndLabelDiaDiem.Create(this, _T("Địa điểm"), 10, 60, 100, 85);
	m_wndDiaDiem.Create(this,105, 60, 485, 85); 
	m_wndLabelTGHoiChan.Create(this, _T("Ngày"), 490, 60, 570, 85);
	m_wndTGHoiChan.Create(this,575, 60, 740, 85); 
	m_wndThanhVienThamGia.Create(this, _T("Thành viên tham gia"), 745, 60, 1000, 85);
	m_wndLabelLyDo.Create(this, _T("Lý do"), 10, 90, 100, 115);
	m_wndLyDo.Create(this,105, 90, 1000, 115); 
	m_wndLabelTGBatDau.Create(this, _T("Bắt đầu lúc"), 10, 120, 100, 145);
	m_wndTGBatDau.Create(this,105, 120, 225, 145); 
	m_wndLabelChuTri.Create(this, _T("Chủ trì"), 230, 120, 310, 145);
	m_wndChuTri.Create(this,315, 120, 580, 145); 
	m_wndLabelThuKy.Create(this, _T("Thư ký"), 585, 121, 665, 146);
	m_wndThuKy.Create(this,670, 121, 1000, 146); 
	m_wndLabelBenhLy.Create(this, _T("Bệnh lý"), 10, 150, 100, 175);
	m_wndLabelBenhLy2.Create(this, _T("Quá trình"), 10, 175, 100, 200);
	m_wndLabelBenhLy3.Create(this, _T("điều trị"), 10, 200, 100, 225);
	m_wndLabelBenhLy4.Create(this, _T("và chăm sóc"), 10, 225, 100, 250);
	m_wndBenhLy.Create(this,105, 150, 1000, 250, 1, 0, 1); 
	m_wndLabelYKien.Create(this, _T("Ý kiến"), 10, 255, 100, 280);
	m_wndLabelYKien2.Create(this, _T("các thành viên"), 10, 280, 100, 305);
	m_wndLabelYKien3.Create(this, _T("tham gia"), 9, 305, 100, 330);
	m_wndLabelYKien4.Create(this, _T("hội chẩn"), 10, 330, 100, 355);
	m_wndYKien.Create(this,105, 255, 1000, 355, 1, 0, 1); 
	m_wndLabelKetLuan.Create(this, _T("Kết luận"), 10, 360, 100, 385);
	m_wndLabelChanDoan.Create(this, _T("Chẩn đoán"), 105, 360, 185, 385);
	m_wndChanDoan.Create(this,190, 360, 1000, 385, 1, 0, 1); 
	m_wndLabelCLSThem.Create(this, _T("XN, CLS"), 10, 390, 100, 415);
	m_wndLabelCLSThem2.Create(this, _T("CĐHA"), 10, 415, 100, 440);
	m_wndLabelCLSThem3.Create(this, _T("cần làm thêm"), 10, 440, 100, 465);
	m_wndCLSThem.Create(this,105, 390, 1000, 465, 1, 0, 1); 
	m_wndLabelDieuTri.Create(this, _T("Phương án"), 10, 470, 100, 495);
	m_wndLabelDieuTri2.Create(this, _T("điều trị tiếp"), 10, 495, 100, 520);
	m_wndDieuTri.Create(this,105, 470, 1000, 545, 1, 0, 1); 
	m_wndLabelYeuCauKhac.Create(this, _T("Yêu cầu khác"), 10, 550, 100, 575);
	m_wndYeuCauKhac.Create(this,105, 550, 790, 575, 1, 0, 1); 
	m_wndLabelTGKetThuc.Create(this, _T("Kết thúc lúc"), 795, 550, 875, 575);
	m_wndTGKetThuc.Create(this,880, 550, 1000, 575); 
	m_wndUpdate.Create(this, _T("Update"), 560, 590, 660, 615);
	m_wndSave.Create(this, _T("Save"), 665, 590, 745, 615);
	m_wndClose.Create(this, _T("Close"), 750, 590, 830, 615);
	m_wndPrint.Create(this, _T("Print"), 835, 590, 915, 615);
	m_wndCancel.Create(this, _T("Cancel"), 920, 590, 1000, 615);

}
void CTMThongTinHoiChan::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndCap.SetCheckValue(true);
// 	m_wndCap.LimitText(35);
//	m_wndLan.SetLimitText(16);
//	m_wndLan.SetCheckValue(true);
// 	m_wndDocNo.SetLimitText(35);
// 	m_wndDocNo.SetCheckValue(true);
// 	m_wndName.SetLimitText(35);
// 	m_wndName.SetCheckValue(true);
// 	m_wndDiaDiem.SetLimitText(35);
// 	m_wndDiaDiem.SetCheckValue(true);
// 	m_wndTGHoiChan.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndTGHoiChan.SetCheckValue(true);
// 	m_wndLyDo.SetLimitText(35);
// 	m_wndLyDo.SetCheckValue(true);
// 	m_wndTGBatDau.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndTGBatDau.SetCheckValue(true);
// 	m_wndChuTri.SetLimitText(35);
// 	m_wndChuTri.SetCheckValue(true);
// 	m_wndThuKy.SetLimitText(35);
// 	m_wndThuKy.SetCheckValue(true);
// 	m_wndBenhLy.SetLimitText(35);
// 	m_wndBenhLy.SetCheckValue(true);
// 	m_wndYKien.SetLimitText(35);
// 	m_wndYKien.SetCheckValue(true);
// 	m_wndChanDoan.SetLimitText(35);
// 	m_wndChanDoan.SetCheckValue(true);
// 	m_wndCLSThem.SetLimitText(35);
// 	m_wndCLSThem.SetCheckValue(true);
// 	m_wndDieuTri.SetLimitText(35);
// 	m_wndDieuTri.SetCheckValue(true);
// 	m_wndYeuCauKhac.SetLimitText(35);
// 	m_wndYeuCauKhac.SetCheckValue(true);
// 	m_wndTGKetThuc.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndTGKetThuc.SetCheckValue(true);

	m_wndDocNo.SetReadOnly(TRUE);
	m_wndName.SetReadOnly(TRUE);

	m_wndCap.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCap.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CTMThongTinHoiChan::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCap.SetEvent(WE_SELENDOK, _OnCapSelendokFnc);
	//m_wndCap.SetEvent(WE_SETFOCUS, _OnCapSetfocusFnc);
	//m_wndCap.SetEvent(WE_KILLFOCUS, _OnCapKillfocusFnc);
	m_wndCap.SetEvent(WE_SELCHANGE, _OnCapSelectChangeFnc);
	m_wndCap.SetEvent(WE_LOADDATA, _OnCapLoadDataFnc);
	//m_wndCap.SetEvent(WE_ADDNEW, _OnCapAddNewFnc);
	//m_wndLan.SetEvent(WE_CHANGE, _OnLanChangeFnc);
	//m_wndLan.SetEvent(WE_SETFOCUS, _OnLanSetfocusFnc);
	//m_wndLan.SetEvent(WE_KILLFOCUS, _OnLanKillfocusFnc);
	m_wndLan.SetEvent(WE_CHECKVALUE, _OnLanCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDiaDiem.SetEvent(WE_CHANGE, _OnDiaDiemChangeFnc);
	//m_wndDiaDiem.SetEvent(WE_SETFOCUS, _OnDiaDiemSetfocusFnc);
	//m_wndDiaDiem.SetEvent(WE_KILLFOCUS, _OnDiaDiemKillfocusFnc);
	m_wndDiaDiem.SetEvent(WE_CHECKVALUE, _OnDiaDiemCheckValueFnc);
	//m_wndTGHoiChan.SetEvent(WE_CHANGE, _OnTGHoiChanChangeFnc);
	//m_wndTGHoiChan.SetEvent(WE_SETFOCUS, _OnTGHoiChanSetfocusFnc);
	//m_wndTGHoiChan.SetEvent(WE_KILLFOCUS, _OnTGHoiChanKillfocusFnc);
	m_wndTGHoiChan.SetEvent(WE_CHECKVALUE, _OnTGHoiChanCheckValueFnc);
	m_wndThanhVienThamGia.SetEvent(WE_CLICK, _OnThanhVienThamGiaSelectFnc);
	//m_wndLyDo.SetEvent(WE_CHANGE, _OnLyDoChangeFnc);
	//m_wndLyDo.SetEvent(WE_SETFOCUS, _OnLyDoSetfocusFnc);
	//m_wndLyDo.SetEvent(WE_KILLFOCUS, _OnLyDoKillfocusFnc);
	m_wndLyDo.SetEvent(WE_CHECKVALUE, _OnLyDoCheckValueFnc);
	//m_wndTGBatDau.SetEvent(WE_CHANGE, _OnTGBatDauChangeFnc);
	//m_wndTGBatDau.SetEvent(WE_SETFOCUS, _OnTGBatDauSetfocusFnc);
	//m_wndTGBatDau.SetEvent(WE_KILLFOCUS, _OnTGBatDauKillfocusFnc);
	m_wndTGBatDau.SetEvent(WE_CHECKVALUE, _OnTGBatDauCheckValueFnc);
	//m_wndChuTri.SetEvent(WE_CHANGE, _OnChuTriChangeFnc);
	//m_wndChuTri.SetEvent(WE_SETFOCUS, _OnChuTriSetfocusFnc);
	//m_wndChuTri.SetEvent(WE_KILLFOCUS, _OnChuTriKillfocusFnc);
	m_wndChuTri.SetEvent(WE_CHECKVALUE, _OnChuTriCheckValueFnc);
	//m_wndThuKy.SetEvent(WE_CHANGE, _OnThuKyChangeFnc);
	//m_wndThuKy.SetEvent(WE_SETFOCUS, _OnThuKySetfocusFnc);
	//m_wndThuKy.SetEvent(WE_KILLFOCUS, _OnThuKyKillfocusFnc);
	m_wndThuKy.SetEvent(WE_CHECKVALUE, _OnThuKyCheckValueFnc);
	//m_wndBenhLy.SetEvent(WE_CHANGE, _OnBenhLyChangeFnc);
	//m_wndBenhLy.SetEvent(WE_SETFOCUS, _OnBenhLySetfocusFnc);
	//m_wndBenhLy.SetEvent(WE_KILLFOCUS, _OnBenhLyKillfocusFnc);
	m_wndBenhLy.SetEvent(WE_CHECKVALUE, _OnBenhLyCheckValueFnc);
	//m_wndYKien.SetEvent(WE_CHANGE, _OnYKienChangeFnc);
	//m_wndYKien.SetEvent(WE_SETFOCUS, _OnYKienSetfocusFnc);
	//m_wndYKien.SetEvent(WE_KILLFOCUS, _OnYKienKillfocusFnc);
	m_wndYKien.SetEvent(WE_CHECKVALUE, _OnYKienCheckValueFnc);
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	//m_wndCLSThem.SetEvent(WE_CHANGE, _OnCLSThemChangeFnc);
	//m_wndCLSThem.SetEvent(WE_SETFOCUS, _OnCLSThemSetfocusFnc);
	//m_wndCLSThem.SetEvent(WE_KILLFOCUS, _OnCLSThemKillfocusFnc);
	m_wndCLSThem.SetEvent(WE_CHECKVALUE, _OnCLSThemCheckValueFnc);
	//m_wndDieuTri.SetEvent(WE_CHANGE, _OnDieuTriChangeFnc);
	//m_wndDieuTri.SetEvent(WE_SETFOCUS, _OnDieuTriSetfocusFnc);
	//m_wndDieuTri.SetEvent(WE_KILLFOCUS, _OnDieuTriKillfocusFnc);
	m_wndDieuTri.SetEvent(WE_CHECKVALUE, _OnDieuTriCheckValueFnc);
	//m_wndYeuCauKhac.SetEvent(WE_CHANGE, _OnYeuCauKhacChangeFnc);
	//m_wndYeuCauKhac.SetEvent(WE_SETFOCUS, _OnYeuCauKhacSetfocusFnc);
	//m_wndYeuCauKhac.SetEvent(WE_KILLFOCUS, _OnYeuCauKhacKillfocusFnc);
	m_wndYeuCauKhac.SetEvent(WE_CHECKVALUE, _OnYeuCauKhacCheckValueFnc);
	//m_wndTGKetThuc.SetEvent(WE_CHANGE, _OnTGKetThucChangeFnc);
	//m_wndTGKetThuc.SetEvent(WE_SETFOCUS, _OnTGKetThucSetfocusFnc);
	//m_wndTGKetThuc.SetEvent(WE_KILLFOCUS, _OnTGKetThucKillfocusFnc);
	m_wndTGKetThuc.SetEvent(WE_CHECKVALUE, _OnTGKetThucCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);
	UpdateData(TRUE);
	m_nDocNo = m_nDocumentNo;
	m_szName = m_szPatientName;
	m_szTGHoiChan = m_szTGBatDau = m_szTGKetThuc = pMF->GetSysDateTime();
	m_nLan = 1;
	UpdateData(FALSE);

}
void CTMThongTinHoiChan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCap.GetDlgCtrlID(), m_szCapKey);
	DDX_Text(pDX, m_wndLan.GetDlgCtrlID(), m_nLan);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDiaDiem.GetDlgCtrlID(), m_szDiaDiem);
	DDX_TextEx(pDX, m_wndTGHoiChan.GetDlgCtrlID(), m_szTGHoiChan);
	DDX_Text(pDX, m_wndLyDo.GetDlgCtrlID(), m_szLyDo);
	DDX_TextEx(pDX, m_wndTGBatDau.GetDlgCtrlID(), m_szTGBatDau);
	DDX_Text(pDX, m_wndChuTri.GetDlgCtrlID(), m_szChuTri);
	DDX_Text(pDX, m_wndThuKy.GetDlgCtrlID(), m_szThuKy);
	DDX_Text(pDX, m_wndBenhLy.GetDlgCtrlID(), m_szBenhLy);
	DDX_Text(pDX, m_wndYKien.GetDlgCtrlID(), m_szYKien);
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Text(pDX, m_wndCLSThem.GetDlgCtrlID(), m_szCLSThem);
	DDX_Text(pDX, m_wndDieuTri.GetDlgCtrlID(), m_szDieuTri);
	DDX_Text(pDX, m_wndYeuCauKhac.GetDlgCtrlID(), m_szYeuCauKhac);
	DDX_TextEx(pDX, m_wndTGKetThuc.GetDlgCtrlID(), m_szTGKetThuc);

}
void CTMThongTinHoiChan::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DiaDiem")] =  m_szDiaDiem;
	m_jData[_T("TGHoiChan")] =  m_szTGHoiChan;
	m_jData[_T("LyDo")] =  m_szLyDo;
	m_jData[_T("TGBatDau")] =  m_szTGBatDau;
	m_jData[_T("ChuTri")] =  m_szChuTri;
	m_jData[_T("ThuKy")] =  m_szThuKy;
	m_jData[_T("BenhLy")] =  m_szBenhLy;
	m_jData[_T("YKien")] =  m_szYKien;
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	m_jData[_T("CLSThem")] =  m_szCLSThem;
	m_jData[_T("DieuTri")] =  m_szDieuTri;
	m_jData[_T("YeuCauKhac")] =  m_szYeuCauKhac;
	m_jData[_T("TGKetThuc")] =  m_szTGKetThuc;
	}
	else
	{
			
	m_jData[_T("DiaDiem")].GetValue(m_szDiaDiem);
	m_jData[_T("TGHoiChan")].GetValue(m_szTGHoiChan);
	m_jData[_T("LyDo")].GetValue(m_szLyDo);
	m_jData[_T("TGBatDau")].GetValue(m_szTGBatDau);
	m_jData[_T("ChuTri")].GetValue(m_szChuTri);
	m_jData[_T("ThuKy")].GetValue(m_szThuKy);
	m_jData[_T("BenhLy")].GetValue(m_szBenhLy);
	m_jData[_T("YKien")].GetValue(m_szYKien);
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	m_jData[_T("CLSThem")].GetValue(m_szCLSThem);
	m_jData[_T("DieuTri")].GetValue(m_szDieuTri);
	m_jData[_T("YeuCauKhac")].GetValue(m_szYeuCauKhac);
	m_jData[_T("TGKetThuc")].GetValue(m_szTGKetThuc);
	}

}
void CTMThongTinHoiChan::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, szWhere;

	if(!m_szCapKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hde_name = '%s'"), m_szCapKey);
 	if(m_nLan > 0)
 		szWhere.AppendFormat(_T(" AND hde_refidx = %ld"), m_nLan);

	szSQL.Format(_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno=%ld AND hde_deptid = '%s' %s AND hde_type='HOI_CHAN'"), m_nDocumentNo, m_szDeptID, szWhere);

	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		CString szData;
		rs.GetValue(_T("hde_value"), szData);
		m_jData.Parse(szData);
		UpdateJson(FALSE);
		SetMode(VM_EDIT);
	}
	else
	{
		SetDefaultValues();
		m_wndDiaDiem.SetFocus();
	}
	UpdateData(FALSE);
}
void CTMThongTinHoiChan::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CTMThongTinHoiChan::SetDefaultValues(){

	m_szDiaDiem.Empty();
	m_szLyDo.Empty();
	m_szChuTri.Empty();
	m_szThuKy.Empty();
	m_szBenhLy.Empty();
	m_szYKien.Empty();
	m_szChanDoan.Empty();
	m_szCLSThem.Empty();
	m_szDieuTri.Empty();
	m_szYeuCauKhac.Empty();

}
int CTMThongTinHoiChan::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, 3, 4, 5, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, 3, 4, 5, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			m_wndCap.EnableWindow(TRUE);
			m_wndLan.EnableWindow(TRUE);
 			EnableButtons(TRUE, 0, 1, 4, 5, -1);
 			break;
 		case VM_NONE: 
			EnableControls(FALSE);
			m_wndCap.EnableWindow(TRUE);
			m_wndLan.EnableWindow(TRUE);
			EnableButtons(TRUE, 0, 1, 4, 5, -1);
			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CTMThongTinHoiChan::OnCapSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMThongTinHoiChan::OnCapSelendok(){
	 GetDataToScreen();
}
/*void CTMThongTinHoiChan::OnCapSetfocus(){
	
}*/
/*void CTMThongTinHoiChan::OnCapKillfocus(){
	
}*/
long CTMThongTinHoiChan::OnCapLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCap.IsSearchKey() && !m_szCapKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szCapKey);
	};
	m_wndCap.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT 1 as id, 'Cấp khoa' as name FROM dual") \
		_T(" UNION ALL SELECT 2 as id, 'Cấp viện' as name FROM dual") \
		_T(" UNION ALL SELECT 3 as id, 'Cấp bệnh viện' as name FROM dual WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCap.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMThongTinHoiChan::OnCapAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMThongTinHoiChan::OnLanChange(){
	
} */
/*void CTMThongTinHoiChan::OnLanSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnLanKillfocus(){
	
} */
int CTMThongTinHoiChan::OnLanCheckValue(){
	GetDataToScreen();
	return 0;
} 
/*void CTMThongTinHoiChan::OnDocNoChange(){
	
} */
/*void CTMThongTinHoiChan::OnDocNoSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnDocNoKillfocus(){
	
} */
int CTMThongTinHoiChan::OnDocNoCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnNameChange(){
	
} */
/*void CTMThongTinHoiChan::OnNameSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnNameKillfocus(){
	
} */
int CTMThongTinHoiChan::OnNameCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnDiaDiemChange(){
	
} */
/*void CTMThongTinHoiChan::OnDiaDiemSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnDiaDiemKillfocus(){
	
} */
int CTMThongTinHoiChan::OnDiaDiemCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnTGHoiChanChange(){
	
} */
/*void CTMThongTinHoiChan::OnTGHoiChanSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnTGHoiChanKillfocus(){
	
} */
int CTMThongTinHoiChan::OnTGHoiChanCheckValue(){
	return 0;
} 
#include "TMThongTinHoiChanThanhVien.h"
void CTMThongTinHoiChan::OnThanhVienThamGiaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CTMThongTinHoiChanThanhVien dlg(this, m_nDocumentNo, m_szDeptID, m_szCapKey, m_nLan);
	dlg.DoModal();
} 
/*void CTMThongTinHoiChan::OnLyDoChange(){
	
} */
/*void CTMThongTinHoiChan::OnLyDoSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnLyDoKillfocus(){
	
} */
int CTMThongTinHoiChan::OnLyDoCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnTGBatDauChange(){
	
} */
/*void CTMThongTinHoiChan::OnTGBatDauSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnTGBatDauKillfocus(){
	
} */
int CTMThongTinHoiChan::OnTGBatDauCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnChuTriChange(){
	
} */
/*void CTMThongTinHoiChan::OnChuTriSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnChuTriKillfocus(){
	
} */
int CTMThongTinHoiChan::OnChuTriCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnThuKyChange(){
	
} */
/*void CTMThongTinHoiChan::OnThuKySetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnThuKyKillfocus(){
	
} */
int CTMThongTinHoiChan::OnThuKyCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnBenhLyChange(){
	
} */
/*void CTMThongTinHoiChan::OnBenhLySetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnBenhLyKillfocus(){
	
} */
int CTMThongTinHoiChan::OnBenhLyCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnYKienChange(){
	
} */
/*void CTMThongTinHoiChan::OnYKienSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnYKienKillfocus(){
	
} */
int CTMThongTinHoiChan::OnYKienCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnChanDoanChange(){
	
} */
/*void CTMThongTinHoiChan::OnChanDoanSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnChanDoanKillfocus(){
	
} */
int CTMThongTinHoiChan::OnChanDoanCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnCLSThemChange(){
	
} */
/*void CTMThongTinHoiChan::OnCLSThemSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnCLSThemKillfocus(){
	
} */
int CTMThongTinHoiChan::OnCLSThemCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnDieuTriChange(){
	
} */
/*void CTMThongTinHoiChan::OnDieuTriSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnDieuTriKillfocus(){
	
} */
int CTMThongTinHoiChan::OnDieuTriCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnYeuCauKhacChange(){
	
} */
/*void CTMThongTinHoiChan::OnYeuCauKhacSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnYeuCauKhacKillfocus(){
	
} */
int CTMThongTinHoiChan::OnYeuCauKhacCheckValue(){
	return 0;
} 
/*void CTMThongTinHoiChan::OnTGKetThucChange(){
	
} */
/*void CTMThongTinHoiChan::OnTGKetThucSetfocus(){
	
} */
/*void CTMThongTinHoiChan::OnTGKetThucKillfocus(){
	
} */
int CTMThongTinHoiChan::OnTGKetThucCheckValue(){
	return 0;
} 
void CTMThongTinHoiChan::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
} 
void CTMThongTinHoiChan::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveTMThongTinHoiChan() > 0)
	{
		EnableControls(FALSE);
	}

	SetMode(VM_VIEW);
} 
void CTMThongTinHoiChan::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelTMThongTinHoiChan();
} 
void CTMThongTinHoiChan::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;

	menu.CreatePopupMenu();
	TranslateString(_T("Giấy đề nghị hội chẩn"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Giấy mời hội chẩn"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Biên bản hội chẩn"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnPrint();
		break;
	case 2:
		OnPrint2();
		break;
	case 3:
		OnPrint3();
		break;
	}
}
void CTMThongTinHoiChan::OnPrint(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection *rptHeader, *rptDetail, *rptFooter;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDate;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\GIAYDENGHIHOICHAN.RPT")))
		return;

	szSQL.Format(_T(" SELECT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T(" hms_getsex(hp_sex) AS sex,") \
		_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T(" htr_admitdate AS admitdate,") \
		_T(" htr_maindisease AS diagnostic") \
		_T(" FROM hms_treatment_record") 
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(htr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE htr_docno = %ld AND htr_deptid = '%s'"), m_nDocumentNo, m_szDeptID);
	rs.ExecSQL(szSQL);

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptHeader->SetValue(_T("Dept"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptHeader->SetValue(_T("patientname"), rs.GetValue(_T("pname")));
	rptHeader->SetValue(_T("age"), rs.GetValue(_T("age")));
	rptHeader->SetValue(_T("sex"), rs.GetValue(_T("sex")));
	rptHeader->SetValue(_T("address"), rs.GetValue(_T("address")));
	rs.GetValue(_T("admitdate"), tmpStr);
	rptHeader->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	rptHeader->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
	rptHeader->SetValue(_T("diadiem"), m_szDiaDiem);
	rptHeader->SetValue(_T("time"), CDateTime::Convert(m_szTGHoiChan, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

	szSQL.Format(_T(" SELECT") \
		_T(" hc_name AS pname,") \
		_T(" hc_position AS pposition,") \
		_T(" hc_workunit AS pworkunit,") \
		_T(" hc_telephone AS ptelephone") \
		_T(" FROM hms_consultation") \
		_T(" WHERE hc_docno = %ld") \
		_T(" AND hc_deptid = '%s'") \
		_T(" AND hc_level = %s") \
		_T(" AND hc_idx = %ld") \
		_T(" ORDER BY hc_line"), m_nDocumentNo, m_szDeptID, m_szCapKey, m_nLan);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("pposition")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("pworkunit")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("ptelephone")));
		rs.MoveNext();
	}

	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}
void CTMThongTinHoiChan::OnPrint2(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db), rs2(&pMF->m_db);
	CString szSQL, tmpStr, szDate;
	int nIdx = 1;

	szSQL.Format(_T(" SELECT") \
		_T(" hc_name AS pname,") \
		_T(" hc_position AS pposition,") \
		_T(" hc_workunit AS pworkunit,") \
		_T(" hc_telephone AS ptelephone") \
		_T(" FROM hms_consultation") \
		_T(" WHERE hc_docno = %ld") \
		_T(" AND hc_deptid = '%s'") \
		_T(" AND hc_level = %s") \
		_T(" AND hc_idx = %ld") \
		_T(" ORDER BY hc_line"), m_nDocumentNo, m_szDeptID, m_szCapKey, m_nLan);
	rs2.ExecSQL(szSQL);
	CReport rpt;
	CReportSection *rptHeader, *rptDetail, *rptFooter;
	while(!rs2.IsEOF())
	{
		rs2.GetValue(_T("pname"), tmpStr);

		if (!rpt.Init(_T("Reports\\HMS\\GIAYMOIHOICHAN.RPT")))
			return;

		szSQL.Format(_T(" SELECT") \
			_T(" hd_docno AS docno,") \
			_T(" get_patientname(hd_docno) AS pname,") \
			_T(" hms_getage(hd_admitdate, hp_birthdate) AS age,") \
			_T(" hms_getsex(hp_sex) AS sex,") \
			_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
			_T(" htr_admitdate AS admitdate,") \
			_T(" htr_maindisease AS diagnostic,") \
			_T(" hb_roomid AS room,") \
			_T(" hb_bedid AS bed") \
			_T(" FROM hms_treatment_record") 
			_T(" LEFT JOIN hms_bed") \
			_T(" ON(hb_docno = htr_docno AND hb_deptid = htr_deptid)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(htr_docno = hd_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hp_patientno = hd_patientno)") \
			_T(" WHERE htr_docno = %ld AND htr_deptid = '%s'"), m_nDocumentNo, m_szDeptID);
		rs.ExecSQL(szSQL);

		rptHeader = rpt.GetReportHeader();
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
		rptHeader->SetValue(_T("kinhmoi"), tmpStr);
		rptHeader->SetValue(_T("kinhmoi2"), tmpStr);
		rptHeader->SetValue(_T("patientname"), rs.GetValue(_T("pname")));
		rptHeader->SetValue(_T("age"), rs.GetValue(_T("age")));
		rptHeader->SetValue(_T("sex"), rs.GetValue(_T("sex")));
		rptHeader->SetValue(_T("address"), rs.GetValue(_T("address")));
		rs.GetValue(_T("admitdate"), tmpStr);
		rptHeader->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
		rptHeader->SetValue(_T("bed"), rs.GetValue(_T("bed")));
		rptHeader->SetValue(_T("room"), rs.GetValue(_T("room")));
		rptHeader->SetValue(_T("dept"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
		rptHeader->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
		rptHeader->SetValue(_T("reason"), m_szLyDo);
		rptHeader->SetValue(_T("diadiem"), m_szDiaDiem);
		rptHeader->SetValue(_T("time"), CDateTime::Convert(m_szTGHoiChan, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

		rptFooter = rpt.GetReportFooter();
		tmpStr = pMF->GetSysDateTime();
		szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rptFooter->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();

		rs2.MoveNext();
	}
}
void CTMThongTinHoiChan::OnPrint3(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection *rptHeader, *rptDetail, *rptGroupFooter, *rptFooter;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDate;
	int nIdx = 1;

	if(m_szCapKey == _T("1"))
		{
			if (!rpt.Init(_T("Reports\\HMS\\BIENBANHOICHANCAPKHOA.RPT")))
				return;
		}
	else if(m_szCapKey == _T("2"))
		{
			if (!rpt.Init(_T("Reports\\HMS\\BIENBANHOICHANCAPVIEN.RPT")))
				return;
		}
	else
		{
			if (!rpt.Init(_T("Reports\\HMS\\BIENBANHOICHANCAPBENHVIEN.RPT")))
				return;
		}

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T("Hà nội, Ngày %s tháng %s năm %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptHeader->SetValue(_T("PrintDate"), szDate);
	szDate.Format(_T("Ngày %s tháng %s năm %s"),m_szTGBatDau.Mid(8, 2), m_szTGBatDau.Mid(5, 2), m_szTGBatDau.Left(4));
	rptHeader->SetValue(_T("tgbatdau"), szDate);
	rptHeader->SetValue(_T("chutri"), m_szChuTri);
	rptHeader->SetValue(_T("thuky"), m_szThuKy);

	szSQL.Format(_T(" SELECT") \
		_T(" hc_name AS pname,") \
		_T(" hc_position AS pposition,") \
		_T(" hc_workunit AS pworkunit,") \
		_T(" hc_telephone AS ptelephone") \
		_T(" FROM hms_consultation") \
		_T(" WHERE hc_docno = %ld") \
		_T(" AND hc_deptid = '%s'") \
		_T(" AND hc_level = %s") \
		_T(" AND hc_idx = %ld") \
		_T(" ORDER BY hc_line"), m_nDocumentNo, m_szDeptID, m_szCapKey, m_nLan);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("pposition")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("pworkunit")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("ptelephone")));
		rs.MoveNext();
	}

	szSQL.Format(_T(" SELECT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T(" hms_getsex(hp_sex) AS sex,") \
		_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T(" htr_admitdate AS admitdate,") \
		_T(" htr_maindisease AS diagnostic,") \
		_T(" hb_roomid AS room,") \
		_T(" hb_bedid AS bed") \
		_T(" FROM hms_treatment_record") 
		_T(" LEFT JOIN hms_bed") \
		_T(" ON(hb_docno = htr_docno AND hb_deptid = htr_deptid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(htr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE htr_docno = %ld AND htr_deptid = '%s'"), m_nDocumentNo, m_szDeptID);
	rs.ExecSQL(szSQL);

	rptGroupFooter = rpt.AddDetail(rpt.GetGroupFooter(1));
	rptGroupFooter->SetValue(_T("documentno"), m_nDocumentNo);
	rptGroupFooter->SetValue(_T("patientname"), rs.GetValue(_T("pname")));
	rptGroupFooter->SetValue(_T("age"), rs.GetValue(_T("age")));
	rptGroupFooter->SetValue(_T("sex"), rs.GetValue(_T("sex")));
	rptGroupFooter->SetValue(_T("address"), rs.GetValue(_T("address")));
	rs.GetValue(_T("admitdate"), tmpStr);
	rptGroupFooter->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	rptGroupFooter->SetValue(_T("bed"), rs.GetValue(_T("bed")));
	rptGroupFooter->SetValue(_T("room"), rs.GetValue(_T("room")));
	rptGroupFooter->SetValue(_T("dept"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptGroupFooter->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
	rptGroupFooter->SetValue(_T("reason"), m_szLyDo);
	rptGroupFooter = rpt.AddDetail(rpt.GetGroupFooter(2));
	rptGroupFooter->SetValue(_T("tomtat"), m_szBenhLy);
	rptGroupFooter = rpt.AddDetail(rpt.GetGroupFooter(3));
	rptGroupFooter->SetValue(_T("ykien"), m_szYKien);
	rptGroupFooter = rpt.AddDetail(rpt.GetGroupFooter(4));
	rptGroupFooter->SetValue(_T("ketluan"), m_szChanDoan);
	rptGroupFooter->SetValue(_T("xetnghiemlamthem"), m_szCLSThem);
	rptGroupFooter->SetValue(_T("phuongandieutri"), m_szDieuTri);
	rptGroupFooter->SetValue(_T("yeucaukhac"), m_szYeuCauKhac);
	rptGroupFooter->SetValue(_T("time"), CDateTime::Convert(m_szTGKetThuc, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	rpt.PrintPreview();
}
void CTMThongTinHoiChan::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CTMThongTinHoiChan::OnAddTMThongTinHoiChan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMThongTinHoiChan::OnEditTMThongTinHoiChan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMThongTinHoiChan::OnDeleteTMThongTinHoiChan(){
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
 		OnCancelTMThongTinHoiChan();
 	}
	return 0;
}
int CTMThongTinHoiChan::OnSaveTMThongTinHoiChan(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	m_jData.ToString(szData);

	szSQL.Format(_T("HMS_DOC_EMR_CREATE('HOI_CHAN', %ld, '%s', %ld, %d, '%s', '%s', '%s') "),
		m_nDocumentNo, m_szDeptID, m_nLan, 0, pMF->GetCurrentUser(), m_szCapKey, szData);

	int ret = str2int(pMF->ExecDML(szSQL));
	return ret;
	return 0;
}
int CTMThongTinHoiChan::OnCancelTMThongTinHoiChan(){
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
int CTMThongTinHoiChan::OnTMThongTinHoiChanListLoadData(){
	return 0;
}
