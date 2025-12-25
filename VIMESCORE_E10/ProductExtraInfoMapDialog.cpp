#include "ProductExtraInfoMapDialog.h"
#include "MainFrame_E10.h"
#include "ImportInsuranceListDialog.h"
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
} */
static int _OnMaduongdungLoadDataFnc(CWnd *pWnd){
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
static void _OnQuyetdinhSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductExtraInfoMapDialog* )pWnd)->OnQuyetdinhSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnQuyetdinhSelendokFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhSelendok();
}
/*static void _OnQuyetdinhSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhKillfocus();
}*/
/*static void _OnQuyetdinhKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhKillfocus();
} */
static int  _OnQuyetdinhLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhLoadData();
} 
/*static void _OnQuyetdinhAddNewFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnQuyetdinhAddNew();
}*/
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
/*static void _OnHopDongChangeFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHopDongChange();
} */
/*static void _OnHopDongSetfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHopDongSetfocus();} */ 
/*static void _OnHopDongKillfocusFnc(CWnd *pWnd){
	((CProductExtraInfoMapDialog *)pWnd)->OnHopDongKillfocus();
} */
static int _OnHopDongCheckValueFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnHopDongCheckValue();
} 

static long _OnHopDongLoadDataFnc(CWnd *pWnd){
	return ((CProductExtraInfoMapDialog *)pWnd)->OnHopDongLoadData();
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
static void _OnRefresMapIDSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnRefeshMapIDSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductExtraInfoMapDialog *pVw = (CProductExtraInfoMapDialog *)pWnd;
	pVw->OnAddSelect();
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

	m_nDlgWidth = 965;
	m_nDlgHeight = 705;
	SetDefaultValues();
	m_bLoadFlag = false;
}
CProductExtraInfoMapDialog::~CProductExtraInfoMapDialog(){
}
void CProductExtraInfoMapDialog::OnCreateComponents(){
	m_wndMaped.Create(this, _T("Maped"), 485, 495, 960, 640);
	m_wndItemList.Create(this, _T("Item List"), 5, 65, 960, 245);
	m_wndContractLabel.Create(this, _T("Contract"), 10, 30, 90, 55);
	m_wndContract.Create(this,95, 30, 313, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 318, 30, 412, 55);
	m_wndUnMap.Create(this, _T("Un map"), 5, 495, 480, 640);
	m_wndCurrentInfo.Create(this, _T("Current Info"), 5, 255, 960, 490);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 960, 60);
	m_wndName.Create(this,417, 30, 635, 55); 
	m_wndSearch.Create(this, _T("@"), 640, 30, 660, 55);
	m_wndUnMapFlag.Create(this, _T("UnMapFlag"), 665, 30, 805, 55);
	m_wndList.Create(this,10, 90, 955, 210); 
	m_wndMapNameLabel.Create(this, _T("Map Name"), 10, 215, 110, 240);
	m_wndMapName.Create(this,115, 215, 875, 240); 
	m_wndMap.Create(this, _T("Map"), 880, 215, 955, 240);
	m_wndHoatchatLabel.Create(this, _T("Hoat_chat"), 9, 280, 109, 305);
	m_wndHoatchat.Create(this,114, 280, 473, 305); 
	m_wndMahoatchatLabel.Create(this, _T("Ma ax"), 478, 280, 578, 305);
	m_wndMahoatchat.Create(this,583, 280, 712, 305); 
	m_wndMathuocbvLabel.Create(this, _T("Ma_thuoc_bv"), 717, 280, 822, 305);
	m_wndMathuocbv.Create(this,827, 280, 956, 305); 
	m_wndTenthuocLabel.Create(this, _T("Ten anh xa"), 10, 310, 110, 335);
	m_wndTenthuoc.Create(this,115, 310, 474, 335); 
	m_wndHamluongLabel.Create(this, _T("Ham_luong"), 479, 310, 579, 335);
	m_wndHamluong.Create(this,584, 310, 713, 335); 
	m_wndDonvitinhLabel.Create(this, _T("Don_vi_tinh"), 718, 310, 823, 335);
	m_wndDonvitinh.Create(this,828, 310, 957, 335); 
	m_wndSodangkyLabel.Create(this, _T("So_dang_ky"), 10, 340, 110, 365);
	m_wndSodangky.Create(this,115, 340, 235, 365); 
	m_wndDonggoiLabel.Create(this, _T("Dong_goi"), 240, 340, 340, 365);
	m_wndDonggoi.Create(this,345, 340, 474, 365); 
	m_wndMaduongdungLabel.Create(this, _T("Ma_duong_dung"), 479, 340, 579, 365);
	m_wndMaduongdung.Create(this,584, 340, 713, 365); 
	m_wndDuongdungLabel.Create(this, _T("Duong_dung"), 718, 340, 823, 365);
	m_wndDuongdung.Create(this,828, 340, 957, 365); 
	m_wndDongiaLabel.Create(this, _T("Don_gia"), 10, 370, 110, 395);
	m_wndDongia.Create(this,115, 370, 235, 395); 
	m_wndDongiattLabel.Create(this, _T("Don_gia_tt"), 240, 370, 340, 395);
	m_wndDongiatt.Create(this,345, 370, 474, 395); 
	m_wndSoluongLabel.Create(this, _T("So_luong"), 479, 370, 579, 395);
	m_wndSoluong.Create(this,584, 370, 713, 395); 
	m_wndDinhmucLabel.Create(this, _T("Dinh_muc"), 718, 370, 823, 395);
	m_wndDinhmuc.Create(this,828, 370, 957, 395); 
	m_wndQuyetdinhLabel.Create(this, _T("Quyet_dinh"), 10, 400, 110, 425);
	m_wndQuyetdinh.Create(this,115, 400, 235, 425); 
	m_wndCongboLabel.Create(this, _T("Cong_bo"), 240, 400, 340, 425);
	m_wndCongbo.Create(this,345, 400, 474, 425); 
	m_wndNhathauLabel.Create(this, _T("Nha_thau"), 479, 400, 579, 425);
	m_wndNhathau.Create(this,584, 400, 957, 425); 
	m_wndNuocsxLabel.Create(this, _T("Nuoc_sx"), 10, 430, 110, 455);
	m_wndNuocsx.Create(this,115, 430, 474, 455); 
	m_wndHangsxLabel.Create(this, _T("Hang_sx"), 479, 430, 579, 455);
	m_wndHangsx.Create(this,584, 430, 957, 455); 
	m_wndHopDongLabel.Create(this, _T("Hợp đồng"), 10, 460, 110, 485);
	m_wndHopDong.Create(this,115, 460, 235, 485); 
	m_wndManhomvtytLabel.Create(this, _T("Ma_nhom_vtyt"), 240, 460, 340, 485);
	m_wndManhomvtyt.Create(this,345, 460, 474, 485); 
	m_wndPackageLabel.Create(this, _T("Package"), 480, 460, 580, 485);
	m_wndPackage.Create(this,585, 460, 714, 485); 
	m_wndPackageGrpLabel.Create(this, _T("Package Grp"), 720, 460, 825, 485);
	m_wndPackageGrp.Create(this,830, 460, 959, 485); 
	m_wndUnMapList.Create(this,9, 520, 474, 635); 
	m_wndMapedList.Create(this,490, 520, 955, 635); 
	m_wndExport.Create(this, _T("Export XLS"), 5, 645, 95, 670);
	m_wndImport.Create(this, _T("Import"), 100, 645, 190, 670);
	m_wndAdd.Create(this, _T("&Add"), 490, 645, 580, 670);
	m_wndEdit.Create(this, _T("&Update"), 585, 645, 675, 670);
	m_wndSave.Create(this, _T("&Save"), 680, 645, 770, 670);
	m_wndCancel.Create(this, _T("&Cancel"), 775, 645, 865, 670);
	m_wndClose.Create(this, _T("Close"), 870, 645, 960, 670);

	m_wndRefeshMapID.Create(this, _T("ResfeshMapID"), 195, 645, 285, 670);

}
void CProductExtraInfoMapDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	//m_wndMapName.SetCheckValue(true);
	m_wndMapName.LimitText(35);
	m_wndHoatchat.SetLimitText(1024);
	//m_wndHoatchat.SetCheckValue(false);
	m_wndMahoatchat.SetLimitText(15);
	m_wndMahoatchat.SetCheckValue(false);
	m_wndMathuocbv.SetLimitText(15);
	m_wndMathuocbv.SetCheckValue(false);
	m_wndTenthuoc.SetLimitText(254);
	m_wndTenthuoc.SetCheckValue(true);
	m_wndHamluong.SetLimitText(128);
	m_wndHamluong.SetCheckValue(true);
	m_wndDonvitinh.SetLimitText(64);
	m_wndDonvitinh.SetCheckValue(true);
	m_wndSodangky.SetLimitText(20);
	m_wndSodangky.SetCheckValue(false);
	m_wndDonggoi.SetLimitText(64);
	m_wndDonggoi.SetCheckValue(false);
//	m_wndMaduongdung.SetLimitText(20);
	m_wndMaduongdung.SetCheckValue(false);
	m_wndDuongdung.SetLimitText(254);
	m_wndDuongdung.SetCheckValue(false);
	m_wndDongia.SetLimitText(10);
	m_wndDongia.SetCheckValue(true);
	m_wndDongiatt.SetLimitText(10);
	m_wndDongiatt.SetCheckValue(true);
	m_wndSoluong.SetLimitText(10);
	m_wndSoluong.SetCheckValue(false);
	m_wndDinhmuc.SetLimitText(10);
	m_wndDinhmuc.SetCheckValue(false);
//	m_wndQuyetdinh.SetLimitText(30);
	m_wndQuyetdinh.SetCheckValue(true);
	m_wndCongbo.SetCheckValue(true);
	m_wndNhathau.SetLimitText(254);
	m_wndNhathau.SetCheckValue(false);
	m_wndNuocsx.SetLimitText(128);
	m_wndNuocsx.SetCheckValue(false);
	m_wndHangsx.SetLimitText(254);
	m_wndHangsx.SetCheckValue(false);
	m_wndHopDong.SetCheckValue(false);
	m_wndManhomvtyt.SetLimitText(20);
	m_wndManhomvtyt.SetCheckValue(false);
	m_wndTennhomvtyt.SetLimitText(254);
	m_wndTennhomvtyt.SetCheckValue(false);

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
	m_m_product_extra_infoTbl.AddField(_T("MPEI_SO_HOP_DONG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DINH_MUC"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_PACKAGES"), dfText, 50); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_GROUP"), dfText, 20); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_CONTRACT_ID"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_GOI_THAU"), dfLong); 

	//m_wndGroup.Format(3, 2);
	m_wndMaduongdung.InsertColumn(0,_T("ID"),CFMT_TEXT, 30);
	m_wndMaduongdung.InsertColumn(1,_T("ID"),CFMT_TEXT, 30);
	m_wndMaduongdung.InsertColumn(2,_T("Name"),CFMT_TEXT, 120);
	//m_wndGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	//m_wndGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	//m_wndGroup.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);

	//m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	//m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);

	
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 50);//id
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 50); //product_id
	m_wndList.InsertColumn(2, _T("Mã"), CFMT_TEXT, 75);
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndList.InsertColumn(3, _T("Tên hoạt chất"), CFMT_TEXT, 200);
		m_wndList.InsertColumn(4, _T("Tên thuốc"), CFMT_TEXT, 200);
		m_wndList.InsertColumn(5, _T("Hàm lượng"), CFMT_TEXT, 150);
	}

	else
	{
		m_wndList.InsertColumn(3, _T(""), CFMT_TEXT, 0);
		m_wndList.InsertColumn(4, _T("Tên vật tư"), CFMT_TEXT, 450);
		m_wndList.InsertColumn(5, _T(""), CFMT_TEXT, 0);
	}
	m_wndList.InsertColumn(6, _T("Đơn vị"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Đơn giá"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("Đơn giá TT"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("Số lượng"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(10, _T("Quyết đinh"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(11, _T("Nhà thầu"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(12, _T("Nước SX"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(13, _T("Hãng SX"), CFMT_TEXT, 90);
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
	m_wndQuyetdinh.InsertColumn(0,_T("ID"),CFMT_TEXT, 30);
	m_wndQuyetdinh.InsertColumn(1,_T("Contract Name"),CFMT_TEXT, 120);
	m_wndQuyetdinh.InsertColumn(2,_T("Contract Date"),CFMT_TEXT, 120);
	m_wndQuyetdinh.InsertColumn(3,_T("UID"),CFMT_TEXT, 0);

	m_wndUnMapList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndUnMapList.InsertColumn(1, _T("Unit Price"), CFMT_NUMBER, 90);
	m_wndUnMapList.InsertColumn(2, _T("Ins Price"), CFMT_NUMBER, 90);
	m_wndUnMapList.InsertColumn(3, _T("Tax Price"), CFMT_NUMBER, 90);
	m_wndUnMapList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 90);
	

	m_wndMapedList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndMapedList.InsertColumn(1, _T("Unit Price"), CFMT_NUMBER, 90);
	m_wndMapedList.InsertColumn(2, _T("Tax Price"), CFMT_NUMBER, 90);
	m_wndMapedList.InsertColumn(3, _T("Ins Price"), CFMT_NUMBER, 90);
	m_wndMapedList.InsertColumn(4, _T("Exp Date"), CFMT_DATE, 90);
	
	m_wndContract.SetCheckValue(false);
	m_wndName.SetCheckValue(false);

	m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndMapName.InsertColumn(0, _T(""), CFMT_NUMBER, 50); //ID
	m_wndMapName.InsertColumn(1, _T("Tên thuốc"), CFMT_TEXT, 300);
	m_wndMapName.InsertColumn(2, _T("Đơn vị"), CFMT_TEXT, 90);
	m_wndMapName.InsertColumn(3, _T("Hoạt chất"), CFMT_TEXT, 200);
	m_wndMapName.InsertColumn(4, _T("Hãng SX"), CFMT_TEXT, 200);
	m_wndMapName.InsertColumn(5, _T("Đơn giá"), CFMT_MONEY, 80);
	m_wndMapName.SetRequirementLength(2);

	m_wndHopDong.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//id
	m_wndHopDong.InsertColumn(1, _T(""), CFMT_TEXT, 0);//Name
	m_wndHopDong.InsertColumn(2, _T("Diễn giải"), CFMT_TEXT, 200);//Descr
	m_wndHopDong.Format(3, 2);
}
void CProductExtraInfoMapDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndQuyetdinh.SetEvent(WE_SELENDOK, _OnQuyetdinhSelendokFnc);
	//m_wndQuyetdinh.SetEvent(WE_SETFOCUS, _OnQuyetdinhSetfocusFnc);
	//m_wndQuyetdinh.SetEvent(WE_KILLFOCUS, _OnQuyetdinhKillfocusFnc);
	m_wndQuyetdinh.SetEvent(WE_SELCHANGE, _OnQuyetdinhSelectChangeFnc);
	m_wndQuyetdinh.SetEvent(WE_LOADDATA, _OnQuyetdinhLoadDataFnc);
	//m_wndQuyetdinh.SetEvent(WE_ADDNEW, _OnQuyetdinhAddNewFnc);
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
	//m_wndHopDong.SetEvent(WE_CHANGE, _OnHopDongChangeFnc);
	//m_wndHopDong.SetEvent(WE_SETFOCUS, _OnHopDongSetfocusFnc);
	//m_wndHopDong.SetEvent(WE_KILLFOCUS, _OnHopDongKillfocusFnc);
	m_wndHopDong.SetEvent(WE_CHECKVALUE, _OnHopDongCheckValueFnc);
	m_wndHopDong.SetEvent(WE_LOADDATA, _OnHopDongLoadDataFnc);
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
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRefeshMapID.SetEvent(WE_CLICK, _OnRefresMapIDSelectFnc);
	
	SetMode(VM_VIEW);

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
	DDX_TextEx(pDX, m_wndQuyetdinh.GetDlgCtrlID(), m_szQuyetdinhKey);
	DDX_TextEx(pDX, m_wndCongbo.GetDlgCtrlID(), m_szCongbo);
	DDX_Text(pDX, m_wndNhathau.GetDlgCtrlID(), m_szNhathau);
	DDX_Text(pDX, m_wndNuocsx.GetDlgCtrlID(), m_szNuocsx);
	DDX_Text(pDX, m_wndHangsx.GetDlgCtrlID(), m_szHangsx);
	DDX_TextEx(pDX, m_wndHopDong.GetDlgCtrlID(), m_szHopDongKey);
	DDX_Text(pDX, m_wndManhomvtyt.GetDlgCtrlID(), m_szManhomvtyt);
	//DDX_Text(pDX, m_wndTennhomvtyt.GetDlgCtrlID(), m_szTennhomvtyt);
	DDX_Text(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackage);
	DDX_Text(pDX, m_wndPackageGrp.GetDlgCtrlID(), m_szPackageGrp);
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
	m_jData[_T("Quyetdinh")] =  m_szQuyetdinhKey;
	m_jData[_T("Congbo")] =  m_szCongbo;
	m_jData[_T("Nhathau")] =  m_szNhathau;
	m_jData[_T("Nuocsx")] =  m_szNuocsx;
	m_jData[_T("Hangsx")] =  m_szHangsx;
	m_jData[_T("HopDong")] =  m_szHopDongKey;
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
	m_jData[_T("Quyetdinh")].GetValue(m_szQuyetdinhKey);
	m_jData[_T("Congbo")].GetValue(m_szCongbo);
	m_jData[_T("Nhathau")].GetValue(m_szNhathau);
	m_jData[_T("Nuocsx")].GetValue(m_szNuocsx);
	m_jData[_T("Hangsx")].GetValue(m_szHangsx);
	m_jData[_T("HopDong")].GetValue(m_szHopDongKey);
	m_jData[_T("Manhomvtyt")].GetValue(m_szManhomvtyt);
	m_jData[_T("Tennhomvtyt")].GetValue(m_szTennhomvtyt);
	}

}
void CProductExtraInfoMapDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product_extra_info") \
				 _T(" WHERE mpei_id=%ld"), m_nID);
	

	rs.ExecSQL(szSQL);
	m_szMapNameKey.Empty();
	m_bLoadFlag = false;
	if (!rs.IsEOF()){
		rs.GetValue(_T("MPEI_MA_HOAT_CHAT"), m_szMahoatchat);
		rs.GetValue(_T("MPEI_HOAT_CHAT"), m_szHoatchat);
		rs.GetValue(_T("MPEI_MA_DUONG_DUNG"), m_szMaduongdungKey);
		rs.GetValue(_T("MPEI_DUONG_DUNG"), m_szDuongdung);
		rs.GetValue(_T("MPEI_HAM_LUONG"), m_szHamluong);
		rs.GetValue(_T("MPEI_TEN_THUOC"), m_szTenthuoc);
		rs.GetValue(_T("MPEI_SO_DANG_KY"), m_szSodangky);
		rs.GetValue(_T("MPEI_DONG_GOI"), m_szDonggoi);
		rs.GetValue(_T("MPEI_DON_VI_TINH"), m_szDonvitinh);
		rs.GetValue(_T("MPEI_DON_GIA"), m_nDongia);
		rs.GetValue(_T("MPEI_DON_GIA_TT"), m_nDongiatt);
		rs.GetValue(_T("MPEI_SO_LUONG"), m_nSoluong);
		rs.GetValue(_T("MPEI_HANG_SX"), m_szHangsx);
		rs.GetValue(_T("MPEI_NUOC_SX"), m_szNuocsx);
		rs.GetValue(_T("MPEI_NHA_THAU"), m_szNhathau);
		rs.GetValue(_T("MPEI_QUYET_DINH"), m_szQuyetdinhKey);
		rs.GetValue(_T("MPEI_CONG_BO"), m_szCongbo);
		rs.GetValue(_T("MPEI_MA_THUOC_BV"), m_szMathuocbv);
		rs.GetValue(_T("MPEI_MA_NHOM_VTYT"), m_szManhomvtyt);
		rs.GetValue(_T("MPEI_TEN_NHOM_VTYT"), m_szTennhomvtyt);
		rs.GetValue(_T("MPEI_CONTRACT_ID"), m_szHopDongKey);
		rs.GetValue(_T("MPEI_DINH_MUC"), m_nDinhmuc);
		rs.GetValue(_T("mpei_product_id"), m_szMapNameKey);
		rs.GetValue(_T("mpei_packages"), m_szPackage);
		rs.GetValue(_T("mpei_group"), m_szPackageGrp);
		if(str2long(m_szMapNameKey) > 0)
		{
			m_bLoadFlag = true;
		}
	}
	SetMode(VM_VIEW);
}
void CProductExtraInfoMapDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_PRODUCT_ID"), m_nProductID);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_HOAT_CHAT"), m_szMahoatchat);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HOAT_CHAT"), m_szHoatchat);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_DUONG_DUNG"), m_szMaduongdungKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DUONG_DUNG"), m_szDuongdung);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HAM_LUONG"), m_szHamluong);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_THUOC"), m_szTenthuoc);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_SO_DANG_KY"), m_szSodangky);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DONG_GOI"), m_szDonggoi);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_VI_TINH"), m_szDonvitinh);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_GIA"), m_nDongia);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DON_GIA_TT"), m_nDongiatt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_SO_LUONG"), m_nSoluong);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_HANG_SX"), m_szHangsx);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_NUOC_SX"), m_szNuocsx);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_NHA_THAU"), m_szNhathau);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_QUYET_DINH"), m_szQuyetdinhKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_CONG_BO"), m_szCongbo);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_THUOC_BV"), m_szMathuocbv);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_NHOM_VTYT"), m_szManhomvtyt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_TEN_NHOM_VTYT"), m_szTennhomvtyt);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_SO_HOP_DONG"), m_wndHopDong.GetCurrent(1));
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_DINH_MUC"), m_nDinhmuc);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_PACKAGES"), m_szPackage);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_GROUP"), m_szPackageGrp);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_CONTRACT_ID"), m_szHopDongKey);
	m_m_product_extra_infoTbl.SetValue(_T("MPEI_MA_GOI_THAU"), str2long(m_wndQuyetdinh.GetCurrent(3)));
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
	m_szQuyetdinhKey.Empty();
	m_szCongbo.Empty();
	m_szNhathau.Empty();
	m_szNuocsx.Empty();
	m_szHangsx.Empty();
	m_szHopDongKey.Empty();
	m_szManhomvtyt.Empty();
	m_szTennhomvtyt.Empty();
	m_szPackage.Empty();
	m_szPackageGrp.Empty();
	m_nProductID=0;
	m_szMapNameKey.Empty();
	

}
int CProductExtraInfoMapDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
		m_wndContract.SetCheckValue(false);
		m_wndName.SetCheckValue(false);
		m_wndMapName.SetCheckValue(false);
		m_wndMapName.EnableWindow(TRUE);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 6,7, -1);
			
 			SetDefaultValues();
			m_nProductID=0;
			m_szMapNameKey.Empty();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 6,7, -1);
			m_wndContract.SetCheckValue(false);
			m_wndName.SetCheckValue(false);
			m_wndMapName.SetCheckValue(false);
			m_wndMapName.EnableWindow(FALSE);
			m_wndHoatchat.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 4,5, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndContract.EnableWindow(TRUE);
		m_wndName.EnableWindow(TRUE);
		m_wndMapName.EnableWindow(TRUE);
		m_wndExport.EnableWindow(TRUE);
		m_wndImport.EnableWindow(TRUE);
		m_wndClose.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);
		m_wndMap.EnableWindow(TRUE);
		m_wndRefeshMapID.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductExtraInfoMapDialog::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnContractSelendok(){
	 
}
/*void CProductExtraInfoMapDialog::OnContractSetfocus(){
	
}*/
/*void CProductExtraInfoMapDialog::OnContractKillfocus(){
	
}*/
long CProductExtraInfoMapDialog::OnContractLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadContractPackageList(&m_wndContract, m_szContractKey);
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CProductExtraInfoMapDialog::OnNameChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnNameSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnNameKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnNameCheckValue(){
	m_wndList.Search(3, m_szName);
	return 0;
} 
void CProductExtraInfoMapDialog::OnSearchSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
	void CProductExtraInfoMapDialog::OnUnMapFlagSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CProductExtraInfoMapDialog::OnListDblClick(){
	
} 
void CProductExtraInfoMapDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nProductID = str2long(m_wndList.GetItemText(nNewItem, 1));
	GetDataToScreen();
	OnUnMapListLoadData();
	OnMapedListLoadData();

	

	m_nSelectedItem = nNewItem;
	CString szName = m_wndList.GetItemText(nNewItem, 2);
	
	m_szTitle = szName;
	SetWindowText(szName);
	m_bLoadFlag = true;
} 

int CProductExtraInfoMapDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	if(m_wndMapedList.GetItemCount() >0)
	{
		_msg(_T("Thuốc đã có item đã được map, xin hãy xóa đi trước"));
		return 0;

	}
	CString szSQL;
	int nCel= m_wndList.GetCurSel();
	szSQL.Format(_T("DELETE from m_product_extra_info where mpei_id = %s"),m_wndList.GetItemText(nCel,0));
	pMF->ExecSQL(szSQL);
	OnListLoadData();
	


	 return 0;
} 
long CProductExtraInfoMapDialog::OnListLoadData(){
CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	UpdateData();
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if (!m_szName.IsEmpty()) 
		szWhere.Format(_T(" AND lower(mpei_ten_thuoc) like lower('%s%s%s') "), _T("%"), m_szName, _T("%"));
//	if (!m_szGroup.IsEmpty()) szWhere.AppendFormat(_T(" AND product_categoryid=%ld "), str2long(m_szGroup));
//	if (!m_szType.IsEmpty()) szWhere.AppendFormat(_T(" AND product_producttype = '%s'"), m_szType); 
//	szWhere.AppendFormat(_T(" and product_org_id IN('GL', '%s') "), pMF->GetModuleID());
//	szWhere.AppendFormat(_T(" AND product_isactive='Y'"));

	if(m_bUnMapFlag)
	{
		szWhere.AppendFormat(_T(" and nvl(mpei_product_id, 0) = 0 "));
	}
	if(!m_szContractKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mpei_quyet_dinh='%s' "), m_szContractKey);
	}
	szSQL.Format(_T(" SELECT * ")
				_T(" FROM m_product_extra_info ") \
				_T(" WHERE 1=1 %s") \
				_T(" ORDER BY mpei_ten_thuoc "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	CString tmpStr, szName, szContent, szGeneric, szTemp;
	int nIndex=0, nItem = 0;
	int nMapedId;
	while(!rs.IsEOF()){ 
		szTemp.Empty();
		szGeneric.Empty();
		tmpStr.Format(_T("%d"), ++nIndex);
		rs.GetValue(_T("mpei_id"), nMapedId);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("mpei_id")),
			rs.GetValue(_T("mpei_product_id")),
			rs.GetValue(_T("MPEI_MA_HOAT_CHAT")),
			rs.GetValue(_T("MPEI_HOAT_CHAT")),
			rs.GetValue(_T("MPEI_TEN_THUOC")),
			rs.GetValue(_T("MPEI_HAM_LUONG")), 
			rs.GetValue(_T("MPEI_DON_VI_TINH")), 
			rs.GetValue(_T("MPEI_DON_GIA")),
			rs.GetValue(_T("MPEI_DON_GIA_TT")),
			rs.GetValue(_T("MPEI_SO_LUONG")),
			rs.GetValue(_T("MPEI_QUYET_DINH")),
			rs.GetValue(_T("MPEI_NHA_THAU")),
			rs.GetValue(_T("MPEI_NUOC_SX")),
			rs.GetValue(_T("MPEI_HANG_SX")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CProductExtraInfoMapDialog::OnMapNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnMapNameSelendok(){
	 
}
/*void CProductExtraInfoMapDialog::OnMapNameSetfocus(){
	
}*/
/*void CProductExtraInfoMapDialog::OnMapNameKillfocus(){
	
}*/

long CProductExtraInfoMapDialog::OnMapNameLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(!m_bLoadFlag)
		return 0;

	if(m_wndMapName.IsSearchKey() && str2long(m_szMapNameKey) > 0){
	 szWhere.Format(_T(" and mp_product_id=%ld "), str2long(m_szMapNameKey));
	};

	CString tmpStr;
	m_wndMapName.GetWindowText(tmpStr);
	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(mp_name) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	m_wndMapName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mp_product_id             AS product_id,") \
_T("   mp_name                        AS product_name ,") \
_T("   get_uomname(mp_product_uom_id) AS product_uomname,") \
_T("   t2.mpc_name                    AS product_classname,") \
_T("   mp_unitprice                   AS product_unitprice ,") \
_T("   adm_name                       AS product_mfgname") \
_T(" FROM m_product") \
_T(" LEFT JOIN m_product_class t2") \
_T(" ON(t2.mpc_product_class_id=mp_product_class_id)") \
_T(" LEFT JOIN ad_manufacture") \
_T(" ON(adm_manufacture_id =mp_manufacture_id)") \
_T(" WHERE 1=1 and mp_product_id > 0 %s ORDER BY mp_name ") , szWhere);

	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapName.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_classname")), 
			rs.GetValue(_T("product_mfgname")), 
			rs.GetValue(_T("product_unitprice")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CProductExtraInfoMapDialog::OnMapNameAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductExtraInfoMapDialog::OnMapSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	UpdateData(TRUE);
	szSQL.Format(_T("UPDATE m_product_extra_info SET mpei_product_id = %ld WHERE mpei_id=%ld "), str2long(m_szMapNameKey), m_nID);
	int res = pMF->ExecSQL(szSQL);

	if(res > 0)
	{
		if(m_bUnMapFlag)
		{
			m_wndList.DeleteItem(nSel);
			m_szMapNameKey.Empty();
		}
		m_wndList.SetFocus();
		m_wndList.SetCurSel(nSel);
		m_wndMapName.SetFocus();
	}
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnMaduongdungSelendok(){
	m_szDuongdung= m_wndMaduongdung.GetCurrent(2);
	//UpdateData(false);
}
/*void CProductExtraInfoMapDialog::OnMaduongdungSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnMaduongdungKillfocus(){
	
} */
int  CProductExtraInfoMapDialog::OnMaduongdungLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,tmpStr;
	if(m_wndMaduongdung.IsSearchKey() && !m_szMaduongdungKey.IsEmpty())
	{
		szWhere.Format(_T(" and pu_id='%s' "), m_szMaduongdungKey);
	}
	m_wndMaduongdung.GetWindowText(tmpStr);
	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(pu_name) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	m_wndMaduongdung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select pu_id as id, pu_name as name from pms_usedrug     WHERE 1=1 %s ORDER BY pu_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaduongdung.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),  
			NULL);

		rs.MoveNext();
} 
	return nCount;
}
/*void CProductExtraInfoMapDialog::OnMaduongdungAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
void CProductExtraInfoMapDialog::OnQuyetdinhSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	m_szCongbo = m_wndQuyetdinh.GetCurrent(2);
	UpdateData(false);
} 
void CProductExtraInfoMapDialog::OnQuyetdinhSelendok(){
	//CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_szCongbo= m_wndQuyetdinh.GetCurrent(2);
	//UpdateData(false); 
}
/*void CProductExtraInfoMapDialog::OnQuyetdinhSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnQuyetdinhKillfocus(){
	
} */
int  CProductExtraInfoMapDialog::OnQuyetdinhLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,tmpStr;
	if(m_wndQuyetdinh.IsSearchKey() && !m_szQuyetdinhKey.IsEmpty())
	{
		szWhere.Format(_T(" and adcp_contract_package_id='%s' "), m_szQuyetdinhKey);
} 
	m_wndQuyetdinh.GetWindowText(tmpStr);
	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(adcp_description) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	m_wndQuyetdinh.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(
		_T("select adcp_contract_package_id as id , adcp_description as name,") \
		_T(" adcp_date as pdate, adcp_contract_package_uid as puid") \
		_T(" from VIMES.ad_contract_package   ") \
		_T(" WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndQuyetdinh.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("pdate")),
			rs.GetValue(_T("puid")),
			NULL);

		rs.MoveNext();
	}
	return nCount;

}
/*void CProductExtraInfoMapDialog::OnQuyetdinhAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
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
/*void CProductExtraInfoMapDialog::OnHopDongChange(){
	
} */
/*void CProductExtraInfoMapDialog::OnHopDongSetfocus(){
	
} */
/*void CProductExtraInfoMapDialog::OnHopDongKillfocus(){
	
} */
int CProductExtraInfoMapDialog::OnHopDongCheckValue(){
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_nID <= 0)
	{
		ShowMessageBox(_T("Thu\x1ED1\x63 \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 nh\x1EADp th\xF4ng tin th\x1EA7u"));
		return;
	}
	int nSel = m_wndUnMapList.GetCurSel();
	if(nSel < 0)
		return;
	long nProductItemId = str2long(m_wndUnMapList.GetItemText(nSel, 0));
	CString szSQL;
	szSQL.Format(_T("UPDATE m_product_item SET mpi_productextra_id=%ld WHERe mpi_product_item_id=%ld"),
		m_nID, nProductItemId);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		m_wndUnMapList.DeleteItem(nSel);
		OnMapedListLoadData();
		m_wndList.SetFocus();
		m_wndList.SetCurSel(m_nSelectedItem);
	}
} 
void CProductExtraInfoMapDialog::OnUnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnUnMapListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductExtraInfoMapDialog::OnUnMapListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	
	m_wndUnMapList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT mpi_product_item_id as id,") \
_T("   mpi_unitprice as unitprice,") \
_T("   mpi_taxprice as taxprice,") \
_T("   mpi_saleprice2 as insprice,") \
_T("   mpi_expdate as expdate ") \
_T(" FROM m_product_item") \
_T(" WHERE mpi_product_id            =%ld") \
_T(" AND NVL(mpi_productextra_id, 0) = 0") \
_T(" ORDER BY mpi_product_item_id"), m_nProductID);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnMapList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("InsPrice")), 
			rs.GetValue(_T("TaxPrice")), 
			rs.GetValue(_T("ExpDate")), NULL);
		rs.MoveNext();
	}
	m_wndUnMapList.EndLoad(); 
	return nCount;
}
void CProductExtraInfoMapDialog::OnMapedListDblClick(){
	
} 
void CProductExtraInfoMapDialog::OnMapedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductExtraInfoMapDialog::OnMapedListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndMapedList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nProductItemId = str2long(m_wndMapedList.GetItemText(nSel, 0));
	CString szSQL;
	szSQL.Format(_T("UPDATE m_product_item SET mpi_productextra_id=0 WHERe mpi_product_item_id=%ld"),
		nProductItemId);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		m_wndMapedList.DeleteItem(nSel);
		OnUnMapListLoadData();
		m_wndList.SetFocus();
		m_wndList.SetCurSel(m_nSelectedItem);
	}
	return ret;
} 
long CProductExtraInfoMapDialog::OnMapedListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMapedList.BeginLoad(); 
	int nCount = 0;
	if(m_nID <= 0)
		return 0;
	szSQL.Format(_T(" SELECT mpi_product_item_id as id,") \
_T("   mpi_unitprice as unitprice,") \
_T("   mpi_taxprice as taxprice,") \
_T("   mpi_saleprice2 as insprice,") \
_T("   mpi_expdate as expdate ") \
_T(" FROM m_product_item") \
_T(" WHERE mpi_product_id            =%ld") \
_T(" AND NVL(mpi_productextra_id, 0) = %ld") \
_T(" ORDER BY mpi_product_item_id"), m_nProductID, m_nID);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapedList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("TaxPrice")), 
			rs.GetValue(_T("InsPrice")), 
			rs.GetValue(_T("ExpDate")), NULL);
		rs.MoveNext();
	}
	m_wndMapedList.EndLoad(); 
	return nCount;
}

void CProductExtraInfoMapDialog::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnImportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CImportInsuranceListDialog dlg(this);			
	dlg.DoModal();
	
} 
void CProductExtraInfoMapDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditProductExtraInfoMapDialog();
} 
void CProductExtraInfoMapDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductExtraInfoMapDialog();
} 
void CProductExtraInfoMapDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelProductExtraInfoMapDialog();
} 
void CProductExtraInfoMapDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductExtraInfoMapDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddProductExtraInfoMapDialog();
	
}
#include "PMRefeshMapID.h"
void CProductExtraInfoMapDialog::OnRefeshMapIDSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPMRefeshMapID dlg(this);			
	dlg.DoModal();
	
} 

int CProductExtraInfoMapDialog::OnAddProductExtraInfoMapDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductExtraInfoMapDialog::OnEditProductExtraInfoMapDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductExtraInfoMapDialog::OnDeleteProductExtraInfoMapDialog(){
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
 		OnCancelProductExtraInfoMapDialog();
 	}
	return 0;
}
int CProductExtraInfoMapDialog::OnSaveProductExtraInfoMapDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
	
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;
	if(GetMode()== VM_ADD){
		szSQL = m_m_product_extra_infoTbl.GetInsertSQL();
	}
	else if (GetMode()== VM_EDIT)
	{
 		szWhere.Format(_T(" WHERE mpei_id = %ld"), m_nID);
 		szSQL = m_m_product_extra_infoTbl.GetUpdateSQL(_T("mpei_id, mpei_product_id"));
 		szSQL += szWhere;
	}
	
	int ret = pMF->ExecSQL(szSQL);
	if (ret < 0){ 
		AfxMessageBox(_T("Update fail!"));
		return -1;
	}
	if(ret > 0){
		//AfxMessageBox(_T("Update successfully!"));
 		SetMode(VM_VIEW);
		OnListLoadData();
		m_wndList.SetFocus();
		m_wndList.SetCurSel(m_nSelectedItem);
 	}
 	return ret;
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CProductExtraInfoMapDialog::OnProductExtraInfoMapDialogListLoadData(){
	return 0;
}



void CProductExtraInfoMapDialog::OnListExport(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nRow = 1;
	if (pMF->GetModuleID() == _T("PM"))
	szSQL.Format(_T(" WITH tbl_onhand AS(") \
				 _T(" SELECT msl_product_id, sum(msl_qtyonhand) qty_onhand FROM m_storageline GROUP BY msl_product_id)") \
				 _T("SELECT mp_product_id ma_duy_nhat, MPEI_MA_HOAT_CHAT, COALESCE(MPEI_HOAT_CHAT, get_productclassname(MP_PRODUCT_CLASS_ID)) MPEI_HOAT_CHAT, MPEI_MA_DUONG_DUNG, ") \
				 _T(" COALESCE(MPEI_DUONG_DUNG, mp_value) MPEI_DUONG_DUNG, COALESCE(MPEI_HAM_LUONG, mp_name2) MPEI_HAM_LUONG, COALESCE(MPEI_TEN_THUOC, mp_name) MPEI_TEN_THUOC, ") \
				 _T(" COALESCE(MPEI_SO_DANG_KY, mp_serial) MPEI_SO_DANG_KY,") \
				 _T(" COALESCE(MPEI_DONG_GOI, mp_specification) MPEI_DONG_GOI, COALESCE(MPEI_DON_VI_TINH, mp_uom_id) MPEI_DON_VI_TINH,") \
				 _T(" COALESCE(MPEI_DON_GIA, mp_unitprice) MPEI_DON_GIA, COALESCE(MPEI_DON_GIA_TT, mp_saleprice2) MPEI_DON_GIA_TT, MPEI_SO_LUONG, 01014 ma_cskcb,") \
				 _T(" COALESCE(MPEI_HANG_SX, mp_manufacture_id) MPEI_HANG_SX, COALESCE(MPEI_NUOC_SX, mp_country_id) MPEI_NUOC_SX, COALESCE(MPEI_NHA_THAU, mp_bpartner_id) MPEI_NHA_THAU,") \
				 _T(" MPEI_QUYET_DINH, MPEI_CONG_BO, COALESCE(mpei_ma_thuoc_bv, mp_code) mpei_ma_thuoc_bv") \
				 _T(" FROM m_product LEFT JOIN m_product_extra_info ON (mp_product_id = mpei_product_id)") \
				 _T(" LEFT JOIN tbl_onhand ON (msl_product_id = mp_product_id)") \
				 _T(" WHERE mp_isactive='Y' AND mp_org_id IN ('GL', '%s')") \
				 _T(" ORDER BY mpei_ten_thuoc"), pMF->GetModuleID());
	else
	szSQL.Format(_T("SELECT mp_product_id MPEI_PRODUCT_ID, MPEI_MA_NHOM_VTYT, mpei_ten_nhom_vtyt,  MPEI_MA_HIEU, COALESCE(mpei_ma_thuoc_bv, mp_code) mpei_ma_thuoc_bv,") \
				 _T(" COALESCE(MPEI_TEN_THUOC, mp_name) MPEI_TEN_THUOC, COALESCE(MPEI_DONG_GOI, mp_specification) MPEI_DONG_GOI, COALESCE(MPEI_NUOC_SX, mp_country_id) MPEI_NUOC_SX,  ") \
				 _T(" COALESCE(MPEI_HANG_SX, mp_manufacture_id) MPEI_HANG_SX, COALESCE(MPEI_DON_VI_TINH, mp_uom_id) MPEI_DON_VI_TINH, COALESCE(MPEI_DON_GIA, mp_unitprice) MPEI_DON_GIA, ") \
				 _T(" COALESCE(MPEI_DON_GIA_TT, mp_saleprice2) MPEI_DON_GIA_TT, COALESCE(MPEI_NHA_THAU, mp_bpartner_id) MPEI_NHA_THAU,") \
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

void CProductExtraInfoMapDialog::OnListCopyItem(){
	AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 t\xEDnh n\x103ng n\xE0y!"));
}

long CProductExtraInfoMapDialog::OnHopDongLoadData()
{
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CWnd* pWnd = (CWnd*)(&m_wndHopDong);
	CString szKey = m_szHopDongKey, szFilter;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and adc_contract_id=%ld "), str2long(szKey));
	};
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" and adc_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T("SELECT  adc_contract_id, ") \
			_T(" adc_contract_no, ") \
			_T(" adc_contract_no||'['||to_char(adc_signeddate, 'DD/MM/YYYY')||']' as adc_description, ") \
			_T(" to_char(adc_signeddate, 'DD/MM/YYYY') as adc_signeddate,") \
			_T(" adc_amount ") \
		_T("FROM ad_contract ") \
		_T("WHERE adc_isactive='Y' %s %s ORDER BY adc_contract_id desc "), szWhere, szFilter);
_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("adc_contract_id")), 
			rs.GetValue(_T("adc_contract_no")), 
			rs.GetValue(_T("adc_description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}