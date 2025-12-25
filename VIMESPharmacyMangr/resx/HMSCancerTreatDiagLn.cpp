#include "HMSCancerTreatDiagLn.h"
#include "MainFrm.h"
/*static void _OnTenThuocChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTenThuocChange();
} */
/*static void _OnTenThuocSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTenThuocSetfocus();} */ 
/*static void _OnTenThuocKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTenThuocKillfocus();
} */
static int _OnTenThuocCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnTenThuocCheckValue();
} 
static void _OnDonViSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnDonViSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDonViSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDonViSelendok();
}
/*static void _OnDonViSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDonViKillfocus();
}*/
/*static void _OnDonViKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDonViKillfocus();
}*/
static long _OnDonViLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnDonViLoadData();
}
/*static void _OnDonViAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDonViAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnLieuDungM2ChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungM2Change();
} */
/*static void _OnLieuDungM2SetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungM2Setfocus();} */ 
/*static void _OnLieuDungM2KillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungM2Killfocus();
} */
static int _OnLieuDungM2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungM2CheckValue();
} 
static void _OnDVLieudungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnDVLieudungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDVLieudungSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVLieudungSelendok();
}
/*static void _OnDVLieudungSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVLieudungKillfocus();
}*/
/*static void _OnDVLieudungKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVLieudungKillfocus();
}*/
static long _OnDVLieudungLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnDVLieudungLoadData();
}
/*static void _OnDVLieudungAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVLieudungAddNew();
}*/
/*static void _OnSoChuKyChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoChuKyChange();
} */
/*static void _OnSoChuKySetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoChuKySetfocus();} */ 
/*static void _OnSoChuKyKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoChuKyKillfocus();
} */
static int _OnSoChuKyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnSoChuKyCheckValue();
} 
/*static void _OnNgayDungChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnNgayDungChange();
} */
/*static void _OnNgayDungSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnNgayDungSetfocus();} */ 
/*static void _OnNgayDungKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnNgayDungKillfocus();
} */
static int _OnNgayDungCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnNgayDungCheckValue();
} 
/*static void _OnSoNgayLapLaiCKChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoNgayLapLaiCKChange();
} */
/*static void _OnSoNgayLapLaiCKSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoNgayLapLaiCKSetfocus();} */ 
/*static void _OnSoNgayLapLaiCKKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoNgayLapLaiCKKillfocus();
} */
static int _OnSoNgayLapLaiCKCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnSoNgayLapLaiCKCheckValue();
} 
/*static void _OnLieuDungBNChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungBNChange();
} */
/*static void _OnLieuDungBNSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungBNSetfocus();} */ 
/*static void _OnLieuDungBNKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungBNKillfocus();
} */
static int _OnLieuDungBNCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnLieuDungBNCheckValue();
} 
/*static void _OnSoLuongLinhChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoLuongLinhChange();
} */
/*static void _OnSoLuongLinhSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoLuongLinhSetfocus();} */ 
/*static void _OnSoLuongLinhKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnSoLuongLinhKillfocus();
} */
static int _OnSoLuongLinhCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnSoLuongLinhCheckValue();
} 
static void _OnDungMoiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnDungMoiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDungMoiSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiSelendok();
}
/*static void _OnDungMoiSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiKillfocus();
}*/
/*static void _OnDungMoiKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiKillfocus();
}*/
static long _OnDungMoiLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiLoadData();
}
/*static void _OnDungMoiAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiAddNew();
}*/
/*static void _OnDungMoiQtyChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiQtyChange();
} */
/*static void _OnDungMoiQtySetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiQtySetfocus();} */ 
/*static void _OnDungMoiQtyKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiQtyKillfocus();
} */
static int _OnDungMoiQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnDungMoiQtyCheckValue();
} 
/*static void _OnTheTichChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTheTichChange();
} */
/*static void _OnTheTichSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTheTichSetfocus();} */ 
/*static void _OnTheTichKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnTheTichKillfocus();
} */
static int _OnTheTichCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnTheTichCheckValue();
} 
/*static void _OnThoiGianSDChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnThoiGianSDChange();
} */
/*static void _OnThoiGianSDSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnThoiGianSDSetfocus();} */ 
/*static void _OnThoiGianSDKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnThoiGianSDKillfocus();
} */
static int _OnThoiGianSDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnThoiGianSDCheckValue();
} 
static void _OnDVTruyenSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnDVTruyenSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDVTruyenSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVTruyenSelendok();
}
/*static void _OnDVTruyenSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVTruyenKillfocus();
}*/
/*static void _OnDVTruyenKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVTruyenKillfocus();
}*/
static long _OnDVTruyenLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnDVTruyenLoadData();
}
/*static void _OnDVTruyenAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnDVTruyenAddNew();
}*/
static void _OnUsageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagLn* )pWnd)->OnUsageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUsageSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageSelendok();
}
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageKillfocus();
}*/
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageKillfocus();
}*/
static long _OnUsageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnUsageLoadData();
}
/*static void _OnUsageAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageAddNew();
}*/
/*static void _OnGFGChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnGFGChange();
} */
/*static void _OnGFGSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnGFGSetfocus();} */ 
/*static void _OnGFGKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnGFGKillfocus();
} */
static int _OnGFGCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnGFGCheckValue();
} 
/*static void _OnUsageDescChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageDescChange();
} */
/*static void _OnUsageDescSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageDescSetfocus();} */ 
/*static void _OnUsageDescKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagLn *)pWnd)->OnUsageDescKillfocus();
} */
static int _OnUsageDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagLn *)pWnd)->OnUsageDescCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagLn *pVw = (CHMSCancerTreatDiagLn *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagLn *pVw = (CHMSCancerTreatDiagLn *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCancerTreatDiagLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagLn*)pWnd)->OnAddHMSCancerTreatDiagLn();
} 
static int _OnEditHMSCancerTreatDiagLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagLn*)pWnd)->OnEditHMSCancerTreatDiagLn();
} 
static int _OnDeleteHMSCancerTreatDiagLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagLn*)pWnd)->OnDeleteHMSCancerTreatDiagLn();
} 
static int _OnSaveHMSCancerTreatDiagLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagLn*)pWnd)->OnSaveHMSCancerTreatDiagLn();
} 
static int _OnCancelHMSCancerTreatDiagLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagLn*)pWnd)->OnCancelHMSCancerTreatDiagLn();
} 
CHMSCancerTreatDiagLn::CHMSCancerTreatDiagLn(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 335;
	SetDefaultValues();
}
CHMSCancerTreatDiagLn::~CHMSCancerTreatDiagLn(){
}
void CHMSCancerTreatDiagLn::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 570, 300);
	m_wndTenThuocLabel.Create(this, _T("Tên thu?c"), 10, 30, 160, 55);
	m_wndTenThuoc.Create(this,165, 30, 565, 55); 
	m_wndDonViLabel.Create(this, _T("Ðon v?"), 10, 60, 160, 85);
	m_wndDonVi.Create(this,165, 60, 285, 85); 
	m_wndTypeLabel.Create(this, _T("Lo?i"), 290, 60, 400, 85);
	m_wndType.Create(this,405, 60, 565, 85); 
	m_wndLieuDungM2Label.Create(this, _T("Li?u dùng M2"), 10, 90, 160, 115);
	m_wndLieuDungM2.Create(this,165, 90, 215, 115); 
	m_wndDVLieudung.Create(this,220, 90, 285, 115); 
	m_wndSoChuKyLabel.Create(this, _T("S? chu k?"), 290, 90, 400, 115);
	m_wndSoChuKy.Create(this,405, 90, 565, 115); 
	m_wndNgayDungLabel.Create(this, _T("Ngày dùng"), 10, 120, 160, 145);
	m_wndNgayDung.Create(this,165, 120, 285, 145); 
	m_wndSoNgayLapLaiCKLabel.Create(this, _T("L?p l?i CK"), 290, 120, 400, 145);
	m_wndSoNgayLapLaiCK.Create(this,405, 120, 565, 145); 
	m_wndLieuDungBNLabel.Create(this, _T("Li?u dùng BN"), 10, 150, 160, 175);
	m_wndLieuDungBN.Create(this,165, 150, 285, 175); 
	m_wndSoLuongLinhLabel.Create(this, _T("S? lu?ng linh"), 290, 150, 400, 175);
	m_wndSoLuongLinh.Create(this,405, 150, 565, 175); 
	m_wndDungMoiLabel.Create(this, _T("Dung môi"), 10, 180, 160, 205);
	m_wndDungMoi.Create(this,165, 180, 285, 205); 
	m_wndDungMoiQtyLabel.Create(this, _T("Th? tích"), 290, 180, 400, 205);
	m_wndDungMoiQty.Create(this,405, 180, 565, 205); 
	m_wndTheTichLabel.Create(this, _T("Li?u dùng DM"), 10, 210, 160, 235);
	m_wndTheTich.Create(this,165, 210, 285, 235); 
	m_wndThoiGianSDLabel.Create(this, _T("Th?i gian truy?n"), 290, 210, 400, 235);
	m_wndThoiGianSD.Create(this,405, 210, 485, 235); 
	m_wndDVTruyen.Create(this,490, 210, 565, 235); 
	m_wndUsageLabel.Create(this, _T("Mã li?u dùng"), 10, 240, 160, 265);
	m_wndUsage.Create(this,165, 240, 285, 265); 
	m_wndGFGLabel.Create(this, _T("GFG"), 290, 240, 401, 265);
	m_wndGFG.Create(this,406, 240, 566, 265); 
	m_wndUsageDescLabel.Create(this, _T("Cách dùng"), 10, 270, 160, 295);
	m_wndUsageDesc.Create(this,165, 270, 565, 295); 
	m_wndSave.Create(this, _T("&Save"), 405, 305, 485, 330);
	m_wndCancel.Create(this, _T("&Cancel"), 490, 305, 570, 330);

}
void CHMSCancerTreatDiagLn::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTenThuoc.SetLimitText(1024);
	m_wndTenThuoc.SetCheckValue(true);
	m_wndDonVi.SetCheckValue(true);
	m_wndDonVi.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndLieuDungM2.SetLimitText(1024);
	m_wndLieuDungM2.SetCheckValue(true);
	m_wndDVLieudung.SetCheckValue(true);
	m_wndDVLieudung.LimitText(35);
	m_wndSoChuKy.SetLimitText(1024);
	m_wndSoChuKy.SetCheckValue(true);
	m_wndNgayDung.SetLimitText(1024);
	m_wndNgayDung.SetCheckValue(true);
	m_wndSoNgayLapLaiCK.SetLimitText(1024);
	m_wndSoNgayLapLaiCK.SetCheckValue(true);
	m_wndLieuDungBN.SetLimitText(1024);
	m_wndLieuDungBN.SetCheckValue(true);
	m_wndSoLuongLinh.SetLimitText(1024);
	m_wndSoLuongLinh.SetCheckValue(true);
	m_wndDungMoi.SetCheckValue(true);
	m_wndDungMoi.LimitText(1024);
	m_wndDungMoiQty.SetLimitText(1024);
	m_wndDungMoiQty.SetCheckValue(true);
	m_wndTheTich.SetLimitText(1024);
	m_wndTheTich.SetCheckValue(true);
	m_wndThoiGianSD.SetLimitText(1024);
	m_wndThoiGianSD.SetCheckValue(true);
	m_wndDVTruyen.SetCheckValue(true);
	m_wndDVTruyen.LimitText(35);
	m_wndUsage.SetCheckValue(true);
	m_wndUsage.LimitText(1024);
	m_wndGFG.SetLimitText(16);
	m_wndGFG.SetCheckValue(true);
	m_wndUsageDesc.SetLimitText(1024);
	m_wndUsageDesc.SetCheckValue(true);






	m_wndDVLieudung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDVLieudung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndDVTruyen.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDVTruyen.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSCancerTreatDiagLn::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndTenThuoc.SetEvent(WE_CHANGE, _OnTenThuocChangeFnc);
	//m_wndTenThuoc.SetEvent(WE_SETFOCUS, _OnTenThuocSetfocusFnc);
	//m_wndTenThuoc.SetEvent(WE_KILLFOCUS, _OnTenThuocKillfocusFnc);
	m_wndTenThuoc.SetEvent(WE_CHECKVALUE, _OnTenThuocCheckValueFnc);
	m_wndDonVi.SetEvent(WE_SELENDOK, _OnDonViSelendokFnc);
	//m_wndDonVi.SetEvent(WE_SETFOCUS, _OnDonViSetfocusFnc);
	//m_wndDonVi.SetEvent(WE_KILLFOCUS, _OnDonViKillfocusFnc);
	m_wndDonVi.SetEvent(WE_SELCHANGE, _OnDonViSelectChangeFnc);
	m_wndDonVi.SetEvent(WE_LOADDATA, _OnDonViLoadDataFnc);
	//m_wndDonVi.SetEvent(WE_ADDNEW, _OnDonViAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndLieuDungM2.SetEvent(WE_CHANGE, _OnLieuDungM2ChangeFnc);
	//m_wndLieuDungM2.SetEvent(WE_SETFOCUS, _OnLieuDungM2SetfocusFnc);
	//m_wndLieuDungM2.SetEvent(WE_KILLFOCUS, _OnLieuDungM2KillfocusFnc);
	m_wndLieuDungM2.SetEvent(WE_CHECKVALUE, _OnLieuDungM2CheckValueFnc);
	m_wndDVLieudung.SetEvent(WE_SELENDOK, _OnDVLieudungSelendokFnc);
	//m_wndDVLieudung.SetEvent(WE_SETFOCUS, _OnDVLieudungSetfocusFnc);
	//m_wndDVLieudung.SetEvent(WE_KILLFOCUS, _OnDVLieudungKillfocusFnc);
	m_wndDVLieudung.SetEvent(WE_SELCHANGE, _OnDVLieudungSelectChangeFnc);
	m_wndDVLieudung.SetEvent(WE_LOADDATA, _OnDVLieudungLoadDataFnc);
	//m_wndDVLieudung.SetEvent(WE_ADDNEW, _OnDVLieudungAddNewFnc);
	//m_wndSoChuKy.SetEvent(WE_CHANGE, _OnSoChuKyChangeFnc);
	//m_wndSoChuKy.SetEvent(WE_SETFOCUS, _OnSoChuKySetfocusFnc);
	//m_wndSoChuKy.SetEvent(WE_KILLFOCUS, _OnSoChuKyKillfocusFnc);
	m_wndSoChuKy.SetEvent(WE_CHECKVALUE, _OnSoChuKyCheckValueFnc);
	//m_wndNgayDung.SetEvent(WE_CHANGE, _OnNgayDungChangeFnc);
	//m_wndNgayDung.SetEvent(WE_SETFOCUS, _OnNgayDungSetfocusFnc);
	//m_wndNgayDung.SetEvent(WE_KILLFOCUS, _OnNgayDungKillfocusFnc);
	m_wndNgayDung.SetEvent(WE_CHECKVALUE, _OnNgayDungCheckValueFnc);
	//m_wndSoNgayLapLaiCK.SetEvent(WE_CHANGE, _OnSoNgayLapLaiCKChangeFnc);
	//m_wndSoNgayLapLaiCK.SetEvent(WE_SETFOCUS, _OnSoNgayLapLaiCKSetfocusFnc);
	//m_wndSoNgayLapLaiCK.SetEvent(WE_KILLFOCUS, _OnSoNgayLapLaiCKKillfocusFnc);
	m_wndSoNgayLapLaiCK.SetEvent(WE_CHECKVALUE, _OnSoNgayLapLaiCKCheckValueFnc);
	//m_wndLieuDungBN.SetEvent(WE_CHANGE, _OnLieuDungBNChangeFnc);
	//m_wndLieuDungBN.SetEvent(WE_SETFOCUS, _OnLieuDungBNSetfocusFnc);
	//m_wndLieuDungBN.SetEvent(WE_KILLFOCUS, _OnLieuDungBNKillfocusFnc);
	m_wndLieuDungBN.SetEvent(WE_CHECKVALUE, _OnLieuDungBNCheckValueFnc);
	//m_wndSoLuongLinh.SetEvent(WE_CHANGE, _OnSoLuongLinhChangeFnc);
	//m_wndSoLuongLinh.SetEvent(WE_SETFOCUS, _OnSoLuongLinhSetfocusFnc);
	//m_wndSoLuongLinh.SetEvent(WE_KILLFOCUS, _OnSoLuongLinhKillfocusFnc);
	m_wndSoLuongLinh.SetEvent(WE_CHECKVALUE, _OnSoLuongLinhCheckValueFnc);
	m_wndDungMoi.SetEvent(WE_SELENDOK, _OnDungMoiSelendokFnc);
	//m_wndDungMoi.SetEvent(WE_SETFOCUS, _OnDungMoiSetfocusFnc);
	//m_wndDungMoi.SetEvent(WE_KILLFOCUS, _OnDungMoiKillfocusFnc);
	m_wndDungMoi.SetEvent(WE_SELCHANGE, _OnDungMoiSelectChangeFnc);
	m_wndDungMoi.SetEvent(WE_LOADDATA, _OnDungMoiLoadDataFnc);
	//m_wndDungMoi.SetEvent(WE_ADDNEW, _OnDungMoiAddNewFnc);
	//m_wndDungMoiQty.SetEvent(WE_CHANGE, _OnDungMoiQtyChangeFnc);
	//m_wndDungMoiQty.SetEvent(WE_SETFOCUS, _OnDungMoiQtySetfocusFnc);
	//m_wndDungMoiQty.SetEvent(WE_KILLFOCUS, _OnDungMoiQtyKillfocusFnc);
	m_wndDungMoiQty.SetEvent(WE_CHECKVALUE, _OnDungMoiQtyCheckValueFnc);
	//m_wndTheTich.SetEvent(WE_CHANGE, _OnTheTichChangeFnc);
	//m_wndTheTich.SetEvent(WE_SETFOCUS, _OnTheTichSetfocusFnc);
	//m_wndTheTich.SetEvent(WE_KILLFOCUS, _OnTheTichKillfocusFnc);
	m_wndTheTich.SetEvent(WE_CHECKVALUE, _OnTheTichCheckValueFnc);
	//m_wndThoiGianSD.SetEvent(WE_CHANGE, _OnThoiGianSDChangeFnc);
	//m_wndThoiGianSD.SetEvent(WE_SETFOCUS, _OnThoiGianSDSetfocusFnc);
	//m_wndThoiGianSD.SetEvent(WE_KILLFOCUS, _OnThoiGianSDKillfocusFnc);
	m_wndThoiGianSD.SetEvent(WE_CHECKVALUE, _OnThoiGianSDCheckValueFnc);
	m_wndDVTruyen.SetEvent(WE_SELENDOK, _OnDVTruyenSelendokFnc);
	//m_wndDVTruyen.SetEvent(WE_SETFOCUS, _OnDVTruyenSetfocusFnc);
	//m_wndDVTruyen.SetEvent(WE_KILLFOCUS, _OnDVTruyenKillfocusFnc);
	m_wndDVTruyen.SetEvent(WE_SELCHANGE, _OnDVTruyenSelectChangeFnc);
	m_wndDVTruyen.SetEvent(WE_LOADDATA, _OnDVTruyenLoadDataFnc);
	//m_wndDVTruyen.SetEvent(WE_ADDNEW, _OnDVTruyenAddNewFnc);
	m_wndUsage.SetEvent(WE_SELENDOK, _OnUsageSelendokFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_SELCHANGE, _OnUsageSelectChangeFnc);
	m_wndUsage.SetEvent(WE_LOADDATA, _OnUsageLoadDataFnc);
	//m_wndUsage.SetEvent(WE_ADDNEW, _OnUsageAddNewFnc);
	//m_wndGFG.SetEvent(WE_CHANGE, _OnGFGChangeFnc);
	//m_wndGFG.SetEvent(WE_SETFOCUS, _OnGFGSetfocusFnc);
	//m_wndGFG.SetEvent(WE_KILLFOCUS, _OnGFGKillfocusFnc);
	m_wndGFG.SetEvent(WE_CHECKVALUE, _OnGFGCheckValueFnc);
	//m_wndUsageDesc.SetEvent(WE_CHANGE, _OnUsageDescChangeFnc);
	//m_wndUsageDesc.SetEvent(WE_SETFOCUS, _OnUsageDescSetfocusFnc);
	//m_wndUsageDesc.SetEvent(WE_KILLFOCUS, _OnUsageDescKillfocusFnc);
	m_wndUsageDesc.SetEvent(WE_CHECKVALUE, _OnUsageDescCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCancerTreatDiagLn::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTenThuoc.GetDlgCtrlID(), m_szTenThuoc);
	DDX_TextEx(pDX, m_wndDonVi.GetDlgCtrlID(), m_szDonViKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndLieuDungM2.GetDlgCtrlID(), m_nLieuDungM2);
	DDX_TextEx(pDX, m_wndDVLieudung.GetDlgCtrlID(), m_szDVLieudungKey);
	DDX_Text(pDX, m_wndSoChuKy.GetDlgCtrlID(), m_nSoChuKy);
	DDX_Text(pDX, m_wndNgayDung.GetDlgCtrlID(), m_szNgayDung);
	DDX_Text(pDX, m_wndSoNgayLapLaiCK.GetDlgCtrlID(), m_nSoNgayLapLaiCK);
	DDX_Text(pDX, m_wndLieuDungBN.GetDlgCtrlID(), m_nLieuDungBN);
	DDX_Text(pDX, m_wndSoLuongLinh.GetDlgCtrlID(), m_nSoLuongLinh);
	DDX_TextEx(pDX, m_wndDungMoi.GetDlgCtrlID(), m_szDungMoiKey);
	DDX_Text(pDX, m_wndDungMoiQty.GetDlgCtrlID(), m_nDungMoiQty);
	DDX_Text(pDX, m_wndTheTich.GetDlgCtrlID(), m_nTheTich);
	DDX_Text(pDX, m_wndThoiGianSD.GetDlgCtrlID(), m_nThoiGianSD);
	DDX_TextEx(pDX, m_wndDVTruyen.GetDlgCtrlID(), m_szDVTruyenKey);
	DDX_TextEx(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsageKey);
	DDX_Text(pDX, m_wndGFG.GetDlgCtrlID(), m_nGFG);
	DDX_Text(pDX, m_wndUsageDesc.GetDlgCtrlID(), m_szUsageDesc);

}
void CHMSCancerTreatDiagLn::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("TenThuoc")] =  m_szTenThuoc;
	m_jData[_T("DonVi")] =  m_szDonViKey;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("LieuDungM2")] =  m_nLieuDungM2;
	m_jData[_T("DVLieudung")] =  m_szDVLieudungKey;
	m_jData[_T("SoChuKy")] =  m_nSoChuKy;
	m_jData[_T("NgayDung")] =  m_szNgayDung;
	m_jData[_T("SoNgayLapLaiCK")] =  m_nSoNgayLapLaiCK;
	m_jData[_T("LieuDungBN")] =  m_nLieuDungBN;
	m_jData[_T("SoLuongLinh")] =  m_nSoLuongLinh;
	m_jData[_T("DungMoi")] =  m_szDungMoiKey;
	m_jData[_T("DungMoiQty")] =  m_nDungMoiQty;
	m_jData[_T("TheTich")] =  m_nTheTich;
	m_jData[_T("ThoiGianSD")] =  m_nThoiGianSD;
	m_jData[_T("DVTruyen")] =  m_szDVTruyenKey;
	m_jData[_T("Usage")] =  m_szUsageKey;
	m_jData[_T("GFG")] =  m_nGFG;
	m_jData[_T("UsageDesc")] =  m_szUsageDesc;
	}
	else
	{
			
	m_jData[_T("TenThuoc")].GetValue(m_szTenThuoc);
	m_jData[_T("DonVi")].GetValue(m_szDonViKey);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("LieuDungM2")].GetValue(m_nLieuDungM2);
	m_jData[_T("DVLieudung")].GetValue(m_szDVLieudungKey);
	m_jData[_T("SoChuKy")].GetValue(m_nSoChuKy);
	m_jData[_T("NgayDung")].GetValue(m_szNgayDung);
	m_jData[_T("SoNgayLapLaiCK")].GetValue(m_nSoNgayLapLaiCK);
	m_jData[_T("LieuDungBN")].GetValue(m_nLieuDungBN);
	m_jData[_T("SoLuongLinh")].GetValue(m_nSoLuongLinh);
	m_jData[_T("DungMoi")].GetValue(m_szDungMoiKey);
	m_jData[_T("DungMoiQty")].GetValue(m_nDungMoiQty);
	m_jData[_T("TheTich")].GetValue(m_nTheTich);
	m_jData[_T("ThoiGianSD")].GetValue(m_nThoiGianSD);
	m_jData[_T("DVTruyen")].GetValue(m_szDVTruyenKey);
	m_jData[_T("Usage")].GetValue(m_szUsageKey);
	m_jData[_T("GFG")].GetValue(m_nGFG);
	m_jData[_T("UsageDesc")].GetValue(m_szUsageDesc);
	}

}
void CHMSCancerTreatDiagLn::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerTreatDiagLn::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerTreatDiagLn::SetDefaultValues(){

	m_szTenThuoc.Empty();
	m_szDonViKey.Empty();
	m_szTypeKey.Empty();
	m_nLieuDungM2=0;
	m_szDVLieudungKey.Empty();
	m_nSoChuKy=0;
	m_szNgayDung.Empty();
	m_nSoNgayLapLaiCK=0;
	m_nLieuDungBN=0;
	m_nSoLuongLinh=0;
	m_szDungMoiKey.Empty();
	m_nDungMoiQty=0;
	m_nTheTich=0;
	m_nThoiGianSD=0;
	m_szDVTruyenKey.Empty();
	m_szUsageKey.Empty();
	m_nGFG=0;
	m_szUsageDesc.Empty();

}
int CHMSCancerTreatDiagLn::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1);
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
/*void CHMSCancerTreatDiagLn::OnTenThuocChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnTenThuocSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnTenThuocKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnTenThuocCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagLn::OnDonViSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnDonViSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnDonViSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnDonViKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnDonViLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDonVi.IsSearchKey() && !m_szDonViKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDonViKey
};
	m_wndDonVi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDonVi.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnDonViAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagLn::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnTypeSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnTypeSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnTypeKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerTreatDiagLn::OnLieuDungM2Change(){
	
} */
/*void CHMSCancerTreatDiagLn::OnLieuDungM2Setfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnLieuDungM2Killfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnLieuDungM2CheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagLn::OnDVLieudungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnDVLieudungSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnDVLieudungSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnDVLieudungKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnDVLieudungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDVLieudung.IsSearchKey() && !m_szDVLieudungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDVLieudungKey
};
	m_wndDVLieudung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDVLieudung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnDVLieudungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerTreatDiagLn::OnSoChuKyChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoChuKySetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoChuKyKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnSoChuKyCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnNgayDungChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnNgayDungSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnNgayDungKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnNgayDungCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnSoNgayLapLaiCKChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoNgayLapLaiCKSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoNgayLapLaiCKKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnSoNgayLapLaiCKCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnLieuDungBNChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnLieuDungBNSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnLieuDungBNKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnLieuDungBNCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnSoLuongLinhChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoLuongLinhSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnSoLuongLinhKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnSoLuongLinhCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagLn::OnDungMoiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnDungMoiSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnDungMoiSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnDungMoiKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnDungMoiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDungMoi.IsSearchKey() && !m_szDungMoiKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDungMoiKey
};
	m_wndDungMoi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDungMoi.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnDungMoiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerTreatDiagLn::OnDungMoiQtyChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnDungMoiQtySetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnDungMoiQtyKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnDungMoiQtyCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnTheTichChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnTheTichSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnTheTichKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnTheTichCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnThoiGianSDChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnThoiGianSDSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnThoiGianSDKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnThoiGianSDCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagLn::OnDVTruyenSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnDVTruyenSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnDVTruyenSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnDVTruyenKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnDVTruyenLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDVTruyen.IsSearchKey() && !m_szDVTruyenKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDVTruyenKey
};
	m_wndDVTruyen.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDVTruyen.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnDVTruyenAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagLn::OnUsageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnUsageSelendok(){
	 
}
/*void CHMSCancerTreatDiagLn::OnUsageSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagLn::OnUsageKillfocus(){
	
}*/
long CHMSCancerTreatDiagLn::OnUsageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUsage.IsSearchKey() && !m_szUsageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUsageKey
};
	m_wndUsage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerTreatDiagLn::OnUsageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerTreatDiagLn::OnGFGChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnGFGSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnGFGKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnGFGCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagLn::OnUsageDescChange(){
	
} */
/*void CHMSCancerTreatDiagLn::OnUsageDescSetfocus(){
	
} */
/*void CHMSCancerTreatDiagLn::OnUsageDescKillfocus(){
	
} */
int CHMSCancerTreatDiagLn::OnUsageDescCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagLn::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagLn::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCancerTreatDiagLn::OnAddHMSCancerTreatDiagLn(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagLn::OnEditHMSCancerTreatDiagLn(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagLn::OnDeleteHMSCancerTreatDiagLn(){
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
 		OnCancelHMSCancerTreatDiagLn();
 	}
	return 0;
}
int CHMSCancerTreatDiagLn::OnSaveHMSCancerTreatDiagLn(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSCancerTreatDiagLnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiagLn::OnCancelHMSCancerTreatDiagLn(){
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
int CHMSCancerTreatDiagLn::OnHMSCancerTreatDiagLnListLoadData(){
	return 0;
}
