#include "HMSFeeListChangeLnSetupDialog.h"
#include "MainFrm.h"
static void _OnCircularSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListChangeLnSetupDialog* )pWnd)->OnCircularSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCircularSelendokFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCircularSelendok();
}
/*static void _OnCircularSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCircularKillfocus();
}*/
/*static void _OnCircularKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCircularKillfocus();
}*/
static long _OnCircularLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCircularLoadData();
}
/*static void _OnCircularAddNewFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCircularAddNew();
}*/
static void _OnSearchTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListChangeLnSetupDialog* )pWnd)->OnSearchTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchTypeSelendokFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchTypeSelendok();
}
/*static void _OnSearchTypeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchTypeKillfocus();
}*/
/*static void _OnSearchTypeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchTypeKillfocus();
}*/
static long _OnSearchTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchTypeLoadData();
}
/*static void _OnSearchTypeAddNewFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchTypeAddNew();
}*/
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnCodeCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListChangeLnSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeListChangeLnSetupDialog* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnItemAddNew();
}*/
/*static void _OnNewServicePriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewServicePriceChange();
} */
/*static void _OnNewServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewServicePriceSetfocus();} */ 
/*static void _OnNewServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewServicePriceKillfocus();
} */
static int _OnNewServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewServicePriceCheckValue();
} 
/*static void _OnNewInsPriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewInsPriceChange();
} */
/*static void _OnNewInsPriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewInsPriceSetfocus();} */ 
/*static void _OnNewInsPriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewInsPriceKillfocus();
} */
static int _OnNewInsPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewInsPriceCheckValue();
} 
/*static void _OnNewPolPriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewPolPriceChange();
} */
/*static void _OnNewPolPriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewPolPriceSetfocus();} */ 
/*static void _OnNewPolPriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewPolPriceKillfocus();
} */
static int _OnNewPolPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnNewPolPriceCheckValue();
} 
/*static void _OnOldServPriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldServPriceChange();
} */
/*static void _OnOldServPriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldServPriceSetfocus();} */ 
/*static void _OnOldServPriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldServPriceKillfocus();
} */
static int _OnOldServPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldServPriceCheckValue();
} 
/*static void _OnOldInsPriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldInsPriceChange();
} */
/*static void _OnOldInsPriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldInsPriceSetfocus();} */ 
/*static void _OnOldInsPriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldInsPriceKillfocus();
} */
static int _OnOldInsPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldInsPriceCheckValue();
} 
/*static void _OnOldPolPriceChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldPolPriceChange();
} */
/*static void _OnOldPolPriceSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldPolPriceSetfocus();} */ 
/*static void _OnOldPolPriceKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldPolPriceKillfocus();
} */
static int _OnOldPolPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeLnSetupDialog *)pWnd)->OnOldPolPriceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeLnSetupDialog *pVw = (CHMSFeeListChangeLnSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeeListChangeLnSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnAddHMSFeeListChangeLnSetupDialog();
} 
static int _OnEditHMSFeeListChangeLnSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnEditHMSFeeListChangeLnSetupDialog();
} 
static int _OnDeleteHMSFeeListChangeLnSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnDeleteHMSFeeListChangeLnSetupDialog();
} 
static int _OnSaveHMSFeeListChangeLnSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnSaveHMSFeeListChangeLnSetupDialog();
} 
static int _OnCancelHMSFeeListChangeLnSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeLnSetupDialog*)pWnd)->OnCancelHMSFeeListChangeLnSetupDialog();
} 
CHMSFeeListChangeLnSetupDialog::CHMSFeeListChangeLnSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CHMSFeeListChangeLnSetupDialog::~CHMSFeeListChangeLnSetupDialog(){
}
void CHMSFeeListChangeLnSetupDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 960, 60);
	m_wndCircularLabel.Create(this, _T("Circular"), 10, 30, 90, 55);
	m_wndCircular.Create(this,95, 30, 175, 55); 
	m_wndSearchTypeLabel.Create(this, _T("Group"), 180, 30, 300, 55);
	m_wndSearchType.Create(this,305, 30, 575, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 580, 30, 700, 55);
	m_wndSearchName.Create(this,705, 30, 870, 55); 
	m_wndSearch.Create(this, _T("&Search"), 875, 30, 955, 55);
	m_wndList.Create(this,5, 65, 960, 490); 
	m_wndCodeLabel.Create(this, _T("Circular"), 5, 495, 125, 520);
	m_wndCode.Create(this,130, 495, 250, 520); 
	m_wndTypeLabel.Create(this, _T("Group"), 255, 495, 375, 520);
	m_wndType.Create(this,380, 495, 959, 520); 
	m_wndItemLabel.Create(this, _T("Item"), 5, 525, 125, 550);
	m_wndItem.Create(this,130, 525, 960, 550); 
	m_wndNewServPriceLabel.Create(this, _T("New Serv Price"), 5, 555, 125, 580);
	m_wndNewServicePrice.Create(this,130, 555, 250, 580); 
	m_wndNewInsPriceLabel.Create(this, _T("New Ins Price"), 255, 555, 375, 580);
	m_wndNewInsPrice.Create(this,380, 555, 500, 580); 
	m_wndNewPolPriceLabel.Create(this, _T("New PolPrice"), 505, 555, 625, 580);
	m_wndNewPolPrice.Create(this,630, 555, 750, 580); 
	m_wndOldServPriceLabel.Create(this, _T("Old Serv Price"), 5, 585, 125, 610);
	m_wndOldServPrice.Create(this,130, 585, 250, 610); 
	m_wndOldInsPriceLabel.Create(this, _T("Old Ins Price"), 255, 585, 375, 610);
	m_wndOldInsPrice.Create(this,380, 585, 500, 610); 
	m_wndOldPolPriceLabel.Create(this, _T("Old Pol Price"), 505, 585, 625, 610);
	m_wndOldPolPrice.Create(this,630, 585, 750, 610); 
	m_wndAdd.Create(this, _T("&Add"), 5, 615, 85, 640);
	m_wndEdit.Create(this, _T("&Edit"), 90, 615, 170, 640);
	m_wndDelete.Create(this, _T("&Delete"), 175, 615, 255, 640);
	m_wndSave.Create(this, _T("&Save"), 260, 615, 340, 640);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 615, 425, 640);
	m_wndImport.Create(this, _T("&Import"), 430, 615, 510, 640);
	m_wndExport.Create(this, _T("&Export"), 515, 615, 595, 640);
	m_wndPrint.Create(this, _T("&Print"), 600, 615, 680, 640);
	m_wndClose.Create(this, _T("&Close"), 880, 615, 960, 640);

}
void CHMSFeeListChangeLnSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCircular.SetCheckValue(true);
	m_wndCircular.LimitText(35);
	m_wndSearchType.SetCheckValue(true);
	m_wndSearchType.LimitText(35);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(15);
	m_wndNewServicePrice.SetLimitText(22);
	m_wndNewServicePrice.SetCheckValue(true);
	m_wndNewInsPrice.SetLimitText(22);
	m_wndNewInsPrice.SetCheckValue(true);
	m_wndNewPolPrice.SetLimitText(22);
	m_wndNewPolPrice.SetCheckValue(true);
	m_wndOldServPrice.SetLimitText(22);
	m_wndOldServPrice.SetCheckValue(true);
	m_wndOldInsPrice.SetLimitText(22);
	m_wndOldInsPrice.SetCheckValue(true);
	m_wndOldPolPrice.SetLimitText(22);
	m_wndOldPolPrice.SetCheckValue(true);


	m_wndCircular.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCircular.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSearchType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSearchType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Item Id"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Old Serv Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(5, _T("Old Ins Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(6, _T("New Serv Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(7, _T("New Ins Price"), CFMT_NUMBER, 90);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_feelist_changelnTbl.SetTableName(_T("hms_feelist_changeln"));
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_OID"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_CODE"), dfText, 15); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_ITEMID"), dfText, 15); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_TYPE"), dfText, 1); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_NAME"), dfText, 512); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_NEW_SERVPRICE"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_NEW_INSPRICE"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_NEW_POLPRICE"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_OLD_SERVPRICE"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_OLD_INSPRICE"), dfLong); 
	m_hms_feelist_changelnTbl.AddField(_T("HFCL_OLD_POLPRICE"), dfLong); 

}
void CHMSFeeListChangeLnSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCircular.SetEvent(WE_SELENDOK, _OnCircularSelendokFnc);
	//m_wndCircular.SetEvent(WE_SETFOCUS, _OnCircularSetfocusFnc);
	//m_wndCircular.SetEvent(WE_KILLFOCUS, _OnCircularKillfocusFnc);
	m_wndCircular.SetEvent(WE_SELCHANGE, _OnCircularSelectChangeFnc);
	m_wndCircular.SetEvent(WE_LOADDATA, _OnCircularLoadDataFnc);
	//m_wndCircular.SetEvent(WE_ADDNEW, _OnCircularAddNewFnc);
	m_wndSearchType.SetEvent(WE_SELENDOK, _OnSearchTypeSelendokFnc);
	//m_wndSearchType.SetEvent(WE_SETFOCUS, _OnSearchTypeSetfocusFnc);
	//m_wndSearchType.SetEvent(WE_KILLFOCUS, _OnSearchTypeKillfocusFnc);
	m_wndSearchType.SetEvent(WE_SELCHANGE, _OnSearchTypeSelectChangeFnc);
	m_wndSearchType.SetEvent(WE_LOADDATA, _OnSearchTypeLoadDataFnc);
	//m_wndSearchType.SetEvent(WE_ADDNEW, _OnSearchTypeAddNewFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	//m_wndNewServicePrice.SetEvent(WE_CHANGE, _OnNewServicePriceChangeFnc);
	//m_wndNewServicePrice.SetEvent(WE_SETFOCUS, _OnNewServicePriceSetfocusFnc);
	//m_wndNewServicePrice.SetEvent(WE_KILLFOCUS, _OnNewServicePriceKillfocusFnc);
	m_wndNewServicePrice.SetEvent(WE_CHECKVALUE, _OnNewServicePriceCheckValueFnc);
	//m_wndNewInsPrice.SetEvent(WE_CHANGE, _OnNewInsPriceChangeFnc);
	//m_wndNewInsPrice.SetEvent(WE_SETFOCUS, _OnNewInsPriceSetfocusFnc);
	//m_wndNewInsPrice.SetEvent(WE_KILLFOCUS, _OnNewInsPriceKillfocusFnc);
	m_wndNewInsPrice.SetEvent(WE_CHECKVALUE, _OnNewInsPriceCheckValueFnc);
	//m_wndNewPolPrice.SetEvent(WE_CHANGE, _OnNewPolPriceChangeFnc);
	//m_wndNewPolPrice.SetEvent(WE_SETFOCUS, _OnNewPolPriceSetfocusFnc);
	//m_wndNewPolPrice.SetEvent(WE_KILLFOCUS, _OnNewPolPriceKillfocusFnc);
	m_wndNewPolPrice.SetEvent(WE_CHECKVALUE, _OnNewPolPriceCheckValueFnc);
	//m_wndOldServPrice.SetEvent(WE_CHANGE, _OnOldServPriceChangeFnc);
	//m_wndOldServPrice.SetEvent(WE_SETFOCUS, _OnOldServPriceSetfocusFnc);
	//m_wndOldServPrice.SetEvent(WE_KILLFOCUS, _OnOldServPriceKillfocusFnc);
	m_wndOldServPrice.SetEvent(WE_CHECKVALUE, _OnOldServPriceCheckValueFnc);
	//m_wndOldInsPrice.SetEvent(WE_CHANGE, _OnOldInsPriceChangeFnc);
	//m_wndOldInsPrice.SetEvent(WE_SETFOCUS, _OnOldInsPriceSetfocusFnc);
	//m_wndOldInsPrice.SetEvent(WE_KILLFOCUS, _OnOldInsPriceKillfocusFnc);
	m_wndOldInsPrice.SetEvent(WE_CHECKVALUE, _OnOldInsPriceCheckValueFnc);
	//m_wndOldPolPrice.SetEvent(WE_CHANGE, _OnOldPolPriceChangeFnc);
	//m_wndOldPolPrice.SetEvent(WE_SETFOCUS, _OnOldPolPriceSetfocusFnc);
	//m_wndOldPolPrice.SetEvent(WE_KILLFOCUS, _OnOldPolPriceKillfocusFnc);
	m_wndOldPolPrice.SetEvent(WE_CHECKVALUE, _OnOldPolPriceCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFeeListChangeLnSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCircular.GetDlgCtrlID(), m_szCircularKey);
	DDX_TextEx(pDX, m_wndSearchType.GetDlgCtrlID(), m_szSearchTypeKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Text(pDX, m_wndNewServicePrice.GetDlgCtrlID(), m_nNewServicePrice);
	DDX_Text(pDX, m_wndNewInsPrice.GetDlgCtrlID(), m_nNewInsPrice);
	DDX_Text(pDX, m_wndNewPolPrice.GetDlgCtrlID(), m_nNewPolPrice);
	DDX_Text(pDX, m_wndOldServPrice.GetDlgCtrlID(), m_nOldServPrice);
	DDX_Text(pDX, m_wndOldInsPrice.GetDlgCtrlID(), m_nOldInsPrice);
	DDX_Text(pDX, m_wndOldPolPrice.GetDlgCtrlID(), m_nOldPolPrice);

}
void CHMSFeeListChangeLnSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Circular")] =  m_szCircularKey;
	m_jData[_T("SearchType")] =  m_szSearchTypeKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("NewServicePrice")] =  m_nNewServicePrice;
	m_jData[_T("NewInsPrice")] =  m_nNewInsPrice;
	m_jData[_T("NewPolPrice")] =  m_nNewPolPrice;
	m_jData[_T("OldServPrice")] =  m_nOldServPrice;
	m_jData[_T("OldInsPrice")] =  m_nOldInsPrice;
	m_jData[_T("OldPolPrice")] =  m_nOldPolPrice;
	}
	else
	{
			
	m_jData[_T("Circular")].GetValue(m_szCircularKey);
	m_jData[_T("SearchType")].GetValue(m_szSearchTypeKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("NewServicePrice")].GetValue(m_nNewServicePrice);
	m_jData[_T("NewInsPrice")].GetValue(m_nNewInsPrice);
	m_jData[_T("NewPolPrice")].GetValue(m_nNewPolPrice);
	m_jData[_T("OldServPrice")].GetValue(m_nOldServPrice);
	m_jData[_T("OldInsPrice")].GetValue(m_nOldInsPrice);
	m_jData[_T("OldPolPrice")].GetValue(m_nOldPolPrice);
	}

}
void CHMSFeeListChangeLnSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HFCL_CODE"), m_szCode);
	rs.GetValue(_T("HFCL_ITEMID"), m_szItemKey);
	rs.GetValue(_T("HFCL_TYPE"), m_szTypeKey);
	rs.GetValue(_T("HFCL_NEW_SERVPRICE"), m_nNewServicePrice);
	rs.GetValue(_T("HFCL_NEW_INSPRICE"), m_nNewInsPrice);
	rs.GetValue(_T("HFCL_NEW_POLPRICE"), m_nNewPolPrice);
	rs.GetValue(_T("HFCL_OLD_SERVPRICE"), m_nOldServPrice);
	rs.GetValue(_T("HFCL_OLD_INSPRICE"), m_nOldInsPrice);
	rs.GetValue(_T("HFCL_OLD_POLPRICE"), m_nOldPolPrice);

}
void CHMSFeeListChangeLnSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_CODE"), m_szCode);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_ITEMID"), m_szItemKey);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_TYPE"), m_szTypeKey);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_NEW_SERVPRICE"), m_nNewServicePrice);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_NEW_INSPRICE"), m_nNewInsPrice);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_NEW_POLPRICE"), m_nNewPolPrice);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_OLD_SERVPRICE"), m_nOldServPrice);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_OLD_INSPRICE"), m_nOldInsPrice);
	m_hms_feelist_changelnTbl.SetValue(_T("HFCL_OLD_POLPRICE"), m_nOldPolPrice);

}
void CHMSFeeListChangeLnSetupDialog::SetDefaultValues(){

	m_szCircularKey.Empty();
	m_szSearchTypeKey.Empty();
	m_szSearchName.Empty();
	m_szCode.Empty();
	m_szTypeKey.Empty();
	m_szItemKey.Empty();
	m_nNewServicePrice=0;
	m_nNewInsPrice=0;
	m_nNewPolPrice=0;
	m_nOldServPrice=0;
	m_nOldInsPrice=0;
	m_nOldPolPrice=0;

}
int CHMSFeeListChangeLnSetupDialog::SetMode(int nMode){
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
void CHMSFeeListChangeLnSetupDialog::OnCircularSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnCircularSelendok(){
	 
}
/*void CHMSFeeListChangeLnSetupDialog::OnCircularSetfocus(){
	
}*/
/*void CHMSFeeListChangeLnSetupDialog::OnCircularKillfocus(){
	
}*/
long CHMSFeeListChangeLnSetupDialog::OnCircularLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCircular.IsSearchKey() && !m_szCircularKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCircularKey
};
	m_wndCircular.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCircular.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeLnSetupDialog::OnCircularAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeeListChangeLnSetupDialog::OnSearchTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnSearchTypeSelendok(){
	 
}
/*void CHMSFeeListChangeLnSetupDialog::OnSearchTypeSetfocus(){
	
}*/
/*void CHMSFeeListChangeLnSetupDialog::OnSearchTypeKillfocus(){
	
}*/
long CHMSFeeListChangeLnSetupDialog::OnSearchTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchType.IsSearchKey() && !m_szSearchTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSearchTypeKey
};
	m_wndSearchType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeLnSetupDialog::OnSearchTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnSearchNameChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnSearchNameSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnSearchNameKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSFeeListChangeLnSetupDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnListDblClick(){
	
} 
void CHMSFeeListChangeLnSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListChangeLnSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeListChangeLnSetupDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("ItemId")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("OldServPrice")), 
			rs.GetValue(_T("OldInsPrice")), 
			rs.GetValue(_T("NewServPrice")), 
			rs.GetValue(_T("NewInsPrice")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeLnSetupDialog::OnCodeChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnCodeSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnCodeKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnCodeCheckValue(){
	return 0;
} 
void CHMSFeeListChangeLnSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSFeeListChangeLnSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSFeeListChangeLnSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSFeeListChangeLnSetupDialog::OnTypeLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeLnSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeeListChangeLnSetupDialog::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnItemSelendok(){
	 
}
/*void CHMSFeeListChangeLnSetupDialog::OnItemSetfocus(){
	
}*/
/*void CHMSFeeListChangeLnSetupDialog::OnItemKillfocus(){
	
}*/
long CHMSFeeListChangeLnSetupDialog::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeLnSetupDialog::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewServicePriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewServicePriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewServicePriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnNewServicePriceCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeLnSetupDialog::OnNewInsPriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewInsPriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewInsPriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnNewInsPriceCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeLnSetupDialog::OnNewPolPriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewPolPriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnNewPolPriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnNewPolPriceCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeLnSetupDialog::OnOldServPriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldServPriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldServPriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnOldServPriceCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeLnSetupDialog::OnOldInsPriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldInsPriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldInsPriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnOldInsPriceCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeLnSetupDialog::OnOldPolPriceChange(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldPolPriceSetfocus(){
	
} */
/*void CHMSFeeListChangeLnSetupDialog::OnOldPolPriceKillfocus(){
	
} */
int CHMSFeeListChangeLnSetupDialog::OnOldPolPriceCheckValue(){
	return 0;
} 
void CHMSFeeListChangeLnSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeLnSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListChangeLnSetupDialog::OnAddHMSFeeListChangeLnSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeListChangeLnSetupDialog::OnEditHMSFeeListChangeLnSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeListChangeLnSetupDialog::OnDeleteHMSFeeListChangeLnSetupDialog(){
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
 		OnCancelHMSFeeListChangeLnSetupDialog();
 	}
	return 0;
}
int CHMSFeeListChangeLnSetupDialog::OnSaveHMSFeeListChangeLnSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_feelist_changelnTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_feelist_changelnTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSFeeListChangeLnSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeListChangeLnSetupDialog::OnCancelHMSFeeListChangeLnSetupDialog(){
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
int CHMSFeeListChangeLnSetupDialog::OnHMSFeeListChangeLnSetupDialogListLoadData(){
	return 0;
}
