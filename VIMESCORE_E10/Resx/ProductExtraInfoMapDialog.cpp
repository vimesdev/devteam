#include "ProductExtraInfoMapDialog.h"
#include "MainFrm.h"
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoMapDialog* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnContractAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnUnMapFlagSelectFnc(CWnd *pWnd){
	 ((CProductExtraInfoMapDialog*)pWnd)->OnUnMapFlagSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductExtraInfoMapDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMapNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoMapDialog* )pWnd)->OnMapNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMapNameSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMapNameSelendok();
}
/*static void _OnMapNameSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMapNameKillfocus();
}*/
/*static void _OnMapNameKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMapNameKillfocus();
}*/
static long _OnMapNameLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnMapNameLoadData();
}
/*static void _OnMapNameAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMapNameAddNew();
}*/
static void _OnMapSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnMapSelect();
} 
/*static void _OnHoatchatChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHoatchatChange();
} */
/*static void _OnHoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHoatchatSetfocus();} */ 
/*static void _OnHoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHoatchatKillfocus();
} */
static int _OnHoatchatCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnHoatchatCheckValue();
} 
/*static void _OnMahoatchatChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahoatchatChange();
} */
/*static void _OnMahoatchatSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahoatchatSetfocus();} */ 
/*static void _OnMahoatchatKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahoatchatKillfocus();
} */
static int _OnMahoatchatCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnMahoatchatCheckValue();
} 
/*static void _OnMathuocbvChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMathuocbvChange();
} */
/*static void _OnMathuocbvSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMathuocbvSetfocus();} */ 
/*static void _OnMathuocbvKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMathuocbvKillfocus();
} */
static int _OnMathuocbvCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnMathuocbvCheckValue();
} 
/*static void _OnTenthuocChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTenthuocChange();
} */
/*static void _OnTenthuocSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTenthuocSetfocus();} */ 
/*static void _OnTenthuocKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTenthuocKillfocus();
} */
static int _OnTenthuocCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnTenthuocCheckValue();
} 
/*static void _OnHamluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHamluongChange();
} */
/*static void _OnHamluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHamluongSetfocus();} */ 
/*static void _OnHamluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHamluongKillfocus();
} */
static int _OnHamluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnHamluongCheckValue();
} 
/*static void _OnDonvitinhChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonvitinhChange();
} */
/*static void _OnDonvitinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonvitinhSetfocus();} */ 
/*static void _OnDonvitinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonvitinhKillfocus();
} */
static int _OnDonvitinhCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDonvitinhCheckValue();
} 
/*static void _OnSodangkyChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSodangkyChange();
} */
/*static void _OnSodangkySetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSodangkySetfocus();} */ 
/*static void _OnSodangkyKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSodangkyKillfocus();
} */
static int _OnSodangkyCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnSodangkyCheckValue();
} 
/*static void _OnDonggoiChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonggoiChange();
} */
/*static void _OnDonggoiSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonggoiSetfocus();} */ 
/*static void _OnDonggoiKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDonggoiKillfocus();
} */
static int _OnDonggoiCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDonggoiCheckValue();
} 
static void _OnMaduongdungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoMapDialog* )pWnd)->OnMaduongdungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMaduongdungSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMaduongdungSelendok();
}
/*static void _OnMaduongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMaduongdungKillfocus();
}*/
/*static void _OnMaduongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMaduongdungKillfocus();
}*/
static long _OnMaduongdungLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnMaduongdungLoadData();
}
/*static void _OnMaduongdungAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMaduongdungAddNew();
}*/
/*static void _OnDuongdungChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDuongdungChange();
} */
/*static void _OnDuongdungSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDuongdungSetfocus();} */ 
/*static void _OnDuongdungKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDuongdungKillfocus();
} */
static int _OnDuongdungCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDuongdungCheckValue();
} 
/*static void _OnDongiaChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiaChange();
} */
/*static void _OnDongiaSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiaSetfocus();} */ 
/*static void _OnDongiaKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiaKillfocus();
} */
static int _OnDongiaCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDongiaCheckValue();
} 
/*static void _OnDongiattChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiattChange();
} */
/*static void _OnDongiattSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiattSetfocus();} */ 
/*static void _OnDongiattKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDongiattKillfocus();
} */
static int _OnDongiattCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDongiattCheckValue();
} 
/*static void _OnSoluongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSoluongChange();
} */
/*static void _OnSoluongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSoluongSetfocus();} */ 
/*static void _OnSoluongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnSoluongKillfocus();
} */
static int _OnSoluongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnSoluongCheckValue();
} 
/*static void _OnDinhmucChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDinhmucChange();
} */
/*static void _OnDinhmucSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDinhmucSetfocus();} */ 
/*static void _OnDinhmucKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnDinhmucKillfocus();
} */
static int _OnDinhmucCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnDinhmucCheckValue();
} 
/*static void _OnQuyetdinhChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhChange();
} */
/*static void _OnQuyetdinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhSetfocus();} */ 
/*static void _OnQuyetdinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhKillfocus();
} */
static int _OnQuyetdinhCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhCheckValue();
} 
/*static void _OnCongboChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnCongboChange();
} */
/*static void _OnCongboSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnCongboSetfocus();} */ 
/*static void _OnCongboKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnCongboKillfocus();
} */
static int _OnCongboCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnCongboCheckValue();
} 
/*static void _OnNhathauChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNhathauChange();
} */
/*static void _OnNhathauSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNhathauSetfocus();} */ 
/*static void _OnNhathauKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNhathauKillfocus();
} */
static int _OnNhathauCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnNhathauCheckValue();
} 
/*static void _OnNuocsxChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNuocsxChange();
} */
/*static void _OnNuocsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNuocsxSetfocus();} */ 
/*static void _OnNuocsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnNuocsxKillfocus();
} */
static int _OnNuocsxCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnNuocsxCheckValue();
} 
/*static void _OnHangsxChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHangsxChange();
} */
/*static void _OnHangsxSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHangsxSetfocus();} */ 
/*static void _OnHangsxKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHangsxKillfocus();
} */
static int _OnHangsxCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnHangsxCheckValue();
} 
/*static void _OnMahieuChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahieuChange();
} */
/*static void _OnMahieuSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahieuSetfocus();} */ 
/*static void _OnMahieuKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnMahieuKillfocus();
} */
static int _OnMahieuCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnMahieuCheckValue();
} 
/*static void _OnManhomvtytChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnManhomvtytChange();
} */
/*static void _OnManhomvtytSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnManhomvtytSetfocus();} */ 
/*static void _OnManhomvtytKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnManhomvtytKillfocus();
} */
static int _OnManhomvtytCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnManhomvtytCheckValue();
} 
/*static void _OnTennhomvtytChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTennhomvtytChange();
} */
/*static void _OnTennhomvtytSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTennhomvtytSetfocus();} */ 
/*static void _OnTennhomvtytKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnTennhomvtytKillfocus();
} */
static int _OnTennhomvtytCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnTennhomvtytCheckValue();
} 
static long _OnUnMapListLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog*)pWnd)->OnUnMapListLoadData();
} 
static void _OnUnMapListDblClickFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog*)pWnd)->OnUnMapListDblClick();
} 
static void _OnUnMapListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductExtraInfoMapDialog*)pWnd)->OnUnMapListSelectChange(nOldItem, nNewItem);
} 
static int _OnUnMapListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnUnMapListDeleteItem();
} 
static long _OnMapedListLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog*)pWnd)->OnMapedListLoadData();
} 
static void _OnMapedListDblClickFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog*)pWnd)->OnMapedListDblClick();
} 
static void _OnMapedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductExtraInfoMapDialog*)pWnd)->OnMapedListSelectChange(nOldItem, nNewItem);
} 
static int _OnMapedListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnMapedListDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductExtraInfoMapDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnAddProductExtraInfoMapDialog();
} 
static int _OnEditProductExtraInfoMapDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnEditProductExtraInfoMapDialog();
} 
static int _OnDeleteProductExtraInfoMapDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnDeleteProductExtraInfoMapDialog();
} 
static int _OnSaveProductExtraInfoMapDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnSaveProductExtraInfoMapDialog();
} 
static int _OnCancelProductExtraInfoMapDialogFnc(CWnd *pWnd){
	 return ((CProductExtraInfoMapDialog*)pWnd)->OnCancelProductExtraInfoMapDialog();
} 
CProductExtraInfoMapDialog::CProductExtraInfoMapDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1018;
	m_nDlgHeight = 745;
	SetDefaultValues();
}
CProductExtraInfoMapDialog::~CProductExtraInfoMapDialog(){
}
void CProductExtraInfoMapDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 960, 60);
	m_wndCurrentInfo.Create(this, _T("Current Info"), 5, 252, 960, 487);
	m_wndUnMap.Create(this, _T("Un map"), 5, 492, 480, 637);
	m_wndMaped.Create(this, _T("Maped"), 485, 492, 960, 637);
	m_wndItemList.Create(this, _T("Item List"), 5, 65, 960, 245);
	m_wndContractLabel.Create(this, _T("Contract"), 10, 30, 90, 55);
	m_wndContract.Create(this,95, 30, 313, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 318, 30, 412, 55);
	m_wndName.Create(this,417, 30, 635, 55); 
	m_wndSearch.Create(this, _T("@"), 640, 30, 660, 55);
	m_wndUnMapFlag.Create(this, _T("UnMapFlag"), 665, 30, 805, 55);
	m_wndList.Create(this,10, 90, 955, 210); 
	m_wndMapNameLabel.Create(this, _T("Map Name"), 10, 215, 110, 240);
	m_wndMapName.Create(this,115, 215, 875, 240); 
	m_wndMap.Create(this, _T("Map"), 880, 215, 955, 240);
	m_wndHoatchatLabel.Create(this, _T("Hoat_chat"), 9, 277, 109, 302);
	m_wndHoatchat.Create(this,114, 277, 473, 302); 
	m_wndMahoatchatLabel.Create(this, _T("Ma_hoat_chat"), 478, 277, 578, 302);
	m_wndMahoatchat.Create(this,583, 277, 712, 302); 
	m_wndMathuocbvLabel.Create(this, _T("Ma_thuoc_bv"), 717, 277, 822, 302);
	m_wndMathuocbv.Create(this,827, 277, 956, 302); 
	m_wndTenthuocLabel.Create(this, _T("Ten_thuoc"), 10, 307, 110, 332);
	m_wndTenthuoc.Create(this,115, 307, 474, 332); 
	m_wndHamluongLabel.Create(this, _T("Ham_luong"), 479, 307, 579, 332);
	m_wndHamluong.Create(this,584, 307, 713, 332); 
	m_wndDonvitinhLabel.Create(this, _T("Don_vi_tinh"), 718, 307, 823, 332);
	m_wndDonvitinh.Create(this,828, 307, 957, 332); 
	m_wndSodangkyLabel.Create(this, _T("So_dang_ky"), 10, 337, 110, 362);
	m_wndSodangky.Create(this,115, 337, 235, 362); 
	m_wndDonggoiLabel.Create(this, _T("Dong_goi"), 240, 337, 340, 362);
	m_wndDonggoi.Create(this,345, 337, 474, 362); 
	m_wndMaduongdungLabel.Create(this, _T("Ma_duong_dung"), 479, 337, 579, 362);
	m_wndMaduongdung.Create(this,584, 337, 713, 362); 
	m_wndDuongdungLabel.Create(this, _T("Duong_dung"), 718, 337, 823, 362);
	m_wndDuongdung.Create(this,828, 337, 957, 362); 
	m_wndDongiaLabel.Create(this, _T("Don_gia"), 10, 367, 110, 392);
	m_wndDongia.Create(this,115, 367, 235, 392); 
	m_wndDongiattLabel.Create(this, _T("Don_gia_tt"), 240, 367, 340, 392);
	m_wndDongiatt.Create(this,345, 367, 474, 392); 
	m_wndSoluongLabel.Create(this, _T("So_luong"), 479, 367, 579, 392);
	m_wndSoluong.Create(this,584, 367, 713, 392); 
	m_wndDinhmucLabel.Create(this, _T("Dinh_muc"), 718, 367, 823, 392);
	m_wndDinhmuc.Create(this,828, 367, 957, 392); 
	m_wndQuyetdinhLabel.Create(this, _T("Quyet_dinh"), 10, 397, 110, 422);
	m_wndQuyetdinh.Create(this,115, 397, 235, 422); 
	m_wndCongboLabel.Create(this, _T("Cong_bo"), 240, 397, 340, 422);
	m_wndCongbo.Create(this,345, 397, 474, 422); 
	m_wndNhathauLabel.Create(this, _T("Nha_thau"), 479, 397, 579, 422);
	m_wndNhathau.Create(this,584, 397, 957, 422); 
	m_wndNuocsxLabel.Create(this, _T("Nuoc_sx"), 10, 427, 110, 452);
	m_wndNuocsx.Create(this,115, 427, 474, 452); 
	m_wndHangsxLabel.Create(this, _T("Hang_sx"), 479, 427, 579, 452);
	m_wndHangsx.Create(this,584, 427, 957, 452); 
	m_wndMahieuLabel.Create(this, _T("Ma_hieu"), 10, 457, 110, 482);
	m_wndMahieu.Create(this,115, 457, 235, 482); 
	m_wndManhomvtytLabel.Create(this, _T("Ma_nhom_vtyt"), 240, 457, 340, 482);
	m_wndManhomvtyt.Create(this,345, 457, 474, 482); 
	m_wndTennhomvtytLabel.Create(this, _T("Ten_nhom_vtyt"), 479, 457, 579, 482);
	m_wndTennhomvtyt.Create(this,584, 457, 957, 482); 
	m_wndUnMapList.Create(this,9, 517, 474, 632); 
	m_wndMapedList.Create(this,490, 517, 955, 632); 
	m_wndExport.Create(this, _T("Export XLS"), 6, 642, 96, 667);
	m_wndImport.Create(this, _T("Import"), 101, 642, 191, 667);
	m_wndEdit.Create(this, _T("&Update"), 585, 642, 675, 667);
	m_wndSave.Create(this, _T("&Save"), 680, 642, 770, 667);
	m_wndCancel.Create(this, _T("&Cancel"), 775, 642, 865, 667);
	m_wndClose.Create(this, _T("Close"), 870, 642, 960, 667);

}
void CProductExtraInfoMapDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndMapName.SetCheckValue(true);
	m_wndMapName.LimitText(35);
	m_wndHoatchat.SetLimitText(1024);
	m_wndHoatchat.SetCheckValue(true);
	m_wndMahoatchat.SetLimitText(1024);
	m_wndMahoatchat.SetCheckValue(true);
	m_wndMathuocbv.SetLimitText(1024);
	m_wndMathuocbv.SetCheckValue(true);
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
	m_wndMaduongdung.SetCheckValue(true);
	m_wndMaduongdung.LimitText(1024);
	m_wndDuongdung.SetLimitText(1024);
	m_wndDuongdung.SetCheckValue(true);
	m_wndDongia.SetLimitText(1024);
	m_wndDongia.SetCheckValue(true);
	m_wndDongiatt.SetLimitText(1024);
	m_wndDongiatt.SetCheckValue(true);
	m_wndSoluong.SetLimitText(1024);
	m_wndSoluong.SetCheckValue(true);
	m_wndDinhmuc.SetLimitText(1024);
	m_wndDinhmuc.SetCheckValue(true);
	m_wndQuyetdinh.SetLimitText(1024);
	m_wndQuyetdinh.SetCheckValue(true);
	m_wndCongbo.SetMax(CDate(pMF->GetSysDate()));
	m_wndCongbo.SetCheckValue(true);
	m_wndNhathau.SetLimitText(1024);
	m_wndNhathau.SetCheckValue(true);
	m_wndNuocsx.SetLimitText(1024);
	m_wndNuocsx.SetCheckValue(true);
	m_wndHangsx.SetLimitText(1024);
	m_wndHangsx.SetCheckValue(true);
	m_wndMahieu.SetLimitText(1024);
	m_wndMahieu.SetCheckValue(true);
	m_wndManhomvtyt.SetLimitText(1024);
	m_wndManhomvtyt.SetCheckValue(true);
	m_wndTennhomvtyt.SetLimitText(1024);
	m_wndTennhomvtyt.SetCheckValue(true);






	m_wndMapName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMapName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);







}
void CProductExtraInfoMapDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndUnMapFlag.SetEvent(WE_CLICK, _OnUnMapFlagSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapName.SetEvent(WE_SELENDOK, _OnMapNameSelendokFnc);
	//m_wndMapName.SetEvent(WE_SETFOCUS, _OnMapNameSetfocusFnc);
	//m_wndMapName.SetEvent(WE_KILLFOCUS, _OnMapNameKillfocusFnc);
	m_wndMapName.SetEvent(WE_SELCHANGE, _OnMapNameSelectChangeFnc);
	m_wndMapName.SetEvent(WE_LOADDATA, _OnMapNameLoadDataFnc);
	//m_wndMapName.SetEvent(WE_ADDNEW, _OnMapNameAddNewFnc);
	m_wndMap.SetEvent(WE_CLICK, _OnMapSelectFnc);
	//m_wndHoatchat.SetEvent(WE_CHANGE, _OnHoatchatChangeFnc);
	//m_wndHoatchat.SetEvent(WE_SETFOCUS, _OnHoatchatSetfocusFnc);
	//m_wndHoatchat.SetEvent(WE_KILLFOCUS, _OnHoatchatKillfocusFnc);
	m_wndHoatchat.SetEvent(WE_CHECKVALUE, _OnHoatchatCheckValueFnc);
	//m_wndMahoatchat.SetEvent(WE_CHANGE, _OnMahoatchatChangeFnc);
	//m_wndMahoatchat.SetEvent(WE_SETFOCUS, _OnMahoatchatSetfocusFnc);
	//m_wndMahoatchat.SetEvent(WE_KILLFOCUS, _OnMahoatchatKillfocusFnc);
	m_wndMahoatchat.SetEvent(WE_CHECKVALUE, _OnMahoatchatCheckValueFnc);
	//m_wndMathuocbv.SetEvent(WE_CHANGE, _OnMathuocbvChangeFnc);
	//m_wndMathuocbv.SetEvent(WE_SETFOCUS, _OnMathuocbvSetfocusFnc);
	//m_wndMathuocbv.SetEvent(WE_KILLFOCUS, _OnMathuocbvKillfocusFnc);
	m_wndMathuocbv.SetEvent(WE_CHECKVALUE, _OnMathuocbvCheckValueFnc);
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
	m_wndMaduongdung.SetEvent(WE_SELENDOK, _OnMaduongdungSelendokFnc);
	//m_wndMaduongdung.SetEvent(WE_SETFOCUS, _OnMaduongdungSetfocusFnc);
	//m_wndMaduongdung.SetEvent(WE_KILLFOCUS, _OnMaduongdungKillfocusFnc);
	m_wndMaduongdung.SetEvent(WE_SELCHANGE, _OnMaduongdungSelectChangeFnc);
	m_wndMaduongdung.SetEvent(WE_LOADDATA, _OnMaduongdungLoadDataFnc);
	//m_wndMaduongdung.SetEvent(WE_ADDNEW, _OnMaduongdungAddNewFnc);
	//m_wndDuongdung.SetEvent(WE_CHANGE, _OnDuongdungChangeFnc);
	//m_wndDuongdung.SetEvent(WE_SETFOCUS, _OnDuongdungSetfocusFnc);
	//m_wndDuongdung.SetEvent(WE_KILLFOCUS, _OnDuongdungKillfocusFnc);
	m_wndDuongdung.SetEvent(WE_CHECKVALUE, _OnDuongdungCheckValueFnc);
	//m_wndDongia.SetEvent(WE_CHANGE, _OnDongiaChangeFnc);
	//m_wndDongia.SetEvent(WE_SETFOCUS, _OnDongiaSetfocusFnc);
	//m_wndDongia.SetEvent(WE_KILLFOCUS, _OnDongiaKillfocusFnc);
	m_wndDongia.SetEvent(WE_CHECKVALUE, _OnDongiaCheckValueFnc);
	//m_wndDongiatt.SetEvent(WE_CHANGE, _OnDongiattChangeFnc);
	//m_wndDongiatt.SetEvent(WE_SETFOCUS, _OnDongiattSetfocusFnc);
	//m_wndDongiatt.SetEvent(WE_KILLFOCUS, _OnDongiattKillfocusFnc);
	m_wndDongiatt.SetEvent(WE_CHECKVALUE, _OnDongiattCheckValueFnc);
	//m_wndSoluong.SetEvent(WE_CHANGE, _OnSoluongChangeFnc);
	//m_wndSoluong.SetEvent(WE_SETFOCUS, _OnSoluongSetfocusFnc);
	//m_wndSoluong.SetEvent(WE_KILLFOCUS, _OnSoluongKillfocusFnc);
	m_wndSoluong.SetEvent(WE_CHECKVALUE, _OnSoluongCheckValueFnc);
	//m_wndDinhmuc.SetEvent(WE_CHANGE, _OnDinhmucChangeFnc);
	//m_wndDinhmuc.SetEvent(WE_SETFOCUS, _OnDinhmucSetfocusFnc);
	//m_wndDinhmuc.SetEvent(WE_KILLFOCUS, _OnDinhmucKillfocusFnc);
	m_wndDinhmuc.SetEvent(WE_CHECKVALUE, _OnDinhmucCheckValueFnc);
	//m_wndQuyetdinh.SetEvent(WE_CHANGE, _OnQuyetdinhChangeFnc);
	//m_wndQuyetdinh.SetEvent(WE_SETFOCUS, _OnQuyetdinhSetfocusFnc);
	//m_wndQuyetdinh.SetEvent(WE_KILLFOCUS, _OnQuyetdinhKillfocusFnc);
	m_wndQuyetdinh.SetEvent(WE_CHECKVALUE, _OnQuyetdinhCheckValueFnc);
	//m_wndCongbo.SetEvent(WE_CHANGE, _OnCongboChangeFnc);
	//m_wndCongbo.SetEvent(WE_SETFOCUS, _OnCongboSetfocusFnc);
	//m_wndCongbo.SetEvent(WE_KILLFOCUS, _OnCongboKillfocusFnc);
	m_wndCongbo.SetEvent(WE_CHECKVALUE, _OnCongboCheckValueFnc);
	//m_wndNhathau.SetEvent(WE_CHANGE, _OnNhathauChangeFnc);
	//m_wndNhathau.SetEvent(WE_SETFOCUS, _OnNhathauSetfocusFnc);
	//m_wndNhathau.SetEvent(WE_KILLFOCUS, _OnNhathauKillfocusFnc);
	m_wndNhathau.SetEvent(WE_CHECKVALUE, _OnNhathauCheckValueFnc);
	//m_wndNuocsx.SetEvent(WE_CHANGE, _OnNuocsxChangeFnc);
	//m_wndNuocsx.SetEvent(WE_SETFOCUS, _OnNuocsxSetfocusFnc);
	//m_wndNuocsx.SetEvent(WE_KILLFOCUS, _OnNuocsxKillfocusFnc);
	m_wndNuocsx.SetEvent(WE_CHECKVALUE, _OnNuocsxCheckValueFnc);
	//m_wndHangsx.SetEvent(WE_CHANGE, _OnHangsxChangeFnc);
	//m_wndHangsx.SetEvent(WE_SETFOCUS, _OnHangsxSetfocusFnc);
	//m_wndHangsx.SetEvent(WE_KILLFOCUS, _OnHangsxKillfocusFnc);
	m_wndHangsx.SetEvent(WE_CHECKVALUE, _OnHangsxCheckValueFnc);
	//m_wndMahieu.SetEvent(WE_CHANGE, _OnMahieuChangeFnc);
	//m_wndMahieu.SetEvent(WE_SETFOCUS, _OnMahieuSetfocusFnc);
	//m_wndMahieu.SetEvent(WE_KILLFOCUS, _OnMahieuKillfocusFnc);
	m_wndMahieu.SetEvent(WE_CHECKVALUE, _OnMahieuCheckValueFnc);
	//m_wndManhomvtyt.SetEvent(WE_CHANGE, _OnManhomvtytChangeFnc);
	//m_wndManhomvtyt.SetEvent(WE_SETFOCUS, _OnManhomvtytSetfocusFnc);
	//m_wndManhomvtyt.SetEvent(WE_KILLFOCUS, _OnManhomvtytKillfocusFnc);
	m_wndManhomvtyt.SetEvent(WE_CHECKVALUE, _OnManhomvtytCheckValueFnc);
	//m_wndTennhomvtyt.SetEvent(WE_CHANGE, _OnTennhomvtytChangeFnc);
	//m_wndTennhomvtyt.SetEvent(WE_SETFOCUS, _OnTennhomvtytSetfocusFnc);
	//m_wndTennhomvtyt.SetEvent(WE_KILLFOCUS, _OnTennhomvtytKillfocusFnc);
	m_wndTennhomvtyt.SetEvent(WE_CHECKVALUE, _OnTennhomvtytCheckValueFnc);
	m_wndUnMapList.SetEvent(WE_SELCHANGE, _OnUnMapListSelectChangeFnc);
	m_wndUnMapList.SetEvent(WE_LOADDATA, _OnUnMapListLoadDataFnc);
	m_wndUnMapList.SetEvent(WE_DBLCLICK, _OnUnMapListDblClickFnc);
	m_wndUnMapList.AddEvent(1, _T("Delete"), _OnUnMapListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapedList.SetEvent(WE_SELCHANGE, _OnMapedListSelectChangeFnc);
	m_wndMapedList.SetEvent(WE_LOADDATA, _OnMapedListLoadDataFnc);
	m_wndMapedList.SetEvent(WE_DBLCLICK, _OnMapedListDblClickFnc);
	m_wndMapedList.AddEvent(1, _T("Delete"), _OnMapedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductExtraInfoMapDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndUnMapFlag.GetDlgCtrlID(), m_bUnMapFlag);
	DDX_TextEx(pDX, m_wndMapName.GetDlgCtrlID(), m_szMapNameKey);
	DDX_Text(pDX, m_wndHoatchat.GetDlgCtrlID(), m_szHoatchat);
	DDX_Text(pDX, m_wndMahoatchat.GetDlgCtrlID(), m_szMahoatchat);
	DDX_Text(pDX, m_wndMathuocbv.GetDlgCtrlID(), m_szMathuocbv);
	DDX_Text(pDX, m_wndTenthuoc.GetDlgCtrlID(), m_szTenthuoc);
	DDX_Text(pDX, m_wndHamluong.GetDlgCtrlID(), m_szHamluong);
	DDX_Text(pDX, m_wndDonvitinh.GetDlgCtrlID(), m_szDonvitinh);
	DDX_Text(pDX, m_wndSodangky.GetDlgCtrlID(), m_szSodangky);
	DDX_Text(pDX, m_wndDonggoi.GetDlgCtrlID(), m_szDonggoi);
	DDX_TextEx(pDX, m_wndMaduongdung.GetDlgCtrlID(), m_szMaduongdungKey);
	DDX_Text(pDX, m_wndDuongdung.GetDlgCtrlID(), m_szDuongdung);
	DDX_Text(pDX, m_wndDongia.GetDlgCtrlID(), m_nDongia);
	DDX_Text(pDX, m_wndDongiatt.GetDlgCtrlID(), m_nDongiatt);
	DDX_Text(pDX, m_wndSoluong.GetDlgCtrlID(), m_nSoluong);
	DDX_Text(pDX, m_wndDinhmuc.GetDlgCtrlID(), m_nDinhmuc);
	DDX_Text(pDX, m_wndQuyetdinh.GetDlgCtrlID(), m_szQuyetdinh);
	DDX_TextEx(pDX, m_wndCongbo.GetDlgCtrlID(), m_szCongbo);
	DDX_Text(pDX, m_wndNhathau.GetDlgCtrlID(), m_szNhathau);
	DDX_Text(pDX, m_wndNuocsx.GetDlgCtrlID(), m_szNuocsx);
	DDX_Text(pDX, m_wndHangsx.GetDlgCtrlID(), m_szHangsx);
	DDX_Text(pDX, m_wndMahieu.GetDlgCtrlID(), m_szMahieu);
	DDX_Text(pDX, m_wndManhomvtyt.GetDlgCtrlID(), m_szManhomvtyt);
	DDX_Text(pDX, m_wndTennhomvtyt.GetDlgCtrlID(), m_szTennhomvtyt);

}
void CProductExtraInfoMapDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Contract")] =  m_szContractKey;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("UnMapFlag")] =  m_bUnMapFlag;
	m_jData[_T("MapName")] =  m_szMapNameKey;
	m_jData[_T("Hoatchat")] =  m_szHoatchat;
	m_jData[_T("Mahoatchat")] =  m_szMahoatchat;
	m_jData[_T("Mathuocbv")] =  m_szMathuocbv;
	m_jData[_T("Tenthuoc")] =  m_szTenthuoc;
	m_jData[_T("Hamluong")] =  m_szHamluong;
	m_jData[_T("Donvitinh")] =  m_szDonvitinh;
	m_jData[_T("Sodangky")] =  m_szSodangky;
	m_jData[_T("Donggoi")] =  m_szDonggoi;
	m_jData[_T("Maduongdung")] =  m_szMaduongdungKey;
	m_jData[_T("Duongdung")] =  m_szDuongdung;
	m_jData[_T("Dongia")] =  m_nDongia;
	m_jData[_T("Dongiatt")] =  m_nDongiatt;
	m_jData[_T("Soluong")] =  m_nSoluong;
	m_jData[_T("Dinhmuc")] =  m_nDinhmuc;
	m_jData[_T("Quyetdinh")] =  m_szQuyetdinh;
	m_jData[_T("Congbo")] =  m_szCongbo;
	m_jData[_T("Nhathau")] =  m_szNhathau;
	m_jData[_T("Nuocsx")] =  m_szNuocsx;
	m_jData[_T("Hangsx")] =  m_szHangsx;
	m_jData[_T("Mahieu")] =  m_szMahieu;
	m_jData[_T("Manhomvtyt")] =  m_szManhomvtyt;
	m_jData[_T("Tennhomvtyt")] =  m_szTennhomvtyt;
	}
	else
	{
			
	m_jData[_T("Contract")].GetValue(m_szContractKey);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("UnMapFlag")].GetValue(m_bUnMapFlag);
	m_jData[_T("MapName")].GetValue(m_szMapNameKey);
	m_jData[_T("Hoatchat")].GetValue(m_szHoatchat);
	m_jData[_T("Mahoatchat")].GetValue(m_szMahoatchat);
	m_jData[_T("Mathuocbv")].GetValue(m_szMathuocbv);
	m_jData[_T("Tenthuoc")].GetValue(m_szTenthuoc);
	m_jData[_T("Hamluong")].GetValue(m_szHamluong);
	m_jData[_T("Donvitinh")].GetValue(m_szDonvitinh);
	m_jData[_T("Sodangky")].GetValue(m_szSodangky);
	m_jData[_T("Donggoi")].GetValue(m_szDonggoi);
	m_jData[_T("Maduongdung")].GetValue(m_szMaduongdungKey);
	m_jData[_T("Duongdung")].GetValue(m_szDuongdung);
	m_jData[_T("Dongia")].GetValue(m_nDongia);
	m_jData[_T("Dongiatt")].GetValue(m_nDongiatt);
	m_jData[_T("Soluong")].GetValue(m_nSoluong);
	m_jData[_T("Dinhmuc")].GetValue(m_nDinhmuc);
	m_jData[_T("Quyetdinh")].GetValue(m_szQuyetdinh);
	m_jData[_T("Congbo")].GetValue(m_szCongbo);
	m_jData[_T("Nhathau")].GetValue(m_szNhathau);
	m_jData[_T("Nuocsx")].GetValue(m_szNuocsx);
	m_jData[_T("Hangsx")].GetValue(m_szHangsx);
	m_jData[_T("Mahieu")].GetValue(m_szMahieu);
	m_jData[_T("Manhomvtyt")].GetValue(m_szManhomvtyt);
	m_jData[_T("Tennhomvtyt")].GetValue(m_szTennhomvtyt);
	}

}
void CProductExtraInfoMapDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductExtraInfoMapDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductExtraInfoMapDialog::SetDefaultValues(){

	m_szContractKey.Empty();
	m_szName.Empty();
	m_bUnMapFlag=FALSE;
	m_szMapNameKey.Empty();
	m_szHoatchat.Empty();
	m_szMahoatchat.Empty();
	m_szMathuocbv.Empty();
	m_szTenthuoc.Empty();
	m_szHamluong.Empty();
	m_szDonvitinh.Empty();
	m_szSodangky.Empty();
	m_szDonggoi.Empty();
	m_szMaduongdungKey.Empty();
	m_szDuongdung.Empty();
	m_nDongia=0;
	m_nDongiatt=0;
	m_nSoluong=0;
	m_nDinhmuc=0;
	m_szQuyetdinh.Empty();
	m_szCongbo.Empty();
	m_szNhathau.Empty();
	m_szNuocsx.Empty();
	m_szHangsx.Empty();
	m_szMahieu.Empty();
	m_szManhomvtyt.Empty();
	m_szTennhomvtyt.Empty();

}
int CProductExtraInfoMapDialog::SetMode(int nMode){
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
void CProductExtraInfoMapDialog::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnContractSelendok(){
	 
}
/*void CProductExtraInfoMapDialog::OnContractSetfocus(){
	
}*/
/*void CProductExtraInfoMapDialog::OnContractKillfocus(){
	
}*/
long CProductExtraInfoMapDialog::OnContractLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoMapDialog::OnContractAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoMapDialog::OnNameChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnNameSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnNameKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnNameCheckValue(){
	return 0;
} 
void CProductExtraInfoMapDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CProductExtraInfoMapDialog::OnUnMapFlagSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CProductExtraInfoMapDialog::OnListDblClick(){
	
} 
void CProductExtraInfoMapDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductExtraInfoMapDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductExtraInfoMapDialog::OnMapNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnMapNameSelendok(){
	 
}
/*void CProductExtraInfoMapDialog::OnMapNameSetfocus(){
	
}*/
/*void CProductExtraInfoMapDialog::OnMapNameKillfocus(){
	
}*/
long CProductExtraInfoMapDialog::OnMapNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMapName.IsSearchKey() && !m_szMapNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMapNameKey
};
	m_wndMapName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoMapDialog::OnMapNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductExtraInfoMapDialog::OnMapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CProductExtraInfoMapDialog::OnHoatchatChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnHoatchatSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnHoatchatKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnHoatchatCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnMahoatchatChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnMahoatchatSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnMahoatchatKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnMahoatchatCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnMathuocbvChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnMathuocbvSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnMathuocbvKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnMathuocbvCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnTenthuocChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnTenthuocSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnTenthuocKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnTenthuocCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnHamluongChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnHamluongSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnHamluongKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnHamluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnDonvitinhChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDonvitinhSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDonvitinhKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDonvitinhCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnSodangkyChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnSodangkySetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnSodangkyKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnSodangkyCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnDonggoiChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDonggoiSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDonggoiKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDonggoiCheckValue(){
	return 0;
} 
void CProductExtraInfoMapDialog::OnMaduongdungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnMaduongdungSelendok(){
	 
}
/*void CProductExtraInfoMapDialog::OnMaduongdungSetfocus(){
	
}*/
/*void CProductExtraInfoMapDialog::OnMaduongdungKillfocus(){
	
}*/
long CProductExtraInfoMapDialog::OnMaduongdungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMaduongdung.IsSearchKey() && !m_szMaduongdungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMaduongdungKey
};
	m_wndMaduongdung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaduongdung.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductExtraInfoMapDialog::OnMaduongdungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoMapDialog::OnDuongdungChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDuongdungSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDuongdungKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDuongdungCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnDongiaChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDongiaSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDongiaKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDongiaCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnDongiattChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDongiattSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDongiattKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDongiattCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnSoluongChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnSoluongSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnSoluongKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnSoluongCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnDinhmucChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnDinhmucSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnDinhmucKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnDinhmucCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnQuyetdinhChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnQuyetdinhSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnQuyetdinhKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnQuyetdinhCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnCongboChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnCongboSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnCongboKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnCongboCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnNhathauChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnNhathauSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnNhathauKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnNhathauCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnNuocsxChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnNuocsxSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnNuocsxKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnNuocsxCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnHangsxChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnHangsxSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnHangsxKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnHangsxCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnMahieuChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnMahieuSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnMahieuKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnMahieuCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnManhomvtytChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnManhomvtytSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnManhomvtytKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnManhomvtytCheckValue(){
	return 0;
} 
/*void CProductExtraInfoMapDialog::OnTennhomvtytChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnTennhomvtytSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnTennhomvtytKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnTennhomvtytCheckValue(){
	return 0;
} 
void CProductExtraInfoMapDialog::OnUnMapListDblClick(){
	
} 
void CProductExtraInfoMapDialog::OnUnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnUnMapListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductExtraInfoMapDialog::OnUnMapListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndUnMapList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnMapList.AddItems(
		rs.MoveNext();
	}
	m_wndUnMapList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductExtraInfoMapDialog::OnMapedListDblClick(){
	
} 
void CProductExtraInfoMapDialog::OnMapedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnMapedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductExtraInfoMapDialog::OnMapedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMapedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapedList.AddItems(
		rs.MoveNext();
	}
	m_wndMapedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CProductExtraInfoMapDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnAddProductExtraInfoMapDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductExtraInfoMapDialog::OnEditProductExtraInfoMapDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductExtraInfoMapDialog::OnDeleteProductExtraInfoMapDialog(){
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
 		OnCancelProductExtraInfoMapDialog();
 	}
	return 0;
}
int CProductExtraInfoMapDialog::OnSaveProductExtraInfoMapDialog(){
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
 		//OnProductExtraInfoMapDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductExtraInfoMapDialog::OnCancelProductExtraInfoMapDialog(){
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
int CProductExtraInfoMapDialog::OnProductExtraInfoMapDialogListLoadData(){
	return 0;
}
