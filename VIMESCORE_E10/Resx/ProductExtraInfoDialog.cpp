#include "ProductExtraInfoDialog.h"
#include "MainFrm.h"
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
/*static void _OnDongiattChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiattChange();
} */
/*static void _OnDongiattSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiattSetfocus();} */ 
/*static void _OnDongiattKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiattKillfocus();
} */
static int _OnDongiattCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDongiattCheckValue();
} 
/*static void _OnSoluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongChange();
} */
/*static void _OnSoluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongSetfocus();} */ 
/*static void _OnSoluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnSoluongKillfocus();
} */
static int _OnSoluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnSoluongCheckValue();
} 
/*static void _OnDongiaChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaChange();
} */
/*static void _OnDongiaSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaSetfocus();} */ 
/*static void _OnDongiaKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDongiaKillfocus();
} */
static int _OnDongiaCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDongiaCheckValue();
} 
/*static void _OnDinhmucChangeFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDinhmucChange();
} */
/*static void _OnDinhmucSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDinhmucSetfocus();} */ 
/*static void _OnDinhmucKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoDialog *)pWnd)->OnDinhmucKillfocus();
} */
static int _OnDinhmucCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoDialog *)pWnd)->OnDinhmucCheckValue();
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
CProductExtraInfoDialog::CProductExtraInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
CProductExtraInfoDialog::~CProductExtraInfoDialog(){
}
void CProductExtraInfoDialog::OnCreateComponents(){
	m_wndCurrentInfo.Create(this, _T("Thông tin"), 5, 5, 960, 210);
	m_wndHoatchatLabel.Create(this, _T("Hoạt chất"), 10, 30, 110, 55);
	m_wndHoatchat.Create(this,115, 30, 474, 55); 
	m_wndMahoatchatLabel.Create(this, _T("Mã ánh xạ"), 479, 30, 579, 55);
	m_wndMahoatchat.Create(this,584, 30, 713, 55); 
	m_wndTenthuocLabel.Create(this, _T("Tên thuốc"), 10, 60, 110, 85);
	m_wndTenthuoc.Create(this,115, 60, 474, 85); 
	m_wndHamluongLabel.Create(this, _T("Hàm lượng"), 479, 60, 579, 85);
	m_wndHamluong.Create(this,584, 60, 713, 85); 
	m_wndDonvitinhLabel.Create(this, _T("Đơn vị tính"), 718, 60, 823, 85);
	m_wndDonvitinh.Create(this,828, 60, 957, 85); 
	m_wndSodangkyLabel.Create(this, _T("Số đăng ký"), 10, 90, 110, 115);
	m_wndSodangky.Create(this,115, 90, 235, 115); 
	m_wndDonggoiLabel.Create(this, _T("Đóng gói"), 240, 90, 340, 115);
	m_wndDonggoi.Create(this,345, 90, 474, 115); 
	m_wndMaduongdungLabel.Create(this, _T("Mã đường dùng"), 479, 90, 579, 115);
	m_wndMaduongdung.Create(this,584, 90, 713, 115); 
	m_wndDuongdungLabel.Create(this, _T("Đường dùng"), 718, 90, 823, 115);
	m_wndDuongdung.Create(this,828, 90, 957, 115); 
	m_wndDongiattLabel.Create(this, _T("Đơn giá TT"), 10, 120, 110, 145);
	m_wndDongiatt.Create(this,115, 120, 235, 145); 
	m_wndSoluongLabel.Create(this, _T("Số lượng"), 240, 120, 340, 145);
	m_wndSoluong.Create(this,345, 120, 474, 145); 
	m_wndDongiaLabel.Create(this, _T("Đơn giá"), 479, 120, 579, 145);
	m_wndDongia.Create(this,584, 120, 713, 145); 
	m_wndDinhmucLabel.Create(this, _T("Định mức"), 718, 120, 823, 145);
	m_wndDinhmuc.Create(this,828, 120, 957, 145); 
	m_wndNuocsxLabel.Create(this, _T("Nước SX"), 10, 150, 110, 175);
	m_wndNuocsx.Create(this,115, 150, 474, 175); 
	m_wndHangsxLabel.Create(this, _T("Hãng SX"), 479, 150, 579, 175);
	m_wndHangsx.Create(this,584, 150, 957, 175); 
	m_wndManhomvtytLabel.Create(this, _T("Mã nhóm vtyt"), 10, 180, 110, 205);
	m_wndManhomvtyt.Create(this,115, 180, 244, 205); 
	m_wndPackageLabel.Create(this, _T("Gói"), 249, 180, 349, 205);
	m_wndPackage.Create(this,354, 180, 474, 205); 
	m_wndPackageGrpLabel.Create(this, _T("Nhóm"), 479, 180, 579, 205);
	m_wndPackageGrp.Create(this,584, 180, 957, 205); 
	m_wndMathuocbvLabel.Create(this, _T("Mã thuốc BV"), 10, 215, 110, 240);
	m_wndMathuocbv.Create(this,115, 215, 475, 240); 
	m_wndSave.Create(this, _T("&Lưu"), 775, 215, 865, 240);
	m_wndClose.Create(this, _T("Đóng"), 870, 215, 960, 240);

}
void CProductExtraInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHoatchat.SetCheckValue(true);
	m_wndHoatchat.LimitText(1024);
	m_wndMahoatchat.SetLimitText(1024);
	m_wndMahoatchat.SetCheckValue(true);
	m_wndTenthuoc.SetLimitText(1024);
	m_wndTenthuoc.SetCheckValue(true);
	m_wndHamluong.SetLimitText(1024);
	m_wndHamluong.SetCheckValue(true);
	m_wndDonvitinh.SetLimitText(1024);
	m_wndDonvitinh.SetCheckValue(true);
	m_wndSodangky.SetLimitText(1024);
	m_wndSodangky.SetCheckValue(true);
	m_wndDonggoi.SetLimitText(1024);
	m_wndDonggoi.SetCheckValue(true);
	m_wndMaduongdung.SetLimitText(1024);
	m_wndMaduongdung.SetCheckValue(true);
	m_wndDuongdung.SetLimitText(1024);
	m_wndDuongdung.SetCheckValue(true);
	m_wndDongiatt.SetLimitText(1024);
	m_wndDongiatt.SetCheckValue(true);
	m_wndSoluong.SetLimitText(1024);
	m_wndSoluong.SetCheckValue(true);
	m_wndDongia.SetLimitText(1024);
	m_wndDongia.SetCheckValue(true);
	m_wndDinhmuc.SetLimitText(1024);
	m_wndDinhmuc.SetCheckValue(true);
	m_wndNuocsx.SetCheckValue(true);
	m_wndNuocsx.LimitText(1024);
	m_wndHangsx.SetCheckValue(true);
	m_wndHangsx.LimitText(1024);
	m_wndManhomvtyt.SetLimitText(1024);
	m_wndManhomvtyt.SetCheckValue(true);
	m_wndPackage.SetLimitText(1024);
	m_wndPackage.SetCheckValue(true);
	m_wndPackageGrp.SetLimitText(1024);
	m_wndPackageGrp.SetCheckValue(true);
	m_wndMathuocbv.SetCheckValue(true);
	m_wndMathuocbv.LimitText(1024);









}
void CProductExtraInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndDongiatt.SetEvent(WE_CHANGE, _OnDongiattChangeFnc);
	//m_wndDongiatt.SetEvent(WE_SETFOCUS, _OnDongiattSetfocusFnc);
	//m_wndDongiatt.SetEvent(WE_KILLFOCUS, _OnDongiattKillfocusFnc);
	m_wndDongiatt.SetEvent(WE_CHECKVALUE, _OnDongiattCheckValueFnc);
	//m_wndSoluong.SetEvent(WE_CHANGE, _OnSoluongChangeFnc);
	//m_wndSoluong.SetEvent(WE_SETFOCUS, _OnSoluongSetfocusFnc);
	//m_wndSoluong.SetEvent(WE_KILLFOCUS, _OnSoluongKillfocusFnc);
	m_wndSoluong.SetEvent(WE_CHECKVALUE, _OnSoluongCheckValueFnc);
	//m_wndDongia.SetEvent(WE_CHANGE, _OnDongiaChangeFnc);
	//m_wndDongia.SetEvent(WE_SETFOCUS, _OnDongiaSetfocusFnc);
	//m_wndDongia.SetEvent(WE_KILLFOCUS, _OnDongiaKillfocusFnc);
	m_wndDongia.SetEvent(WE_CHECKVALUE, _OnDongiaCheckValueFnc);
	//m_wndDinhmuc.SetEvent(WE_CHANGE, _OnDinhmucChangeFnc);
	//m_wndDinhmuc.SetEvent(WE_SETFOCUS, _OnDinhmucSetfocusFnc);
	//m_wndDinhmuc.SetEvent(WE_KILLFOCUS, _OnDinhmucKillfocusFnc);
	m_wndDinhmuc.SetEvent(WE_CHECKVALUE, _OnDinhmucCheckValueFnc);
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
	m_wndMathuocbv.SetEvent(WE_SELENDOK, _OnMathuocbvSelendokFnc);
	//m_wndMathuocbv.SetEvent(WE_SETFOCUS, _OnMathuocbvSetfocusFnc);
	//m_wndMathuocbv.SetEvent(WE_KILLFOCUS, _OnMathuocbvKillfocusFnc);
	m_wndMathuocbv.SetEvent(WE_SELCHANGE, _OnMathuocbvSelectChangeFnc);
	m_wndMathuocbv.SetEvent(WE_LOADDATA, _OnMathuocbvLoadDataFnc);
	//m_wndMathuocbv.SetEvent(WE_ADDNEW, _OnMathuocbvAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductExtraInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndHoatchat.GetDlgCtrlID(), m_szHoatchatKey);
	DDX_Text(pDX, m_wndMahoatchat.GetDlgCtrlID(), m_szMahoatchat);
	DDX_Text(pDX, m_wndTenthuoc.GetDlgCtrlID(), m_szTenthuoc);
	DDX_Text(pDX, m_wndHamluong.GetDlgCtrlID(), m_szHamluong);
	DDX_Text(pDX, m_wndDonvitinh.GetDlgCtrlID(), m_szDonvitinh);
	DDX_Text(pDX, m_wndSodangky.GetDlgCtrlID(), m_szSodangky);
	DDX_Text(pDX, m_wndDonggoi.GetDlgCtrlID(), m_szDonggoi);
	DDX_Text(pDX, m_wndMaduongdung.GetDlgCtrlID(), m_szMaduongdung);
	DDX_Text(pDX, m_wndDuongdung.GetDlgCtrlID(), m_szDuongdung);
	DDX_Text(pDX, m_wndDongiatt.GetDlgCtrlID(), m_nDongiatt);
	DDX_Text(pDX, m_wndSoluong.GetDlgCtrlID(), m_nSoluong);
	DDX_Text(pDX, m_wndDongia.GetDlgCtrlID(), m_nDongia);
	DDX_Text(pDX, m_wndDinhmuc.GetDlgCtrlID(), m_nDinhmuc);
	DDX_TextEx(pDX, m_wndNuocsx.GetDlgCtrlID(), m_szNuocsxKey);
	DDX_TextEx(pDX, m_wndHangsx.GetDlgCtrlID(), m_szHangsxKey);
	DDX_Text(pDX, m_wndManhomvtyt.GetDlgCtrlID(), m_szManhomvtyt);
	DDX_Text(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackage);
	DDX_Text(pDX, m_wndPackageGrp.GetDlgCtrlID(), m_szPackageGrp);
	DDX_TextEx(pDX, m_wndMathuocbv.GetDlgCtrlID(), m_szMathuocbvKey);

}
void CProductExtraInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Hoatchat")] =  m_szHoatchatKey;
	m_jData[_T("Mahoatchat")] =  m_szMahoatchat;
	m_jData[_T("Tenthuoc")] =  m_szTenthuoc;
	m_jData[_T("Hamluong")] =  m_szHamluong;
	m_jData[_T("Donvitinh")] =  m_szDonvitinh;
	m_jData[_T("Sodangky")] =  m_szSodangky;
	m_jData[_T("Donggoi")] =  m_szDonggoi;
	m_jData[_T("Maduongdung")] =  m_szMaduongdung;
	m_jData[_T("Duongdung")] =  m_szDuongdung;
	m_jData[_T("Dongiatt")] =  m_nDongiatt;
	m_jData[_T("Soluong")] =  m_nSoluong;
	m_jData[_T("Dongia")] =  m_nDongia;
	m_jData[_T("Dinhmuc")] =  m_nDinhmuc;
	m_jData[_T("Nuocsx")] =  m_szNuocsxKey;
	m_jData[_T("Hangsx")] =  m_szHangsxKey;
	m_jData[_T("Manhomvtyt")] =  m_szManhomvtyt;
	m_jData[_T("Package")] =  m_szPackage;
	m_jData[_T("PackageGrp")] =  m_szPackageGrp;
	m_jData[_T("Mathuocbv")] =  m_szMathuocbvKey;
	}
	else
	{
			
	m_jData[_T("Hoatchat")].GetValue(m_szHoatchatKey);
	m_jData[_T("Mahoatchat")].GetValue(m_szMahoatchat);
	m_jData[_T("Tenthuoc")].GetValue(m_szTenthuoc);
	m_jData[_T("Hamluong")].GetValue(m_szHamluong);
	m_jData[_T("Donvitinh")].GetValue(m_szDonvitinh);
	m_jData[_T("Sodangky")].GetValue(m_szSodangky);
	m_jData[_T("Donggoi")].GetValue(m_szDonggoi);
	m_jData[_T("Maduongdung")].GetValue(m_szMaduongdung);
	m_jData[_T("Duongdung")].GetValue(m_szDuongdung);
	m_jData[_T("Dongiatt")].GetValue(m_nDongiatt);
	m_jData[_T("Soluong")].GetValue(m_nSoluong);
	m_jData[_T("Dongia")].GetValue(m_nDongia);
	m_jData[_T("Dinhmuc")].GetValue(m_nDinhmuc);
	m_jData[_T("Nuocsx")].GetValue(m_szNuocsxKey);
	m_jData[_T("Hangsx")].GetValue(m_szHangsxKey);
	m_jData[_T("Manhomvtyt")].GetValue(m_szManhomvtyt);
	m_jData[_T("Package")].GetValue(m_szPackage);
	m_jData[_T("PackageGrp")].GetValue(m_szPackageGrp);
	m_jData[_T("Mathuocbv")].GetValue(m_szMathuocbvKey);
	}

}
void CProductExtraInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductExtraInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductExtraInfoDialog::SetDefaultValues(){

	m_szHoatchatKey.Empty();
	m_szMahoatchat.Empty();
	m_szTenthuoc.Empty();
	m_szHamluong.Empty();
	m_szDonvitinh.Empty();
	m_szSodangky.Empty();
	m_szDonggoi.Empty();
	m_szMaduongdung.Empty();
	m_szDuongdung.Empty();
	m_nDongiatt=0;
	m_nSoluong=0;
	m_nDongia=0;
	m_nDinhmuc=0;
	m_szNuocsxKey.Empty();
	m_szHangsxKey.Empty();
	m_szManhomvtyt.Empty();
	m_szPackage.Empty();
	m_szPackageGrp.Empty();
	m_szMathuocbvKey.Empty();

}
int CProductExtraInfoDialog::SetMode(int nMode){
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
void CProductExtraInfoDialog::OnHoatchatSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnHoatchatSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnHoatchatSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnHoatchatKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnHoatchatLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHoatchat.IsSearchKey() && !m_szHoatchatKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHoatchatKey
};
	m_wndHoatchat.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHoatchat.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnHoatchatAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
/*void CProductExtraInfoDialog::OnDongiattChange(){
	
} */
/*void CProductExtraInfoDialog::OnDongiattSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDongiattKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDongiattCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnSoluongChange(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnSoluongKillfocus(){
	
} */
int CProductExtraInfoDialog::OnSoluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDongiaChange(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDongiaKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDongiaCheckValue(){
	return 0;
} 
/*void CProductExtraInfoDialog::OnDinhmucChange(){
	
} */
/*void CProductExtraInfoDialog::OnDinhmucSetfocus(){
	
} */
/*void CProductExtraInfoDialog::OnDinhmucKillfocus(){
	
} */
int CProductExtraInfoDialog::OnDinhmucCheckValue(){
	return 0;
} 
void CProductExtraInfoDialog::OnNuocsxSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnNuocsxSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnNuocsxSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnNuocsxKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnNuocsxLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnNuocsxAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductExtraInfoDialog::OnHangsxSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnHangsxSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnHangsxSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnHangsxKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnHangsxLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnHangsxAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
void CProductExtraInfoDialog::OnMathuocbvSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnMathuocbvSelendok(){
	 
}
/*void CProductExtraInfoDialog::OnMathuocbvSetfocus(){
	
}*/
/*void CProductExtraInfoDialog::OnMathuocbvKillfocus(){
	
}*/
long CProductExtraInfoDialog::OnMathuocbvLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMathuocbv.IsSearchKey() && !m_szMathuocbvKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMathuocbvKey
};
	m_wndMathuocbv.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMathuocbv.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoDialog::OnMathuocbvAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductExtraInfoDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductExtraInfoDialog::OnAddProductExtraInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductExtraInfoDialog::OnEditProductExtraInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductExtraInfoDialog::OnDeleteProductExtraInfoDialog(){
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
 		OnCancelProductExtraInfoDialog();
 	}
	return 0;
}
int CProductExtraInfoDialog::OnSaveProductExtraInfoDialog(){
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
 		//OnProductExtraInfoDialogListLoadData();
 		SetMode(VM_VIEW);
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
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CProductExtraInfoDialog::OnProductExtraInfoDialogListLoadData(){
	return 0;
}
