#include "HMSAddAppointmentA20.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnSearchDocChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchDocChange();
} */
/*static void _OnSearchDocSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchDocSetfocus();} */ 
/*static void _OnSearchDocKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchDocKillfocus();
} */
static int _OnSearchDocCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnSearchDocCheckValue();
} 
/*static void _OnSearchRecordChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchRecordChange();
} */
/*static void _OnSearchRecordSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchRecordSetfocus();} */ 
/*static void _OnSearchRecordKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchRecordKillfocus();
} */
static int _OnSearchRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnSearchRecordCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnSearchNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAddAppointmentA20*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnListDeleteItem();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnDocnoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnYobCheckValue();
} 
/*static void _OnAdressChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAdressChange();
} */
/*static void _OnAdressSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAdressSetfocus();} */ 
/*static void _OnAdressKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAdressKillfocus();
} */
static int _OnAdressCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnAdressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnPhoneCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnTrustSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnTrustSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTrustSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTrustSelendok();
}
/*static void _OnTrustSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTrustKillfocus();
}*/
/*static void _OnTrustKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTrustKillfocus();
}*/
static long _OnTrustLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTrustLoadData();
}
/*static void _OnTrustAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTrustAddNew();
}*/
static void _OnbeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnbeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnbeSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnbeSelendok();
}
/*static void _OnbeSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnbeKillfocus();
}*/
/*static void _OnbeKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnbeKillfocus();
}*/
static long _OnbeLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnbeLoadData();
}
/*static void _OnbeAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnbeAddNew();
}*/
static void _OnDiCanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnDiCanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiCanSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiCanSelendok();
}
/*static void _OnDiCanSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiCanKillfocus();
}*/
/*static void _OnDiCanKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiCanKillfocus();
}*/
static long _OnDiCanLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnDiCanLoadData();
}
/*static void _OnDiCanAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDiCanAddNew();
}*/
/*static void _OnTGChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTGChange();
} */
/*static void _OnTGSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTGSetfocus();} */ 
/*static void _OnTGKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTGKillfocus();
} */
static int _OnTGCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTGCheckValue();
} 
/*static void _OnATGChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnATGChange();
} */
/*static void _OnATGSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnATGSetfocus();} */ 
/*static void _OnATGKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnATGKillfocus();
} */
static int _OnATGCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnATGCheckValue();
} 
/*static void _OnAppointmentDateChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAppointmentDateChange();
} */
/*static void _OnAppointmentDateSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAppointmentDateSetfocus();} */ 
/*static void _OnAppointmentDateKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnAppointmentDateKillfocus();
} */
static int _OnAppointmentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnAppointmentDateCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnRecordNoCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnTreattimeChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTreattimeChange();
} */
/*static void _OnTreattimeSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTreattimeSetfocus();} */ 
/*static void _OnTreattimeKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTreattimeKillfocus();
} */

static int _OnTreattimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTreattimeCheckValue();
}

static void _OnTherapeuticdoseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnTherapeuticdoseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTherapeuticdoseSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTherapeuticdoseSelendok();
}
/*static void _OnTherapeuticdoseSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTherapeuticdoseKillfocus();
}*/
/*static void _OnTherapeuticdoseKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTherapeuticdoseKillfocus();
}*/
static long _OnTherapeuticdoseLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTherapeuticdoseLoadData();
}
/*static void _OnTherapeuticdoseAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTherapeuticdoseAddNew();
}*/

static void _OnIotSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnIotSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIotSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnIotSelendok();
}
/*static void _OnIotSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnIotKillfocus();
}*/
/*static void _OnIotKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnIotKillfocus();
}*/
static long _OnIotLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnIotLoadData();
}
/*static void _OnIotAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnIotAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintAppointSelectFnc(CWnd *pWnd){
	CHMSAddAppointmentA20 *pVw = (CHMSAddAppointmentA20 *)pWnd;
	pVw->OnPrintAppointSelect();
} 
static void _OnTypeSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddAppointmentA20* )pWnd)->OnTypeSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSearchSelendokFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeSearchSelendok();
}
/*static void _OnTypeSearchSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeSearchKillfocus();
}*/
/*static void _OnTypeSearchKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeSearchKillfocus();
}*/
static long _OnTypeSearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnTypeSearchLoadData();
}
/*static void _OnTypeSearchAddNewFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnTypeSearchAddNew();
}*/
/*static void _OnStageChangeFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnStageChange();
} */
/*static void _OnStageSetfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnStageSetfocus();} */ 
/*static void _OnStageKillfocusFnc(CWnd *pWnd){
	((CHMSAddAppointmentA20 *)pWnd)->OnStageKillfocus();
} */
static int _OnStageCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddAppointmentA20 *)pWnd)->OnStageCheckValue();
} 
static int _OnAddHMSAddAppointmentA20Fnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnAddHMSAddAppointmentA20();
} 
static int _OnEditHMSAddAppointmentA20Fnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnEditHMSAddAppointmentA20();
} 
static int _OnDeleteHMSAddAppointmentA20Fnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnDeleteHMSAddAppointmentA20();
} 
static int _OnSaveHMSAddAppointmentA20Fnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnSaveHMSAddAppointmentA20();
} 
static int _OnCancelHMSAddAppointmentA20Fnc(CWnd *pWnd){
	 return ((CHMSAddAppointmentA20*)pWnd)->OnCancelHMSAddAppointmentA20();
} 
CHMSAddAppointmentA20::CHMSAddAppointmentA20(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAddAppointmentA20::~CHMSAddAppointmentA20(){
}
void CHMSAddAppointmentA20::OnCreateComponents(){
	m_wndAppointmentList.Create(this, _T("DANH SÁCH LỊCH HẸN"), 5, 5, 945, 435);
	m_wndAppointmentInfomation.Create(this, _T("THÔNG TIN CHI TIẾT LỊCH HẸN"), 4, 439, 944, 644);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndLoad.Create(this, _T("Load"), 690, 30, 770, 55);
	m_wndExport.Create(this, _T("Export"), 775, 30, 855, 55);
	m_wndPrint.Create(this, _T("Print"), 860, 30, 940, 55);
	m_wndSearchDocnoLabel.Create(this, _T("Docno"), 10, 60, 90, 85);
	m_wndSearchDoc.Create(this,95, 60, 195, 85); 
	m_wndSearchRecordLabel.Create(this, _T("Record"), 200, 60, 280, 85);
	m_wndSearchRecord.Create(this,285, 60, 385, 85); 
	m_wndPatientNameSearchLabel.Create(this, _T("Patient Name"), 390, 60, 510, 85);
	m_wndSearchName.Create(this,515, 60, 665, 85); 
	m_wndList.Create(this,10, 90, 940, 430); 
	m_wndDocnoLabel.Create(this, _T("Docno"), 10, 463, 130, 488);
	m_wndDocno.Create(this,135, 463, 235, 488); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 240, 463, 360, 488);
	m_wndPatientName.Create(this,365, 463, 570, 488); 
	m_wndYobLabel.Create(this, _T("Yob"), 575, 463, 695, 488);
	m_wndYob.Create(this,700, 463, 839, 488); 
	m_wndAdressLabel.Create(this, _T("Adress"), 10, 493, 130, 518);
	m_wndAdress.Create(this,135, 493, 570, 518); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 575, 493, 695, 518);
	m_wndPhone.Create(this,700, 493, 839, 518); 
	m_wndTypeLabel.Create(this, _T("Loại điều trị"), 576, 521, 696, 546);
	m_wndType.Create(this,700, 521, 839, 546); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 523, 130, 548);
	m_wndDiagnostic.Create(this,135, 523, 570, 548); 
	m_wndTrustUseLabel.Create(this, _T("Chắc chắn đt"), 10, 551, 130, 576);
	m_wndTrust.Create(this,135, 551, 238, 576); 
	m_wndTheLabel.Create(this, _T("Thể"), 240, 551, 320, 576);
	m_wndbe.Create(this,325, 551, 405, 576); 
	m_wndDiCanLabel.Create(this, _T("Di Căn"), 418, 551, 498, 576);
	m_wndDiCan.Create(this,503, 551, 610, 576); 
	m_wndTGLabel.Create(this, _T("TG/A-TG"), 615, 551, 695, 576);
	m_wndTG.Create(this,700, 551, 753, 576); 
	m_wndATG.Create(this,787, 551, 838, 576); 
	m_wndATGLabel.Create(this, _T("/"), 758, 551, 783, 576);
	m_wndAppointmentDateLabel.Create(this, _T("Ngày hẹn"), 10, 581, 130, 606);
	m_wndAppointmentDate.Create(this,135, 581, 235, 606); 
	m_wndRecordNoLabel.Create(this, _T("RecordNo"), 240, 581, 360, 606);
	m_wndRecordNo.Create(this,365, 581, 469, 606); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 477, 581, 597, 606);
	m_wndDoctor.Create(this,602, 581, 821, 606); 
	m_wndTreattimeLabel.Create(this, _T("Lượt điều trị"), 10, 611, 130, 636);
	m_wndTreattime.Create(this,135, 611, 238, 636); 
	m_wndTherapeuticdoseLabel.Create(this, _T("Liều chẩn đoán"), 240, 611, 360, 636);
	m_wndTherapeuticdose.Create(this,365, 611, 469, 636); 
	m_wndIot131Label.Create(this, _T("Liều Iot 131"), 477, 611, 597, 636);
	m_wndIot.Create(this,602, 611, 705, 636); 
	m_wndAdd.Create(this, _T("Add"), 385, 648, 465, 673);
	m_wndEdit.Create(this, _T("Edit"), 470, 648, 550, 673);
	m_wndDelete.Create(this, _T("Delete"), 555, 648, 635, 673);
	m_wndSave.Create(this, _T("Save"), 640, 648, 720, 673);
	m_wndCancel.Create(this, _T("Cancel"), 725, 648, 805, 673);
	m_wndPrintAppoint.Create(this, _T("Print Appoint"), 810, 648, 910, 673);
	m_wndTypeSearchLabel.Create(this, _T("Type Search"), 390, 30, 510, 55);
	m_wndTypeSearch.Create(this,515, 30, 665, 55); 
	m_wndStageLabel.Create(this, _T("Stage"), 710, 610, 790, 635);
	m_wndStage.Create(this,795, 610, 925, 635); 

}
void CHMSAddAppointmentA20::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndSearchDoc.SetLimitText(8);
	//m_wndSearchDoc.SetCheckValue(true);
	m_wndSearchRecord.SetLimitText(35);
	//m_wndSearchRecord.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	//m_wndSearchName.SetCheckValue(true);
	m_wndDocno.SetLimitText(8);
	m_wndDocno.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(16);
	m_wndYob.SetCheckValue(true);
	m_wndAdress.SetLimitText(35);
	m_wndAdress.SetCheckValue(true);
	m_wndPhone.SetLimitText(35);
	//m_wndPhone.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);
	//m_wndTrust.SetCheckValue(true);
	m_wndTrust.LimitText(35);
//	m_wndbe.SetLimitText(35);
	//m_wndbe.SetCheckValue(true);
	m_wndDiCan.SetCheckValue(true);
	m_wndDiCan.LimitText(35);
	m_wndTG.SetLimitText(35);
//	m_wndTG.SetCheckValue(true);
	m_wndATG.SetLimitText(16);
//	m_wndATG.SetCheckValue(true);
	//m_wndAppointmentDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndAppointmentDate.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	//m_wndRecordNo.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndTreattime.SetCheckValue(true);
	m_wndTreattime.LimitText(35);
//	m_wndTherapeuticdose.SetLimitText(16);
	//m_wndTherapeuticdose.SetCheckValue(true);
//	m_wndIot.SetLimitText(35);
	//m_wndIot.SetCheckValue(true);
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndDiCan.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiCan.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndTherapeuticdose.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTherapeuticdose.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndbe.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndbe.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	

	

	m_wndList.InsertColumn(0, _T("Docno"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	
	m_wndList.InsertColumn(3, _T("RecordNo"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("yob"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(5, _T("Adress"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("Phone"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Diagnostic"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Appointment Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(9, _T("Treattime"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(10, _T("Therapeutic dose"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(11, _T("Iot 131"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(12, _T("User"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(13, _T("Trust"), CFMT_TEXT, 100);

	m_wndTrust.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTrust.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndIot.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndIot.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndTypeSearch.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeSearch.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



	/*m_wndTreattime.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreattime.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);*/

	m_hms_appointment_detailTbl.SetTableName(_T("hms_appointment_detail"));
	m_hms_appointment_detailTbl.AddField(_T("HAD_DATE"), dfDate); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_CREATEDDATE"), dfDateTime); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_CREATEDBY"), dfText, 20); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_UPDATEDDATE"), dfDateTime); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_UPDATEDBY"), dfText, 20); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_DOCNO"), dfLong); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_PATIENTNO"), dfLong); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_ADRESS"), dfText, 254); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_PHONE"), dfText, 24); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_DIAGNOSTIC"), dfText, 254); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_TRUSUSE"), dfText, 1); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_RECORDNO"), dfText, 24); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_TREATTIMES"), dfText, 2); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_DOSE"), dfText, 10); 
	m_hms_appointment_detailTbl.AddField(_T("HAD_CONTENT"), dfText, 20);
	m_hms_appointment_detailTbl.AddField(_T("HAD_THE"), dfText, 20);
	m_hms_appointment_detailTbl.AddField(_T("HAD_DICAN"), dfText, 20);
	m_hms_appointment_detailTbl.AddField(_T("HAD_TG"), dfFloat);
	m_hms_appointment_detailTbl.AddField(_T("HAD_ATG"), dfFloat);
	m_hms_appointment_detailTbl.AddField(_T("HAD_DOCTOR"), dfText, 20);
	m_hms_appointment_detailTbl.AddField(_T("HAD_type"), dfText, 1);
	m_hms_appointment_detailTbl.AddField(_T("HAD_DEPTID"), dfText, 21);	

}
void CHMSAddAppointmentA20::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndSearchDoc.SetEvent(WE_CHANGE, _OnSearchDocChangeFnc);
	//m_wndSearchDoc.SetEvent(WE_SETFOCUS, _OnSearchDocSetfocusFnc);
	//m_wndSearchDoc.SetEvent(WE_KILLFOCUS, _OnSearchDocKillfocusFnc);
	m_wndSearchDoc.SetEvent(WE_CHECKVALUE, _OnSearchDocCheckValueFnc);
	//m_wndSearchRecord.SetEvent(WE_CHANGE, _OnSearchRecordChangeFnc);
	//m_wndSearchRecord.SetEvent(WE_SETFOCUS, _OnSearchRecordSetfocusFnc);
	//m_wndSearchRecord.SetEvent(WE_KILLFOCUS, _OnSearchRecordKillfocusFnc);
	m_wndSearchRecord.SetEvent(WE_CHECKVALUE, _OnSearchRecordCheckValueFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Xóa phiếu hẹn chi tiết"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndAdress.SetEvent(WE_CHANGE, _OnAdressChangeFnc);
	//m_wndAdress.SetEvent(WE_SETFOCUS, _OnAdressSetfocusFnc);
	//m_wndAdress.SetEvent(WE_KILLFOCUS, _OnAdressKillfocusFnc);
	m_wndAdress.SetEvent(WE_CHECKVALUE, _OnAdressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndTrust.SetEvent(WE_SELENDOK, _OnTrustSelendokFnc);
	//m_wndTrust.SetEvent(WE_SETFOCUS, _OnTrustSetfocusFnc);
	//m_wndTrust.SetEvent(WE_KILLFOCUS, _OnTrustKillfocusFnc);
	m_wndTrust.SetEvent(WE_SELCHANGE, _OnTrustSelectChangeFnc);
	m_wndTrust.SetEvent(WE_LOADDATA, _OnTrustLoadDataFnc);
	//m_wndTrust.SetEvent(WE_ADDNEW, _OnTrustAddNewFnc);
	m_wndbe.SetEvent(WE_SELENDOK, _OnbeSelendokFnc);
	//m_wndbe.SetEvent(WE_SETFOCUS, _OnbeSetfocusFnc);
	//m_wndbe.SetEvent(WE_KILLFOCUS, _OnbeKillfocusFnc);
	m_wndbe.SetEvent(WE_SELCHANGE, _OnbeSelectChangeFnc);
	m_wndbe.SetEvent(WE_LOADDATA, _OnbeLoadDataFnc);
	//m_wndbe.SetEvent(WE_ADDNEW, _OnbeAddNewFnc);
	m_wndDiCan.SetEvent(WE_SELENDOK, _OnDiCanSelendokFnc);
	//m_wndDiCan.SetEvent(WE_SETFOCUS, _OnDiCanSetfocusFnc);
	//m_wndDiCan.SetEvent(WE_KILLFOCUS, _OnDiCanKillfocusFnc);
	m_wndDiCan.SetEvent(WE_SELCHANGE, _OnDiCanSelectChangeFnc);
	m_wndDiCan.SetEvent(WE_LOADDATA, _OnDiCanLoadDataFnc);
	//m_wndDiCan.SetEvent(WE_ADDNEW, _OnDiCanAddNewFnc);
	//m_wndTG.SetEvent(WE_CHANGE, _OnTGChangeFnc);
	//m_wndTG.SetEvent(WE_SETFOCUS, _OnTGSetfocusFnc);
	//m_wndTG.SetEvent(WE_KILLFOCUS, _OnTGKillfocusFnc);
	m_wndTG.SetEvent(WE_CHECKVALUE, _OnTGCheckValueFnc);
	//m_wndATG.SetEvent(WE_CHANGE, _OnATGChangeFnc);
	//m_wndATG.SetEvent(WE_SETFOCUS, _OnATGSetfocusFnc);
	//m_wndATG.SetEvent(WE_KILLFOCUS, _OnATGKillfocusFnc);
	m_wndATG.SetEvent(WE_CHECKVALUE, _OnATGCheckValueFnc);
	//m_wndAppointmentDate.SetEvent(WE_CHANGE, _OnAppointmentDateChangeFnc);
	//m_wndAppointmentDate.SetEvent(WE_SETFOCUS, _OnAppointmentDateSetfocusFnc);
	//m_wndAppointmentDate.SetEvent(WE_KILLFOCUS, _OnAppointmentDateKillfocusFnc);
	m_wndAppointmentDate.SetEvent(WE_CHECKVALUE, _OnAppointmentDateCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndTreattime.SetEvent(WE_CHANGE, _OnTreattimeChangeFnc);
	//m_wndTreattime.SetEvent(WE_SETFOCUS, _OnTreattimeSetfocusFnc);
	//m_wndTreattime.SetEvent(WE_KILLFOCUS, _OnTreattimeKillfocusFnc);
	m_wndTreattime.SetEvent(WE_CHECKVALUE, _OnTreattimeCheckValueFnc);

	m_wndTherapeuticdose.SetEvent(WE_SELENDOK, _OnTherapeuticdoseSelendokFnc);
	//m_wndTherapeuticdose.SetEvent(WE_SETFOCUS, _OnTherapeuticdoseSetfocusFnc);
	//m_wndTherapeuticdose.SetEvent(WE_KILLFOCUS, _OnTherapeuticdoseKillfocusFnc);
	m_wndTherapeuticdose.SetEvent(WE_SELCHANGE, _OnTherapeuticdoseSelectChangeFnc);
	m_wndTherapeuticdose.SetEvent(WE_LOADDATA, _OnTherapeuticdoseLoadDataFnc);
	//m_wndTherapeuticdose.SetEvent(WE_ADDNEW, _OnTherapeuticdoseAddNewFnc);
	m_wndIot.SetEvent(WE_SELENDOK, _OnIotSelendokFnc);
	//m_wndIot.SetEvent(WE_SETFOCUS, _OnIotSetfocusFnc);
	//m_wndIot.SetEvent(WE_KILLFOCUS, _OnIotKillfocusFnc);

	m_wndIot.SetEvent(WE_SELCHANGE, _OnIotSelectChangeFnc);
	m_wndIot.SetEvent(WE_LOADDATA, _OnIotLoadDataFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintAppoint.SetEvent(WE_CLICK, _OnPrintAppointSelectFnc);

	m_wndTypeSearch.SetEvent(WE_SELENDOK, _OnTypeSearchSelendokFnc);
	//m_wndTypeSearch.SetEvent(WE_SETFOCUS, _OnTypeSearchSetfocusFnc);
	//m_wndTypeSearch.SetEvent(WE_KILLFOCUS, _OnTypeSearchKillfocusFnc);
	m_wndTypeSearch.SetEvent(WE_SELCHANGE, _OnTypeSearchSelectChangeFnc);
	m_wndTypeSearch.SetEvent(WE_LOADDATA, _OnTypeSearchLoadDataFnc);
	//m_wndTypeSearch.SetEvent(WE_ADDNEW, _OnTypeSearchAddNewFnc);
	//m_wndStage.SetEvent(WE_CHANGE, _OnStageChangeFnc);
	//m_wndStage.SetEvent(WE_SETFOCUS, _OnStageSetfocusFnc);
	//m_wndStage.SetEvent(WE_KILLFOCUS, _OnStageKillfocusFnc);
	m_wndStage.SetEvent(WE_CHECKVALUE, _OnStageCheckValueFnc);
	m_bLoad= false;
	CDate dte;
	m_szFromDate = pMF->GetSysDate();
	dte.ParseDate(m_szFromDate);
	dte += 1;
	m_szToDate.Format(_T("%s"), dte.GetDate());
	if (GetMode() == VM_ADD)
	{
		GetDataToScreen();
		
		//SetMode(VM_ADD);
		
	}
	else
	{
		
		OnListLoadData();
		SetMode(VM_VIEW);
	}

}
void CHMSAddAppointmentA20::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearchDoc.GetDlgCtrlID(), m_nSearchDoc);
	DDX_Text(pDX, m_wndSearchRecord.GetDlgCtrlID(), m_szSearchRecord);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_nYob);
	DDX_Text(pDX, m_wndAdress.GetDlgCtrlID(), m_szAdress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndTrust.GetDlgCtrlID(), m_szTrustKey);
	DDX_TextEx(pDX, m_wndbe.GetDlgCtrlID(), m_szbeKey);
	DDX_TextEx(pDX, m_wndDiCan.GetDlgCtrlID(), m_szDiCanKey);
	DDX_Text(pDX, m_wndTG.GetDlgCtrlID(), m_nTG);
	DDX_Text(pDX, m_wndATG.GetDlgCtrlID(), m_nATG);
	DDX_TextEx(pDX, m_wndAppointmentDate.GetDlgCtrlID(), m_szAppointmentDate);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndTreattime.GetDlgCtrlID(), m_nTreattime);
	DDX_TextEx(pDX, m_wndTherapeuticdose.GetDlgCtrlID(), m_szTherapeuticdoseKey);
	DDX_TextEx(pDX, m_wndIot.GetDlgCtrlID(), m_szIotKey);
	DDX_TextEx(pDX, m_wndTypeSearch.GetDlgCtrlID(), m_szTypeSearchKey);
	DDX_Text(pDX, m_wndStage.GetDlgCtrlID(), m_szStage);

}
void CHMSAddAppointmentA20::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("SearchDoc")] =  m_nSearchDoc;
	m_jData[_T("SearchRecord")] =  m_szSearchRecord;
	m_jData[_T("SearchName")] =  m_szSearchName;
	m_jData[_T("Docno")] =  m_nDocno;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_nYob;
	m_jData[_T("Adress")] =  m_szAdress;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("Trust")] =  m_szTrustKey;
	m_jData[_T("be")] =  m_szbeKey;
	m_jData[_T("DiCan")] =  m_szDiCanKey;
	m_jData[_T("TG")] =  m_nTG;
	m_jData[_T("ATG")] =  m_nATG;
	m_jData[_T("AppointmentDate")] =  m_szAppointmentDate;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	m_jData[_T("Treattime")] =  m_nTreattime;
	m_jData[_T("Therapeuticdose")] =  m_szTherapeuticdoseKey;
	m_jData[_T("Iot")] =  m_szIotKey;
	m_jData[_T("TypeSearch")] =  m_szTypeSearchKey;
	m_jData[_T("Stage")] =  m_szStage;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("SearchDoc")].GetValue(m_nSearchDoc);
	m_jData[_T("SearchRecord")].GetValue(m_szSearchRecord);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	m_jData[_T("Docno")].GetValue(m_nDocno);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_nYob);
	m_jData[_T("Adress")].GetValue(m_szAdress);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("Trust")].GetValue(m_szTrustKey);
	m_jData[_T("be")].GetValue(m_szbeKey);
	m_jData[_T("DiCan")].GetValue(m_szDiCanKey);
	m_jData[_T("TG")].GetValue(m_nTG);
	m_jData[_T("ATG")].GetValue(m_nATG);
	m_jData[_T("AppointmentDate")].GetValue(m_szAppointmentDate);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	m_jData[_T("Treattime")].GetValue(m_nTreattime);
	m_jData[_T("Therapeuticdose")].GetValue(m_szTherapeuticdoseKey);
	m_jData[_T("Iot")].GetValue(m_szIotKey);
	m_jData[_T("TypeSearch")].GetValue(m_szTypeSearchKey);
	m_jData[_T("Stage")].GetValue(m_szStage);
	}

}
void CHMSAddAppointmentA20::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select had_date,had_adress,had_phone,had_diagnostic, ") \
				_T("	get_patientname(had_docno) as pname, extract(year from hp_birthdate) as yob, ")
				_T("	had_trususe,had_recordno,had_treattimes,had_dose,had_content,had_patientno,HAD_THE,HAD_DICAN,HAD_TG,HAD_ATG,HAD_DOCTOR,HAD_type ") \
				_T(" from hms_appointment_detail ") \
				_T("		LEFT JOIN hms_patient ON (hp_patientno= had_patientno) ") \
				_T("	where had_docno= %ld "), m_nDocno);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"),m_szPatientName);
		rs.GetValue(_T("yob"),m_nYob);
		rs.GetValue(_T("had_adress"),m_szAdress);
		rs.GetValue(_T("had_phone"),m_szPhone);
		rs.GetValue(_T("had_trususe"),m_szTrustKey);
		rs.GetValue(_T("had_date"),m_szAppointmentDate);
		rs.GetValue(_T("had_recordno"),m_szRecordNo);
		rs.GetValue(_T("had_treattimes"),m_nTreattime);
		rs.GetValue(_T("had_dose"),m_szTherapeuticdoseKey);
		rs.GetValue(_T("had_content"),m_szIotKey);
		rs.GetValue(_T("had_patientno"),m_nPatientNo);
		rs.GetValue(_T("had_diagnostic"),m_szDiagnostic);


		rs.GetValue(_T("HAD_THE"),m_szbeKey);
		rs.GetValue(_T("HAD_DICAN"),m_szDiCanKey);
		rs.GetValue(_T("HAD_TG"),m_nTG);
		rs.GetValue(_T("HAD_ATG"),m_nATG);
		rs.GetValue(_T("HAD_DOCTOR"),m_szDoctorKey);
		rs.GetValue(_T("HAD_type"),m_szTypeKey);

		
		m_szFromDate= m_szAppointmentDate;
		m_szToDate= m_szAppointmentDate;
		SetMode(VM_VIEW);
		if(m_bLoad)
			OnListLoadData();
		return;
	}
	else
	{
		szSQL.Format(_T("SELECT get_patientname(he_docno) as pname, extract(year from hp_birthdate) as yob,hp_patientno as patientno, ") \
					_T("	(hp_dtladdr|| ' '||hms_getaddress(hp_provid,hp_distid,hp_villid)) as address, hd_telephone as phone,he_diagnostic") \
					_T("	from hms_exam ") \
					_T("	LEFT JOIN hms_doc on (hd_docno= he_docno) ") \
					_T("		LEFT JOIN hms_patient ON (he_patientno= hp_patientno) ") \
					_T("		where he_docno= %ld and he_receptidx= %ld "),m_nDocno, m_nReceptNo);	

		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("pname"),m_szPatientName);
			rs.GetValue(_T("yob"),m_nYob);
			rs.GetValue(_T("address"),m_szAdress);
			rs.GetValue(_T("phone"),m_szPhone);
			rs.GetValue(_T("patientno"),m_nPatientNo);
			rs.GetValue(_T("he_diagnostic"), m_szDiagnostic);
			CDate dte;
			dte.ParseDate(pMF->GetSysDate());
			dte += 2;
			m_szAppointmentDate.Format(_T("%s"), dte.GetDate());
		}

	}
	UpdateData(false);
}
void CHMSAddAppointmentA20::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(GetMode() == VM_EDIT )
	{
		m_hms_appointment_detailTbl.SetValue(_T("HAD_UPDATEDDATE"), pMF->GetSysDateTime()); 
		m_hms_appointment_detailTbl.SetValue(_T("HAD_UPDATEDBY"), pMF->GetCurrentUser()); 
	}
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DATE"), m_szAppointmentDate); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_CREATEDBY"), pMF->GetCurrentUser()); 

	m_hms_appointment_detailTbl.SetValue(_T("HAD_DOCNO"), m_nDocno); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_PATIENTNO"), m_nPatientNo); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_ADRESS"), m_szAdress); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_PHONE"), m_szPhone); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DIAGNOSTIC"), m_szDiagnostic); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_TRUSUSE"), m_szTrustKey); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_RECORDNO"), m_szRecordNo); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_TREATTIMES"), m_nTreattime); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DOSE"),m_szTherapeuticdoseKey); 
	m_hms_appointment_detailTbl.SetValue(_T("HAD_CONTENT"), m_szIotKey);

	m_hms_appointment_detailTbl.SetValue(_T("HAD_THE"), m_szbeKey);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DICAN"),m_szDiCanKey);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_TG"), m_nTG);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_ATG"), m_nATG);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DOCTOR"), m_szDoctorKey);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_type"), m_szTypeKey);
	m_hms_appointment_detailTbl.SetValue(_T("HAD_DEPTID"), pMF->GetCurrentDepartmentID());
	

}
void CHMSAddAppointmentA20::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nSearchDoc=0;
	m_szSearchRecord.Empty();
	m_szSearchName.Empty();
	m_nDocno=0;
	m_szPatientName.Empty();
	m_nYob=0;
	m_szAdress.Empty();
	m_szPhone.Empty();
	m_szTypeKey.Empty();
	m_szDiagnostic.Empty();
	m_szTrustKey.Empty();
	m_szbeKey.Empty();
	m_szDiCanKey.Empty();
	m_nTG=0;
	m_nATG=0;
	m_szAppointmentDate.Empty();
	m_szRecordNo.Empty();
	m_szDoctorKey.Empty();
	m_nTreattime=0;
	m_szTherapeuticdoseKey.Empty();
	m_szIotKey.Empty();
	m_szTypeSearchKey.Empty();
	m_szStage.Empty();

}
int CHMSAddAppointmentA20::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 6, 7, -1);
			m_wndDocno.EnableWindow(false);
			m_wndPatientName.EnableWindow(false);
			m_wndYob.EnableWindow(false);
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 3, 5, -1);
			m_wndDocno.EnableWindow(false);
			m_wndPatientName.EnableWindow(false);
			m_wndYob.EnableWindow(false);
			m_wndAdress.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndDelete.EnableWindow(true);
			m_wndPrintAppoint.EnableWindow(true);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		EnableGroup(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSAddAppointmentA20::OnFromDateChange(){
	
} */
/*void CHMSAddAppointmentA20::OnFromDateSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnFromDateKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnToDateChange(){
	
} */
/*void CHMSAddAppointmentA20::OnToDateSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnToDateKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnToDateCheckValue(){
	return 0;
} 
void CHMSAddAppointmentA20::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CHMSAddAppointmentA20::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nTotalOrder = 0;
	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 22);
	xls.SetColumnWidth(6,12);

	xls.SetColumnWidth(7,14);
	xls.SetColumnWidth(8,14);
	xls.SetColumnWidth(9,20);
	xls.SetColumnWidth(10,15);
	xls.SetColumnWidth(11,15);
	xls.SetColumnWidth(12,15);
	xls.SetColumnWidth(13,15);


	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellMergedColumns(0, 3, 6);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("LỊCH HẸN KHOA A20"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header

	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số HS"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Mã BA"));
	arrCol.Add(_T("Năm Sinh"));
	arrCol.Add(_T("Địa chỉ"));
	arrCol.Add(_T("Điện thoại"));
	arrCol.Add(_T("Chẩn đoán"));
	arrCol.Add(_T("Ngày hẹn"));
	arrCol.Add(_T("Lần điều trị"));
	arrCol.Add(_T("Liều điều trị"));
	arrCol.Add(_T("Iot 131"));
	arrCol.Add(_T("Người tạo"));
	arrCol.Add(_T("Chắc chắn đến"));

	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 4, arrCol.GetAt(i), 4098, true);
	nRow = 5;
	for( int i=0; i < m_wndList.GetItemCount();i++)
	{
		for(int j=0; j < m_wndList.GetColumnCount(); j++)
		{
			
			tmpStr= m_wndList.GetItemText(i,j);
		
			xls.SetCellText(j, nRow, tmpStr, FMT_TEXT);
			
		}
		nRow++;

	}
	
	/*if (nTotalOrder > 0)
	{
		xls.SetCellText(4, nRow, _T("Số đơn:"), 4098, true);
		xls.SetCellText(5, nRow, int2str(nTotalOrder), FMT_NUMBER1, true);
		nRow++;
		xls.SetCellText(4, nRow, _T("Tổng số tiền:"), 4098, true);
		tmpStr.Format(_T("%f"), nTotalAmount);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	}*/
	EndWaitCursor();

	xls.Save(_T("Exports\\DanhsachhenA20.xls"));
	
	
} 
void CHMSAddAppointmentA20::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ShowMessageBox(_T("Chưa có mẫu in được thiết lập!"),MB_ICONERROR | MB_OK);
} 
/*void CHMSAddAppointmentA20::OnSearchDocChange(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchDocSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchDocKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnSearchDocCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnSearchRecordChange(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchRecordSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchRecordKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnSearchRecordCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnSearchNameChange(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchNameSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnSearchNameKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSAddAppointmentA20::OnListDblClick(){
	
} 
void CHMSAddAppointmentA20::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_nDocno= str2long(m_wndList.GetItemText(nNewItem,0));
	m_bLoad= false;
	GetDataToScreen();
	SetMode(VM_VIEW);
	
} 
int CHMSAddAppointmentA20::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nDocno = str2long(m_wndList.GetItemText(nSel, 0));

	int nRet = ShowMessageBox(_T("Bạn có muốn xóa lịch hẹn chi tiết của bệnh nhân không ?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(nRet == IDNO)
		return 0;
	else
	szSQL.Format(_T("hms_delete_AppointmentA20(%ld)"), nDocno);
	nRet = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"),szSQL);
	if (nRet < 0)
	{
		ShowMessageBox(_T("Không thể xóa được lịch hẹn, vui lòng xem lại điều kiện!"));
		return -1;
	}
	OnListLoadData();
	 return 0;
} 
long CHMSAddAppointmentA20::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szTrust,szXxx,szTreattime,szWhere;
	CString szTypeNew, szTypeOld;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nTreattime=0;
	UpdateData(true);
	if(!m_szTypeSearchKey.IsEmpty())
		szWhere.Format(_T(" and had_type='%s' "), m_szTypeSearchKey);
	szSQL.Format(_T("select had_docno,had_date,had_adress,had_phone,had_diagnostic,had_createdby, ") \
				_T("	get_patientname(had_docno) as pname, extract(year from hp_birthdate) as yob, ") \
				_T("	had_trususe,had_recordno,had_treattimes,had_dose,had_content,had_type,get_syssel_desc('hms_a20_type',had_type) as typename ") \
				_T("	from hms_appointment_detail  ") \
				_T(" left join hms_patient ON (hp_patientno= had_patientno) ") \
				_T(" where had_date BETWEEN TO_DATe('%s', 'YYYY-MM-DD')  ") \
				_T("	and  TO_DATE('%s', 'YYYY-MM-DD') %s AND HAD_DEPTID = '%s' order by had_type, had_createddate  "),m_szFromDate,m_szToDate, szWhere, pMF->GetCurrentDepartmentID());
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	int nTmp=1;
	int nGroup =0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("typename"),szTypeNew);
		if(!szTypeNew.IsEmpty() && szTypeNew !=szTypeOld )
		{
			nGroup++;
			tmpStr.Format(_T("%d"),nGroup);
		int nItem=	m_wndList.AddItems(
				_T(""),
					tmpStr,
				szTypeNew,NULL);

			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 2, nItem, 7, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, true);
			szTypeOld= szTypeNew;
			nTmp=1;


		}
		tmpStr.Format(_T("%d"),nTmp++);
		rs.GetValue(_T("had_trususe"),szXxx);
		 if(szXxx= _T("Y"))
			 szTrust.Format(_T("Chắc chắn đến"));
		 else 
			 szTrust.Format(_T("Không chắc chắn"));


		 rs.GetValue(_T("had_treattimes"),nTreattime);
		 
		szTreattime.Format(_T("Lần %d"),nTreattime);
		
		m_wndList.AddItems(
			rs.GetValue(_T("had_docno")),
			tmpStr, 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("had_recordno")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("had_adress")), 
			rs.GetValue(_T("had_phone")), 
			rs.GetValue(_T("had_diagnostic")), 
			rs.GetValue(_T("had_date")), 
			szTreattime, 
			rs.GetValue(_T("had_dose")), 
			rs.GetValue(_T("had_content")), 
			rs.GetValue(_T("had_createdby")), 
			szTrust, NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSAddAppointmentA20::OnDocnoChange(){
	
} */
/*void CHMSAddAppointmentA20::OnDocnoSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnDocnoKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnDocnoCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnPatientNameChange(){
	
} */
/*void CHMSAddAppointmentA20::OnPatientNameSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnPatientNameKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnYobChange(){
	
} */
/*void CHMSAddAppointmentA20::OnYobSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnYobKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnYobCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnAdressChange(){
	
} */
/*void CHMSAddAppointmentA20::OnAdressSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnAdressKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnAdressCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnPhoneChange(){
	
} */
/*void CHMSAddAppointmentA20::OnPhoneSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnPhoneKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnPhoneCheckValue(){
	return 0;
} 
void CHMSAddAppointmentA20::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnTypeSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// kiem tra va lay ra ngay hen gan nhat ma con trong
	CString szSQL,szDate;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	UpdateData(true);
	int nQty =0;
	int nCount =0;
	
	szSQL.Format(_T("select to_char(has_date,'YYYY/MM/DD') as has_date, HAS_QTY,HAS_5mci,HAS_xoamo  from hms_appointment_setup ") \
				_T(" where has_date >= to_date('%s','YYYY/MM/DD') AND HAS_DEPTID = '%s'") \
				_T(" order by has_date "), pMF->GetSysDate(), pMF->GetCurrentDepartmentID());
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		if(m_szTypeKey == _T("1"))
			rs.GetValue(_T("HAS_QTY"), nQty);
		if(m_szTypeKey == _T("2"))
			rs.GetValue(_T("HAS_5mci"), nQty);
		if(m_szTypeKey == _T("3"))
			rs.GetValue(_T("HAS_xoamo"), nQty);

		rs.GetValue(_T("has_date"),szDate);

		szSQL.Format(_T("select count(*) as qty from hms_appointment_detail  ") \
					_T("	where had_date = to_date('%s','YYYY-MM-DD') and had_type='%s' AND HAD_DEPTID = '%s'") , szDate, m_szTypeKey, pMF->GetCurrentDepartmentID());
		rs1.ExecSQL(szSQL);

		nCount = rs1.GetIntValue();
		
		if(nCount < nQty)
		{
			m_szAppointmentDate =  szDate;
			UpdateData(false);
			break;
		}

		
		rs.MoveNext();
	}
	 
}
/*void CHMSAddAppointmentA20::OnTypeSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnTypeKillfocus(){
	
}*/
long CHMSAddAppointmentA20::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szTypeKey);
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_a20_type' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddAppointmentA20::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAddAppointmentA20::OnDiagnosticChange(){
	
} */
/*void CHMSAddAppointmentA20::OnDiagnosticSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnDiagnosticKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSAddAppointmentA20::OnTrustSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	
} 
void CHMSAddAppointmentA20::OnTrustSelendok(){

	 
}
/*void CHMSAddAppointmentA20::OnTrustSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnTrustKillfocus(){
	
}*/
long CHMSAddAppointmentA20::OnTrustLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTrust.IsSearchKey() && !m_szTrustKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTrustKey
};
	m_wndTrust.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTrust.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	m_wndTrust.AddItems(
			_T("Y"), 
			_T("Chắc chắn điều trị"), NULL);
		m_wndTrust.AddItems(
			_T("N"), 
			_T("Không chắc chắn"), NULL);

	return 0;
}
/*void CHMSAddAppointmentA20::OnTrustAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAddAppointmentA20::OnbeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnbeSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnbeSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnbeKillfocus(){
	
} */
long CHMSAddAppointmentA20::OnbeLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndbe.IsSearchKey() && !m_szbeKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szbeKey);
	m_wndbe.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_a20_the' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndbe.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
} 
/*void CHMSAddAppointmentA20::OnbeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAddAppointmentA20::OnDiCanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnDiCanSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnDiCanSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnDiCanKillfocus(){
	
}*/
long CHMSAddAppointmentA20::OnDiCanLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiCan.IsSearchKey() && !m_szDiCanKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szDiCanKey);
	m_wndDiCan.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_a20_dican' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiCan.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddAppointmentA20::OnDiCanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAddAppointmentA20::OnTGChange(){
	
} */
/*void CHMSAddAppointmentA20::OnTGSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnTGKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnTGCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnATGChange(){
	
} */
/*void CHMSAddAppointmentA20::OnATGSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnATGKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnATGCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnAppointmentDateChange(){
	
} */
/*void CHMSAddAppointmentA20::OnAppointmentDateSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnAppointmentDateKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnAppointmentDateCheckValue(){
	return 0;
} 
/*void CHMSAddAppointmentA20::OnRecordNoChange(){
	
} */
/*void CHMSAddAppointmentA20::OnRecordNoSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnRecordNoKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnRecordNoCheckValue(){
	return 0;
} 
void CHMSAddAppointmentA20::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnDoctorSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnDoctorSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnDoctorKillfocus(){
	
}*/
long CHMSAddAppointmentA20::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
	};
	szWhere.AppendFormat(_T(" and (su_deptid='%s' or su_hms_xdept='%s' )"), pMF->m_szDept, pMF->m_UserInfo.su_hms_xdept);

	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user ") \
		_T("WHERE su_groupid in('P','D')  %s ORDER BY su_name "), szWhere);
//_fmsg(_T("%s"), szSQL);

	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddAppointmentA20::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAddAppointmentA20::OnTreattimeChange(){
	
} */
/*void CHMSAddAppointmentA20::OnTreattimeSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnTreattimeKillfocus(){
	
} */

int CHMSAddAppointmentA20::OnTreattimeCheckValue(){
	UpdateData(true);
	if(m_nTreattime == 1)
		m_szTherapeuticdoseKey= _T("2");
	else
		m_szTherapeuticdoseKey= _T("5");
	CString tmpStr;
	//m_wndTherapeuticdose.SetWindowText(m_szTherapeuticdoseKey);
	return 0;
}
void CHMSAddAppointmentA20::OnTherapeuticdoseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnTherapeuticdoseSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnTherapeuticdoseSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnTherapeuticdoseKillfocus(){
	
} */
long CHMSAddAppointmentA20::OnTherapeuticdoseLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTherapeuticdose.IsSearchKey() && !m_szTherapeuticdoseKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szTherapeuticdoseKey);
	m_wndTherapeuticdose.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_a20_lieu' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTherapeuticdose.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
} 
/*void CHMSAddAppointmentA20::OnTherapeuticdoseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSAddAppointmentA20::OnIotSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnIotSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnIotSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnIotKillfocus(){
	
}*/

long CHMSAddAppointmentA20::OnIotLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIot.IsSearchKey() && !m_szIotKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szIotKey);
	m_wndIot.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_dose_Iot131' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIot.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
void CHMSAddAppointmentA20::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAddAppointmentA20();
	
} 
void CHMSAddAppointmentA20::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddAppointmentA20::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAddAppointmentA20();
	
} 
void CHMSAddAppointmentA20::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAddAppointmentA20();
	
} 
void CHMSAddAppointmentA20::OnPrintAppointSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ShowMessageBox(_T("Chưa có mẫu in được thiết lập!"),MB_ICONERROR | MB_OK);
	
} 
void CHMSAddAppointmentA20::OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CHMSAddAppointmentA20::OnTypeSearchSelendok(){
	 
}
/*void CHMSAddAppointmentA20::OnTypeSearchSetfocus(){
	
}*/
/*void CHMSAddAppointmentA20::OnTypeSearchKillfocus(){
	
}*/
long CHMSAddAppointmentA20::OnTypeSearchLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeSearch.IsSearchKey() && !m_szTypeSearchKey.IsEmpty())
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szTypeSearchKey);
	m_wndTypeSearch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel  WHERE ss_id='hms_a20_type' %s ORDER BY cast(ss_code as integer) "), szWhere);
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddAppointmentA20::OnTypeSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAddAppointmentA20::OnStageChange(){
	
} */
/*void CHMSAddAppointmentA20::OnStageSetfocus(){
	
} */
/*void CHMSAddAppointmentA20::OnStageKillfocus(){
	
} */
int CHMSAddAppointmentA20::OnStageCheckValue(){
	return 0;
} 
int CHMSAddAppointmentA20::OnAddHMSAddAppointmentA20(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAddAppointmentA20::OnEditHMSAddAppointmentA20()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAddAppointmentA20::OnDeleteHMSAddAppointmentA20(){
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
 		OnCancelHMSAddAppointmentA20();
 	}
	return 0;
}
int CHMSAddAppointmentA20::OnSaveHMSAddAppointmentA20(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
		if(!CheckAddAppoinment() )
		{
			return -1;
		}
 		szSQL = m_hms_appointment_detailTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
 		if(!CheckAddAppoinment() )
		{
			return -1;
		}
		CString szWhere;		
 		szWhere.Format(_T(" WHERE had_docno= %ld"), m_nDocno);
 		szSQL = m_hms_appointment_detailTbl.GetUpdateSQL(_T("HAD_CREATEDDATE,HAD_CREATEDBY"));
 		szSQL += szWhere;
 	}
 	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
 	if(ret > 0)
 	{
 		//OnHMSAddAppointmentA20ListLoadData();
		//m_szFromDate= m_szAppointmentDate;
		//m_szToDate= m_szAppointmentDate;
		SetMode(VM_VIEW);
		OnListLoadData();
 		
		
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSAddAppointmentA20::OnCancelHMSAddAppointmentA20(){
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
int CHMSAddAppointmentA20::OnHMSAddAppointmentA20ListLoadData(){
	return 0;
}
void CHMSAddAppointmentA20::EnableGroup(bool bFlag){
		m_wndFromDate.EnableWindow(bFlag);
		m_wndToDate.EnableWindow(bFlag);
		m_wndSearchDoc.EnableWindow(bFlag);
		m_wndSearchRecord.EnableWindow(bFlag);
		m_wndSearchName.EnableWindow(bFlag);
		m_wndPrint.EnableWindow(bFlag);
		m_wndExport.EnableWindow(bFlag);
		m_wndLoad.EnableWindow(bFlag);
}
bool CHMSAddAppointmentA20::CheckAddAppoinment(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szTypeName;
	int nCount=0,nPatient=0;
	
	if(m_szTypeKey == _T("1"))
		szTypeName= _T("has_qty");
	if(m_szTypeKey == _T("2"))
		szTypeName= _T("HAS_5mci");
	if(m_szTypeKey == _T("3"))
		szTypeName= _T("HAS_xoamo");
	szSQL.Format(_T("select %s from hms_appointment_setup where has_date = to_date('%s','YYYY-MM-DD') and has_deptid='%s' "),szTypeName,m_szAppointmentDate, pMF->GetCurrentDepartmentID());
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Bạn chưa thiết lập ngày hẹn này.Không thể thêm bệnh nhân"));
		return false;
	}
	nCount= rs.GetIntValue();
	szSQL.Format(_T("Select count(*) as qty from HMS_APPOINTMENT_DETAIL  ") \
		_T("	where had_date = to_date('%s','YYYY-MM-DD') and HAD_type ='%s' and had_deptid='%s' "),m_szAppointmentDate,m_szTypeKey, pMF->GetCurrentDepartmentID());
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return true;
	nPatient = rs.GetIntValue();
	if( nPatient >= nCount) 
	{
		ShowMessageBox(_T("Số lượng bệnh nhân hẹn đã vượt quá số lượng hẹn được thiết lập "));
		return false;
	}
	else 
		return true;
}