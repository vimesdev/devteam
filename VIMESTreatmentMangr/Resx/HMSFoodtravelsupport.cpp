#include "HMSFoodtravelsupport.h"
#include "MainFrm.h"
/*static void _OnPatientnameChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameChange();
} */
/*static void _OnPatientnameSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameSetfocus();} */ 
/*static void _OnPatientnameKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameKillfocus();
} */
static int _OnPatientnameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnPatientnameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnSexCheckValue();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnDocnoCheckValue();
} 
/*static void _OnDepidChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidChange();
} */
/*static void _OnDepidSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidSetfocus();} */ 
/*static void _OnDepidKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidKillfocus();
} */
static int _OnDepidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnDepidCheckValue();
} 
/*static void _OnInsuranceChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceChange();
} */
/*static void _OnInsuranceSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceSetfocus();} */ 
/*static void _OnInsuranceKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceKillfocus();
} */
static int _OnInsuranceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnInsuranceCheckValue();
} 
/*static void _OnAdmitdateChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateChange();
} */
/*static void _OnAdmitdateSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateSetfocus();} */ 
/*static void _OnAdmitdateKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateKillfocus();
} */
static int _OnAdmitdateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnHomeToHospitalChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalChange();
} */
/*static void _OnHomeToHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalSetfocus();} */ 
/*static void _OnHomeToHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalKillfocus();
} */
static int _OnHomeToHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodtravelsupport* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport*)pWnd)->OnListItemDblClick();
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFoodtravelsupport*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListItemDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnListItemDeleteItem();
} 
static int _OnAddHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnAddHMSFoodtravelsupport();
} 
static int _OnEditHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnEditHMSFoodtravelsupport();
} 
static int _OnDeleteHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnDeleteHMSFoodtravelsupport();
} 
static int _OnSaveHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnSaveHMSFoodtravelsupport();
} 
static int _OnCancelHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnCancelHMSFoodtravelsupport();
} 
CHMSFoodtravelsupport::CHMSFoodtravelsupport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 470;
	SetDefaultValues();
}
CHMSFoodtravelsupport::~CHMSFoodtravelsupport(){
}
void CHMSFoodtravelsupport::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 320, 291);
	m_wndInformationdistribution.Create(this, _T("Information distribution"), 5, 296, 320, 381);
	m_wndListfood.Create(this, _T("List on food supply"), 324, 5, 894, 460);
	m_wndPatientnameLabel.Create(this, _T("Patient Name"), 11, 60, 115, 85);
	m_wndPatientname.Create(this,120, 60, 312, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 11, 90, 115, 115);
	m_wndAge.Create(this,120, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 243, 115);
	m_wndSex.Create(this,248, 90, 311, 115); 
	m_wndDocnoLabel.Create(this, _T("Document No"), 11, 30, 115, 55);
	m_wndDocno.Create(this,120, 30, 221, 55); 
	m_wndDepidLabel.Create(this, _T("Dept"), 11, 202, 115, 227);
	m_wndDepid.Create(this,120, 202, 312, 227); 
	m_wndInsuranceLabel.Create(this, _T("Insurance"), 11, 232, 115, 257);
	m_wndInsurance.Create(this,120, 232, 312, 257); 
	m_wndAdmitdateLabel.Create(this, _T("Admitdate"), 11, 262, 115, 287);
	m_wndAdmitdate.Create(this,120, 262, 242, 287); 
	m_wndAddressLabel.Create(this, _T("Address"), 11, 120, 115, 197);
	m_wndAddress.Create(this,120, 120, 312, 197); 
	m_wndDistanceLabel.Create(this, _T("Distance"), 11, 322, 115, 347);
	m_wndHomeToHospital.Create(this,120, 322, 242, 347); 
	m_wndSourceLabel.Create(this, _T("Source"), 11, 352, 115, 377);
	m_wndSource.Create(this,120, 352, 312, 377); 
	m_wndAdd.Create(this, _T("&Add"), 68, 387, 148, 412);
	m_wndEdit.Create(this, _T("&Edit"), 153, 387, 233, 412);
	m_wndDelete.Create(this, _T("&Delete"), 238, 387, 318, 412);
	m_wndSave.Create(this, _T("&Save"), 68, 417, 148, 442);
	m_wndCancel.Create(this, _T("&Cancel"), 153, 417, 233, 442);
	m_wndPrint.Create(this, _T("&Print"), 238, 417, 318, 442);
	m_wndListItem.Create(this,330, 28, 890, 453); 

}
void CHMSFoodtravelsupport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientname.SetLimitText(15);
	m_wndPatientname.SetCheckValue(true);
	m_wndAge.SetMax(CDate(pMF->GetSysDate()));
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1);
	m_wndSex.SetCheckValue(true);
	m_wndDocno.SetCheckValue(true);
	m_wndDepid.SetLimitText(7);
	m_wndDepid.SetCheckValue(true);
	m_wndInsurance.SetLimitText(35);
	m_wndInsurance.SetCheckValue(true);
	m_wndAdmitdate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitdate.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndHomeToHospital.SetLimitText(35);
	m_wndHomeToHospital.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSource.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndListItem.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 50);
	m_wndListItem.InsertColumn(1, _T("Date"), CFMT_DATE, 80);
	m_wndListItem.InsertColumn(2, _T("Desc"), CFMT_TEXT, 150);
	m_wndListItem.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);
	m_wndListItem.InsertColumn(4, _T("Dept"), CFMT_TEXT, 100);
	m_hms_foodtravelsupportTbl.SetTableName(_T("hms_foodtravelsupport"));
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_docno"), dfLong); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_distance"), dfFloat); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_type"), dfText, 2); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_insno"), dfText, 25); 
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_updateddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_ethnic"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_religion"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_provid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_distid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_villid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_occupation"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_rank"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_position"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_type"), dfText, 1); 
	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_createdby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_createddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_patientno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_deptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_dischargedate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 
	m_hms_treatment_recordTbl.AddField(_T("htr_suggestion"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_sumtreat"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htr_doctor"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_outpatient"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_tdeptid"), dfText, 7); 
	m_hms_treatment_recordTbl.AddField(_T("htrf_invoicefee"), dfLong); 
	m_hms_treatment_recordTbl.AddField(_T("htrf_acceptedfee"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htrf_accepteddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htrf_acceptedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_emergency"), dfText, 1); 

}
void CHMSFoodtravelsupport::OnSetWindowEvents(){
	//m_wndPatientname.SetEvent(WE_CHANGE, _OnPatientnameChangeFnc);
	//m_wndPatientname.SetEvent(WE_SETFOCUS, _OnPatientnameSetfocusFnc);
	//m_wndPatientname.SetEvent(WE_KILLFOCUS, _OnPatientnameKillfocusFnc);
	m_wndPatientname.SetEvent(WE_CHECKVALUE, _OnPatientnameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndDepid.SetEvent(WE_CHANGE, _OnDepidChangeFnc);
	//m_wndDepid.SetEvent(WE_SETFOCUS, _OnDepidSetfocusFnc);
	//m_wndDepid.SetEvent(WE_KILLFOCUS, _OnDepidKillfocusFnc);
	m_wndDepid.SetEvent(WE_CHECKVALUE, _OnDepidCheckValueFnc);
	//m_wndInsurance.SetEvent(WE_CHANGE, _OnInsuranceChangeFnc);
	//m_wndInsurance.SetEvent(WE_SETFOCUS, _OnInsuranceSetfocusFnc);
	//m_wndInsurance.SetEvent(WE_KILLFOCUS, _OnInsuranceKillfocusFnc);
	m_wndInsurance.SetEvent(WE_CHECKVALUE, _OnInsuranceCheckValueFnc);
	//m_wndAdmitdate.SetEvent(WE_CHANGE, _OnAdmitdateChangeFnc);
	//m_wndAdmitdate.SetEvent(WE_SETFOCUS, _OnAdmitdateSetfocusFnc);
	//m_wndAdmitdate.SetEvent(WE_KILLFOCUS, _OnAdmitdateKillfocusFnc);
	m_wndAdmitdate.SetEvent(WE_CHECKVALUE, _OnAdmitdateCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndHomeToHospital.SetEvent(WE_CHANGE, _OnHomeToHospitalChangeFnc);
	//m_wndHomeToHospital.SetEvent(WE_SETFOCUS, _OnHomeToHospitalSetfocusFnc);
	//m_wndHomeToHospital.SetEvent(WE_KILLFOCUS, _OnHomeToHospitalKillfocusFnc);
	m_wndHomeToHospital.SetEvent(WE_CHECKVALUE, _OnHomeToHospitalCheckValueFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	m_wndListItem.AddEvent(1, _T("Delete"), _OnListItemDeleteItemFnc, 0, VK_DELETE, 0);

}
void CHMSFoodtravelsupport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientname.GetDlgCtrlID(), m_szPatientname);
	DDX_TextEx(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_Text(pDX, m_wndDepid.GetDlgCtrlID(), m_szDepid);
	DDX_Text(pDX, m_wndInsurance.GetDlgCtrlID(), m_szInsurance);
	DDX_TextEx(pDX, m_wndAdmitdate.GetDlgCtrlID(), m_szAdmitdate);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndHomeToHospital.GetDlgCtrlID(), m_szHomeToHospital);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);

}
void CHMSFoodtravelsupport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hp_firstname"), m_szPatientname);
	rs.GetValue(_T("hp_birthdate"), m_szAge);
	rs.GetValue(_T("hp_sex"), m_szSex);
	rs.GetValue(_T("htr_docno"), m_nDocno);
	rs.GetValue(_T("htr_deptid"), m_szDepid);
	rs.GetValue(_T("htr_admitdate"), m_szAdmitdate);

}
void CHMSFoodtravelsupport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_firstname"), m_szPatientname);
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szAge);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSex);
	m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser());
	m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime());
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser());
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime());
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), m_nDocno);
	m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDepid);
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szAdmitdate);

}
void CHMSFoodtravelsupport::SetDefaultValues(){

	m_szPatientname.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_nDocno=0;
	m_szDepid.Empty();
	m_szInsurance.Empty();
	m_szAdmitdate.Empty();
	m_szAddress.Empty();
	m_szHomeToHospital.Empty();
	m_szSourceKey.Empty();

}
int CHMSFoodtravelsupport::SetMode(int nMode){
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
/*void CHMSFoodtravelsupport::OnPatientnameChange(){
	
} */
/*void CHMSFoodtravelsupport::OnPatientnameSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnPatientnameKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnPatientnameCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAgeChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAgeSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAgeKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnSexChange(){
	
} */
/*void CHMSFoodtravelsupport::OnSexSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnSexKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnSexCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnDocnoChange(){
	
} */
/*void CHMSFoodtravelsupport::OnDocnoSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnDocnoKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnDocnoCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnDepidChange(){
	
} */
/*void CHMSFoodtravelsupport::OnDepidSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnDepidKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnDepidCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnInsuranceChange(){
	
} */
/*void CHMSFoodtravelsupport::OnInsuranceSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnInsuranceKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnInsuranceCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAdmitdateChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAdmitdateSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAdmitdateKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAdmitdateCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAddressChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAddressSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAddressKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnHomeToHospitalChange(){
	
} */
/*void CHMSFoodtravelsupport::OnHomeToHospitalSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnHomeToHospitalKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnHomeToHospitalCheckValue(){
	return 0;
} 
void CHMSFoodtravelsupport::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnSourceSelendok(){
	 
}
/*void CHMSFoodtravelsupport::OnSourceSetfocus(){
	
}*/
/*void CHMSFoodtravelsupport::OnSourceKillfocus(){
	
}*/
long CHMSFoodtravelsupport::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFoodtravelsupport::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodtravelsupport::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnListItemDblClick(){
	
} 
void CHMSFoodtravelsupport::OnListItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodtravelsupport::OnListItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFoodtravelsupport::OnListItemLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListItem.AddItems(
			rs.GetValue(_T("Stt")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("Desc")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Dept")), NULL);
		rs.MoveNext();
	}
	m_wndListItem.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSFoodtravelsupport::OnAddHMSFoodtravelsupport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFoodtravelsupport::OnEditHMSFoodtravelsupport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodtravelsupport::OnDeleteHMSFoodtravelsupport(){
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
 		OnCancelHMSFoodtravelsupport(); 
 	}
	return 0;
}
int CHMSFoodtravelsupport::OnSaveHMSFoodtravelsupport(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_foodtravelsupportTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_foodtravelsupportTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSFoodtravelsupportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSFoodtravelsupport::OnCancelHMSFoodtravelsupport(){
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
int CHMSFoodtravelsupport::OnHMSFoodtravelsupportListLoadData(){
	return 0;
}
