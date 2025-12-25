#include "HMSExaminationDocument2.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnSexCheckValue();
} 
/*static void _OnNationChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNationChange();
} */
/*static void _OnNationSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNationSetfocus();} */ 
/*static void _OnNationKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNationKillfocus();
} */
static int _OnNationCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnNationCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardInfoBtnSelectFnc(CWnd *pWnd){
	CHMSExaminationDocument2 *pVw = (CHMSExaminationDocument2 *)pWnd;
	pVw->OnCardInfoBtnSelect();
} 
static void _OnExaminationTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSExaminationDocument2*)pWnd)->OnExaminationTabSelectChange(nOld, nNew);
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSExaminationDocument2*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExaminationDocument2*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnPatientListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationDocument2* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationDocument2 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationDocument2 *)pWnd)->OnNameCheckValue();
} 
static int _OnAddHMSExaminationDocument2Fnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnAddHMSExaminationDocument2();
} 
static int _OnEditHMSExaminationDocument2Fnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnEditHMSExaminationDocument2();
} 
static int _OnDeleteHMSExaminationDocument2Fnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnDeleteHMSExaminationDocument2();
} 
static int _OnSaveHMSExaminationDocument2Fnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnSaveHMSExaminationDocument2();
} 
static int _OnCancelHMSExaminationDocument2Fnc(CWnd *pWnd){
	 return ((CHMSExaminationDocument2*)pWnd)->OnCancelHMSExaminationDocument2();
} 
CHMSExaminationDocument2::CHMSExaminationDocument2(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 661;
	SetDefaultValues();
}
CHMSExaminationDocument2::~CHMSExaminationDocument2(){
}
void CHMSExaminationDocument2::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 303, 299);
	m_wndPatientNoLabel.Create(this, _T("PID"), 9, 28, 94, 50);
	m_wndPatientNo.Create(this,99, 28, 173, 50); 
	m_wndDocumentNoLabel.Create(this, _T("Doc ID"), 178, 28, 224, 50);
	m_wndDocumentNo.Create(this,229, 28, 299, 50); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 9, 55, 94, 77);
	m_wndPatientName.Create(this,99, 55, 299, 77); 
	m_wndAgeLabel.Create(this, _T("Age"), 9, 82, 94, 104);
	m_wndAge.Create(this,99, 82, 173, 104); 
	m_wndSexLabel.Create(this, _T("Sex"), 178, 82, 224, 104);
	m_wndSex.Create(this,229, 82, 299, 104); 
	m_wndNationLabel.Create(this, _T("Nation"), 9, 109, 94, 131);
	m_wndNation.Create(this,99, 109, 299, 131); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 9, 136, 94, 158);
	m_wndOccupation.Create(this,99, 136, 299, 158); 
	m_wndAddressLabel.Create(this, _T("Address"), 9, 163, 94, 185);
	m_wndAddress.Create(this,99, 163, 299, 185); 
	m_wndDetailAddrlLabel.Create(this, _T("Detail Address"), 9, 190, 94, 212);
	m_wndDetailAddress.Create(this,99, 190, 299, 212); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 9, 217, 94, 239);
	m_wndWorkplace.Create(this,99, 217, 299, 239); 
	m_wndObjectLabel.Create(this, _T("Object"), 9, 244, 94, 266);
	m_wndObject.Create(this,99, 244, 299, 266); 
	m_wndCardNo.Create(this,99, 271, 273, 293); 
	m_wndCardInfoBtn.Create(this, _T("..."), 278, 271, 300, 293);
	m_wndExaminationTab.Create(this,308, 5, 750, 500); 
	m_wndPatientList.Create(this,5, 304, 303, 443); 
	m_wndCardNumber.Create(this, _T("Card Number"), 9, 271, 94, 293);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 448, 59, 470);
	m_wndFromDate.Create(this,64, 448, 134, 470); 
	m_wndToDateLabel.Create(this, _T("To Date"), 173, 448, 223, 470);
	m_wndToDate.Create(this,228, 448, 298, 470); 
	m_wndStatusLabel.Create(this, _T("Status"), 167, 475, 217, 497);
	m_wndStatus.Create(this,222, 475, 292, 497); 
	m_wndNameLabel.Create(this, _T("Name"), 9, 475, 59, 497);
	m_wndName.Create(this,64, 475, 162, 497); 

}
void CHMSExaminationDocument2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndNation.SetLimitText(1024);
	m_wndNation.SetCheckValue(true);
	m_wndOccupation.SetLimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(18);
	m_wndCardNo.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("Documet ID"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSExaminationDocument2::OnSetWindowEvents(){
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndNation.SetEvent(WE_CHANGE, _OnNationChangeFnc);
	//m_wndNation.SetEvent(WE_SETFOCUS, _OnNationSetfocusFnc);
	//m_wndNation.SetEvent(WE_KILLFOCUS, _OnNationKillfocusFnc);
	m_wndNation.SetEvent(WE_CHECKVALUE, _OnNationCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardInfoBtn.SetEvent(WE_CLICK, _OnCardInfoBtnSelectFnc);
	m_wndExaminationTab.SetEvent(WE_SELCHANGE, _OnExaminationTabSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationDocument2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationDocument2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationDocument2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationDocument2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationDocument2Fnc, 0, 'T', VK_CONTROL);

}
void CHMSExaminationDocument2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndNation.GetDlgCtrlID(), m_szNation);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSExaminationDocument2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationDocument2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationDocument2::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szNation.Empty();
	m_szOccupation.Empty();
	m_szAddress.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szObject.Empty();
	m_szCardNo.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_szName.Empty();

}
int CHMSExaminationDocument2::SetMode(int nMode){ 
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
/*void CHMSExaminationDocument2::OnPatientNoChange(){
	
} */
/*void CHMSExaminationDocument2::OnPatientNoSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnPatientNoKillfocus(){
	
} */
int CHMSExaminationDocument2::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnDocumentNoChange(){
	
} */
/*void CHMSExaminationDocument2::OnDocumentNoSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnDocumentNoKillfocus(){
	
} */
int CHMSExaminationDocument2::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnPatientNameChange(){
	
} */
/*void CHMSExaminationDocument2::OnPatientNameSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnPatientNameKillfocus(){
	
} */
int CHMSExaminationDocument2::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnAgeChange(){
	
} */
/*void CHMSExaminationDocument2::OnAgeSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnAgeKillfocus(){
	
} */
int CHMSExaminationDocument2::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnSexChange(){
	
} */
/*void CHMSExaminationDocument2::OnSexSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnSexKillfocus(){
	
} */
int CHMSExaminationDocument2::OnSexCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnNationChange(){
	
} */
/*void CHMSExaminationDocument2::OnNationSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnNationKillfocus(){
	
} */
int CHMSExaminationDocument2::OnNationCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnOccupationChange(){
	
} */
/*void CHMSExaminationDocument2::OnOccupationSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnOccupationKillfocus(){
	
} */
int CHMSExaminationDocument2::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnAddressChange(){
	
} */
/*void CHMSExaminationDocument2::OnAddressSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnAddressKillfocus(){
	
} */
int CHMSExaminationDocument2::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnDetailAddressChange(){
	
} */
/*void CHMSExaminationDocument2::OnDetailAddressSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnDetailAddressKillfocus(){
	
} */
int CHMSExaminationDocument2::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnWorkplaceChange(){
	
} */
/*void CHMSExaminationDocument2::OnWorkplaceSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnWorkplaceKillfocus(){
	
} */
int CHMSExaminationDocument2::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnObjectChange(){
	
} */
/*void CHMSExaminationDocument2::OnObjectSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnObjectKillfocus(){
	
} */
int CHMSExaminationDocument2::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnCardNoChange(){
	
} */
/*void CHMSExaminationDocument2::OnCardNoSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnCardNoKillfocus(){
	
} */
int CHMSExaminationDocument2::OnCardNoCheckValue(){
	return 0;
} 
void CHMSExaminationDocument2::OnCardInfoBtnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationDocument2::OnExaminationTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationDocument2::OnPatientListDblClick(){
	
} 
void CHMSExaminationDocument2::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExaminationDocument2::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExaminationDocument2::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("DocumetID")), 
			rs.GetValue(_T("PatientName")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationDocument2::OnFromDateChange(){
	
} */
/*void CHMSExaminationDocument2::OnFromDateSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnFromDateKillfocus(){
	
} */
int CHMSExaminationDocument2::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSExaminationDocument2::OnToDateChange(){
	
} */
/*void CHMSExaminationDocument2::OnToDateSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnToDateKillfocus(){
	
} */
int CHMSExaminationDocument2::OnToDateCheckValue(){
	return 0;
} 
void CHMSExaminationDocument2::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationDocument2::OnStatusSelendok(){
	 
}
/*void CHMSExaminationDocument2::OnStatusSetfocus(){
	
}*/
/*void CHMSExaminationDocument2::OnStatusKillfocus(){
	
}*/
long CHMSExaminationDocument2::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExaminationDocument2::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExaminationDocument2::OnNameChange(){
	
} */
/*void CHMSExaminationDocument2::OnNameSetfocus(){
	
} */
/*void CHMSExaminationDocument2::OnNameKillfocus(){
	
} */
int CHMSExaminationDocument2::OnNameCheckValue(){
	return 0;
} 
int CHMSExaminationDocument2::OnAddHMSExaminationDocument2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSExaminationDocument2"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSExaminationDocument2::OnEditHMSExaminationDocument2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSExaminationDocument2"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSExaminationDocument2::OnDeleteHMSExaminationDocument2(){
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
 		OnCancelHMSExaminationDocument2(); 
 	}
return 0;
 } 
int CHMSExaminationDocument2::OnSaveHMSExaminationDocument2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSExaminationDocument2ListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationDocument2::OnCancelHMSExaminationDocument2(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSExaminationDocument2::OnHMSExaminationDocument2ListLoadData(){
	return 0;
}
