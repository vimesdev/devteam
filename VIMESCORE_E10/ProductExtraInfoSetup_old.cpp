#include "ProductExtraInfoSetup.h"
#include "MainFrame_E10.h"
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnGroupAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnTypeLoadData();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CProductExtraInfoSetup *pVw = (CProductExtraInfoSetup *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductExtraInfoSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductExtraInfoSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnListExportFnc(CWnd *pWnd){
	((CProductExtraInfoSetup*)pWnd)->OnListExport();
	return 0;
}
static int _OnListCopyItemFnc(CWnd* pWnd){
	((CProductExtraInfoSetup*)pWnd)->OnListCopyItem();
	return 0;
}
/*static void _OnMahoatchatChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahoatchatChange();
} */
/*static void _OnMahoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahoatchatSetfocus();} */ 
/*static void _OnMahoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahoatchatKillfocus();
} */
static int _OnMahoatchatCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnMahoatchatCheckValue();
} 
/*static void _OnHoatchatChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHoatchatChange();
} */
/*static void _OnHoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHoatchatSetfocus();} */ 
/*static void _OnHoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHoatchatKillfocus();
} */
static int _OnHoatchatCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnHoatchatCheckValue();
} 
/*static void _OnDuongdungChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDuongdungChange();
} */
/*static void _OnDuongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDuongdungSetfocus();} */ 
/*static void _OnDuongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDuongdungKillfocus();
} */
static int _OnDuongdungCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDuongdungCheckValue();
} 
/*static void _OnHamluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHamluongChange();
} */
/*static void _OnHamluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHamluongSetfocus();} */ 
/*static void _OnHamluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHamluongKillfocus();
} */
static int _OnHamluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnHamluongCheckValue();
} 
/*static void _OnTenthuocChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTenthuocChange();
} */
/*static void _OnTenthuocSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTenthuocSetfocus();} */ 
/*static void _OnTenthuocKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTenthuocKillfocus();
} */
static int _OnTenthuocCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnTenthuocCheckValue();
} 
/*static void _OnSodangkyChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSodangkyChange();
} */
/*static void _OnSodangkySetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSodangkySetfocus();} */ 
/*static void _OnSodangkyKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSodangkyKillfocus();
} */
static int _OnSodangkyCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnSodangkyCheckValue();
} 
/*static void _OnDonggoiChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonggoiChange();
} */
/*static void _OnDonggoiSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonggoiSetfocus();} */ 
/*static void _OnDonggoiKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonggoiKillfocus();
} */
static int _OnDonggoiCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDonggoiCheckValue();
} 
/*static void _OnDonvitinhChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonvitinhChange();
} */
/*static void _OnDonvitinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonvitinhSetfocus();} */ 
/*static void _OnDonvitinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDonvitinhKillfocus();
} */
static int _OnDonvitinhCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDonvitinhCheckValue();
} 
/*static void _OnDongiaChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiaChange();
} */
/*static void _OnDongiaSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiaSetfocus();} */ 
/*static void _OnDongiaKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiaKillfocus();
} */
static int _OnDongiaCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDongiaCheckValue();
} 
/*static void _OnDongiattChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiattChange();
} */
/*static void _OnDongiattSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiattSetfocus();} */ 
/*static void _OnDongiattKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDongiattKillfocus();
} */
static int _OnDongiattCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDongiattCheckValue();
} 
/*static void _OnHangsxChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHangsxChange();
} */
/*static void _OnHangsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHangsxSetfocus();} */ 
/*static void _OnHangsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnHangsxKillfocus();
} */
static int _OnHangsxCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnHangsxCheckValue();
} 
/*static void _OnNuocsxChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNuocsxChange();
} */
/*static void _OnNuocsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNuocsxSetfocus();} */ 
/*static void _OnNuocsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNuocsxKillfocus();
} */
static int _OnNuocsxCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnNuocsxCheckValue();
} 
/*static void _OnNhathauChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNhathauChange();
} */
/*static void _OnNhathauSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNhathauSetfocus();} */ 
/*static void _OnNhathauKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnNhathauKillfocus();
} */
static int _OnNhathauCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnNhathauCheckValue();
} 
/*static void _OnMathuocbvChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMathuocbvChange();
} */
/*static void _OnMathuocbvSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMathuocbvSetfocus();} */ 
/*static void _OnMathuocbvKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMathuocbvKillfocus();
} */
static int _OnMathuocbvCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnMathuocbvCheckValue();
} 
/*static void _OnMaduongdungChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMaduongdungChange();
} */
/*static void _OnMaduongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMaduongdungSetfocus();} */ 
/*static void _OnMaduongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMaduongdungKillfocus();
} */
static int _OnMaduongdungCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnMaduongdungCheckValue();
} 
/*static void _OnSoluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSoluongChange();
} */
/*static void _OnSoluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSoluongSetfocus();} */ 
/*static void _OnSoluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnSoluongKillfocus();
} */
static int _OnSoluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnSoluongCheckValue();
} 
/*static void _OnQuyetdinhChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnQuyetdinhChange();
} */
/*static void _OnQuyetdinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnQuyetdinhSetfocus();} */ 
/*static void _OnQuyetdinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnQuyetdinhKillfocus();
} */
static int _OnQuyetdinhCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnQuyetdinhCheckValue();
} 
/*static void _OnCongboChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnCongboChange();
} */
/*static void _OnCongboSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnCongboSetfocus();} */ 
/*static void _OnCongboKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnCongboKillfocus();
} */
static int _OnCongboCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnCongboCheckValue();
} 
/*static void _OnManhomvtytChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnManhomvtytChange();
} */
/*static void _OnManhomvtytSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnManhomvtytSetfocus();} */ 
/*static void _OnManhomvtytKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnManhomvtytKillfocus();
} */
static int _OnManhomvtytCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnManhomvtytCheckValue();
} 
/*static void _OnTennhomvtytChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTennhomvtytChange();
} */
/*static void _OnTennhomvtytSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTennhomvtytSetfocus();} */ 
/*static void _OnTennhomvtytKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnTennhomvtytKillfocus();
} */
static int _OnTennhomvtytCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnTennhomvtytCheckValue();
} 
/*static void _OnMahieuChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahieuChange();
} */
/*static void _OnMahieuSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahieuSetfocus();} */ 
/*static void _OnMahieuKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnMahieuKillfocus();
} */
static int _OnMahieuCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnMahieuCheckValue();
} 
/*static void _OnDinhmucChangeFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDinhmucChange();
} */
/*static void _OnDinhmucSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDinhmucSetfocus();} */ 
/*static void _OnDinhmucKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoSetup *)pWnd)->OnDinhmucKillfocus();
} */
static int _OnDinhmucCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoSetup *)pWnd)->OnDinhmucCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductExtraInfoSetup *pVw = (CProductExtraInfoSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductExtraInfoSetup *pVw = (CProductExtraInfoSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductExtraInfoSetup *pVw = (CProductExtraInfoSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddProductExtraInfoSetupFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnAddProductExtraInfoSetup();
} 
static int _OnEditProductExtraInfoSetupFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnEditProductExtraInfoSetup();
} 
static int _OnDeleteProductExtraInfoSetupFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnDeleteProductExtraInfoSetup();
} 
static int _OnSaveProductExtraInfoSetupFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnSaveProductExtraInfoSetup();
} 
static int _OnCancelProductExtraInfoSetupFnc(CWnd *pWnd){
	 return ((CProductExtraInfoSetup*)pWnd)->OnCancelProductExtraInfoSetup();
} 
static long _OnHoatchatLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnHoatchatLoadData();}
static long _OnDonvitinhLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnDonvitinhLoadData();}
static long _OnNuocsxLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnNuocsxLoadData();}
static long _OnHangsxLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnHangsxLoadData();}
static long _OnNhathauLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnNhathauLoadData();}
static long _OnMaduongdungLoadDataFnc(CWnd* pWnd){ return ((CProductExtraInfoSetup*)pWnd)->OnMaduongdungLoadData();}

CProductExtraInfoSetup::CProductExtraInfoSetup(CWnd *pParent):
	CGuiDialog(pParent){
	m_nProductID = 0;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductExtraInfoSetup::~CProductExtraInfoSetup(){
}
void CProductExtraInfoSetup::OnCreateComponents(){
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 55, 55);
	m_wndGroup.Create(this,60, 30, 330, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 335, 30, 380, 55);
	m_wndType.Create(this,385, 30, 655, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 660, 30, 705, 55);
	m_wndName.Create(this,710, 30, 800, 55); 
	m_wndSearch.Create(this, _T("@"), 805, 30, 825, 55);
	m_wndAdditionalInfo.Create(this, _T("Additional Info"), 5, 460, 830, 575);
	m_wndCurrentInfo.Create(this, _T("Current Info"), 5, 280, 830, 455);
	m_wndItemList.Create(this, _T("Item List"), 5, 65, 830, 275);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 830, 60);
	m_wndList.Create(this,10, 90, 825, 270); 
	m_wndMahoatchatLabel.Create(this, _T("Ma_hoat_chat"), 10, 305, 105, 330);
	m_wndMahoatchat.Create(this,110, 305, 420, 330); 
	m_wndHoatchatLabel.Create(this, _T("Hoat_chat"), 425, 305, 505, 330);
	m_wndHoatchat.Create(this,510, 305, 825, 330); 
	m_wndDuongdungLabel.Create(this, _T("Duong_dung"), 10, 335, 105, 360);
	m_wndDuongdung.Create(this,110, 335, 220, 360); 
	m_wndHamluongLabel.Create(this, _T("Ham_luong"), 225, 335, 305, 360);
	m_wndHamluong.Create(this,310, 335, 420, 360); 
	m_wndTenthuocLabel.Create(this, _T("Ten_thuoc"), 425, 335, 505, 360);
	m_wndTenthuoc.Create(this,510, 335, 825, 360); 
	m_wndSodangkyLabel.Create(this, _T("So_dang_ky"), 10, 365, 105, 390);
	m_wndSodangky.Create(this,110, 365, 220, 390); 
	m_wndDonggoiLabel.Create(this, _T("Dong_goi"), 225, 365, 305, 390);
	m_wndDonggoi.Create(this,310, 365, 615, 390); 
	m_wndDonvitinhLabel.Create(this, _T("Don_vi_tinh"), 620, 365, 710, 390);
	m_wndDonvitinh.Create(this,715, 365, 825, 390); 
	m_wndDongiaLabel.Create(this, _T("Don_gia"), 10, 395, 105, 420);
	m_wndDongia.Create(this,110, 395, 220, 420); 
	m_wndDongiattLabel.Create(this, _T("Don_gia_tt"), 225, 395, 305, 420);
	m_wndDongiatt.Create(this,310, 395, 420, 420); 
	m_wndHangsxLabel.Create(this, _T("Hang_sx"), 425, 395, 505, 420);
	m_wndHangsx.Create(this,510, 395, 825, 420); 
	m_wndNuocsxLabel.Create(this, _T("Nuoc_sx"), 10, 425, 105, 450);
	m_wndNuocsx.Create(this,110, 425, 220, 450); 
	m_wndNhathauLabel.Create(this, _T("Nha_thau"), 225, 425, 305, 450);
	m_wndNhathau.Create(this,310, 425, 615, 450); 
	m_wndMathuocbvLabel.Create(this, _T("Ma_thuoc_bv"), 620, 425, 710, 450);
	m_wndMathuocbv.Create(this,715, 425, 825, 450); 
	m_wndMaduongdungLabel.Create(this, _T("Ma_duong_dung"), 10, 485, 120, 510);
	m_wndMaduongdung.Create(this,125, 485, 220, 510); 
	m_wndSoluongLabel.Create(this, _T("So_luong"), 225, 485, 325, 510);
	m_wndSoluong.Create(this,330, 485, 415, 510); 
	m_wndQuyetdinhLabel.Create(this, _T("Quyet_dinh"), 420, 485, 510, 510);
	m_wndQuyetdinh.Create(this,515, 485, 615, 510); 
	m_wndCongboLabel.Create(this, _T("Cong_bo"), 620, 485, 710, 510);
	m_wndCongbo.Create(this,715, 486, 825, 511); 
	m_wndManhomvtytLabel.Create(this, _T("Ma_nhom_vtyt"), 10, 515, 120, 540);
	m_wndManhomvtyt.Create(this,125, 515, 220, 540); 
	m_wndTennhomvtytLabel.Create(this, _T("Ten_nhom_vtyt"), 225, 515, 325, 540);
	m_wndTennhomvtyt.Create(this,330, 515, 616, 540); 
	m_wndMahieuLabel.Create(this, _T("Ma_hieu"), 620, 515, 710, 540);
	m_wndMahieu.Create(this,715, 515, 825, 540); 
	m_wndDinhmucLabel.Create(this, _T("Dinh_muc"), 10, 545, 120, 570);
	m_wndDinhmuc.Create(this,125, 545, 220, 570); 
	m_wndEdit.Create(this, _T("&Edit"), 580, 580, 660, 605);
	m_wndSave.Create(this, _T("&Save"), 665, 580, 745, 605);
	m_wndCancel.Create(this, _T("&Cancel"), 750, 580, 830, 605);

}
void CProductExtraInfoSetup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndName.SetLimitText(35);
	//m_wndName.SetCheckValue(true);
	m_wndMahoatchat.SetLimitText(254);
	m_wndMahoatchat.SetCheckValue(true);
	//m_wndHoatchat.SetLimitText(254);
	m_wndHoatchat.SetCheckValue(true);
	m_wndDuongdung.SetLimitText(254);
	m_wndDuongdung.SetCheckValue(true);
	m_wndHamluong.SetLimitText(254);
	m_wndHamluong.SetCheckValue(true);
	m_wndTenthuoc.SetLimitText(254);
	m_wndTenthuoc.SetCheckValue(true);
	m_wndSodangky.SetLimitText(254);
	m_wndSodangky.SetCheckValue(true);
	m_wndDonggoi.SetLimitText(254);
	m_wndDonggoi.SetCheckValue(true);
	//m_wndDonvitinh.SetLimitText(254);
	m_wndDonvitinh.SetCheckValue(true);
	m_wndDongia.SetLimitText(22);
	m_wndDongia.SetCheckValue(true);
	m_wndDongiatt.SetLimitText(22);
	m_wndDongiatt.SetCheckValue(true);
	//m_wndHangsx.SetLimitText(254);
	m_wndHangsx.SetCheckValue(true);
	//m_wndNuocsx.SetLimitText(254);
	m_wndNuocsx.SetCheckValue(true);
	//m_wndNhathau.SetLimitText(254);
	m_wndNhathau.SetCheckValue(true);
	m_wndMathuocbv.SetLimitText(254);
	m_wndMathuocbv.SetCheckValue(true);
	//m_wndMaduongdung.SetLimitText(254);
	m_wndMaduongdung.SetCheckValue(true);
	m_wndSoluong.SetLimitText(22);
	//m_wndSoluong.SetCheckValue(true);
	m_wndQuyetdinh.SetLimitText(254);
	//m_wndQuyetdinh.SetCheckValue(true);
	//m_wndCongbo.SetMax(CDate(pMF->GetSysDate()));
	//m_wndCongbo.SetCheckValue(true);
	m_wndManhomvtyt.SetLimitText(254);
	//m_wndManhomvtyt.SetCheckValue(true);
	m_wndTennhomvtyt.SetLimitText(254);
	//m_wndTennhomvtyt.SetCheckValue(true);
	m_wndMahieu.SetLimitText(254);
	//m_wndMahieu.SetCheckValue(true);
	m_wndDinhmuc.SetLimitText(22);
	m_wndDinhmuc.SetCheckValue(true);


	//m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_m_product_extra_infoTbl.SetTableName(_T("m_product_extra_info"));
	m_m_product_extra_infoTbl.AddField(_T("MPEI_PRODUCT_ID"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_STT"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_HOAT_CHAT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HOAT_CHAT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_DUONG_DUNG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DUONG_DUNG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HAM_LUONG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_TEN_THUOC"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_LOAI"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_SO_DANG_KY"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DONG_GOI"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_VI_TINH"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_GIA"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_GIA_TT"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_SO_LUONG"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_CSKCB"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HANG_SX"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_NUOC_SX"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_NHA_THAU"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_QUYET_DINH"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_CONG_BO"), dfDate); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_THUOC_BV"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_NHOM_VTYT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_TEN_NHOM_VTYT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_HIEU"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DINH_MUC"), dfLong); 

	//m_wndGroup.Format(3, 2);
	//m_wndGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	//m_wndGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	//m_wndGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);

	//m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	//m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);//id
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0); //product_id
	m_wndList.InsertColumn(2, _T("Item ID"), CFMT_TEXT, 75);
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.InsertColumn(3, _T("Item Name"), CFMT_TEXT, 300);
		m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
		m_wndList.InsertColumn(5, _T("Generic"), CFMT_TEXT, 150);
	}

	else
	{
		m_wndList.InsertColumn(3, _T("Item Name"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 70);
		m_wndList.InsertColumn(5, _T("Generic"), CFMT_TEXT, 0);
	}
	m_wndList.InsertColumn(6, _T("Purchase Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Sale Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Ins Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("Policy Price"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(10, _T("Serial No."), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Manufacture"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Country"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(13, _T("Vendor"), CFMT_TEXT, 0);
	m_wndList.GetHeaderControl()->SetItemHeight(1);

	//m_wndHoatchat.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndHoatchat.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	//m_wndNuocsx.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndNuocsx.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	//m_wndHangsx.Format(3, 2);
	//m_wndHangsx.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	//m_wndHangsx.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	//m_wndHangsx.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);

	//m_wndNhathau.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndNhathau.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	//m_wndDonvitinh.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndDonvitinh.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	//m_wndMaduongdung.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndMaduongdung.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
}
void CProductExtraInfoSetup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Export"), _OnListExportFnc);
	m_wndList.AddEvent(2, _T("Copy"), _OnListCopyItemFnc);
	//m_wndMahoatchat.SetEvent(WE_CHANGE, _OnMahoatchatChangeFnc);
	//m_wndMahoatchat.SetEvent(WE_SETFOCUS, _OnMahoatchatSetfocusFnc);
	//m_wndMahoatchat.SetEvent(WE_KILLFOCUS, _OnMahoatchatKillfocusFnc);
	m_wndMahoatchat.SetEvent(WE_CHECKVALUE, _OnMahoatchatCheckValueFnc);
	//m_wndHoatchat.SetEvent(WE_CHANGE, _OnHoatchatChangeFnc);
	//m_wndHoatchat.SetEvent(WE_SETFOCUS, _OnHoatchatSetfocusFnc);
	//m_wndHoatchat.SetEvent(WE_KILLFOCUS, _OnHoatchatKillfocusFnc);
	m_wndHoatchat.SetEvent(WE_CHECKVALUE, _OnHoatchatCheckValueFnc);
	//m_wndDuongdung.SetEvent(WE_CHANGE, _OnDuongdungChangeFnc);
	//m_wndDuongdung.SetEvent(WE_SETFOCUS, _OnDuongdungSetfocusFnc);
	//m_wndDuongdung.SetEvent(WE_KILLFOCUS, _OnDuongdungKillfocusFnc);
	m_wndDuongdung.SetEvent(WE_CHECKVALUE, _OnDuongdungCheckValueFnc);
	//m_wndHamluong.SetEvent(WE_CHANGE, _OnHamluongChangeFnc);
	//m_wndHamluong.SetEvent(WE_SETFOCUS, _OnHamluongSetfocusFnc);
	//m_wndHamluong.SetEvent(WE_KILLFOCUS, _OnHamluongKillfocusFnc);
	m_wndHamluong.SetEvent(WE_CHECKVALUE, _OnHamluongCheckValueFnc);
	//m_wndTenthuoc.SetEvent(WE_CHANGE, _OnTenthuocChangeFnc);
	//m_wndTenthuoc.SetEvent(WE_SETFOCUS, _OnTenthuocSetfocusFnc);
	//m_wndTenthuoc.SetEvent(WE_KILLFOCUS, _OnTenthuocKillfocusFnc);
	m_wndTenthuoc.SetEvent(WE_CHECKVALUE, _OnTenthuocCheckValueFnc);
	//m_wndSodangky.SetEvent(WE_CHANGE, _OnSodangkyChangeFnc);
	//m_wndSodangky.SetEvent(WE_SETFOCUS, _OnSodangkySetfocusFnc);
	//m_wndSodangky.SetEvent(WE_KILLFOCUS, _OnSodangkyKillfocusFnc);
	m_wndSodangky.SetEvent(WE_CHECKVALUE, _OnSodangkyCheckValueFnc);
	//m_wndDonggoi.SetEvent(WE_CHANGE, _OnDonggoiChangeFnc);
	//m_wndDonggoi.SetEvent(WE_SETFOCUS, _OnDonggoiSetfocusFnc);
	//m_wndDonggoi.SetEvent(WE_KILLFOCUS, _OnDonggoiKillfocusFnc);
	m_wndDonggoi.SetEvent(WE_CHECKVALUE, _OnDonggoiCheckValueFnc);
	//m_wndDonvitinh.SetEvent(WE_CHANGE, _OnDonvitinhChangeFnc);
	//m_wndDonvitinh.SetEvent(WE_SETFOCUS, _OnDonvitinhSetfocusFnc);
	//m_wndDonvitinh.SetEvent(WE_KILLFOCUS, _OnDonvitinhKillfocusFnc);
	m_wndDonvitinh.SetEvent(WE_CHECKVALUE, _OnDonvitinhCheckValueFnc);
	//m_wndDongia.SetEvent(WE_CHANGE, _OnDongiaChangeFnc);
	//m_wndDongia.SetEvent(WE_SETFOCUS, _OnDongiaSetfocusFnc);
	//m_wndDongia.SetEvent(WE_KILLFOCUS, _OnDongiaKillfocusFnc);
	m_wndDongia.SetEvent(WE_CHECKVALUE, _OnDongiaCheckValueFnc);
	//m_wndDongiatt.SetEvent(WE_CHANGE, _OnDongiattChangeFnc);
	//m_wndDongiatt.SetEvent(WE_SETFOCUS, _OnDongiattSetfocusFnc);
	//m_wndDongiatt.SetEvent(WE_KILLFOCUS, _OnDongiattKillfocusFnc);
	m_wndDongiatt.SetEvent(WE_CHECKVALUE, _OnDongiattCheckValueFnc);
	//m_wndHangsx.SetEvent(WE_CHANGE, _OnHangsxChangeFnc);
	//m_wndHangsx.SetEvent(WE_SETFOCUS, _OnHangsxSetfocusFnc);
	//m_wndHangsx.SetEvent(WE_KILLFOCUS, _OnHangsxKillfocusFnc);
	m_wndHangsx.SetEvent(WE_CHECKVALUE, _OnHangsxCheckValueFnc);
	//m_wndNuocsx.SetEvent(WE_CHANGE, _OnNuocsxChangeFnc);
	//m_wndNuocsx.SetEvent(WE_SETFOCUS, _OnNuocsxSetfocusFnc);
	//m_wndNuocsx.SetEvent(WE_KILLFOCUS, _OnNuocsxKillfocusFnc);
	m_wndNuocsx.SetEvent(WE_CHECKVALUE, _OnNuocsxCheckValueFnc);
	//m_wndNhathau.SetEvent(WE_CHANGE, _OnNhathauChangeFnc);
	//m_wndNhathau.SetEvent(WE_SETFOCUS, _OnNhathauSetfocusFnc);
	//m_wndNhathau.SetEvent(WE_KILLFOCUS, _OnNhathauKillfocusFnc);
	m_wndNhathau.SetEvent(WE_CHECKVALUE, _OnNhathauCheckValueFnc);
	//m_wndMathuocbv.SetEvent(WE_CHANGE, _OnMathuocbvChangeFnc);
	//m_wndMathuocbv.SetEvent(WE_SETFOCUS, _OnMathuocbvSetfocusFnc);
	//m_wndMathuocbv.SetEvent(WE_KILLFOCUS, _OnMathuocbvKillfocusFnc);
	m_wndMathuocbv.SetEvent(WE_CHECKVALUE, _OnMathuocbvCheckValueFnc);
	//m_wndMaduongdung.SetEvent(WE_CHANGE, _OnMaduongdungChangeFnc);
	//m_wndMaduongdung.SetEvent(WE_SETFOCUS, _OnMaduongdungSetfocusFnc);
	//m_wndMaduongdung.SetEvent(WE_KILLFOCUS, _OnMaduongdungKillfocusFnc);
	m_wndMaduongdung.SetEvent(WE_CHECKVALUE, _OnMaduongdungCheckValueFnc);
	//m_wndSoluong.SetEvent(WE_CHANGE, _OnSoluongChangeFnc);
	//m_wndSoluong.SetEvent(WE_SETFOCUS, _OnSoluongSetfocusFnc);
	//m_wndSoluong.SetEvent(WE_KILLFOCUS, _OnSoluongKillfocusFnc);
	m_wndSoluong.SetEvent(WE_CHECKVALUE, _OnSoluongCheckValueFnc);
	//m_wndQuyetdinh.SetEvent(WE_CHANGE, _OnQuyetdinhChangeFnc);
	//m_wndQuyetdinh.SetEvent(WE_SETFOCUS, _OnQuyetdinhSetfocusFnc);
	//m_wndQuyetdinh.SetEvent(WE_KILLFOCUS, _OnQuyetdinhKillfocusFnc);
	m_wndQuyetdinh.SetEvent(WE_CHECKVALUE, _OnQuyetdinhCheckValueFnc);
	//m_wndCongbo.SetEvent(WE_CHANGE, _OnCongboChangeFnc);
	//m_wndCongbo.SetEvent(WE_SETFOCUS, _OnCongboSetfocusFnc);
	//m_wndCongbo.SetEvent(WE_KILLFOCUS, _OnCongboKillfocusFnc);
	m_wndCongbo.SetEvent(WE_CHECKVALUE, _OnCongboCheckValueFnc);
	//m_wndManhomvtyt.SetEvent(WE_CHANGE, _OnManhomvtytChangeFnc);
	//m_wndManhomvtyt.SetEvent(WE_SETFOCUS, _OnManhomvtytSetfocusFnc);
	//m_wndManhomvtyt.SetEvent(WE_KILLFOCUS, _OnManhomvtytKillfocusFnc);
	m_wndManhomvtyt.SetEvent(WE_CHECKVALUE, _OnManhomvtytCheckValueFnc);
	//m_wndTennhomvtyt.SetEvent(WE_CHANGE, _OnTennhomvtytChangeFnc);
	//m_wndTennhomvtyt.SetEvent(WE_SETFOCUS, _OnTennhomvtytSetfocusFnc);
	//m_wndTennhomvtyt.SetEvent(WE_KILLFOCUS, _OnTennhomvtytKillfocusFnc);
	m_wndTennhomvtyt.SetEvent(WE_CHECKVALUE, _OnTennhomvtytCheckValueFnc);
	//m_wndMahieu.SetEvent(WE_CHANGE, _OnMahieuChangeFnc);
	//m_wndMahieu.SetEvent(WE_SETFOCUS, _OnMahieuSetfocusFnc);
	//m_wndMahieu.SetEvent(WE_KILLFOCUS, _OnMahieuKillfocusFnc);
	m_wndMahieu.SetEvent(WE_CHECKVALUE, _OnMahieuCheckValueFnc);
	//m_wndDinhmuc.SetEvent(WE_CHANGE, _OnDinhmucChangeFnc);
	//m_wndDinhmuc.SetEvent(WE_SETFOCUS, _OnDinhmucSetfocusFnc);
	//m_wndDinhmuc.SetEvent(WE_KILLFOCUS, _OnDinhmucKillfocusFnc);
	m_wndDinhmuc.SetEvent(WE_CHECKVALUE, _OnDinhmucCheckValueFnc);
	m_wndHoatchat.SetEvent(WE_LOADDATA, _OnHoatchatLoadDataFnc);
	m_wndNuocsx.SetEvent(WE_LOADDATA, _OnNuocsxLoadDataFnc);
	m_wndHangsx.SetEvent(WE_LOADDATA, _OnHangsxLoadDataFnc);
	m_wndNhathau.SetEvent(WE_LOADDATA, _OnNhathauLoadDataFnc);
	m_wndMaduongdung.SetEvent(WE_LOADDATA, _OnMaduongdungLoadDataFnc);
	m_wndDonvitinh.SetEvent(WE_LOADDATA, _OnDonvitinhLoadDataFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CProductExtraInfoSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndMahoatchat.GetDlgCtrlID(), m_szMahoatchat);
	DDX_Text(pDX, m_wndHoatchat.GetDlgCtrlID(), m_szHoatchatKey);
	DDX_Text(pDX, m_wndDuongdung.GetDlgCtrlID(), m_szDuongdung);
	DDX_Text(pDX, m_wndHamluong.GetDlgCtrlID(), m_szHamluong);
	DDX_Text(pDX, m_wndTenthuoc.GetDlgCtrlID(), m_szTenthuoc);
	DDX_Text(pDX, m_wndSodangky.GetDlgCtrlID(), m_szSodangky);
	DDX_Text(pDX, m_wndDonggoi.GetDlgCtrlID(), m_szDonggoi);
	DDX_Text(pDX, m_wndDonvitinh.GetDlgCtrlID(), m_szDonvitinhKey);
	DDX_Text(pDX, m_wndDongia.GetDlgCtrlID(), m_nDongia);
	DDX_Text(pDX, m_wndDongiatt.GetDlgCtrlID(), m_nDongiatt);
	DDX_Text(pDX, m_wndHangsx.GetDlgCtrlID(), m_szHangsxKey);
	DDX_Text(pDX, m_wndNuocsx.GetDlgCtrlID(), m_szNuocsxKey);
	DDX_Text(pDX, m_wndNhathau.GetDlgCtrlID(), m_szNhathauKey);
	DDX_Text(pDX, m_wndMathuocbv.GetDlgCtrlID(), m_szMathuocbv);
	DDX_Text(pDX, m_wndMaduongdung.GetDlgCtrlID(), m_szMaduongdungKey);
	DDX_Text(pDX, m_wndSoluong.GetDlgCtrlID(), m_nSoluong);
	DDX_Text(pDX, m_wndQuyetdinh.GetDlgCtrlID(), m_szQuyetdinh);
	DDX_TextEx(pDX, m_wndCongbo.GetDlgCtrlID(), m_szCongbo);
	DDX_Text(pDX, m_wndManhomvtyt.GetDlgCtrlID(), m_szManhomvtyt);
	DDX_Text(pDX, m_wndTennhomvtyt.GetDlgCtrlID(), m_szTennhomvtyt);
	DDX_Text(pDX, m_wndMahieu.GetDlgCtrlID(), m_szMahieu);
	DDX_Text(pDX, m_wndDinhmuc.GetDlgCtrlID(), m_nDinhmuc);

}
void CProductExtraInfoSetup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT MPEI_MA_HOAT_CHAT MA_HOAT_CHAT, NVL(MPEI_HOAT_CHAT, MP_PRODUCT_CLASS_ID) HOAT_CHAT, MPEI_MA_DUONG_DUNG MA_DUONG_DUNG, ") \
				 _T(" NVL(MPEI_DUONG_DUNG, mp_value) duong_dung, NVL(MPEI_HAM_LUONG, mp_name2) ham_luong, NVL(MPEI_TEN_THUOC, mp_name) ten_thuoc, ") \
				 _T(" NVL(MPEI_SO_DANG_KY, mp_serial) so_dang_ky, mpei_ten_nhom_vtyt ten_nhom_vtyt, ") \
				 _T(" NVL(MPEI_DONG_GOI, mp_specification) dong_goi, NVL(MPEI_DON_VI_TINH, mp_uom_id) don_vi_tinh, NVL(mpei_ma_thuoc_bv, mp_code) ma_thuoc_bv,") \
				 _T(" NVL(MPEI_DON_GIA, mp_unitprice) don_gia, NVL(MPEI_DON_GIA_TT, mp_saleprice2) don_gia_tt, MPEI_SO_LUONG so_luong, ") \
				 _T(" NVL(MPEI_HANG_SX, mp_manufacture_id) hang_sx, NVL(MPEI_NUOC_SX, mp_country_id) nuoc_sx, NVL(MPEI_NHA_THAU, mp_bpartner_id) nha_thau,") \
				 _T(" MPEI_QUYET_DINH quyet_dinh, MPEI_CONG_BO cong_bo, MPEI_MA_NHOM_VTYT ma_nhom_vtyt, MPEI_MA_HIEU ma_hieu, MPEI_DINH_MUC dinh_muc") \
				 _T(" FROM m_product LEFT JOIN m_product_extra_info ON (mp_product_id = mpei_product_id) ") \
				 _T(" WHERE DECODE(0, %ld, mp_product_id, mpei_id) = %ld"), m_nID, m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()){
		rs.GetValue(_T("MA_HOAT_CHAT"), m_szMahoatchat);
		rs.GetValue(_T("HOAT_CHAT"), m_szHoatchatKey);
		rs.GetValue(_T("MA_DUONG_DUNG"), m_szMaduongdungKey);
		rs.GetValue(_T("DUONG_DUNG"), m_szDuongdung);
		rs.GetValue(_T("HAM_LUONG"), m_szHamluong);
		rs.GetValue(_T("TEN_THUOC"), m_szTenthuoc);
		rs.GetValue(_T("SO_DANG_KY"), m_szSodangky);
		rs.GetValue(_T("DONG_GOI"), m_szDonggoi);
		rs.GetValue(_T("DON_VI_TINH"), m_szDonvitinhKey);
		rs.GetValue(_T("DON_GIA"), m_nDongia);
		rs.GetValue(_T("DON_GIA_TT"), m_nDongiatt);
		rs.GetValue(_T("SO_LUONG"), m_nSoluong);
		rs.GetValue(_T("HANG_SX"), m_szHangsxKey);
		rs.GetValue(_T("NUOC_SX"), m_szNuocsxKey);
		rs.GetValue(_T("NHA_THAU"), m_szNhathauKey);
		rs.GetValue(_T("QUYET_DINH"), m_szQuyetdinh);
		rs.GetValue(_T("CONG_BO"), m_szCongbo);
		rs.GetValue(_T("MA_THUOC_BV"), m_szMathuocbv);
		rs.GetValue(_T("MA_NHOM_VTYT"), m_szManhomvtyt);
		rs.GetValue(_T("TEN_NHOM_VTYT"), m_szTennhomvtyt);
		rs.GetValue(_T("MA_HIEU"), m_szMahieu);
		rs.GetValue(_T("DINH_MUC"), m_nDinhmuc);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CProductExtraInfoSetup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_PRODUCT_ID"), m_nProductID);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_HOAT_CHAT"), m_szMahoatchat);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HOAT_CHAT"), m_szHoatchatKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_DUONG_DUNG"), m_szMaduongdungKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DUONG_DUNG"), m_szDuongdung);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HAM_LUONG"), m_szHamluong);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_THUOC"), m_szTenthuoc);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_SO_DANG_KY"), m_szSodangky);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DONG_GOI"), m_szDonggoi);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_VI_TINH"), m_szDonvitinhKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_GIA"), m_nDongia);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_GIA_TT"), m_nDongiatt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_SO_LUONG"), m_nSoluong);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HANG_SX"), m_szHangsxKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_NUOC_SX"), m_szNuocsxKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_NHA_THAU"), m_szNhathauKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_QUYET_DINH"), m_szQuyetdinh);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_CONG_BO"), m_szCongbo);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_THUOC_BV"), m_szMathuocbv);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_NHOM_VTYT"), m_szManhomvtyt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_NHOM_VTYT"), m_szTennhomvtyt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_HIEU"), m_szMahieu);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DINH_MUC"), m_nDinhmuc);

}
void CProductExtraInfoSetup::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szTypeKey.Empty();
	m_szName.Empty();
	m_szMahoatchat.Empty();
	m_szHoatchatKey.Empty();
	m_szDuongdung.Empty();
	m_szHamluong.Empty();
	m_szTenthuoc.Empty();
	m_szSodangky.Empty();
	m_szDonggoi.Empty();
	m_szDonvitinhKey.Empty();
	m_nDongia=0;
	m_nDongiatt=0;
	m_szHangsxKey.Empty();
	m_szNuocsxKey.Empty();
	m_szNhathauKey.Empty();
	m_szMathuocbv.Empty();
	m_szMaduongdungKey.Empty();
	m_nSoluong=0;
	m_szQuyetdinh.Empty();
	m_szCongbo.Empty();
	m_szManhomvtyt.Empty();
	m_szTennhomvtyt.Empty();
	m_szMahieu.Empty();
	m_nDinhmuc=0;

}
int CProductExtraInfoSetup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndGroup.EnableWindow();
		m_wndType.EnableWindow();
		m_wndName.EnableWindow();
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductExtraInfoSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoSetup::OnGroupSelendok(){
	 
}
/*void CProductExtraInfoSetup::OnGroupSetfocus(){
	
}*/
/*void CProductExtraInfoSetup::OnGroupKillfocus(){
	
}*/
long CProductExtraInfoSetup::OnGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndGroup, m_szGroupKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoSetup::OnGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

long CProductExtraInfoSetup::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
}

/*void CProductExtraInfoSetup::OnNameChange(){
	
} */
/*void CProductExtraInfoSetup::OnNameSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnNameKillfocus(){
	
} */
int CProductExtraInfoSetup::OnNameCheckValue(){
	return 0;
} 
void CProductExtraInfoSetup::OnSearchSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
void CProductExtraInfoSetup::OnListDblClick(){
	
} 
void CProductExtraInfoSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nProductID = str2long(m_wndList.GetItemText(nNewItem, 1));
	GetDataToScreen();
} 
int CProductExtraInfoSetup::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductExtraInfoSetup::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	UpdateData();
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (!m_szName.IsEmpty()) szWhere.Format(_T(" AND lower(product_name) like lower('%s%s%s') "), _T("%"), m_szName, _T("%"));
	if (!m_szGroupKey.IsEmpty()) szWhere.AppendFormat(_T(" AND product_categoryid=%ld "), str2long(m_szGroupKey));
	if (!m_szTypeKey.IsEmpty()) szWhere.AppendFormat(_T(" AND product_producttype = '%s'"), m_szTypeKey); 
	szWhere.AppendFormat(_T(" and product_org_id IN('GL', '%s') "), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" AND product_isactive='Y'"));
	szSQL.Format(_T(" SELECT mpei_id id, product_id,") \
				_T("   product_code,") \
				_T("   product_name,") \
				_T("   product_purchase_uomname,") \
				_T("   product_classname,") \
				_T("   product_serial,") \
				_T("   product_unitprice,") \
				_T("   product_saleprice1,") \
				_T("   product_saleprice2,") \
				_T("   product_saleprice3,") \
				_T("   product_manufacturename,") \
				_T("   product_countryname,	") \
				_T("   product_bpartnerid,") \
				_T("   product_isactive") \
				_T(" from m_product_view") \
				_T(" left join m_product_extra_info on (product_id = mpei_product_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" ORDER BY product_name"), szWhere);
	nCount = rs.ExecSQL(szSQL);

	CString tmpStr, szName, szContent, szGeneric, szTemp;
	int nIndex=0, nItem = 0;
	while(!rs.IsEOF()){ 
		szTemp.Empty();
		szGeneric.Empty();
		tmpStr.Format(_T("%d"), ++nIndex);
		rs.GetValue(_T("product_isactive"), szTemp);
		
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_purchase_uomname")), 
			rs.GetValue(_T("product_classname")),
			rs.GetValue(_T("product_unitprice")), 
			rs.GetValue(_T("product_saleprice1")),
			rs.GetValue(_T("product_saleprice2")),
			rs.GetValue(_T("product_saleprice3")),
			rs.GetValue(_T("product_serial")),
			rs.GetValue(_T("product_manufacturename")), 
			rs.GetValue(_T("product_countryname")),
			rs.GetValue(_T("product_bpartnerid")),
			NULL);
		if (szTemp == _T("N")) m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
		rs.MoveNext();
	}
	
	m_wndList.EndLoad();
	return nCount;
}
/*void CProductExtraInfoSetup::OnMahoatchatChange(){
	
} */
/*void CProductExtraInfoSetup::OnMahoatchatSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnMahoatchatKillfocus(){
	
} */
int CProductExtraInfoSetup::OnMahoatchatCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnHoatchatChange(){
	
} */
/*void CProductExtraInfoSetup::OnHoatchatSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnHoatchatKillfocus(){
	
} */
int CProductExtraInfoSetup::OnHoatchatCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDuongdungChange(){
	
} */
/*void CProductExtraInfoSetup::OnDuongdungSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDuongdungKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDuongdungCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnHamluongChange(){
	
} */
/*void CProductExtraInfoSetup::OnHamluongSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnHamluongKillfocus(){
	
} */
int CProductExtraInfoSetup::OnHamluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnTenthuocChange(){
	
} */
/*void CProductExtraInfoSetup::OnTenthuocSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnTenthuocKillfocus(){
	
} */
int CProductExtraInfoSetup::OnTenthuocCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnSodangkyChange(){
	
} */
/*void CProductExtraInfoSetup::OnSodangkySetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnSodangkyKillfocus(){
	
} */
int CProductExtraInfoSetup::OnSodangkyCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDonggoiChange(){
	
} */
/*void CProductExtraInfoSetup::OnDonggoiSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDonggoiKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDonggoiCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDonvitinhChange(){
	
} */
/*void CProductExtraInfoSetup::OnDonvitinhSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDonvitinhKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDonvitinhCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDongiaChange(){
	
} */
/*void CProductExtraInfoSetup::OnDongiaSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDongiaKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDongiaCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDongiattChange(){
	
} */
/*void CProductExtraInfoSetup::OnDongiattSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDongiattKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDongiattCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnHangsxChange(){
	
} */
/*void CProductExtraInfoSetup::OnHangsxSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnHangsxKillfocus(){
	
} */
int CProductExtraInfoSetup::OnHangsxCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnNuocsxChange(){
	
} */
/*void CProductExtraInfoSetup::OnNuocsxSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnNuocsxKillfocus(){
	
} */
int CProductExtraInfoSetup::OnNuocsxCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnNhathauChange(){
	
} */
/*void CProductExtraInfoSetup::OnNhathauSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnNhathauKillfocus(){
	
} */
int CProductExtraInfoSetup::OnNhathauCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnMathuocbvChange(){
	
} */
/*void CProductExtraInfoSetup::OnMathuocbvSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnMathuocbvKillfocus(){
	
} */
int CProductExtraInfoSetup::OnMathuocbvCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnMaduongdungChange(){
	
} */
/*void CProductExtraInfoSetup::OnMaduongdungSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnMaduongdungKillfocus(){
	
} */
int CProductExtraInfoSetup::OnMaduongdungCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnSoluongChange(){
	
} */
/*void CProductExtraInfoSetup::OnSoluongSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnSoluongKillfocus(){
	
} */
int CProductExtraInfoSetup::OnSoluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnQuyetdinhChange(){
	
} */
/*void CProductExtraInfoSetup::OnQuyetdinhSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnQuyetdinhKillfocus(){
	
} */
int CProductExtraInfoSetup::OnQuyetdinhCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnCongboChange(){
	
} */
/*void CProductExtraInfoSetup::OnCongboSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnCongboKillfocus(){
	
} */
int CProductExtraInfoSetup::OnCongboCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnManhomvtytChange(){
	
} */
/*void CProductExtraInfoSetup::OnManhomvtytSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnManhomvtytKillfocus(){
	
} */
int CProductExtraInfoSetup::OnManhomvtytCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnTennhomvtytChange(){
	
} */
/*void CProductExtraInfoSetup::OnTennhomvtytSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnTennhomvtytKillfocus(){
	
} */
int CProductExtraInfoSetup::OnTennhomvtytCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnMahieuChange(){
	
} */
/*void CProductExtraInfoSetup::OnMahieuSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnMahieuKillfocus(){
	
} */
int CProductExtraInfoSetup::OnMahieuCheckValue(){
	return 0;
} 
/*void CProductExtraInfoSetup::OnDinhmucChange(){
	
} */
/*void CProductExtraInfoSetup::OnDinhmucSetfocus(){
	
} */
/*void CProductExtraInfoSetup::OnDinhmucKillfocus(){
	
} */
int CProductExtraInfoSetup::OnDinhmucCheckValue(){
	return 0;
} 
void CProductExtraInfoSetup::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditProductExtraInfoSetup();
} 
void CProductExtraInfoSetup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductExtraInfoSetup();
} 
void CProductExtraInfoSetup::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelProductExtraInfoSetup();
} 
int CProductExtraInfoSetup::OnAddProductExtraInfoSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductExtraInfoSetup::OnEditProductExtraInfoSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductExtraInfoSetup::OnDeleteProductExtraInfoSetup(){
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
 		OnCancelProductExtraInfoSetup();
 	}
	return 0;
}
int CProductExtraInfoSetup::OnSaveProductExtraInfoSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;
 	szWhere.Format(_T(" WHERE mpei_id = %ld"), m_nID);
 	szSQL = m_m_product_extra_infoTbl.GetUpdateSQL(_T("mpei_id, mpei_product_id"));
 	szSQL += szWhere;
	int ret = pMF->ExecSQL(szSQL);
	if (ret < 0){ 
		AfxMessageBox(_T("Update fail!"));
		return -1;
	}
	if (ret == 0){
 		szSQL = m_m_product_extra_infoTbl.GetInsertSQL();
		ret += pMF->ExecSQL(szSQL);
	}
	if(ret > 0){
		AfxMessageBox(_T("Update successfully!"));
 		SetMode(VM_VIEW);
 	}
 	return ret;
}
int CProductExtraInfoSetup::OnCancelProductExtraInfoSetup(){
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
int CProductExtraInfoSetup::OnProductExtraInfoSetupListLoadData(){
	return 0;
}

long CProductExtraInfoSetup::OnHoatchatLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductClassList(&m_wndHoatchat, m_szHoatchatKey);
}

long CProductExtraInfoSetup::OnNuocsxLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCountryList(&m_wndNuocsx, m_szNuocsxKey);
}

long CProductExtraInfoSetup::OnHangsxLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadManufactureList(&m_wndHangsx, m_szHangsxKey);
}

long CProductExtraInfoSetup::OnNhathauLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndNhathau, m_szNhathauKey);
}

long CProductExtraInfoSetup::OnDonvitinhLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUomList(&m_wndDonvitinh, m_szDonvitinhKey);
}

long CProductExtraInfoSetup::OnMaduongdungLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndMaduongdung, m_szMaduongdungKey, _T("hms_usage_way"));
}

void CProductExtraInfoSetup::OnListExport(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nRow = 1;
	if (pMF->GetModuleID() == _T("PM"))
	szSQL.Format(_T(" WITH tbl_onhand AS(") \
				 _T(" SELECT msl_product_id, sum(msl_qtyonhand) qty_onhand FROM m_storageline GROUP BY msl_product_id)") \
				 _T("SELECT mp_product_id ma_duy_nhat, MPEI_MA_HOAT_CHAT, NVL(MPEI_HOAT_CHAT, get_productclassname(MP_PRODUCT_CLASS_ID)) MPEI_HOAT_CHAT, MPEI_MA_DUONG_DUNG, ") \
				 _T(" NVL(MPEI_DUONG_DUNG, mp_value) MPEI_DUONG_DUNG, NVL(MPEI_HAM_LUONG, mp_name2) MPEI_HAM_LUONG, NVL(MPEI_TEN_THUOC, mp_name) MPEI_TEN_THUOC, ") \
				 _T(" NVL(MPEI_SO_DANG_KY, mp_serial) MPEI_SO_DANG_KY,") \
				 _T(" NVL(MPEI_DONG_GOI, mp_specification) MPEI_DONG_GOI, NVL(MPEI_DON_VI_TINH, mp_uom_id) MPEI_DON_VI_TINH,") \
				 _T(" NVL(MPEI_DON_GIA, mp_unitprice) MPEI_DON_GIA, NVL(MPEI_DON_GIA_TT, mp_saleprice2) MPEI_DON_GIA_TT, MPEI_SO_LUONG, 01014 ma_cskcb,") \
				 _T(" NVL(MPEI_HANG_SX, mp_manufacture_id) MPEI_HANG_SX, NVL(MPEI_NUOC_SX, mp_country_id) MPEI_NUOC_SX, NVL(MPEI_NHA_THAU, mp_bpartner_id) MPEI_NHA_THAU,") \
				 _T(" MPEI_QUYET_DINH, MPEI_CONG_BO, NVL(mpei_ma_thuoc_bv, mp_code) mpei_ma_thuoc_bv") \
				 _T(" FROM m_product LEFT JOIN m_product_extra_info ON (mp_product_id = mpei_product_id)") \
				 _T(" LEFT JOIN tbl_onhand ON (msl_product_id = mp_product_id)") \
				 _T(" WHERE mp_isactive='Y' AND mp_org_id IN ('GL', '%s')") \
				 _T(" ORDER BY mpei_ten_thuoc"), pMF->GetModuleID());
	else
	szSQL.Format(_T("SELECT mp_product_id MPEI_PRODUCT_ID, MPEI_MA_NHOM_VTYT, mpei_ten_nhom_vtyt,  MPEI_MA_HIEU, NVL(mpei_ma_thuoc_bv, mp_code) mpei_ma_thuoc_bv,") \
				 _T(" NVL(MPEI_TEN_THUOC, mp_name) MPEI_TEN_THUOC, NVL(MPEI_DONG_GOI, mp_specification) MPEI_DONG_GOI, NVL(MPEI_NUOC_SX, mp_country_id) MPEI_NUOC_SX,  ") \
				 _T(" NVL(MPEI_HANG_SX, mp_manufacture_id) MPEI_HANG_SX, NVL(MPEI_DON_VI_TINH, mp_uom_id) MPEI_DON_VI_TINH, NVL(MPEI_DON_GIA, mp_unitprice) MPEI_DON_GIA, ") \
				 _T(" NVL(MPEI_DON_GIA_TT, mp_saleprice2) MPEI_DON_GIA_TT, NVL(MPEI_NHA_THAU, mp_bpartner_id) MPEI_NHA_THAU,") \
				 _T(" MPEI_QUYET_DINH, MPEI_CONG_BO, MPEI_DINH_MUC, MPEI_SO_LUONG, 01014 ma_cskcb, MPEI_LOAI_THAU") \
				 _T(" FROM m_product LEFT JOIN m_product_extra_info ON (mp_product_id = mpei_product_id) WHERE mp_isactive = 'Y' AND mp_org_id IN ('GL', '%s') ORDER BY mpei_ten_thuoc"), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	for (int i = 0; i < rs.GetFieldCount(); i++) xls.SetCellText(i, 0, rs.GetFieldName(i), 4098, true);
	while (!rs.IsEOF()){
		for (int i = 0; i < rs.GetFieldCount(); i++) xls.SetCellText(i, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh muc cong van 908.xls"));
}

void CProductExtraInfoSetup::OnListCopyItem(){
	AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 t\xEDnh n\x103ng n\xE0y!"));
}