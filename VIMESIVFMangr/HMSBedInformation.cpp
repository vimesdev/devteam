#include "HMSBedInformation.h"
#include "MainFrm.h"
#include "HMSDynBedLevelDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBedInformation*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBedInformation*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListDeleteItem();
} 
static int _OnListAddNewBedFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListAddNewBed();
} 
static int _OnListEditBedFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListEditBed();
}
static int _OnListDeleteBedFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListDeleteBed();
}
static int _OnListApplyDynamicPriceFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListApplyDynamicPrice();
} 

static int _OnListUnusedDynamicPriceFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnListUnusedDynamicPrice();
} 

/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnOutDateSetfocus();} */ 
static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnOutDateKillfocus();
} 
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnOutDateCheckValue();
} 
/*static void _OnDayOfTreatChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatChange();
} */
/*static void _OnDayOfTreatSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatSetfocus();} */ 
/*
static void _OnDayOfTreatKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatKillfocus();
}
*/
static int _OnDayOfTreatCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnDayOfTreatCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedInformation* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRoomAddNew();
}*/
static void _OnBedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedInformation* )pWnd)->OnBedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBedSelendokFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnBedSelendok();
}
/*static void _OnBedSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnBedKillfocus();
}*/
/*static void _OnBedKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnBedKillfocus();
}*/
static long _OnBedLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnBedLoadData();
}
/*static void _OnBedAddNewFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnBedAddNew();
}*/

static void _OnPriceBedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedInformation* )pWnd)->OnPriceBedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPriceBedSelendokFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPriceBedSelendok();
}
/*static void _OnPriceBedSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPriceBedKillfocus();
}*/
/*static void _OnPriceBedKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPriceBedKillfocus();
}*/
static long _OnPriceBedLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnPriceBedLoadData();
}
/*static void _OnPriceBedAddNewFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPriceBedAddNew();
}*/


static void _OnRequestOptionSelectFnc(CWnd *pWnd){
	 ((CHMSBedInformation*)pWnd)->OnRequestOptionSelect();
}
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedInformation* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDoctorAddNew();
}*/
static void _OnNurseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedInformation* )pWnd)->OnNurseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurseSelendokFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnNurseSelendok();
}
/*static void _OnNurseSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnNurseKillfocus();
}*/
/*static void _OnNurseKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnNurseKillfocus();
}*/
static long _OnNurseLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnNurseLoadData();
}
/*static void _OnNurseAddNewFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnNurseAddNew();
}*/
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnRequestPriceCheckValue();
}

static void _OnBedDiagramSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnBedDiagramSelect();
}


static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBedInformation *pVw = (CHMSBedInformation *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSBedInformationFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnAddHMSBedInformation();
} 
static int _OnEditHMSBedInformationFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnEditHMSBedInformation();
} 
static int _OnDeleteHMSBedInformationFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnDeleteHMSBedInformation();
} 
static int _OnSaveHMSBedInformationFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnSaveHMSBedInformation();
} 
static int _OnCancelHMSBedInformationFnc(CWnd *pWnd){
	 return ((CHMSBedInformation*)pWnd)->OnCancelHMSBedInformation();
} 
CHMSBedInformation::CHMSBedInformation(){

	m_nDlgWidth = 625;
	m_nDlgHeight = 565;
	SetDefaultValues();
}
CHMSBedInformation::~CHMSBedInformation(){
}
void CHMSBedInformation::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 620, 530);	
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 30, 90, 55);
	m_wndAdmitDate.Create(this,95, 30, 215, 55); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 220, 30, 300, 55);
	m_wndOutDate.Create(this,305, 30, 425, 55); 
	m_wndDayOfTreatLabel.Create(this, _T("Day of treat"), 430, 30, 530, 55);
	m_wndDayOfTreat.Create(this,535, 30, 615, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 60, 90, 85);
	m_wndRoom.Create(this,95, 60, 425, 85); 
	m_wndBedLabel.Create(this, _T("Bed"), 10, 90, 90, 115);
	m_wndBed.Create(this,95, 90, 425, 115); 
	m_wndPriceBedLabel.Create(this, _T("Bed Price"), 10, 120, 90, 145);
	m_wndPriceBed.Create(this,95, 120, 425, 145); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 150, 90, 175);
	m_wndDoctor.Create(this,95, 150, 425, 175); 
	m_wndNurse.Create(this,95, 180, 425, 205); 
	m_wndNurseLabel.Create(this, _T("Nurse"), 10, 180, 90, 205);
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 430, 60, 530, 85);
	m_wndServicePrice.Create(this,535, 60, 615, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 430, 90, 530, 115);
	m_wndInsurancePrice.Create(this,535, 90, 615, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 430, 120, 530, 145);
	m_wndPolicyPrice.Create(this,535, 120, 615, 145); 
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 430, 150, 530, 175);
	m_wndRequestPrice.Create(this,535, 150, 615, 175); 
	
	m_wndBedDiagram.Create(this, _T("Sơ đồ giường"), 5, 535, 105, 560);

	m_wndAdd.Create(this, _T("&Add"), 170, 535, 255, 560);
	m_wndTerminate.Create(this, _T("&Terminate"), 260, 535, 345, 560);
	m_wndDelete.Create(this, _T("&Delete"), 350, 535, 435, 560);
	m_wndSave.Create(this, _T("&Save"), 440, 535, 525, 560);
	m_wndCancel.Create(this, _T("&Cancel"), 530, 535, 615, 560);
	
	m_wndList.Create(this,10, 210, 615, 525); 
}
void CHMSBedInformation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndAdmitDate.SetCheckValue(true);
//	m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndOutDate.SetCheckValue(true);
//	m_wndDayOfTreat.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(81);
	m_wndBed.SetCheckValue(true);
	m_wndBed.LimitText(81);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(65);
//	m_wndNurse.SetCheckValue(true);
	m_wndNurse.LimitText(65);
	m_wndServicePrice.SetLimitText(16);
//	m_wndServicePrice.SetCheckValue(true);
	m_wndServicePrice.SetReadOnly(true);
	m_wndServicePrice.ModifyStyle(ES_LEFT, ES_RIGHT);
	m_wndInsurancePrice.SetLimitText(16);
	//m_wndInsurancePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetReadOnly(true);
	m_wndInsurancePrice.ModifyStyle(ES_LEFT, ES_RIGHT);
	m_wndPolicyPrice.SetLimitText(16);
	//m_wndPolicyPrice.SetCheckValue(true);
	m_wndPolicyPrice.SetReadOnly(true);
	m_wndPolicyPrice.ModifyStyle(ES_LEFT, ES_RIGHT);
	m_wndRequestPrice.SetLimitText(16);
	//m_wndRequestPrice.SetCheckValue(true);
	m_wndRequestPrice.SetReadOnly(true);
	m_wndRequestPrice.ModifyStyle(ES_LEFT, ES_RIGHT);

	m_wndBedDiagram.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Admit Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(2, _T("Out Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(3, _T("Dept ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Room"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Bed"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);	
	m_wndList.InsertColumn(7, _T("Refidx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("roomid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("doctor"), CFMT_TEXT, 0);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPriceBed.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPriceBed.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndPriceBed.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndPriceBed.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndPriceBed.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndPriceBed.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndPriceBed.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndBed.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndBed.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndBed.InsertColumn(2, _T("Number"), CFMT_NUMBER, 50);
	m_wndBed.InsertColumn(3, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndNurse.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndNurse.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_hms_bedTbl.SetTableName(_T("hms_bed"));
	m_hms_bedTbl.AddField(_T("hb_createdby"), dfText, 15); 
	m_hms_bedTbl.AddField(_T("hb_createddate"), dfDateTime); 
	m_hms_bedTbl.AddField(_T("hb_updatedby"), dfText, 15); 
	m_hms_bedTbl.AddField(_T("hb_updateddate"), dfDateTime); 
	m_hms_bedTbl.AddField(_T("hb_patientno"), dfLong); 
	m_hms_bedTbl.AddField(_T("hb_docno"), dfLong); 
	m_hms_bedTbl.AddField(_T("hb_deptid"), dfText, 7); 
	m_hms_bedTbl.AddField(_T("hb_roomid"), dfInteger); 
	m_hms_bedTbl.AddField(_T("hb_bedid"), dfInteger); 
	m_hms_bedTbl.AddField(_T("hb_refidx"), dfInteger); 
	m_hms_bedTbl.AddField(_T("hb_idx"), dfInteger); 
	m_hms_bedTbl.AddField(_T("hb_admitdate"), dfDateTime); 
	m_hms_bedTbl.AddField(_T("hb_enddate"), dfDateTime); 
	m_hms_bedTbl.AddField(_T("hb_treatqty"), dfFloat); 
	m_hms_bedTbl.AddField(_T("hb_status"), dfText, 1); 
	m_hms_bedTbl.AddField(_T("hb_doctor"), dfText, 15); 
	m_hms_bedTbl.AddField(_T("hb_nurse"), dfText, 15);
	m_hms_bedTbl.AddField(_T("hb_reqpaid"), dfText, 1);
	m_hms_bedTbl.AddField(_T("hb_bedprice"), dfInteger);

	// them giuong dong de luc luu tu add luon
		m_hms_bed_itemsTbl.SetTableName(_T("hms_bed_items"));
	m_hms_bed_itemsTbl.AddField(_T("hbi_createdby"), dfText, 15); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_createddate"), dfDateTime); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_updatedby"), dfText, 15); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_updateddate"), dfDateTime); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_deptid"), dfText, 7); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_roomid"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_patientno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_docno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_refidx"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_priceid"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_idx"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_date"), dfDate); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_qty"), dfFloat); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_group"), dfText, 7); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_invoiceno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_insinvoice"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_iaccept"), dfText, 1); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_unitprice"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_cost"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_difcost"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_discount"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_patdebt"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_patpaid"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_difpaid"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_payrate"), dfInteger); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_reqpaid"), dfText, 1); 
	
}
void CHMSBedInformation::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Bed Information"));

	m_wndList.AddEvent(1, _T("Add new bed"), _OnListAddNewBedFnc);
	m_wndList.AddEvent(2, _T("Edit bed"), _OnListEditBedFnc);
	m_wndList.AddEvent(3, _T("Delete bed"), _OnListDeleteBedFnc);
	m_wndList.AddEvent(0, _T("-"));	
	m_wndList.AddEvent(4, _T("Apply Dynamic Price"), _OnListApplyDynamicPriceFnc);	
	m_wndList.AddEvent(5, _T("Unused Dynamic Price"), _OnListUnusedDynamicPriceFnc);

	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	//m_wndDayOfTreat.SetEvent(WE_CHANGE, _OnDayOfTreatChangeFnc);
	//m_wndDayOfTreat.SetEvent(WE_SETFOCUS, _OnDayOfTreatSetfocusFnc);
	//m_wndDayOfTreat.SetEvent(WE_KILLFOCUS, _OnDayOfTreatKillfocusFnc);
	m_wndDayOfTreat.SetEvent(WE_CHECKVALUE, _OnDayOfTreatCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndBed.SetEvent(WE_SELENDOK, _OnBedSelendokFnc);
	//m_wndBed.SetEvent(WE_SETFOCUS, _OnBedSetfocusFnc);
	//m_wndBed.SetEvent(WE_KILLFOCUS, _OnBedKillfocusFnc);
	m_wndBed.SetEvent(WE_SELCHANGE, _OnBedSelectChangeFnc);
	m_wndBed.SetEvent(WE_LOADDATA, _OnBedLoadDataFnc);
	//m_wndBed.SetEvent(WE_ADDNEW, _OnBedAddNewFnc);
	m_wndPriceBed.SetEvent(WE_SELENDOK, _OnPriceBedSelendokFnc);
	//m_wndPriceBed.SetEvent(WE_SETFOCUS, _OnPriceBedSetfocusFnc);
	//m_wndPriceBed.SetEvent(WE_KILLFOCUS, _OnPriceBedKillfocusFnc);
	m_wndPriceBed.SetEvent(WE_SELCHANGE, _OnPriceBedSelectChangeFnc);
	m_wndPriceBed.SetEvent(WE_LOADDATA, _OnPriceBedLoadDataFnc);
	//m_wndPriceBed.SetEvent(WE_ADDNEW, _OnPriceBedAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndNurse.SetEvent(WE_SELENDOK, _OnNurseSelendokFnc);
	//m_wndNurse.SetEvent(WE_SETFOCUS, _OnNurseSetfocusFnc);
	//m_wndNurse.SetEvent(WE_KILLFOCUS, _OnNurseKillfocusFnc);
	m_wndNurse.SetEvent(WE_SELCHANGE, _OnNurseSelectChangeFnc);
	m_wndNurse.SetEvent(WE_LOADDATA, _OnNurseLoadDataFnc);
	//m_wndNurse.SetEvent(WE_ADDNEW, _OnNurseAddNewFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
	
	
	m_wndBedDiagram.SetEvent(WE_CLICK, _OnBedDiagramSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSBedInformationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSBedInformationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSBedInformationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSBedInformationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSBedInformationFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
}
void CHMSBedInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndDayOfTreat.GetDlgCtrlID(), m_nDayOfTreat);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndBed.GetDlgCtrlID(), m_szBedKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndNurse.GetDlgCtrlID(), m_szNurseKey);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_szServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_szInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_szPolicyPrice);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_szRequestPrice);
	DDX_TextEx(pDX, m_wndPriceBed.GetDlgCtrlID(), m_szPriceBedKey);

}
void CHMSBedInformation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_bed ") \
		_T(" LEFT JOIN hms_bedlist ON(hbl_deptid=hb_deptid AND hbl_roomid=hb_roomid AND hbl_id=hb_bedid) ") \
		_T(" WHERE hb_docno=%ld AND hb_idx=%d"), pMF->m_nDocumentNo, m_nBedIdx);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("hb_idx"), m_nBedIdx);		
		rs.GetValue(_T("hb_roomid"), m_szRoomKey);
		//pMF->m_nRoomID = ToInt(m_szRoomKey);
		rs.GetValue(_T("hb_bedid"), m_szBedKey);

		rs.GetValue(_T("hb_admitdate"), m_szAdmitDate);
		rs.GetValue(_T("hb_enddate"), m_szOutDate);
		rs.GetValue(_T("hb_treatqty"), m_nDayOfTreat);
		rs.GetValue(_T("hb_doctor"), m_szDoctorKey);
		rs.GetValue(_T("hb_nurse"), m_szNurseKey);
		rs.GetValue(_T("hb_status"), m_szStatus);
		rs.GetValue(_T("hb_dynprice"), m_szDynPrice);
		rs.GetValue(_T("hbl_servprice"), tmpStr);
		FormatCurrencyStr(tmpStr, m_szServicePrice);
		rs.GetValue(_T("hbl_insprice"), tmpStr);
		FormatCurrencyStr(tmpStr, m_szInsurancePrice);
		rs.GetValue(_T("hbl_polprice"), tmpStr);
		FormatCurrencyStr(tmpStr, m_szPolicyPrice);
		rs.GetValue(_T("hbl_servprice"), tmpStr);
		FormatCurrencyStr(tmpStr, m_szRequestPrice);

		rs.GetValue(_T("hb_bedprice"),m_szPriceBedKey);

		rs.GetValue(_T("hbl_reqpaid"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bRequestOption = TRUE;
		else
			m_bRequestOption = FALSE;

		SetMode(VM_VIEW);
		if(m_szStatus != _T("O"))
			m_wndAdd.EnableWindow(true);
	}
}
void CHMSBedInformation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(hb_idx), 0)+1 FROM hms_bed WHERE hb_docno=%ld"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		m_nBedIdx = rs.GetIntValue();
	}
	
	m_hms_bedTbl.SetValue(_T("hb_createdby"), pMF->GetCurrentUser());
	m_hms_bedTbl.SetValue(_T("hb_createddate"), pMF->GetSysDateTime());
	m_hms_bedTbl.SetValue(_T("hb_updatedby"), pMF->GetCurrentUser());
	m_hms_bedTbl.SetValue(_T("hb_updateddate"), pMF->GetSysDateTime());
	m_hms_bedTbl.SetValue(_T("hb_patientno"), pMF->m_nPatientNo);
	m_hms_bedTbl.SetValue(_T("hb_docno"), pMF->m_nDocumentNo);
	m_hms_bedTbl.SetValue(_T("hb_deptid"), pMF->m_szDept);
	m_hms_bedTbl.SetValue(_T("hb_refidx"), pMF->m_nRefIndex);
	m_hms_bedTbl.SetValue(_T("hb_idx"), m_nBedIdx);
	m_hms_bedTbl.SetValue(_T("hb_roomid"), m_szRoomKey);
	m_hms_bedTbl.SetValue(_T("hb_bedid"), m_szBedKey);
	m_hms_bedTbl.SetValue(_T("hb_admitdate"), m_szAdmitDate);
	m_hms_bedTbl.SetValue(_T("hb_enddate"), m_szOutDate);
	m_hms_bedTbl.SetValue(_T("hb_treatqty"), m_nDayOfTreat);
	m_hms_bedTbl.SetValue(_T("hb_status"), m_szStatus);
	m_hms_bedTbl.SetValue(_T("hb_doctor"), m_szDoctorKey);
	m_hms_bedTbl.SetValue(_T("hb_nurse"), m_szNurseKey);

	CString tmpStr;
	tmpStr = m_wndBed.GetCurrent(3);
	m_hms_bedTbl.SetValue(_T("hb_reqpaid"), tmpStr);
	m_hms_bedTbl.SetValue(_T("hb_bedprice"), ToInt(m_szPriceBedKey));


	m_hms_bed_itemsTbl.SetValue(_T("hbi_createdby"), pMF->GetCurrentUser());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_createddate"), pMF->GetSysDateTime());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_updatedby"), pMF->GetCurrentUser());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_updateddate"), pMF->GetSysDateTime());

	m_hms_bed_itemsTbl.SetValue(_T("hbi_deptid"), m_szDeptID); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_roomid"), m_nRoomID); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_patientno"), pMF->m_nPatientNo); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_docno"), pMF->m_nDocumentNo); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_refidx"), m_nBedIdx);
	m_hms_bed_itemsTbl.SetValue(_T("hfe_group"), _T("C0000"));
	

}
void CHMSBedInformation::SetDefaultValues(){

	m_szAdmitDate.Empty();
	m_szOutDate.Empty();
	m_nDayOfTreat=0;
	m_szRoomKey.Empty();
	m_szBedKey.Empty();
	m_bRequestOption=FALSE;
	m_szDoctorKey.Empty();
	m_szNurseKey.Empty();
	m_szServicePrice.Empty();
	m_szInsurancePrice.Empty();
	m_szPolicyPrice.Empty();
	m_szRequestPrice.Empty();
	m_szPriceBedKey.Empty();

}
int CHMSBedInformation::SetMode(int nMode){
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
			m_wndAdmitDate.SetCheckValue(true);
			m_wndOutDate.EnableWindow(false);
			m_wndDayOfTreat.EnableWindow(false);
			m_szAdmitDate = pMF->GetSysDateTime();
			m_wndAdmitDate.SetFocus();
			m_szStatus = _T("O");
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOutDate.EnableWindow(false);
			m_wndDayOfTreat.EnableWindow(false);
 			break; 
		case VM_TERM:
			EnableControls(false); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOutDate.EnableWindow(true);
			m_wndOutDate.SetCheckValue(true);
			m_wndDayOfTreat.EnableWindow(true);

			m_szOutDate = pMF->GetSysDateTime();
			m_wndOutDate.SetFocus();
			m_szStatus = _T("T");

			if(pMF->m_szIncTreatDateFlag == _T("N"))
				szSQL.Format(_T("SELECT trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))- trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss')) FROM dual"), m_szOutDate, m_szAdmitDate);
			else
				szSQL.Format(_T("SELECT trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))- trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))+1 FROM DUAL "), m_szOutDate, m_szAdmitDate);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
				m_nDayOfTreat = rs.GetIntValue();
 			break; 
 		case VM_VIEW:
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 

 		UpdateData(FALSE); 
		
		m_wndBedDiagram.EnableWindow(TRUE);
 		return nOldMode; 
}
void CHMSBedInformation::OnListDblClick(){
	
} 
void CHMSBedInformation::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nBedIdx = ToInt(m_wndList.GetItemText(nNewItem, 0));
	m_nBedRefIndex =ToInt(m_wndList.GetItemText(nNewItem, 7));
	m_szDeptID = m_wndList.GetItemText(nNewItem, 3);
	m_nRoomID = str2int(m_wndList.GetItemText(nNewItem, 8));
	m_szDoctorKey = m_wndList.GetItemText(nNewItem, 9);
	GetDataToScreen(); 
} 
int CHMSBedInformation::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSBedInformation();
	 return 0;
} 

int CHMSBedInformation::OnListApplyDynamicPrice(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(GetMode() != VM_VIEW)
		return 0;
	if(!pMF->CheckPermission(_T("03.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->IsPatientDischarge())
	{
		ShowMessageBox(_T("This patient document has been closed. Cannot process"));
		return -1;
	}

	if(m_szStatus == _T("O"))
		return -1;	
	/*if(!pMF->IsActiveDocument() && pMF->GetCurrentUser() != _T("admin"))
	{
		ShowMessageBox(_T("This patient document has been closed. Cannot process"));
		return -1;
	}*/
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_bed_items WHERE hbi_docno=%ld and hbi_refidx=%d and hfe_status='P' "),
		pMF->m_nDocumentNo, m_nBedIdx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("The bed have been paid fees. Can not process"), MB_OK);
		return 0;
	}

	CHMSDynBedLevelDialog dlg(pMF);
	dlg.m_szDeptID = pMF->m_szDept;
	dlg.m_nRoomID = m_nRoomID;
	dlg.m_nID = m_nBedIdx;
	
	dlg.m_nTreatmentDays = m_nDayOfTreat;
	dlg.m_szFromDate = m_szAdmitDate;
	if(dlg.DoModal() ==IDOK && dlg.m_nID > 0){
		CString szSQL;
	//	szSQL.Format(_T("SELECT hms_bed_applydynprice(%ld, %d, '%s', %d) "), pMF->m_nDocumentNo, m_nBedIdx, pMF->m_szDept, dlg.m_nID);
//		pMF->ExecSQL(szSQL);
		OnListLoadData();
	}
	return 0;
} 

int CHMSBedInformation::OnListUnusedDynamicPrice(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("03.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(m_szStatus == _T("O") || m_szDynPrice != _T("Y"))
		return -1;

	if(pMF->IsPatientDischarge())
	{
		ShowMessageBox(_T("This patient document has been closed. Cannot process"));
		return -1;
	}

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_bed_items WHERE hbi_docno=%ld and hbi_refidx=%d and hfe_status='P' "),
		pMF->m_nDocumentNo, m_nBedIdx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("The bed have been paid fees. Can not process"), MB_OK);
		return 0;
	}
	int nMsg = ShowMessageBox(_T("Do you want to unused dynamic bed price?(Y/N) "), MB_YESNO|MB_DEFBUTTON2);
	if(nMsg == IDNO)
		return 0;

	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_bed_items WHERE hbi_docno=%ld and hbi_refidx=%d"), pMF->m_nDocumentNo, m_nBedIdx);
	pMF->ExecSQL(szSQL);
	szSQL.Format(_T("UPDATE hms_bed SET hb_dynprice='N' WHERE hb_docno=%ld and hb_idx=%d and hb_status='T' "), pMF->m_nDocumentNo, m_nBedIdx);
	pMF->ExecSQL(szSQL);
	pMF->Commit();
	OnListLoadData();
	return 0;
} 


long CHMSBedInformation::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDynPrice, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nCurSel = 0;
	int nItem;
	if (pMF->IsCancerPatient())
		szWhere.AppendFormat(_T(" and hb_refidx = %ld"), pMF->m_nRefIndex);


	szSQL.Format(_T(" SELECT hb_deptid,") \
_T("   hb_idx,") \
_T("   hb_refidx,") \
_T("   hb_admitdate,") \
_T("   hb_enddate,") \
_T("   hb_bedid,") \
_T("   hb_roomid,") \
_T("   hb_status,") \
_T("   hb_doctor,") \
_T("   hb_dynprice,") \
_T("   hrl_name AS roomname,") \
_T("   hbl_name AS bedname") \
_T(" FROM hms_bed") \
_T(" LEFT JOIN hms_roomlist") \
_T(" ON(hrl_deptid = hb_deptid") \
_T(" AND hrl_id    = hb_roomid)") \
_T(" LEFT JOIN hms_bedlist") \
_T(" ON(hbl_deptid  = hb_deptid") \
_T(" AND hbl_roomid = hb_roomid") \
_T(" AND hbl_id     = hb_bedid)") \
_T(" WHERE hb_docno =%ld %s") \
_T(" ORDER BY hb_idx"), pMF->m_nDocumentNo, szWhere);	
	rs.ExecSQL(szSQL);


	pMF->m_nRoomID = 0;
	pMF->m_nBedID = 0;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hb_status"), tmpStr);
		rs.GetValue(_T("hb_dynprice"), szDynPrice);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hb_idx")), 
			rs.GetValue(_T("hb_admitdate")), 
			rs.GetValue(_T("hb_enddate")), 
			rs.GetValue(_T("hb_deptid")), 
			rs.GetValue(_T("roomName")), 
			rs.GetValue(_T("bedName")), 
			tmpStr, 
			rs.GetValue(_T("hb_refidx")), 
			rs.GetValue(_T("hb_roomid")), 
			rs.GetValue(_T("hb_doctor")), 
			NULL);
		if(tmpStr == _T("O"))
		{
			nCurSel = m_wndList.GetItemCount()-1;
			rs.GetValue(_T("hb_roomid"), pMF->m_nRoomID);
			rs.GetValue(_T("hb_bedid"), pMF->m_nBedID);
			if(pMF->m_szDoctor.IsEmpty())
				rs.GetValue(_T("hb_doctor"), pMF->m_szDoctor);
		}

		if(szDynPrice == _T("Y")){
			m_wndList.SetSubItemBkColor(nItem, 5, RGB(0, 0, 255), FALSE);
			m_wndList.SetSubItemTextColor(nItem,5, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
		nCount++;
	}
	m_wndList.EndLoad(); 
	if(nCount <= 0)
		SetMode(VM_NONE);
	if(nCurSel > 0)
	{
		m_wndList.SetItemBkColor(nCurSel, COLOR_SEND, TRUE);
		m_wndList.SetItemTextColor(nCurSel, COLOR_WHITE, TRUE);
		m_nBedIdx = ToInt(m_wndList.GetItemText(nCurSel, 0));
	}
	else
	{
		m_wndList.SetCurSel(m_wndList.GetItemCount()-1);
		m_nBedIdx = ToInt(m_wndList.GetItemText(nCurSel, 0));
	}
	GetDataToScreen();
	return nCount;

}
/*void CHMSBedInformation::OnAdmitDateChange(){
	
} */
/*void CHMSBedInformation::OnAdmitDateSetfocus(){
	
} */
/*void CHMSBedInformation::OnAdmitDateKillfocus(){
	
} */
int CHMSBedInformation::OnAdmitDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT CASE WHEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') THEN 't' ELSE 'f' END FROM dual "), m_szAdmitDate, pMF->m_szEntryDate);	
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() == _T("f"))
	{
		return -1;
	}
	szSQL.Format(_T("SELECT CASE WHEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') <= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')+1 THEN 't' ELSE 'f' END AS status FROM dual "), m_szAdmitDate, pMF->GetSysDateTime());
	rs.ExecSQL(szSQL);	
	if(rs.GetStringValue() == _T("f"))
		return -1;
	return 0;
} 
/*void CHMSBedInformation::OnOutDateChange(){
	
} */
/*void CHMSBedInformation::OnOutDateSetfocus(){
	
} */
void CHMSBedInformation::OnOutDateKillfocus(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	
	if(pMF->m_szIncTreatDateFlag == _T("N"))
		szSQL.Format(_T("SELECT trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))- trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss')) FROM dual"), m_szOutDate, m_szAdmitDate);
	else
		szSQL.Format(_T("SELECT trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))- trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))+1 FROM DUAL "), m_szOutDate, m_szAdmitDate);
	rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);
	if(!rs.IsEOF())
		m_nDayOfTreat = rs.GetIntValue();
	else
		m_nDayOfTreat = 1;
	if(m_nDayOfTreat <= 0)
		m_nDayOfTreat = 1;

	UpdateData(false);

}
int CHMSBedInformation::OnOutDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT CASE WHEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') THEN 't' ELSE 'f' END  FROM dual "), m_szOutDate, m_szAdmitDate);
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() == _T("t"))
		return -1;
	return 0;
} 
/*void CHMSBedInformation::OnDayOfTreatChange(){
	
} */
/*void CHMSBedInformation::OnDayOfTreatSetfocus(){
	
} */
void CHMSBedInformation::OnDayOfTreatKillfocus(){
	
}
int CHMSBedInformation::OnDayOfTreatCheckValue(){
	COleDateTime adate, ddate;
	adate.ParseDateTime(m_szAdmitDate);
	ddate.ParseDateTime(m_szOutDate);
	int n = ddate-adate;
	if(m_nDayOfTreat > n+5)
		return -1;
	return 0;
} 
void CHMSBedInformation::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnRoomSelendok(){	
	m_wndBed.ResetContent();
	
}
/*void CHMSBedInformation::OnRoomSetfocus(){
	
}*/
/*void CHMSBedInformation::OnRoomKillfocus(){
	
}*/
long CHMSBedInformation::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0){
		szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szRoomKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_roomlist WHERE hrl_active ='Y' and hrl_deptid='%s' %s ORDER BY hrl_id"), pMF->m_szDept, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("hrl_id")), 
			rs.GetValue(_T("hrl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSBedInformation::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedInformation::OnBedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnBedSelendok(){
	
}
/*void CHMSBedInformation::OnBedSetfocus(){
	
}*/
/*void CHMSBedInformation::OnBedKillfocus(){
	
}*/
long CHMSBedInformation::OnBedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBed.IsSearchKey() && ToInt(m_szBedKey) > 0){
		szWhere.Format(_T(" AND hbl_id=%d "), ToInt(m_szBedKey));
	};
	m_wndBed.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hbl_id, hbl_name, hbl_reqpaid, ") \
				_T(" (select count(*) from hms_treatment_record left join hms_bed on(hb_docno=htr_docno) where htr_deptid='%s' and hb_roomid=hbl_roomid and hb_bedid=hbl_id and hb_status='O'  and htr_status='I' ) as NumberBed ") \
				_T(" FROM hms_bedlist WHERE hbl_active ='Y' and hbl_deptid='%s' AND hbl_roomid=%d %s ORDER BY hbl_id "),pMF->m_szDept, pMF->m_szDept, ToInt(m_szRoomKey), szWhere);

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndBed.AddItems(
			rs.GetValue(_T("hbl_id")), 
			rs.GetValue(_T("hbl_name")),
			rs.GetValue(_T("NumberBed")), 
			rs.GetValue(_T("hbl_reqpaid")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSBedInformation::OnBedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSBedInformation::OnPriceBedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnPriceBedSelendok(){
	 
}
/*void CHMSBedInformation::OnPriceBedSetfocus(){
	
}*/
/*void CHMSBedInformation::OnPriceBedKillfocus(){
	
}*/
long CHMSBedInformation::OnPriceBedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriceBed.IsSearchKey() && ToInt(m_szPriceBedKey) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szPriceBedKey));
	};
	m_wndPriceBed.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y'  %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceBed.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")), 
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSBedInformation::OnPriceBedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSBedInformation::OnRequestOptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSBedInformation::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnDoctorSelendok(){
	 
}
/*void CHMSBedInformation::OnDoctorSetfocus(){
	
}*/
/*void CHMSBedInformation::OnDoctorKillfocus(){
	
}*/
long CHMSBedInformation::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_groupid in('D','P') "));
	if(GetMode() == VM_VIEW)
		pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey, m_szDeptID, szFilter);
	else
		pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey, pMF->m_szDept, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	};
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
*/
	return 0;
}
/*void CHMSBedInformation::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedInformation::OnNurseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnNurseSelendok(){
	 
}
/*void CHMSBedInformation::OnNurseSetfocus(){
	
}*/
/*void CHMSBedInformation::OnNurseKillfocus(){
	
}*/
long CHMSBedInformation::OnNurseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_groupid in('N') "));
	return pMF->LoadDoctorList(&m_wndNurse, m_szNurseKey, pMF->m_szDept, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurse.IsSearchKey() && !m_szNurseKey.IsEmpty()){
	};
	m_wndNurse.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedInformation::OnNurseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxsGetMainWnd();
	
} */
/*void CHMSBedInformation::OnServicePriceChange(){
	
} */
/*void CHMSBedInformation::OnServicePriceSetfocus(){
	
} */
/*void CHMSBedInformation::OnServicePriceKillfocus(){
	
} */
int CHMSBedInformation::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSBedInformation::OnInsurancePriceChange(){
	
} */
/*void CHMSBedInformation::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSBedInformation::OnInsurancePriceKillfocus(){
	
} */
int CHMSBedInformation::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSBedInformation::OnPolicyPriceChange(){
	
} */
/*void CHMSBedInformation::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSBedInformation::OnPolicyPriceKillfocus(){
	
} */
int CHMSBedInformation::OnPolicyPriceCheckValue(){
	return 0;
} 
/*void CHMSBedInformation::OnRequestPriceChange(){
	
} */
/*void CHMSBedInformation::OnRequestPriceSetfocus(){
	
} */
/*void CHMSBedInformation::OnRequestPriceKillfocus(){
	
} */
int CHMSBedInformation::OnRequestPriceCheckValue(){
	return 0;
}

void CHMSBedInformation::OnBedDiagramSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	ShowMessageBox(_T("Xem chi tiết sơ đồ giường"));
	CString szPath;
	szPath.Format(_T("%s\\BedMap"), pMF->GetCurrentDirectory());
//	_msg(_T("%s"), szPath);
	ShellExecute(NULL, _T("open"), _T("bedmap.exe"), _T(""), szPath, SW_SHOW);
}

void CHMSBedInformation::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSBedInformation();	
} 
void CHMSBedInformation::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	if (m_szPriceBedKey.IsEmpty())
	{
		if (ShowMessageBox(_T("Chưa cập nhật thông tin giường động! Bạn có muốn cập nhật lại?"), MB_YESNO) == IDYES)
		{
			SetMode(VM_EDIT);
			m_wndPriceBed.SetFocus();
			return;
		}
	}
	OnEditHMSBedInformation();
} 
void CHMSBedInformation::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSBedInformation();
	
} 
void CHMSBedInformation::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSBedInformation();
	
} 
void CHMSBedInformation::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSBedInformation();
} 
int CHMSBedInformation::OnAddHMSBedInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("03.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(!pMF->IsActiveDocument())
		return -1;
	if(pMF->m_szOutpatient == _T("Y")){
		SetMode(VM_ADD);
		m_wndRoom.EnableWindow(false);
		m_wndBed.EnableWindow(false);
		m_wndAdmitDate.EnableWindow(false);
		return 0;
	}

	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(pMF->m_nDocumentNo <= 0)
		return 0;
	szSQL.Format(_T("SELECT hb_idx FROM hms_bed WHERE hb_docno=%ld AND hb_status='O' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		ShowMessageBox(_T("This bed opening. Unable to create"), MB_OK);
		return -1;
	}
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSBedInformation::OnEditHMSBedInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("03.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	
	if (pMF->m_nRefIndex != m_nBedRefIndex)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return -1;
	}

//	if(!pMF->IsActiveDocument())
//		return -1;

	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hcrf_acceptedfee FROM hms_clinical_record WHERE hcr_docno = %ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("hcrf_acceptedfee"), szStatus);
	if(szStatus == _T("Y") )
	{

		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x78\xE1\x63 nh\x1EADn ph\xED. Kh\xF4ng \x63ho ph\xE9p s\x1EED\x61 th\xF4ng tin gi\x1B0\x1EDDng"));
		return 0;
	}
//	pMF->m_wndPatientDocument.OnCheckTerminateDocument(pMF->m_nDocumentNo);*/

	szSQL.Format(_T("SELECT count(*) FROM hms_bed_items WHERE hbi_docno = %ld and hbi_refidx=%ld  "), 
		pMF->m_nDocumentNo, m_nBedIdx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue())
		return 0;
	

 	SetMode(VM_TERM);
	return 0;  
}
int CHMSBedInformation::OnDeleteHMSBedInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("03.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->IsPaymentFee(_T("B"), m_nBedIdx))
		return 0;
	if(m_szStatus != _T("O"))
		return -1;

 	CString szSQL; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_nBedIdx = ToInt(m_wndList.GetItemText(nSel, 0));
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("DELETE FROM  hms_bed WHERE  hb_docno=%ld AND hb_idx=%d and hb_status='O' "), pMF->m_nDocumentNo, m_nBedIdx ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){

		CString szEvent, szDesc;
		szEvent.Format(_T("DELETE"));
		szDesc.Format(_T("So HS: %ld  Ma khoa: %s Ngay bat dau: %s  Phong: %s Giuong : %s Bac Sy: %s "),
			pMF->m_nDocumentNo, m_szDeptID, m_szAdmitDate ,m_wndRoom.GetCurrent(1),m_wndBed.GetCurrent(1), m_wndDoctor.GetCurrent(1));	
		pMF->SystemLog(szEvent, szDesc);

		m_wndList.DeleteItem(nSel);
 		SetMode(VM_NONE); 
 		OnCancelHMSBedInformation(); 
 	}
	return 0;
}
int CHMSBedInformation::OnSaveHMSBedInformation(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT && GetMode() != VM_TERM) 
 		return -1; 
	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	CDate dte;
 	if(GetMode() == VM_ADD){ 
		if(pMF->m_szOutpatient == _T("Y")){
			szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_treatdoctor='%s' WHERe hcr_docno=%ld"), m_szDoctorKey, pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_treatment_record SET htr_doctor='%s' WHERe htr_docno=%ld and htr_idx=%d "), m_szDoctorKey, pMF->m_nDocumentNo, pMF->m_nRefIndex);
			pMF->ExecSQL(szSQL);

			if(pMF->m_szDoctor.IsEmpty())
			{
				pMF->m_szDoctor = m_szDoctorKey;
				pMF->m_wndPatientDocument.m_szDoctor = m_wndDoctor.GetCurrent(1);
			}
			else
			{
				pMF->m_wndPatientDocument.m_szDoctor = pMF->m_szDoctor;
			}
			pMF->m_wndPatientDocument.UpdateData(false);
			
			SetMode(VM_VIEW);
			return 1;
		}
		szSQL.Format(_T("select count(*) from hms_bed where hb_docno = %ld and hb_status = 'O'"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() <= 0) szSQL = m_hms_bedTbl.GetInsertSQL(); 
		else szSQL.Empty();
 	} 
 	else if(GetMode() == VM_EDIT || VM_TERM){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hb_docno=%ld AND hb_deptid='%s' AND hb_idx=%d "), 
			pMF->m_nDocumentNo, pMF->m_szDept, m_nBedIdx); 
 		szSQL = m_hms_bedTbl.GetUpdateSQL(_T("hb_createdby,hb_createddate,hb_patientno,hb_docno,hb_deptid, hb_idx")); 
 		szSQL += szWhere; 
 	} 
	
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		// ghi log nguoi cap nhat hoac ket thuc
		CString szEvent, szDesc;
		if(GetMode() == VM_EDIT)
		{
			szEvent.Format(_T("EDIT"));
			szDesc.Format(_T("So HS: %ld  Ma khoa: %s Ngay bat dau: %s  Phong: %s Giuong : %s Bac Sy: %s "),
				pMF->m_nDocumentNo, m_szDeptID, m_szAdmitDate ,m_wndRoom.GetCurrent(1),m_wndBed.GetCurrent(1), m_wndDoctor.GetCurrent(1));	
		}
		else if (GetMode() == VM_ADD )
		{
			szEvent.Format(_T("ADD"));
			szDesc.Format(_T("So HS: %ld  Ma khoa: %s Ngay bat dau: %s  Phong: %s Giuong : %s Bac Sy: %s "),
				pMF->m_nDocumentNo, m_szDeptID, m_szAdmitDate ,m_wndRoom.GetCurrent(1),m_wndBed.GetCurrent(1), m_wndDoctor.GetCurrent(1));	
		}
		else if (GetMode() == VM_TERM )
		{
			szEvent.Format(_T("TERMINATE"));
			szDesc.Format(_T("So HS: %ld  Ma khoa: %s Ngay bat dau: %s  Phong: %s Giuong : %s Bac Sy: %s "),
				pMF->m_nDocumentNo, m_szDeptID, m_szAdmitDate ,m_wndRoom.GetCurrent(1),m_wndBed.GetCurrent(1), m_wndDoctor.GetCurrent(1));	
		}	
		pMF->SystemLog(szEvent, szDesc);

		if(GetMode() == VM_ADD){
			szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_treatdoctor='%s' WHERe hcr_docno=%ld"), m_szDoctorKey, pMF->m_nDocumentNo);
			pMF->ExecSQL(szSQL);
			
			szSQL.Format(_T("UPDATE hms_treatment_record SET htr_doctor='%s' WHERe htr_docno=%ld and htr_idx=%d "), m_szDoctorKey, pMF->m_nDocumentNo, pMF->m_nRefIndex);
			pMF->ExecSQL(szSQL);

			if(pMF->m_szDoctor.IsEmpty())
			{
				pMF->m_wndPatientDocument.m_szDoctor = m_szDoctorKey;
				pMF->m_szDoctor = m_szDoctorKey;
			}
			else
			{
				pMF->m_wndPatientDocument.m_szDoctor = m_szDoctorKey;
			}
			pMF->m_wndPatientDocument.UpdateData(false);
			
		}
		else
		{
			// neu la ket thuc giuong thi goi ham apply giuong dong nhung neu da co roi thi chac la thoi ko apply nua
			if(GetMode() == VM_TERM && (!m_szPriceBedKey.IsEmpty()))
			{
				dte.ParseDate(m_szAdmitDate);

				int nIndex;
				pMF->BeginTransaction();
				//Xoa tat ca cac giuong dong cu
				szSQL.Format(_T("DELETE FROM hms_bed_items WHERE hbi_docno=%ld and hbi_refidx=%d"), pMF->m_nDocumentNo, m_nBedIdx);
				pMF->ExecSQL(szSQL);
				if(m_nDayOfTreat > 0){
					szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
					rs.ExecSQL(szSQL);
					nIndex = rs.GetIntValue();
					m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
					m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szPriceBedKey); 
					m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), (LPCTSTR)(dte.GetDate())); 
					m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDayOfTreat); 
					m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
					m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), 100 );
					m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
					szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
					pMF->ExecSQL(szSQL);

					szSQL.Format(_T("UPDATE hms_bed SET hb_dynprice='Y', hb_payrate=100 WHERE hb_docno=%ld and hb_idx=%d and hb_status='T' "), pMF->m_nDocumentNo, m_nBedIdx);
					pMF->ExecSQL(szSQL);
				}	
				pMF->Commit();
			}
			pMF->CreateFees(_T("B"));
		}
		SetMode(VM_VIEW); 
		OnListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSBedInformation::OnCancelHMSBedInformation(){
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
int CHMSBedInformation::OnHMSBedInformationListLoadData(){
	return 0;
}

void CHMSBedInformation::RefreshData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnListLoadData();
	if(!pMF->IsOutPatient());
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.EnableWindow(false);
	}
}

int	CHMSBedInformation::OnListAddNewBed(){
	OnAddHMSBedInformation();
	return 0;
}
int	CHMSBedInformation::OnListEditBed(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("03.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	SetMode(VM_EDIT);
	if(m_szStatus != _T("O"))
	{
		EnableControls(FALSE);
		m_wndOutDate.EnableWindow(TRUE);
		m_wndOutDate.SetFocus();
	}
	return 0;
}
int	CHMSBedInformation::OnListDeleteBed(){
	OnDeleteHMSBedInformation();
	return 0;
}

void CHMSBedInformation::OnResizeLayout()
{
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndBedInformation,&m_wndList,NULL);

	AddLayoutControls(WS_REPOSX|WS_REPOSY, 100, 100, 0, 0,&m_wndAdd,&m_wndTerminate,&m_wndDelete,&m_wndSave,&m_wndCancel, NULL);

	AddLayoutControls(WS_RESIZEX, 0, 0, 20, 0,&m_wndDayOfTreatLabel,&m_wndServicePriceLabel,&m_wndInsurancePriceLabel,&m_wndPolicyPriceLabel,&m_wndRequestPriceLabel,NULL);

	AddLayoutControls(WS_REPOSX|WS_RESIZEX, 20, 0, 20, 0,&m_wndDayOfTreat,&m_wndServicePrice,&m_wndInsurancePrice,&m_wndPolicyPrice,&m_wndRequestPrice,NULL);

	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndBedDiagram,NULL);

}