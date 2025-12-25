#include "ProductExtraInfoDialog.h"
#include "MainFrame_E10.h"
#include "productDialog.h"

static void _OnHoatchatSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoDialog* )pWnd)->OnHoatchatSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHoatchatSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHoatchatSelendok();
}
/*static void _OnHoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHoatchatKillfocus();
}*/
/*static void _OnHoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHoatchatKillfocus();
}*/
static long _OnHoatchatLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnHoatchatLoadData();
}
/*static void _OnHoatchatAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHoatchatAddNew();
}*/
/*static void _OnMahoatchatChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMahoatchatChange();
} */
/*static void _OnMahoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMahoatchatSetfocus();} */ 
/*static void _OnMahoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMahoatchatKillfocus();
} */
static int _OnMahoatchatCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnMahoatchatCheckValue();
} 
static void _OnMathuocbvSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoDialog* )pWnd)->OnMathuocbvSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMathuocbvSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMathuocbvSelendok();
}
/*static void _OnMathuocbvSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMathuocbvKillfocus();
}*/
/*static void _OnMathuocbvKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMathuocbvKillfocus();
}*/
static long _OnMathuocbvLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnMathuocbvLoadData();
}
/*static void _OnMathuocbvAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMathuocbvAddNew();
}*/
/*static void _OnTenthuocChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnTenthuocChange();
} */
/*static void _OnTenthuocSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnTenthuocSetfocus();} */ 
/*static void _OnTenthuocKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnTenthuocKillfocus();
} */
static int _OnTenthuocCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnTenthuocCheckValue();
} 
/*static void _OnHamluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHamluongChange();
} */
/*static void _OnHamluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHamluongSetfocus();} */ 
/*static void _OnHamluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHamluongKillfocus();
} */
static int _OnHamluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnHamluongCheckValue();
} 
/*static void _OnDonvitinhChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonvitinhChange();
} */
/*static void _OnDonvitinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonvitinhSetfocus();} */ 
/*static void _OnDonvitinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonvitinhKillfocus();
} */
static int _OnDonvitinhCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDonvitinhCheckValue();
} 
/*static void _OnSodangkyChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSodangkyChange();
} */
/*static void _OnSodangkySetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSodangkySetfocus();} */ 
/*static void _OnSodangkyKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSodangkyKillfocus();
} */
static int _OnSodangkyCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnSodangkyCheckValue();
} 
/*static void _OnDonggoiChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonggoiChange();
} */
/*static void _OnDonggoiSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonggoiSetfocus();} */ 
/*static void _OnDonggoiKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDonggoiKillfocus();
} */
static int _OnDonggoiCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDonggoiCheckValue();
} 
/*static void _OnMaduongdungChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMaduongdungChange();
} */
/*static void _OnMaduongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMaduongdungSetfocus();} */ 
/*static void _OnMaduongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnMaduongdungKillfocus();
} */
static int _OnMaduongdungCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnMaduongdungCheckValue();
} 
/*static void _OnDuongdungChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDuongdungChange();
} */
/*static void _OnDuongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDuongdungSetfocus();} */ 
/*static void _OnDuongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDuongdungKillfocus();
} */
static int _OnDuongdungCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDuongdungCheckValue();
} 
/*static void _OnDongiaDukienChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaDukienChange();
} */
/*static void _OnDongiaDukienSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaDukienSetfocus();} */ 
/*static void _OnDongiaDukienKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaDukienKillfocus();
} */
static int _OnDongiaDukienCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDongiaDukienCheckValue();
} 
/*static void _OnDongiaTTChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaTTChange();
} */
/*static void _OnDongiaTTSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaTTSetfocus();} */ 
/*static void _OnDongiaTTKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaTTKillfocus();
} */
static int _OnDongiaTTCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDongiaTTCheckValue();
} 
/*static void _OnSoluongTTChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongTTChange();
} */
/*static void _OnSoluongTTSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongTTSetfocus();} */ 
/*static void _OnSoluongTTKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongTTKillfocus();
} */
static int _OnSoluongTTCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnSoluongTTCheckValue();
} 
/*static void _OnSoluongDukienChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongDukienChange();
} */
/*static void _OnSoluongDukienSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongDukienSetfocus();} */ 
/*static void _OnSoluongDukienKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongDukienKillfocus();
} */
static int _OnSoluongDukienCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnSoluongDukienCheckValue();
} 
static void _OnNuocsxSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoDialog* )pWnd)->OnNuocsxSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNuocsxSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnNuocsxSelendok();
}
/*static void _OnNuocsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnNuocsxKillfocus();
}*/
/*static void _OnNuocsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnNuocsxKillfocus();
}*/
static long _OnNuocsxLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnNuocsxLoadData();
}
/*static void _OnNuocsxAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnNuocsxAddNew();
}*/
static void _OnHangsxSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoDialog* )pWnd)->OnHangsxSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHangsxSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHangsxSelendok();
}
/*static void _OnHangsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHangsxKillfocus();
}*/
/*static void _OnHangsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHangsxKillfocus();
}*/
static long _OnHangsxLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnHangsxLoadData();
}
/*static void _OnHangsxAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnHangsxAddNew();
}*/
/*static void _OnManhomvtytChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnManhomvtytChange();
} */
/*static void _OnManhomvtytSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnManhomvtytSetfocus();} */ 
/*static void _OnManhomvtytKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnManhomvtytKillfocus();
} */
static int _OnManhomvtytCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnManhomvtytCheckValue();
} 
/*static void _OnPackageChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageChange();
} */
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageSetfocus();} */ 
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageKillfocus();
} */
static int _OnPackageCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnPackageCheckValue();
} 
/*static void _OnPackageGrpChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageGrpChange();
} */
/*static void _OnPackageGrpSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageGrpSetfocus();} */ 
/*static void _OnPackageGrpKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnPackageGrpKillfocus();
} */
static int _OnPackageGrpCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnPackageGrpCheckValue();
}

static void _OnMathuocBvLabelSelectFnc(CWnd* pWnd) {
	CProductExtraInfoDialog* pVw = (CProductExtraInfoDialog*)pWnd;
	pVw->OnAddNewProduct();
}


static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductExtraInfoDialog *pVw = (CProductExtraInfoDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductExtraInfoDialog *pVw = (CProductExtraInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductExtraInfoDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoDialog*)pWnd)->OnAddProductExtraInfoDialog();
} 
static int _OnEditProductExtraInfoDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoDialog*)pWnd)->OnEditProductExtraInfoDialog();
} 
static int _OnDeleteProductExtraInfoDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoDialog*)pWnd)->OnDeleteProductExtraInfoDialog();
} 
static int _OnSaveProductExtraInfoDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoDialog*)pWnd)->OnSaveProductExtraInfoDialog();
} 
static int _OnCancelProductExtraInfoDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoDialog*)pWnd)->OnCancelProductExtraInfoDialog();
} 
CProductExtraInfoDialog::CProductExtraInfoDialog(CWnd *pParent, int nMode, CString szAppendixID):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 965;
	m_nDlgHeight = 245;
	SetDefaultValues();
	m_pWndRef = NULL;
	m_szAppendixID = szAppendixID;
	m_bAppendixMode = false;
	if (!szAppendixID.IsEmpty())
	{
		m_bAppendixMode = true;
	}
}
CProductExtraInfoDialog::~CProductExtraInfoDialog(){
}
void CProductExtraInfoDialog::OnCreateComponents(){
	m_wndCurrentInfo.Create(this, _T("Thông tin"), 5, 5, 960, 210);
	m_wndHoatchatLabel.Create(this, _T("Hoạt chất"), 10, 30, 110, 55);
	m_wndHoatchat.Create(this, 115, 30, 474, 55);
	m_wndMahoatchatLabel.Create(this, _T("Mã ánh xạ"), 479, 30, 579, 55);
	m_wndMahoatchat.Create(this, 584, 30, 713, 55);
	m_wndTenthuocLabel.Create(this, _T("Tên thuốc"), 10, 60, 110, 85);
	m_wndTenthuoc.Create(this, 115, 60, 474, 85);
	m_wndHamluongLabel.Create(this, _T("Hàm lượng"), 479, 60, 579, 85);
	m_wndHamluong.Create(this, 584, 60, 713, 85);
	m_wndDonvitinhLabel.Create(this, _T("Đơn vị tính"), 718, 60, 823, 85);
	m_wndDonvitinh.Create(this, 828, 60, 957, 85);
	m_wndSodangkyLabel.Create(this, _T("Số đăng ký"), 10, 90, 110, 115);
	m_wndSodangky.Create(this, 115, 90, 235, 115);
	m_wndDonggoiLabel.Create(this, _T("Đóng gói"), 240, 90, 340, 115);
	m_wndDonggoi.Create(this, 345, 90, 474, 115);
	m_wndMaduongdungLabel.Create(this, _T("Mã đường dùng"), 479, 90, 579, 115);
	m_wndMaduongdung.Create(this, 584, 90, 713, 115);
	m_wndDuongdungLabel.Create(this, _T("Đường dùng"), 718, 90, 823, 115);
	m_wndDuongdung.Create(this, 828, 90, 957, 115);
	m_wndDongiaTTLabel.Create(this, _T("Đơn giá TT"), 10, 120, 110, 145);
	m_wndDongiaTT.Create(this, 115, 120, 235, 145);
	m_wndSoluongTTLabel.Create(this, _T("Số lượng TT"), 240, 120, 340, 145);
	m_wndSoluongTT.Create(this, 345, 120, 474, 145);
	m_wndDongiaDukienLabel.Create(this, _T("ĐG dự kiên"), 479, 120, 579, 145);
	m_wndDongiaDukien.Create(this, 584, 120, 713, 145);
	m_wndSoluongDukienLabel.Create(this, _T("SL dự kiến"), 718, 120, 823, 145);
	m_wndSoluongDukien.Create(this, 828, 120, 957, 145);
	m_wndNuocsxLabel.Create(this, _T("Nước SX"), 10, 150, 110, 175);
	m_wndNuocsx.Create(this, 115, 150, 474, 175);
	m_wndHangsxLabel.Create(this, _T("Hãng SX"), 479, 150, 579, 175);
	m_wndHangsx.Create(this, 584, 150, 957, 175);
	m_wndManhomvtytLabel.Create(this, _T("Mã nhóm vtyt"), 10, 180, 110, 205);
	m_wndManhomvtyt.Create(this, 115, 180, 244, 205);
	m_wndPackageLabel.Create(this, _T("Gói"), 249, 180, 349, 205);
	m_wndPackage.Create(this, 354, 180, 474, 205);
	m_wndPackageGrpLabel.Create(this, _T("Nhóm"), 479, 180, 579, 205);
	m_wndPackageGrp.Create(this, 584, 180, 957, 205);
	m_wndMathuocbvLabel.Create(this, _T("Mã thuốc BV"), 10, 215, 110, 240);
	m_wndMathuocbv.Create(this, 115, 215, 475, 240);
	m_wndSave.Create(this, _T("&Lưu"), 775, 215, 865, 240);
	m_wndClose.Create(this, _T("Đóng"), 870, 215, 960, 240);


}
void CProductExtraInfoDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndHoatchat.SetCheckValue(true);
	m_wndHoatchat.LimitText(1024);
	m_wndMahoatchat.SetLimitText(1024);
	m_wndMahoatchat.SetReadOnly(true);
	m_wndMathuocbv.SetCheckValue(false);
	m_wndMathuocbv.LimitText(1024);
	m_wndTenthuoc.SetLimitText(1024);
	m_wndTenthuoc.SetCheckValue(true);
	m_wndHamluong.SetLimitText(1024);
	m_wndHamluong.SetReadOnly(true);
	m_wndDonvitinh.SetLimitText(1024);
	m_wndDonvitinh.SetReadOnly(true);
	m_wndSodangky.SetLimitText(1024);
	m_wndSodangky.SetCheckValue(true);
	m_wndDonggoi.SetLimitText(1024);
	m_wndDonggoi.SetCheckValue(false);
	m_wndMaduongdung.SetLimitText(1024);
	m_wndMaduongdung.SetReadOnly(true);
	m_wndDuongdung.SetLimitText(1024);
	m_wndDuongdung.SetReadOnly(true);
	m_wndDongiaDukien.SetLimitText(1024);
	m_wndDongiaDukien.SetReadOnly(true);
	m_wndDongiaTT.SetLimitText(15);
	m_wndDongiaTT.SetCheckValue(true);
	m_wndSoluongTT.SetLimitText(10);
	m_wndSoluongTT.SetCheckValue(true);
	m_wndSoluongDukien.SetLimitText(1024);
	m_wndSoluongDukien.SetReadOnly(true);
	m_wndNuocsx.SetCheckValue(true);
	m_wndNuocsx.LimitText(1024);
	m_wndHangsx.SetCheckValue(true);
	m_wndHangsx.LimitText(1024);
	m_wndManhomvtyt.SetLimitText(1024);
	m_wndManhomvtyt.SetCheckValue(false);
	m_wndPackage.SetLimitText(1024);
	m_wndPackage.SetCheckValue(false);
	m_wndPackageGrp.SetLimitText(1024);
	m_wndPackageGrp.SetCheckValue(false);

	m_wndHoatchat.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndHoatchat.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndHoatchat.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndHoatchat.InsertColumn(3, _T("ID"), CFMT_TEXT, 50);


	m_wndMathuocbv.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMathuocbv.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndMathuocbv.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);


	m_wndNuocsx.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNuocsx.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHangsx.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndHangsx.InsertColumn(1, _T("Code"), CFMT_TEXT, 50);
	m_wndHangsx.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndHangsx.Format(3, 2);


	m_product_extra_infoTbl.SetTableName(_T("m_product_extra_info"));
	m_product_extra_infoTbl.AddField(_T("MPEI_ID"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_PRODUCT_ID"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_STT"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_TEN_THUOC"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_MA_LOAI"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_SO_DANG_KY"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_DONG_GOI"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_DON_GIA_TT"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_SO_LUONG"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_HANG_SX"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_NUOC_SX"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_NHA_THAU"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_MA_THUOC_BV"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_MA_NHOM_VTYT"), dfText, 254);
	m_product_extra_infoTbl.AddField(_T("MPEI_PACKAGES"), dfText, 50);
	m_product_extra_infoTbl.AddField(_T("MPEI_GROUP"), dfText, 20);
	m_product_extra_infoTbl.AddField(_T("MPEI_CONTRACT_ID"), dfLong);
	m_product_extra_infoTbl.AddField(_T("MPEI_MA_GOI_THAU"), dfLong);

}
void CProductExtraInfoDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndHoatchat.SetEvent(WE_SELENDOK, _OnHoatchatSelendokFnc);
	//m_wndHoatchat.SetEvent(WE_SETFOCUS, _OnHoatchatSetfocusFnc);
	//m_wndHoatchat.SetEvent(WE_KILLFOCUS, _OnHoatchatKillfocusFnc);
	m_wndHoatchat.SetEvent(WE_SELCHANGE, _OnHoatchatSelectChangeFnc);
	m_wndHoatchat.SetEvent(WE_LOADDATA, _OnHoatchatLoadDataFnc);
	//m_wndHoatchat.SetEvent(WE_ADDNEW, _OnHoatchatAddNewFnc);
	//m_wndMahoatchat.SetEvent(WE_CHANGE, _OnMahoatchatChangeFnc);
	//m_wndMahoatchat.SetEvent(WE_SETFOCUS, _OnMahoatchatSetfocusFnc);
	//m_wndMahoatchat.SetEvent(WE_KILLFOCUS, _OnMahoatchatKillfocusFnc);
	m_wndMahoatchat.SetEvent(WE_CHECKVALUE, _OnMahoatchatCheckValueFnc);

	m_wndMathuocbvLabel.SetHyperlink(true);
	m_wndMathuocbvLabel.SetEvent(WE_CLICK, _OnMathuocBvLabelSelectFnc);
	m_wndMathuocbv.SetEvent(WE_SELENDOK, _OnMathuocbvSelendokFnc);
	//m_wndMathuocbv.SetEvent(WE_SETFOCUS, _OnMathuocbvSetfocusFnc);
	//m_wndMathuocbv.SetEvent(WE_KILLFOCUS, _OnMathuocbvKillfocusFnc);
	m_wndMathuocbv.SetEvent(WE_SELCHANGE, _OnMathuocbvSelectChangeFnc);
	m_wndMathuocbv.SetEvent(WE_LOADDATA, _OnMathuocbvLoadDataFnc);
	//m_wndMathuocbv.SetEvent(WE_ADDNEW, _OnMathuocbvAddNewFnc);
	//m_wndTenthuoc.SetEvent(WE_CHANGE, _OnTenthuocChangeFnc);
	//m_wndTenthuoc.SetEvent(WE_SETFOCUS, _OnTenthuocSetfocusFnc);
	//m_wndTenthuoc.SetEvent(WE_KILLFOCUS, _OnTenthuocKillfocusFnc);
	m_wndTenthuoc.SetEvent(WE_CHECKVALUE, _OnTenthuocCheckValueFnc);
	//m_wndHamluong.SetEvent(WE_CHANGE, _OnHamluongChangeFnc);
	//m_wndHamluong.SetEvent(WE_SETFOCUS, _OnHamluongSetfocusFnc);
	//m_wndHamluong.SetEvent(WE_KILLFOCUS, _OnHamluongKillfocusFnc);
	m_wndHamluong.SetEvent(WE_CHECKVALUE, _OnHamluongCheckValueFnc);
	//m_wndDonvitinh.SetEvent(WE_CHANGE, _OnDonvitinhChangeFnc);
	//m_wndDonvitinh.SetEvent(WE_SETFOCUS, _OnDonvitinhSetfocusFnc);
	//m_wndDonvitinh.SetEvent(WE_KILLFOCUS, _OnDonvitinhKillfocusFnc);
	m_wndDonvitinh.SetEvent(WE_CHECKVALUE, _OnDonvitinhCheckValueFnc);
	//m_wndSodangky.SetEvent(WE_CHANGE, _OnSodangkyChangeFnc);
	//m_wndSodangky.SetEvent(WE_SETFOCUS, _OnSodangkySetfocusFnc);
	//m_wndSodangky.SetEvent(WE_KILLFOCUS, _OnSodangkyKillfocusFnc);
	m_wndSodangky.SetEvent(WE_CHECKVALUE, _OnSodangkyCheckValueFnc);
	//m_wndDonggoi.SetEvent(WE_CHANGE, _OnDonggoiChangeFnc);
	//m_wndDonggoi.SetEvent(WE_SETFOCUS, _OnDonggoiSetfocusFnc);
	//m_wndDonggoi.SetEvent(WE_KILLFOCUS, _OnDonggoiKillfocusFnc);
	m_wndDonggoi.SetEvent(WE_CHECKVALUE, _OnDonggoiCheckValueFnc);
	//m_wndMaduongdung.SetEvent(WE_CHANGE, _OnMaduongdungChangeFnc);
	//m_wndMaduongdung.SetEvent(WE_SETFOCUS, _OnMaduongdungSetfocusFnc);
	//m_wndMaduongdung.SetEvent(WE_KILLFOCUS, _OnMaduongdungKillfocusFnc);
	m_wndMaduongdung.SetEvent(WE_CHECKVALUE, _OnMaduongdungCheckValueFnc);
	//m_wndDuongdung.SetEvent(WE_CHANGE, _OnDuongdungChangeFnc);
	//m_wndDuongdung.SetEvent(WE_SETFOCUS, _OnDuongdungSetfocusFnc);
	//m_wndDuongdung.SetEvent(WE_KILLFOCUS, _OnDuongdungKillfocusFnc);
	m_wndDuongdung.SetEvent(WE_CHECKVALUE, _OnDuongdungCheckValueFnc);
	//m_wndDongiaDukien.SetEvent(WE_CHANGE, _OnDongiaDukienChangeFnc);
	//m_wndDongiaDukien.SetEvent(WE_SETFOCUS, _OnDongiaDukienSetfocusFnc);
	//m_wndDongiaDukien.SetEvent(WE_KILLFOCUS, _OnDongiaDukienKillfocusFnc);
	m_wndDongiaDukien.SetEvent(WE_CHECKVALUE, _OnDongiaDukienCheckValueFnc);
	//m_wndDongiaTT.SetEvent(WE_CHANGE, _OnDongiaTTChangeFnc);
	//m_wndDongiaTT.SetEvent(WE_SETFOCUS, _OnDongiaTTSetfocusFnc);
	//m_wndDongiaTT.SetEvent(WE_KILLFOCUS, _OnDongiaTTKillfocusFnc);
	m_wndDongiaTT.SetEvent(WE_CHECKVALUE, _OnDongiaTTCheckValueFnc);
	//m_wndSoluongTT.SetEvent(WE_CHANGE, _OnSoluongTTChangeFnc);
	//m_wndSoluongTT.SetEvent(WE_SETFOCUS, _OnSoluongTTSetfocusFnc);
	//m_wndSoluongTT.SetEvent(WE_KILLFOCUS, _OnSoluongTTKillfocusFnc);
	m_wndSoluongTT.SetEvent(WE_CHECKVALUE, _OnSoluongTTCheckValueFnc);
	//m_wndSoluongDukien.SetEvent(WE_CHANGE, _OnSoluongDukienChangeFnc);
	//m_wndSoluongDukien.SetEvent(WE_SETFOCUS, _OnSoluongDukienSetfocusFnc);
	//m_wndSoluongDukien.SetEvent(WE_KILLFOCUS, _OnSoluongDukienKillfocusFnc);
	m_wndSoluongDukien.SetEvent(WE_CHECKVALUE, _OnSoluongDukienCheckValueFnc);
	m_wndNuocsx.SetEvent(WE_SELENDOK, _OnNuocsxSelendokFnc);
	//m_wndNuocsx.SetEvent(WE_SETFOCUS, _OnNuocsxSetfocusFnc);
	//m_wndNuocsx.SetEvent(WE_KILLFOCUS, _OnNuocsxKillfocusFnc);
	m_wndNuocsx.SetEvent(WE_SELCHANGE, _OnNuocsxSelectChangeFnc);
	m_wndNuocsx.SetEvent(WE_LOADDATA, _OnNuocsxLoadDataFnc);
	//m_wndNuocsx.SetEvent(WE_ADDNEW, _OnNuocsxAddNewFnc);
	m_wndHangsx.SetEvent(WE_SELENDOK, _OnHangsxSelendokFnc);
	//m_wndHangsx.SetEvent(WE_SETFOCUS, _OnHangsxSetfocusFnc);
	//m_wndHangsx.SetEvent(WE_KILLFOCUS, _OnHangsxKillfocusFnc);
	m_wndHangsx.SetEvent(WE_SELCHANGE, _OnHangsxSelectChangeFnc);
	m_wndHangsx.SetEvent(WE_LOADDATA, _OnHangsxLoadDataFnc);
	//m_wndHangsx.SetEvent(WE_ADDNEW, _OnHangsxAddNewFnc);
	//m_wndManhomvtyt.SetEvent(WE_CHANGE, _OnManhomvtytChangeFnc);
	//m_wndManhomvtyt.SetEvent(WE_SETFOCUS, _OnManhomvtytSetfocusFnc);
	//m_wndManhomvtyt.SetEvent(WE_KILLFOCUS, _OnManhomvtytKillfocusFnc);
	m_wndManhomvtyt.SetEvent(WE_CHECKVALUE, _OnManhomvtytCheckValueFnc);
	//m_wndPackage.SetEvent(WE_CHANGE, _OnPackageChangeFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_CHECKVALUE, _OnPackageCheckValueFnc);
	//m_wndPackageGrp.SetEvent(WE_CHANGE, _OnPackageGrpChangeFnc);
	//m_wndPackageGrp.SetEvent(WE_SETFOCUS, _OnPackageGrpSetfocusFnc);
	//m_wndPackageGrp.SetEvent(WE_KILLFOCUS, _OnPackageGrpKillfocusFnc);
	m_wndPackageGrp.SetEvent(WE_CHECKVALUE, _OnPackageGrpCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if (nMode == VM_VIEW || nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CProductExtraInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndHoatchat.GetDlgCtrlID(), m_szHoatchatKey);
	DDX_Text(pDX, m_wndMahoatchat.GetDlgCtrlID(), m_szMahoatchat);
	DDX_TextEx(pDX, m_wndMathuocbv.GetDlgCtrlID(), m_szMathuocbvKey);
	DDX_Text(pDX, m_wndTenthuoc.GetDlgCtrlID(), m_szTenthuoc);
	DDX_Text(pDX, m_wndHamluong.GetDlgCtrlID(), m_szHamluong);
	DDX_Text(pDX, m_wndDonvitinh.GetDlgCtrlID(), m_szDonvitinh);
	DDX_Text(pDX, m_wndSodangky.GetDlgCtrlID(), m_szSodangky);
	DDX_Text(pDX, m_wndDonggoi.GetDlgCtrlID(), m_szDonggoi);
	DDX_Text(pDX, m_wndMaduongdung.GetDlgCtrlID(), m_szMaduongdung);
	DDX_Text(pDX, m_wndDuongdung.GetDlgCtrlID(), m_szDuongdung);
	DDX_Text(pDX, m_wndDongiaDukien.GetDlgCtrlID(), m_nDongiaDukien);
	DDX_Text(pDX, m_wndDongiaTT.GetDlgCtrlID(), m_nDongiaTT);
	DDX_Text(pDX, m_wndSoluongTT.GetDlgCtrlID(), m_nSoluongTT);
	DDX_Text(pDX, m_wndSoluongDukien.GetDlgCtrlID(), m_nSoluongDukien);
	DDX_TextEx(pDX, m_wndNuocsx.GetDlgCtrlID(), m_szNuocsxKey);
	DDX_TextEx(pDX, m_wndHangsx.GetDlgCtrlID(), m_szHangsxKey);
	DDX_Text(pDX, m_wndManhomvtyt.GetDlgCtrlID(), m_szManhomvtyt);
	DDX_Text(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackage);
	DDX_Text(pDX, m_wndPackageGrp.GetDlgCtrlID(), m_szPackageGrp);

}
void CProductExtraInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Hoatchat")] =  m_szHoatchatKey;
	m_jData[_T("Mahoatchat")] =  m_szMahoatchat;
	m_jData[_T("Mathuocbv")] =  m_szMathuocbvKey;
	m_jData[_T("Tenthuoc")] =  m_szTenthuoc;
	m_jData[_T("Hamluong")] =  m_szHamluong;
	m_jData[_T("Donvitinh")] =  m_szDonvitinh;
	m_jData[_T("Sodangky")] =  m_szSodangky;
	m_jData[_T("Donggoi")] =  m_szDonggoi;
	m_jData[_T("Maduongdung")] =  m_szMaduongdung;
	m_jData[_T("Duongdung")] =  m_szDuongdung;
	m_jData[_T("DongiaDukien")] =  m_nDongiaDukien;
	m_jData[_T("DongiaTT")] =  m_nDongiaTT;
	m_jData[_T("SoluongTT")] =  m_nSoluongTT;
	m_jData[_T("SoluongDukien")] =  m_nSoluongDukien;
	m_jData[_T("Nuocsx")] =  m_szNuocsxKey;
	m_jData[_T("Hangsx")] =  m_szHangsxKey;
	m_jData[_T("Manhomvtyt")] =  m_szManhomvtyt;
	m_jData[_T("Package")] =  m_szPackage;
	m_jData[_T("PackageGrp")] =  m_szPackageGrp;
	}
	else
	{
			
	m_jData[_T("Hoatchat")].GetValue(m_szHoatchatKey);
	m_jData[_T("Mahoatchat")].GetValue(m_szMahoatchat);
	m_jData[_T("Mathuocbv")].GetValue(m_szMathuocbvKey);
	m_jData[_T("Tenthuoc")].GetValue(m_szTenthuoc);
	m_jData[_T("Hamluong")].GetValue(m_szHamluong);
	m_jData[_T("Donvitinh")].GetValue(m_szDonvitinh);
	m_jData[_T("Sodangky")].GetValue(m_szSodangky);
	m_jData[_T("Donggoi")].GetValue(m_szDonggoi);
	m_jData[_T("Maduongdung")].GetValue(m_szMaduongdung);
	m_jData[_T("Duongdung")].GetValue(m_szDuongdung);
	m_jData[_T("DongiaDukien")].GetValue(m_nDongiaDukien);
	m_jData[_T("DongiaTT")].GetValue(m_nDongiaTT);
	m_jData[_T("SoluongTT")].GetValue(m_nSoluongTT);
	m_jData[_T("SoluongDukien")].GetValue(m_nSoluongDukien);
	m_jData[_T("Nuocsx")].GetValue(m_szNuocsxKey);
	m_jData[_T("Hangsx")].GetValue(m_szHangsxKey);
	m_jData[_T("Manhomvtyt")].GetValue(m_szManhomvtyt);
	m_jData[_T("Package")].GetValue(m_szPackage);
	m_jData[_T("PackageGrp")].GetValue(m_szPackageGrp);
	}

}
void CProductExtraInfoDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CString szSQL;
	
	m_nID = str2long(m_szHoatchatKey);

	
	szSQL.Format(_T("SELECT m_product_extra_info.*, ACTIVE_INGREDIENT_ID ") \
		_T(" FROM m_product_extra_info ") \
		_T(" LEFT JOIN m_product_tender ON(m_product_tender_id = mpei_product_tender_id) ") \
		_T("WHERE mpei_ma_goi_thau = %ld and mpei_id = %ld "), 
		m_nPackageID, m_nID);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("MPEI_MA_HOAT_CHAT"), m_szMahoatchat);
		rs.GetValue(_T("MPEI_MA_DUONG_DUNG"), m_szMaduongdung);
		rs.GetValue(_T("MPEI_DUONG_DUNG"), m_szDuongdung);
		rs.GetValue(_T("MPEI_HAM_LUONG"), m_szHamluong);
		rs.GetValue(_T("MPEI_TEN_THUOC"), m_szTenthuoc);
		rs.GetValue(_T("MPEI_SO_DANG_KY"), m_szSodangky);
		rs.GetValue(_T("MPEI_DONG_GOI"), m_szDonggoi);
		rs.GetValue(_T("MPEI_DON_VI_TINH"), m_szDonvitinh);
		rs.GetValue(_T("MPEI_DON_GIA"), m_nDongiaDukien);
		rs.GetValue(_T("MPEI_DON_GIA_TT"), m_nDongiaTT);
		rs.GetValue(_T("MPEI_SO_LUONG"), m_nSoluongTT);
		rs.GetValue(_T("MPEI_HANG_SX"), m_szHangsxKey);
		rs.GetValue(_T("MPEI_NUOC_SX"), m_szNuocsxKey);
		
		rs.GetValue(_T("MPEI_MA_THUOC_BV"), m_szMathuocbvKey);
		rs.GetValue(_T("MPEI_MA_NHOM_VTYT"), m_szManhomvtyt);
		//rs.GetValue(_T("MPEI_TEN_NHOM_VTYT"), m_sznhom);
		rs.GetValue(_T("MPEI_DINH_MUC"), m_nSoluongDukien);
		rs.GetValue(_T("mpei_product_id"), m_szMathuocbvKey);
		rs.GetValue(_T("mpei_packages"), m_szPackage);
		rs.GetValue(_T("mpei_group"), m_szPackageGrp);
		rs.GetValue(_T("mpei_so_luong_du_kien"), m_nSoluongDukien);
		rs.GetValue(_T("mpei_don_gia_du_kien"), m_nDongiaDukien);
		rs.GetValue(_T("ACTIVE_INGREDIENT_ID"), m_nActiveIngredientID);
		rs.GetValue(_T("mpei_product_tender_id"), m_szProductTenderID);
		
		UpdateData(FALSE);
	}

}
void CProductExtraInfoDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_product_extra_infoTbl.SetValue(_T("MPEI_ID"), m_nID);
	m_product_extra_infoTbl.SetValue(_T("MPEI_PRODUCT_ID"), m_szMathuocbvKey);	
	m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_THUOC"), m_szTenthuoc);
	m_product_extra_infoTbl.SetValue(_T("MPEI_SO_DANG_KY"), m_szSodangky);
	m_product_extra_infoTbl.SetValue(_T("MPEI_DONG_GOI"), m_szDonggoi);
	m_product_extra_infoTbl.SetValue(_T("MPEI_DON_GIA_TT"), m_nDongiaTT);
	m_product_extra_infoTbl.SetValue(_T("MPEI_SO_LUONG"), m_nSoluongTT);
	m_product_extra_infoTbl.SetValue(_T("MPEI_HANG_SX"), m_szHangsxKey);
	m_product_extra_infoTbl.SetValue(_T("MPEI_NUOC_SX"), m_szNuocsxKey);
	m_product_extra_infoTbl.SetValue(_T("MPEI_NHA_THAU"), m_szPartnerID);
	//m_product_extra_infoTbl.SetValue(_T("MPEI_QUYET_DINH"), m_szQuyetdinhKey);
	//m_product_extra_infoTbl.SetValue(_T("MPEI_CONG_BO"), m_szCongbo);
	m_product_extra_infoTbl.SetValue(_T("MPEI_MA_THUOC_BV"), m_szMathuocbvKey);
	m_product_extra_infoTbl.SetValue(_T("MPEI_MA_NHOM_VTYT"), m_szManhomvtyt);
	//m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_NHOM_VTYT"), m_szTennhomvtyt);
	//m_product_extra_infoTbl.SetValue(_T("MPEI_SO_HOP_DONG"), m_nContractID);
	m_product_extra_infoTbl.SetValue(_T("MPEI_DINH_MUC"), m_nSoluongDukien);
	m_product_extra_infoTbl.SetValue(_T("MPEI_PACKAGES"), m_szPackage);
	m_product_extra_infoTbl.SetValue(_T("MPEI_GROUP"), m_szPackageGrp);
	m_product_extra_infoTbl.SetValue(_T("MPEI_CONTRACT_ID"), m_nContractID);
	m_product_extra_infoTbl.SetValue(_T("MPEI_MA_GOI_THAU"), m_nPackageID);

}
void CProductExtraInfoDialog::SetDefaultValues(){

	m_szHoatchatKey.Empty();
	m_szMahoatchat.Empty();
	m_szMathuocbvKey.Empty();
	m_szTenthuoc.Empty();
	m_szHamluong.Empty();
	m_szDonvitinh.Empty();
	m_szSodangky.Empty();
	m_szDonggoi.Empty();
	m_szMaduongdung.Empty();
	m_szDuongdung.Empty();
	m_nDongiaDukien=0;
	m_nDongiaTT=0;
	m_nSoluongTT=0;
	m_nSoluongDukien=0;
	m_szNuocsxKey.Empty();
	m_szHangsxKey.Empty();
	m_szManhomvtyt.Empty();
	m_szPackage.Empty();
	m_szPackageGrp.Empty();
	m_nID = 0;
}
int CProductExtraInfoDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndHoatchat.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		if (m_bAppendixMode)
		{
			EnableControls(FALSE);
			m_wndHoatchat.EnableWindow();
			m_wndSoluongTT.EnableWindow();
			m_wndDongiaTT.EnableWindow();
		}
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductExtraInfoDialog::OnHoatchatSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnHoatchatSelendok(){
	UpdateData(true);
	_tprintf(L"%s", m_szHoatchatKey);
	GetDataToScreen();
	
}
/*void CProductExtraInfoDialog::OnHoatchatSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnHoatchatKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnHoatchatLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHoatchat.IsSearchKey() && !m_szHoatchatKey.IsEmpty()){
		szWhere.Format(_T(" and mpei_id='%s' "), m_szHoatchatKey);
	};
	if (m_bAppendixMode)
	{
		szWhere.AppendFormat(_T(" and mpei_product_id > 0"));
	}
	m_wndHoatchat.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
		_T("     mpei_id                AS id,") \
		_T("     code,") \
		_T("     active_ingredient||' /'|| dosage_id as name,") \
		_T("     dosage_id,") \
		_T("     dosage_form,") \
		_T("     route_id,") \
		_T(" get_uomname(uom_id) as uom, ")
		_T("     mpei_so_luong_du_kien  AS quantity,") \
		_T("     mpei_don_gia_du_kien   AS unitprice") \
		_T(" FROM") \
		_T("     m_product_tender,") \
		_T("     m_product_extra_info") \
		_T(" WHERE") \
		_T("         mpei_ma_goi_thau = %ld %s") \
		_T("     AND m_product_tender_id = mpei_product_tender_id") \
		_T(" ORDER BY") \
		_T("     active_ingredient"), m_nPackageID, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHoatchat.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("uom")), 
			rs.GetValue(_T("code")),
			rs.GetValue(_T("quantity")),
			rs.GetValue(_T("unitprice")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CProductExtraInfoDialog::OnHoatchatAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoDialog::OnMahoatchatChange(){
	
} */
/*void CProductExtraInfoDialog::OnMahoatchatSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnMahoatchatKillfocus(){
	
} */
int CProductExtraInfoDialog::OnMahoatchatCheckValue(){
	return 0;
} 
void CProductExtraInfoDialog::OnMathuocbvSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnMathuocbvSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnMathuocbvSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnMathuocbvKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnMathuocbvLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMathuocbv.IsSearchKey() && str2long(m_szMathuocbvKey) > 0){
		szWhere.Format(_T(" and mp_product_id=%ld "), str2long(m_szMathuocbvKey));
	}
	else {
		szWhere.Format(L"and mp_country_id='%s' and mp_manufacture_id='%s'  and mp_product_class_id=%ld", m_szNuocsxKey, m_szHangsxKey, m_nActiveIngredientID);
	}
	
	m_wndMathuocbv.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
		_T("     mp_product_id  AS id,") \
		_T("     mp_name        AS name,") \
		_T("     adu_name       AS uom") \
		_T(" FROM") \
		_T("     m_product") \
		_T("     LEFT JOIN ad_uom ON ( adu_uom_id = mp_uom_id )") \
		_T(" WHERE") \
		_T("         mp_org_id = '%s'") \
		_T("     AND mp_isactive = 'Y' %s") \
		_T(" ORDER BY") \
		_T("     id"),pMF->GetModuleID(), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMathuocbv.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("uom")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CProductExtraInfoDialog::OnMathuocbvAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoDialog::OnTenthuocChange(){
	
} */
/*void CProductExtraInfoDialog::OnTenthuocSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnTenthuocKillfocus(){
	
} */
int CProductExtraInfoDialog::OnTenthuocCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnHamluongChange(){
	
} */
/*void CProductExtraInfoDialog::OnHamluongSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnHamluongKillfocus(){
	
} */
int CProductExtraInfoDialog::OnHamluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDonvitinhChange(){
	
} */
/*void CProductExtraInfoDialog::OnDonvitinhSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDonvitinhKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDonvitinhCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnSodangkyChange(){
	
} */
/*void CProductExtraInfoDialog::OnSodangkySetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnSodangkyKillfocus(){
	
} */
int CProductExtraInfoDialog::OnSodangkyCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDonggoiChange(){
	
} */
/*void CProductExtraInfoDialog::OnDonggoiSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDonggoiKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDonggoiCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnMaduongdungChange(){
	
} */
/*void CProductExtraInfoDialog::OnMaduongdungSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnMaduongdungKillfocus(){
	
} */
int CProductExtraInfoDialog::OnMaduongdungCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDuongdungChange(){
	
} */
/*void CProductExtraInfoDialog::OnDuongdungSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDuongdungKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDuongdungCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDongiaDukienChange(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaDukienSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaDukienKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDongiaDukienCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDongiaTTChange(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaTTSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaTTKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDongiaTTCheckValue(){
	if (m_nDongiaTT <= 0)
	{
		m_wndDongiaTT.SetToolTipMessage(L"Yêu cầu nhập đơn giá TT");
		return -1;
	}
	return 0;
} 
/*void CProductExtraInfoDialog::OnSoluongTTChange(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongTTSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongTTKillfocus(){
	
} */
int CProductExtraInfoDialog::OnSoluongTTCheckValue() {
	if (m_nSoluongTT <= 0)
	{
		m_wndSoluongTT.SetToolTipMessage(L"Yêu cầu nhập số lượng TT");
		return -1;
	}

	return 0;
} 
/*void CProductExtraInfoDialog::OnSoluongDukienChange(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongDukienSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongDukienKillfocus(){
	
} */
int CProductExtraInfoDialog::OnSoluongDukienCheckValue(){
	return 0;
} 
void CProductExtraInfoDialog::OnNuocsxSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnNuocsxSelendok(){
	UpdateData(true);
	m_szHangsxKey.Empty();
	m_szMathuocbvKey.Empty();
	UpdateData(false);
}
/*void CProductExtraInfoDialog::OnNuocsxSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnNuocsxKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnNuocsxLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCountryList(&m_wndNuocsx, m_szNuocsxKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNuocsx.IsSearchKey() && !m_szNuocsxKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNuocsxKey
};
	m_wndNuocsx.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNuocsx.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnNuocsxAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductExtraInfoDialog::OnHangsxSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnHangsxSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnHangsxSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnHangsxKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnHangsxLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(L" and adm_country_id='%s' ", m_szNuocsxKey);

	return pMF->LoadManufactureList(&m_wndHangsx, m_szHangsxKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHangsx.IsSearchKey() && !m_szHangsxKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHangsxKey
};
	m_wndHangsx.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHangsx.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnHangsxAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoDialog::OnManhomvtytChange(){
	
} */
/*void CProductExtraInfoDialog::OnManhomvtytSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnManhomvtytKillfocus(){
	
} */
int CProductExtraInfoDialog::OnManhomvtytCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnPackageChange(){
	
} */
/*void CProductExtraInfoDialog::OnPackageSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnPackageKillfocus(){
	
} */
int CProductExtraInfoDialog::OnPackageCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnPackageGrpChange(){
	
} */
/*void CProductExtraInfoDialog::OnPackageGrpSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnPackageGrpKillfocus(){
	
} */
int CProductExtraInfoDialog::OnPackageGrpCheckValue(){
	return 0;
}

void CProductExtraInfoDialog::OnAddNewProduct() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CProductDialog dlg(this, VM_ADD);
	dlg.m_bReset = false;
	dlg.m_szProductName = m_szTenthuoc;
	dlg.m_szMfgKey = m_szHangsxKey;
	dlg.m_szSupplierKey = m_szPartnerID;

	szSQL.Format(_T("SELECT m_product_tender.*, mpc_product_category_id ") \
		_T("FROM m_product_tender LEFT JOIN m_product_class on(mpc_product_class_id = ACTIVE_INGREDIENT_ID) ") \
		_T("WHERE m_product_tender_id = '%s'"), m_szProductTenderID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(L"ACTIVE_INGREDIENT_ID", dlg.m_szProductClassKey);
		rs.GetValue(L"mpc_product_class_id", dlg.m_szProductCategoryKey);
		rs.GetValue(L"uom_id", dlg.m_szUomKey);
		rs.GetValue(L"dosage_id", dlg.m_szName2);
		rs.GetValue(L"uom_id", dlg.m_szUomKey);
		rs.GetValue(L"route_id", dlg.m_szSpecification);
	}
	dlg.DoModal();
}

void CProductExtraInfoDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductExtraInfoDialog();
} 
void CProductExtraInfoDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductExtraInfoDialog::OnAddProductExtraInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductExtraInfoDialog::OnEditProductExtraInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductExtraInfoDialog::OnDeleteProductExtraInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelProductExtraInfoDialog();
 	}
	return 0;
}
int CProductExtraInfoDialog::OnSaveProductExtraInfoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;

	if (m_bAppendixMode)
	{
		szSQL.Format(_T("M_CONTRACT_LINE_ADDAPPENDIX(%ld, %ld, '%s', %f, %f)")
					, m_nContractID, str2long(m_szMathuocbvKey), m_szAppendixID
					, m_nSoluongTT, m_nDongiaTT);
	}
	else
	{
		szSQL.Format(L"M_PRODUCT_EXTRA_INFO_UPDATE(%s)", m_product_extra_infoTbl.FormatSQL());
	}

 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if (m_pWndRef)
		{
			m_pWndRef->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
		}
		if (GetMode() == VM_ADD)
		{
			SetMode(VM_ADD);
		}
		else {
			CGuiDialog::OnCancel();
		}
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductExtraInfoDialog::OnCancelProductExtraInfoDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CProductExtraInfoDialog::OnProductExtraInfoDialogListLoadData(){
	return 0;
}
