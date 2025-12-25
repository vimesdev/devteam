#include "HMSInfertilityInfo.h"
#include "MainFrm.h"
#include "HMSInfertilityDlg.h"
/*static void _OnWifeNameChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeNameChange();
} */
/*static void _OnWifeNameSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeNameSetfocus();} */ 
/*static void _OnWifeNameKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeNameKillfocus();
} */
static int _OnWifeNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnWifeNameCheckValue();
} 
/*static void _OnWifeDOBChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeDOBChange();
} */
/*static void _OnWifeDOBSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeDOBSetfocus();} */ 
/*static void _OnWifeDOBKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeDOBKillfocus();
} */
static int _OnWifeDOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnWifeDOBCheckValue();
} 
/*static void _OnWDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWDocumentNoChange();
} */
/*static void _OnWDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWDocumentNoSetfocus();} */ 
/*static void _OnWDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWDocumentNoKillfocus();
} */
static int _OnWDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnWDocumentNoCheckValue();
} 
static void _OnWFindSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnWFindSelect();
} 
static void _OnWifeJobSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInfertilityInfo* )pWnd)->OnWifeJobSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWifeJobSelendokFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeJobSelendok();
}
/*static void _OnWifeJobSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeJobKillfocus();
}*/
/*static void _OnWifeJobKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeJobKillfocus();
}*/
static long _OnWifeJobLoadDataFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnWifeJobLoadData();
}
/*static void _OnWifeJobAddNewFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifeJobAddNew();
}*/
static void _OnWifePlaceOfOriginSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInfertilityInfo* )pWnd)->OnWifePlaceOfOriginSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWifePlaceOfOriginSelendokFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifePlaceOfOriginSelendok();
}
/*static void _OnWifePlaceOfOriginSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifePlaceOfOriginKillfocus();
}*/
/*static void _OnWifePlaceOfOriginKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifePlaceOfOriginKillfocus();
}*/
static long _OnWifePlaceOfOriginLoadDataFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnWifePlaceOfOriginLoadData();
}
/*static void _OnWifePlaceOfOriginAddNewFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnWifePlaceOfOriginAddNew();
}*/
/*static void _OnHusNameChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusNameChange();
} */
/*static void _OnHusNameSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusNameSetfocus();} */ 
/*static void _OnHusNameKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusNameKillfocus();
} */
static int _OnHusNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnHusNameCheckValue();
} 
/*static void _OnHusDOBChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusDOBChange();
} */
/*static void _OnHusDOBSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusDOBSetfocus();} */ 
/*static void _OnHusDOBKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusDOBKillfocus();
} */
static int _OnHusDOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnHusDOBCheckValue();
} 
/*static void _OnHDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHDocumentNoChange();
} */
/*static void _OnHDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHDocumentNoSetfocus();} */ 
/*static void _OnHDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHDocumentNoKillfocus();
} */
static int _OnHDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnHDocumentNoCheckValue();
} 
static void _OnHFindSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnHFindSelect();
} 
static void _OnHusJobSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInfertilityInfo* )pWnd)->OnHusJobSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHusJobSelendokFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusJobSelendok();
}
/*static void _OnHusJobSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusJobKillfocus();
}*/
/*static void _OnHusJobKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusJobKillfocus();
}*/
static long _OnHusJobLoadDataFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnHusJobLoadData();
}
/*static void _OnHusJobAddNewFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusJobAddNew();
}*/
static void _OnHusPlaceOfOriginSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInfertilityInfo* )pWnd)->OnHusPlaceOfOriginSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHusPlaceOfOriginSelendokFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusPlaceOfOriginSelendok();
}
/*static void _OnHusPlaceOfOriginSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusPlaceOfOriginKillfocus();
}*/
/*static void _OnHusPlaceOfOriginKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusPlaceOfOriginKillfocus();
}*/
static long _OnHusPlaceOfOriginLoadDataFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnHusPlaceOfOriginLoadData();
}
/*static void _OnHusPlaceOfOriginAddNewFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnHusPlaceOfOriginAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnMarriedYearChangeFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnMarriedYearChange();
} */
/*static void _OnMarriedYearSetfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnMarriedYearSetfocus();} */ 
/*static void _OnMarriedYearKillfocusFnc(CWnd *pWnd){
	((CHMSInfertilityInfo *)pWnd)->OnMarriedYearKillfocus();
} */
static int _OnMarriedYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSInfertilityInfo *)pWnd)->OnMarriedYearCheckValue();
} 
static void _OnArmyObjectSelectFnc(CWnd *pWnd){
	 ((CHMSInfertilityInfo*)pWnd)->OnArmyObjectSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInfertilityInfo *pVw = (CHMSInfertilityInfo *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInfertilityInfoFnc(CWnd *pWnd){
	 return ((CHMSInfertilityInfo*)pWnd)->OnAddHMSInfertilityInfo();
} 
static int _OnEditHMSInfertilityInfoFnc(CWnd *pWnd){
	 return ((CHMSInfertilityInfo*)pWnd)->OnEditHMSInfertilityInfo();
} 
static int _OnDeleteHMSInfertilityInfoFnc(CWnd *pWnd){
	 return ((CHMSInfertilityInfo*)pWnd)->OnDeleteHMSInfertilityInfo();
} 
static int _OnSaveHMSInfertilityInfoFnc(CWnd *pWnd){
	 return ((CHMSInfertilityInfo*)pWnd)->OnSaveHMSInfertilityInfo();
} 
static int _OnCancelHMSInfertilityInfoFnc(CWnd *pWnd){
	 return ((CHMSInfertilityInfo*)pWnd)->OnCancelHMSInfertilityInfo();
} 
CHMSInfertilityInfo::CHMSInfertilityInfo(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSInfertilityInfo::~CHMSInfertilityInfo(){
}
void CHMSInfertilityInfo::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 6, 795, 301);
	m_wndWifeNameLabel.Create(this, _T("H\x1ECD t\xEAn v\x1EE3"), 10, 30, 130, 55);
	m_wndWifeName.Create(this,135, 30, 415, 55); 
	m_wndWifeDOBLabel.Create(this, _T("N\x103m sinh"), 420, 30, 500, 55);
	m_wndWifeDOB.Create(this,505, 30, 565, 55); 
	m_wndWifeDocumentNoLabel.Create(this, _T("Document No"), 570, 30, 650, 55);
	m_wndWDocumentNo.Create(this,655, 30, 755, 55); 
	m_wndWFind.Create(this, _T("@"), 760, 30, 790, 55);
	m_wndWifeJobLabel.Create(this, _T("Ngh\x1EC1 nghi\x1EC7p"), 10, 60, 130, 85);
	m_wndWifeJob.Create(this,135, 60, 790, 85); 
	m_wndWifePlaceOfOriginLabel.Create(this, _T("Place Of Origin"), 10, 90, 130, 115);
	m_wndWifePlaceOfOrigin.Create(this,135, 90, 790, 115); 
	m_wndHusNameLabel.Create(this, _T("H\x1ECD t\xEAn \x63h\x1ED3ng"), 10, 120, 130, 145);
	m_wndHusName.Create(this,135, 120, 415, 145); 
	m_wndHusDOBLabel.Create(this, _T("N\x103m sinh"), 420, 120, 500, 145);
	m_wndHusDOB.Create(this,505, 120, 565, 145); 
	m_wndHDocumentNoLabel.Create(this, _T("Document No"), 570, 120, 650, 145);
	m_wndHDocumentNo.Create(this,655, 120, 755, 145); 
	m_wndHFind.Create(this, _T("@"), 760, 120, 790, 145);
	m_wndHusJobLabel.Create(this, _T("Ngh\x1EC1 nghi\x1EC7p"), 10, 150, 130, 175);
	m_wndHusJob.Create(this,135, 150, 790, 175); 
	m_wndHusPlaceOfOriginLabel.Create(this, _T("Place Of Origin"), 10, 180, 130, 205);
	m_wndHusPlaceOfOrigin.Create(this,135, 180, 790, 205); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 210, 130, 235);
	m_wndAddress.Create(this,135, 210, 790, 235); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 240, 130, 265);
	m_wndPhone.Create(this,135, 240, 790, 265); 
	m_wndMarriedYearLabel.Create(this, _T("N\x103m k\x1EBFt h\xF4n"), 10, 270, 130, 295);
	m_wndMarriedYear.Create(this,135, 270, 790, 295); 
	m_wndArmyObject.Create(this, _T("\x110\x1ED1i t\x1B0\x1EE3ng qu\xE2n"), 135, 305, 285, 330);
	/*m_wndAdd.Create(this, _T("Add"), 290, 305, 370, 330);
	m_wndEdit.Create(this, _T("Edit"), 375, 305, 455, 330);
	m_wndDelete.Create(this, _T("Delete"), 460, 305, 540, 330);
	m_wndSave.Create(this, _T("Save"), 545, 305, 625, 330);
	m_wndCancel.Create(this, _T("Cancel"), 630, 305, 710, 330);
	m_wndClose.Create(this, _T("Close"), 713, 305, 793, 330);*/

}
void CHMSInfertilityInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWifeName.SetLimitText(35);
	m_wndWifeName.SetCheckValue(true);
	m_wndWifeDOB.SetLimitText(35);
	m_wndWifeDOB.SetCheckValue(true);
	m_wndWifeJob.SetCheckValue(true);
	m_wndWifePlaceOfOrigin.SetCheckValue(true);
	m_wndWifePlaceOfOrigin.LimitText(35);
	m_wndHusName.SetLimitText(35);
	m_wndHusName.SetCheckValue(true);
	m_wndHusDOB.SetLimitText(35);
	m_wndHusDOB.SetCheckValue(true);
	m_wndHusJob.SetCheckValue(false);
	m_wndHusPlaceOfOrigin.SetCheckValue(false);
	m_wndHusPlaceOfOrigin.LimitText(254);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(false);
	m_wndPhone.SetLimitText(35);
	m_wndPhone.SetCheckValue(false);
	m_wndMarriedYear.SetLimitText(16);
	m_wndMarriedYear.SetCheckValue(false);

	m_wndWifePlaceOfOrigin.InsertColumn(0, _T("srch"), CFMT_TEXT, 100);
	m_wndWifePlaceOfOrigin.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndWifePlaceOfOrigin.InsertColumn(2, _T("ID"), CFMT_TEXT, 100);
	m_wndWifePlaceOfOrigin.SetColumnKey(2);

	m_wndHusPlaceOfOrigin.InsertColumn(0, _T("srch"), CFMT_TEXT, 100);
	m_wndHusPlaceOfOrigin.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndHusPlaceOfOrigin.InsertColumn(2, _T("ID"), CFMT_TEXT, 100);
	m_wndHusPlaceOfOrigin.SetColumnKey(2);

	m_wndWifeJob.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndWifeJob.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndHusJob.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndHusJob.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

}
void CHMSInfertilityInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndWifeName.SetEvent(WE_CHANGE, _OnWifeNameChangeFnc);
	//m_wndWifeName.SetEvent(WE_SETFOCUS, _OnWifeNameSetfocusFnc);
	//m_wndWifeName.SetEvent(WE_KILLFOCUS, _OnWifeNameKillfocusFnc);
	m_wndWifeName.SetEvent(WE_CHECKVALUE, _OnWifeNameCheckValueFnc);
	//m_wndWifeDOB.SetEvent(WE_CHANGE, _OnWifeDOBChangeFnc);
	//m_wndWifeDOB.SetEvent(WE_SETFOCUS, _OnWifeDOBSetfocusFnc);
	//m_wndWifeDOB.SetEvent(WE_KILLFOCUS, _OnWifeDOBKillfocusFnc);
	m_wndWifeDOB.SetEvent(WE_CHECKVALUE, _OnWifeDOBCheckValueFnc);
	//m_wndWDocumentNo.SetEvent(WE_CHANGE, _OnWDocumentNoChangeFnc);
	//m_wndWDocumentNo.SetEvent(WE_SETFOCUS, _OnWDocumentNoSetfocusFnc);
	//m_wndWDocumentNo.SetEvent(WE_KILLFOCUS, _OnWDocumentNoKillfocusFnc);
	m_wndWDocumentNo.SetEvent(WE_CHECKVALUE, _OnWDocumentNoCheckValueFnc);
	m_wndWFind.SetEvent(WE_CLICK, _OnWFindSelectFnc);
	m_wndWifeJob.SetEvent(WE_SELENDOK, _OnWifeJobSelendokFnc);
	//m_wndWifeJob.SetEvent(WE_SETFOCUS, _OnWifeJobSetfocusFnc);
	//m_wndWifeJob.SetEvent(WE_KILLFOCUS, _OnWifeJobKillfocusFnc);
	m_wndWifeJob.SetEvent(WE_SELCHANGE, _OnWifeJobSelectChangeFnc);
	m_wndWifeJob.SetEvent(WE_LOADDATA, _OnWifeJobLoadDataFnc);
	//m_wndWifeJob.SetEvent(WE_ADDNEW, _OnWifeJobAddNewFnc);
	m_wndWifePlaceOfOrigin.SetEvent(WE_SELENDOK, _OnWifePlaceOfOriginSelendokFnc);
	//m_wndWifePlaceOfOrigin.SetEvent(WE_SETFOCUS, _OnWifePlaceOfOriginSetfocusFnc);
	//m_wndWifePlaceOfOrigin.SetEvent(WE_KILLFOCUS, _OnWifePlaceOfOriginKillfocusFnc);
	m_wndWifePlaceOfOrigin.SetEvent(WE_SELCHANGE, _OnWifePlaceOfOriginSelectChangeFnc);
	m_wndWifePlaceOfOrigin.SetEvent(WE_LOADDATA, _OnWifePlaceOfOriginLoadDataFnc);
	//m_wndWifePlaceOfOrigin.SetEvent(WE_ADDNEW, _OnWifePlaceOfOriginAddNewFnc);
	//m_wndHusName.SetEvent(WE_CHANGE, _OnHusNameChangeFnc);
	//m_wndHusName.SetEvent(WE_SETFOCUS, _OnHusNameSetfocusFnc);
	//m_wndHusName.SetEvent(WE_KILLFOCUS, _OnHusNameKillfocusFnc);
	m_wndHusName.SetEvent(WE_CHECKVALUE, _OnHusNameCheckValueFnc);
	//m_wndHusDOB.SetEvent(WE_CHANGE, _OnHusDOBChangeFnc);
	//m_wndHusDOB.SetEvent(WE_SETFOCUS, _OnHusDOBSetfocusFnc);
	//m_wndHusDOB.SetEvent(WE_KILLFOCUS, _OnHusDOBKillfocusFnc);
	m_wndHusDOB.SetEvent(WE_CHECKVALUE, _OnHusDOBCheckValueFnc);
	//m_wndHDocumentNo.SetEvent(WE_CHANGE, _OnHDocumentNoChangeFnc);
	//m_wndHDocumentNo.SetEvent(WE_SETFOCUS, _OnHDocumentNoSetfocusFnc);
	//m_wndHDocumentNo.SetEvent(WE_KILLFOCUS, _OnHDocumentNoKillfocusFnc);
	m_wndHDocumentNo.SetEvent(WE_CHECKVALUE, _OnHDocumentNoCheckValueFnc);
	m_wndHFind.SetEvent(WE_CLICK, _OnHFindSelectFnc);
	m_wndHusJob.SetEvent(WE_SELENDOK, _OnHusJobSelendokFnc);
	//m_wndHusJob.SetEvent(WE_SETFOCUS, _OnHusJobSetfocusFnc);
	//m_wndHusJob.SetEvent(WE_KILLFOCUS, _OnHusJobKillfocusFnc);
	m_wndHusJob.SetEvent(WE_SELCHANGE, _OnHusJobSelectChangeFnc);
	m_wndHusJob.SetEvent(WE_LOADDATA, _OnHusJobLoadDataFnc);
	//m_wndHusJob.SetEvent(WE_ADDNEW, _OnHusJobAddNewFnc);
	m_wndHusPlaceOfOrigin.SetEvent(WE_SELENDOK, _OnHusPlaceOfOriginSelendokFnc);
	//m_wndHusPlaceOfOrigin.SetEvent(WE_SETFOCUS, _OnHusPlaceOfOriginSetfocusFnc);
	//m_wndHusPlaceOfOrigin.SetEvent(WE_KILLFOCUS, _OnHusPlaceOfOriginKillfocusFnc);
	m_wndHusPlaceOfOrigin.SetEvent(WE_SELCHANGE, _OnHusPlaceOfOriginSelectChangeFnc);
	m_wndHusPlaceOfOrigin.SetEvent(WE_LOADDATA, _OnHusPlaceOfOriginLoadDataFnc);
	//m_wndHusPlaceOfOrigin.SetEvent(WE_ADDNEW, _OnHusPlaceOfOriginAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndMarriedYear.SetEvent(WE_CHANGE, _OnMarriedYearChangeFnc);
	//m_wndMarriedYear.SetEvent(WE_SETFOCUS, _OnMarriedYearSetfocusFnc);
	//m_wndMarriedYear.SetEvent(WE_KILLFOCUS, _OnMarriedYearKillfocusFnc);
	m_wndMarriedYear.SetEvent(WE_CHECKVALUE, _OnMarriedYearCheckValueFnc);
	m_wndArmyObject.SetEvent(WE_CLICK, _OnArmyObjectSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSInfertilityInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSInfertilityInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSInfertilityInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSInfertilityInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSInfertilityInfoFnc, 0, 'T', VK_CONTROL);
	
	OnGetGenderDOB();
	GetDataToScreen();
	
}
void CHMSInfertilityInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndWifeName.GetDlgCtrlID(), m_szWifeName);
	DDX_Text(pDX, m_wndWifeDOB.GetDlgCtrlID(), m_nWifeDOB);
	DDX_Text(pDX, m_wndWDocumentNo.GetDlgCtrlID(), m_nWDocumentNo);
	DDX_TextEx(pDX, m_wndWifeJob.GetDlgCtrlID(), m_szWifeJobKey);
	DDX_TextEx(pDX, m_wndWifePlaceOfOrigin.GetDlgCtrlID(), m_szWifePlaceOfOriginKey);
	DDX_Text(pDX, m_wndHusName.GetDlgCtrlID(), m_szHusName);
	DDX_Text(pDX, m_wndHusDOB.GetDlgCtrlID(), m_nHusDOB);
	DDX_Text(pDX, m_wndHDocumentNo.GetDlgCtrlID(), m_nHDocumentNo);
	DDX_TextEx(pDX, m_wndHusJob.GetDlgCtrlID(), m_szHusJobKey);
	DDX_TextEx(pDX, m_wndHusPlaceOfOrigin.GetDlgCtrlID(), m_szHusPlaceOfOriginKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndMarriedYear.GetDlgCtrlID(), m_nMarriedYear);
	DDX_Check(pDX, m_wndArmyObject.GetDlgCtrlID(), m_bArmyObject);

}
void CHMSInfertilityInfo::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("WifeName")] =  m_szWifeName;
	m_jData[_T("WifeDOB")] =  m_nWifeDOB;
	m_jData[_T("WifeJob")] =  m_szWifeJobKey;
	m_jData[_T("WifePlaceOfOrigin")] =  m_szWifePlaceOfOriginKey;
	m_jData[_T("HusName")] =  m_szHusName;
	m_jData[_T("HusDOB")] =  m_nHusDOB;
	m_jData[_T("HusJob")] =  m_szHusJobKey;
	m_jData[_T("HusPlaceOfOrigin")] =  m_szHusPlaceOfOriginKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("MarriedYear")] =  m_nMarriedYear;
	m_jData[_T("ArmyObject")] =  m_bArmyObject;
	}
	else
	{
			
	m_jData[_T("WifeName")].GetValue(m_szWifeName);
	m_jData[_T("WifeDOB")].GetValue(m_nWifeDOB);
	m_jData[_T("WifeJob")].GetValue(m_szWifeJobKey);
	m_jData[_T("WifePlaceOfOrigin")].GetValue(m_szWifePlaceOfOriginKey);
	m_jData[_T("HusName")].GetValue(m_szHusName);
	m_jData[_T("HusDOB")].GetValue(m_nHusDOB);
	m_jData[_T("HusJob")].GetValue(m_szHusJobKey);
	m_jData[_T("HusPlaceOfOrigin")].GetValue(m_szHusPlaceOfOriginKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("MarriedYear")].GetValue(m_nMarriedYear);
	m_jData[_T("ArmyObject")].GetValue(m_bArmyObject);
	}

}
void CHMSInfertilityInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szData, tmpStr;
	if(pMF->m_bSwitch)
		szSQL.Format(_T("SELECT hdi_docinfo, hdi_docno, hdi_refdoc FROM hms_doc_infertility WHERE hdi_docno = %ld "), m_nDocumentNo);
	else
		szSQL.Format(_T("SELECT hdi_docinfo, hdi_docno, hdi_refdoc FROM hms_doc_infertility WHERE hdi_refdoc = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	_debug(_T("%s"), szSQL);

	if(!rs.IsEOF())
	{
		if(m_szGender == _T("M"))
		{
			rs.GetValue(_T("hdi_docno"), m_nHDocumentNo);
			rs.GetValue(_T("hdi_refdoc"), m_nWDocumentNo);
		}else
		{
			rs.GetValue(_T("hdi_docno"), m_nWDocumentNo);
			rs.GetValue(_T("hdi_refdoc"), m_nHDocumentNo);
		}
		rs.GetValue(_T("hdi_docinfo"), tmpStr);
		szData.AppendFormat(_T("%s"), tmpStr);
		m_jData.Parse(szData);
		UpdateJson(FALSE);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}else
	{
		SetDefaultValues();
		SetMode(VM_ADD);
	}
	

}
void CHMSInfertilityInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMSInfertilityInfo::SetDefaultValues(){

	m_szWifeName.Empty();
	m_nWifeDOB=0;
	m_szWifeJob.Empty();
	m_szWifeJobKey.Empty();
	m_szWifePlaceOfOriginKey.Empty();
	m_szHusName.Empty();
	m_nHusDOB=0;
	m_szHusJob.Empty();
	m_szHusJobKey.Empty();
	m_szHusPlaceOfOriginKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_nMarriedYear=0;
	m_nHDocumentNo=0;
	m_nWDocumentNo=0;
	m_bArmyObject=FALSE;

}
int CHMSInfertilityInfo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();

			if(m_szGender == _T("M"))
			{
				m_nHDocumentNo = m_nDocumentNo;
				m_szHusName = m_szRefName;
				m_szHusJobKey = m_szRefJob;
				m_nHusDOB = m_nYob;
				m_szAddress = m_szdtlAddress;
				m_szPhone = m_szTelephone;
				m_wndHusName.EnableWindow(FALSE);
				//m_wndHusJob.EnableWindow(FALSE);
				m_wndHusDOB.EnableWindow(FALSE);
				m_wndHDocumentNo.EnableWindow(FALSE);

			}else
			{
				m_nWDocumentNo = m_nDocumentNo;
				m_szWifeName = m_szRefName;
				m_szWifeJobKey = m_szRefJob;
				m_nWifeDOB = m_nYob;
				m_wndWifeName.EnableWindow(FALSE);
				//m_wndWifeJob.EnableWindow(FALSE);
				m_wndWifeDOB.EnableWindow(FALSE);
				m_wndWDocumentNo.EnableWindow(FALSE);
			}
			
			if(m_nHDocumentNo > 0)
				m_wndHFind.EnableWindow(FALSE);
			else
				m_wndHFind.EnableWindow(TRUE);

			if(m_nWDocumentNo > 0)
				m_wndWFind.EnableWindow(FALSE);
			else
				m_wndWFind.EnableWindow(TRUE);

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			if(m_nHDocumentNo > 0)
			{
				m_wndHDocumentNo.EnableWindow(FALSE);
				m_wndHFind.EnableWindow(FALSE);
			}
			if(m_nWDocumentNo > 0)
			{
				m_wndWDocumentNo.EnableWindow(FALSE);
				m_wndWFind.EnableWindow(FALSE);
			}
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 0, -1);
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
/*void CHMSInfertilityInfo::OnWifeNameChange(){
	
} */
/*void CHMSInfertilityInfo::OnWifeNameSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnWifeNameKillfocus(){
	
} */
int CHMSInfertilityInfo::OnWifeNameCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnWifeDOBChange(){
	
} */
/*void CHMSInfertilityInfo::OnWifeDOBSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnWifeDOBKillfocus(){
	
} */
int CHMSInfertilityInfo::OnWifeDOBCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnWDocumentNoChange(){
	
} */
/*void CHMSInfertilityInfo::OnWDocumentNoSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnWDocumentNoKillfocus(){
	
} */
int CHMSInfertilityInfo::OnWDocumentNoCheckValue(){
	return 0;
} 
void CHMSInfertilityInfo::OnWFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szsQL;
	CRecord rs(&pMF->m_db);
	if(m_nWDocumentNo < 0)
		return;
	szsQL.Format(_T("SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hp_occupation as nghenghiep, hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" extract(year from hp_birthdate) as yob,hd_telephone,hp_dtladdr ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" WHERE hd_docno = %ld"), m_nWDocumentNo);
	_debug(_T("%s"), szsQL);
	rs.ExecSQL(szsQL);

	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("birthdate"), m_szBirthdate);
		rs.GetValue(_T("address"), m_szWifePlaceOfOriginKey);
		rs.GetValue(_T("pname"), m_szWifeName);
		rs.GetValue(_T("nghenghiep"), m_szWifeJobKey);
		rs.GetValue(_T("yob"), m_nWifeDOB);
		UpdateData(FALSE);
	}
} 
void CHMSInfertilityInfo::OnWifeJobSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInfertilityInfo::OnWifeJobSelendok(){
	 
}
/*void CHMSInfertilityInfo::OnWifeJobSetfocus(){
	
}*/
/*void CHMSInfertilityInfo::OnWifeJobKillfocus(){
	
}*/
long CHMSInfertilityInfo::OnWifeJobLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWifeJob.IsSearchKey() && !m_szWifeJobKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szWifeJobKey);
	}
	m_wndWifeJob.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'sys_occupation' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWifeJob.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSInfertilityInfo::OnWifeJobAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInfertilityInfo::OnWifePlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInfertilityInfo::OnWifePlaceOfOriginSelendok(){
	 
}
/*void CHMSInfertilityInfo::OnWifePlaceOfOriginSetfocus(){
	
}*/
/*void CHMSInfertilityInfo::OnWifePlaceOfOriginKillfocus(){
	
}*/
long CHMSInfertilityInfo::OnWifePlaceOfOriginLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_wndWifePlaceOfOrigin.DeleteAllItems();
	if(!m_szWifePlaceOfOriginKey.IsEmpty() && m_wndWifePlaceOfOrigin.IsSearchKey())
	{
		szWhere.Format(_T(" WHERE sv_id=%ld "), ToLong(m_szWifePlaceOfOriginKey));
	}
	szSQL.Format(_T("select sv_id as id, sv_name||' - '||sd_name||' - '||sp_name as name,") \
					 _T(" sv_wrd||sd_wrd||sp_wrd as srch") \
					 _T(" from sys_vill left join sys_dist on(sv_distid=sd_id)") \
					 _T(" left join sys_prov on(sv_provid=sp_id)") \
					 _T(" %s order by 1, 2, 3 "), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWifePlaceOfOrigin.AddItems(
			rs.GetValue(_T("srch")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("id")), NULL);
			rs.MoveNext();
		}
	return nCount;
}
/*void CHMSInfertilityInfo::OnWifePlaceOfOriginAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInfertilityInfo::OnHusNameChange(){
	
} */
/*void CHMSInfertilityInfo::OnHusNameSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnHusNameKillfocus(){
	
} */
int CHMSInfertilityInfo::OnHusNameCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnHusDOBChange(){
	
} */
/*void CHMSInfertilityInfo::OnHusDOBSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnHusDOBKillfocus(){
	
} */
int CHMSInfertilityInfo::OnHusDOBCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnHDocumentNoChange(){
	
} */
/*void CHMSInfertilityInfo::OnHDocumentNoSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnHDocumentNoKillfocus(){
	
} */
int CHMSInfertilityInfo::OnHDocumentNoCheckValue(){
	return 0;
} 
void CHMSInfertilityInfo::OnHFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szsQL;
	CRecord rs(&pMF->m_db);
	if(m_nHDocumentNo < 0)
		return;
	szsQL.Format(_T("SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hp_occupation as nghenghiep, hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" extract(year from hp_birthdate) as yob,hd_telephone,hp_dtladdr ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" WHERE hd_docno = %ld"), m_nHDocumentNo);
	_debug(_T("%s"), szsQL);
	rs.ExecSQL(szsQL);

	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("birthdate"), m_szBirthdate);
		rs.GetValue(_T("hd_telephone"), m_szPhone);
		rs.GetValue(_T("hp_dtladdr"), m_szAddress);
		rs.GetValue(_T("address"), m_szHusPlaceOfOriginKey);
		rs.GetValue(_T("pname"), m_szHusName);
		rs.GetValue(_T("nghenghiep"), m_szHusJobKey);
		rs.GetValue(_T("yob"), m_nHusDOB);
		UpdateData(FALSE);
	}
	
} 
void CHMSInfertilityInfo::OnHusJobSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInfertilityInfo::OnHusJobSelendok(){
	 
}
/*void CHMSInfertilityInfo::OnHusJobSetfocus(){
	
}*/
/*void CHMSInfertilityInfo::OnHusJobKillfocus(){
	
}*/
long CHMSInfertilityInfo::OnHusJobLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHusJob.IsSearchKey() && !m_szHusJobKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szHusJobKey);
	}
	m_wndHusJob.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'sys_occupation' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHusJob.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSInfertilityInfo::OnHusJobAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInfertilityInfo::OnHusPlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInfertilityInfo::OnHusPlaceOfOriginSelendok(){
	 
}
/*void CHMSInfertilityInfo::OnHusPlaceOfOriginSetfocus(){
	
}*/
/*void CHMSInfertilityInfo::OnHusPlaceOfOriginKillfocus(){
	
}*/
long CHMSInfertilityInfo::OnHusPlaceOfOriginLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_wndHusPlaceOfOrigin.DeleteAllItems();
	if(!m_szHusPlaceOfOriginKey.IsEmpty() && m_wndHusPlaceOfOrigin.IsSearchKey())
	{
		szWhere.Format(_T(" WHERE sv_id=%ld "), ToLong(m_szHusPlaceOfOriginKey));
	}
	szSQL.Format(_T("select sv_id as id, sv_name||' - '||sd_name||' - '||sp_name as name,") \
					 _T(" sv_wrd||sd_wrd||sp_wrd as srch") \
					 _T(" from sys_vill left join sys_dist on(sv_distid=sd_id)") \
					 _T(" left join sys_prov on(sv_provid=sp_id)") \
					 _T(" %s order by 1, 2, 3 "), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHusPlaceOfOrigin.AddItems(
			rs.GetValue(_T("srch")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("id")), NULL);
			rs.MoveNext();
		}
	return nCount;
}
/*void CHMSInfertilityInfo::OnHusPlaceOfOriginAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInfertilityInfo::OnAddressChange(){
	
} */
/*void CHMSInfertilityInfo::OnAddressSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnAddressKillfocus(){
	
} */
int CHMSInfertilityInfo::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnPhoneChange(){
	
} */
/*void CHMSInfertilityInfo::OnPhoneSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnPhoneKillfocus(){
	
} */
int CHMSInfertilityInfo::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSInfertilityInfo::OnMarriedYearChange(){
	
} */
/*void CHMSInfertilityInfo::OnMarriedYearSetfocus(){
	
} */
/*void CHMSInfertilityInfo::OnMarriedYearKillfocus(){
	
} */
int CHMSInfertilityInfo::OnMarriedYearCheckValue(){
	return 0;
} 
void CHMSInfertilityInfo::OnArmyObjectSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSInfertilityInfo::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSInfertilityInfo();
} 
void CHMSInfertilityInfo::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSInfertilityInfo();
} 
void CHMSInfertilityInfo::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSInfertilityInfo();
} 
void CHMSInfertilityInfo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSInfertilityInfo();
} 
void CHMSInfertilityInfo::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSInfertilityInfo();
} 
void CHMSInfertilityInfo::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInfertilityInfo::OnAddHMSInfertilityInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInfertilityInfo::OnEditHMSInfertilityInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInfertilityInfo::OnDeleteHMSInfertilityInfo(){
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
 		OnCancelHMSInfertilityInfo();
 	}
	return 0;
}
int CHMSInfertilityInfo::OnSaveHMSInfertilityInfo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL,szData,tmpStr, szFunc;
	CString szSurName, szMidName, szFirstName, szExGender;
	
	if(m_szGender == _T("M"))
	{
		m_szPatientName = m_szWifeName;
		szExGender = _T("F");
		m_szBirthdate.Format(_T("%d/01/01"), m_nWifeDOB);
	}
	else
	{
		m_szPatientName = m_szHusName;
		szExGender = _T("M");
		m_szBirthdate.Format(_T("%d/01/01"), m_nHusDOB);
	}

	SplitName(m_szPatientName, szSurName, szMidName, szFirstName);

	m_jData.ToString(szData);
	tmpStr = szData;

 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("INSERT INTO hms_doc_infertility(HDI_CREATEDBY, HDI_CREATEDDATE, HDI_UPDATEDBY, HDI_UPDATEDDATE, ") \
				_T(" HDI_DOCNO, HDI_DEPTID, HDI_ROOMID ,HDI_DOCINFO, HDI_OBJECT) VALUES('%s',to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), ") \
				_T(" '%s',to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), %ld, '%s', %d,'%s', %d) "), pMF->GetCurrentUser(),pMF->GetSysDateTime(),
				pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo, pMF->m_szDept ,pMF->m_nRoomID,tmpStr, m_bArmyObject);
 	}
 	else if(GetMode() == VM_EDIT){
		szSQL.Format(_T("UPDATE hms_doc_infertility SET HDI_UPDATEDBY = '%s', ") \
			_T(" HDI_DOCINFO = '%s' WHERE HDI_DOCNO = %ld"), pMF->GetCurrentUser(), tmpStr, m_nDocumentNo);
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSInfertilityInfoListLoadData();
		//((CHMSInfertilityDlg *)m_pWndInfertilityInfo)->OnCheckExist();

		//function HMS_DOC_INFERTILITY_CREATE
		if(GetMode() == VM_ADD)
		{
			szFunc.Format(_T("HMS_DOC_INFERTILITY_CREATE('%s', '%s', %d, %ld, '%s', '%s', '%s', to_date('%s','yyyy/mm/dd'), '%s')"), 
				pMF->GetCurrentUser(), pMF->m_szDept, pMF->m_nRoomID, m_nDocumentNo, szSurName, szMidName, szFirstName, m_szBirthdate, szExGender);
			_fmsg(_T("%s"), szFunc);
			pMF->ExecDML(szFunc);
		}
 		SetMode(VM_VIEW);
		
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInfertilityInfo::OnCancelHMSInfertilityInfo(){
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
int CHMSInfertilityInfo::OnHMSInfertilityInfoListLoadData(){
	return 0;
}
void CHMSInfertilityInfo::OnPrint()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_BENHANHIEMMUON_THONGTIN.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("hotenvo"), m_szWifeName);
	rptHeader->SetValue(_T("nghenghiepvo"), m_wndWifeJob.GetCurrent(1));
	rptHeader->SetValue(_T("namsinhvo"), m_nWifeDOB);
	rptHeader->SetValue(_T("quequanvo"), m_wndWifePlaceOfOrigin.GetCurrent(1));
	rptHeader->SetValue(_T("hotenchong"), m_szHusName);
	rptHeader->SetValue(_T("namsinhchong"), m_nHusDOB);
	rptHeader->SetValue(_T("nghenghiepchong"), m_wndHusJob.GetCurrent(1));
	rptHeader->SetValue(_T("quequanchong"), m_wndHusPlaceOfOrigin.GetCurrent(1));
	rptHeader->SetValue(_T("diachi"), m_szAddress);
	rptHeader->SetValue(_T("sodienthoai"), m_szPhone);
	rptHeader->SetValue(_T("namkethon"), m_nMarriedYear);
	

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
}

void CHMSInfertilityInfo::OnGetGenderDOB()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szsQL;
	CRecord rs(&pMF->m_db);

	szsQL.Format(_T("SELECT  to_char(hp_birthdate) as birthdate, hp_sex, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T(" hp_occupation as nghenghiep, hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" extract(year from hp_birthdate) as yob,hd_telephone,hp_dtladdr ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" WHERE hd_docno = %ld"), m_nDocumentNo);
	_debug(_T("%s"), szsQL);
	rs.ExecSQL(szsQL);

	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("birthdate"), m_szBirthdate);
		rs.GetValue(_T("address"), m_szdtlAddress);
		rs.GetValue(_T("hd_telephone"), m_szTelephone);
		rs.GetValue(_T("hp_sex"), m_szGender);
		rs.GetValue(_T("pname"), m_szRefName);
		rs.GetValue(_T("nghenghiep"), m_szRefJob);
		rs.GetValue(_T("yob"), m_nYob);
	}
}