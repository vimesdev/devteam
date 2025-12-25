#include "HMSBedInformation.h"
#include "MainFrm.h"
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
/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedInformation *)pWnd)->OnOutDateCheckValue();
} 
/*static void _OnDayOfTreatChangeFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatChange();
} */
/*static void _OnDayOfTreatSetfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatSetfocus();} */ 
/*static void _OnDayOfTreatKillfocusFnc(CWnd *pWnd){
	((CHMSBedInformation *)pWnd)->OnDayOfTreatKillfocus();
} */
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
	m_wndList.Create(this,10, 180, 615, 525); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 30, 90, 55);
	m_wndAdmitDate.Create(this,95, 30, 215, 55); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 220, 30, 300, 55);
	m_wndOutDate.Create(this,305, 30, 425, 55); 
	m_wndDayOfTreatLabel.Create(this, _T("Day of treat"), 430, 30, 530, 55);
	m_wndDayOfTreat.Create(this,535, 30, 615, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 60, 90, 85);
	m_wndRoom.Create(this,95, 60, 425, 85); 
	m_wndBedLabel.Create(this, _T("Bed"), 10, 90, 90, 115);
	m_wndBed.Create(this,95, 90, 300, 115); 
	m_wndRequestOption.Create(this, _T("Request Option"), 305, 90, 425, 115);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 90, 145);
	m_wndDoctor.Create(this,95, 120, 425, 145); 
	m_wndNurse.Create(this,95, 150, 425, 175); 
	m_wndNurseLabel.Create(this, _T("Nurse"), 10, 150, 90, 175);
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 430, 60, 530, 85);
	m_wndServicePrice.Create(this,535, 60, 615, 85); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 430, 90, 530, 115);
	m_wndInsurancePrice.Create(this,535, 90, 615, 115); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 430, 120, 530, 145);
	m_wndPolicyPrice.Create(this,535, 120, 615, 145); 
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 430, 150, 530, 175);
	m_wndRequestPrice.Create(this,535, 150, 615, 175); 
	m_wndAdd.Create(this, _T("&Add"), 170, 535, 255, 560);
	m_wndTerminate.Create(this, _T("&Terminate"), 260, 535, 345, 560);
	m_wndDelete.Create(this, _T("&Delete"), 350, 535, 435, 560);
	m_wndSave.Create(this, _T("&Save"), 440, 535, 525, 560);
	m_wndCancel.Create(this, _T("&Cancel"), 530, 535, 615, 560);

}
void CHMSBedInformation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmitDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndOutDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOutDate.SetCheckValue(true);
	m_wndDayOfTreat.SetLimitText(1024);
	m_wndDayOfTreat.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndBed.SetCheckValue(true);
	m_wndBed.LimitText(1024);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndNurse.SetCheckValue(true);
	m_wndNurse.LimitText(1024);
	m_wndServicePrice.SetLimitText(1024);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(1024);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(1024);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequestPrice.SetLimitText(1024);
	m_wndRequestPrice.SetCheckValue(true);











}
void CHMSBedInformation::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
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
	m_wndRequestOption.SetEvent(WE_CLICK, _OnRequestOptionSelectFnc);
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
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSBedInformationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSBedInformationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSBedInformationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSBedInformationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSBedInformationFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSBedInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Text(pDX, m_wndDayOfTreat.GetDlgCtrlID(), m_nDayOfTreat);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndBed.GetDlgCtrlID(), m_szBedKey);
	DDX_Check(pDX, m_wndRequestOption.GetDlgCtrlID(), m_bRequestOption);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndNurse.GetDlgCtrlID(), m_szNurseKey);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_szServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_szInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_szPolicyPrice);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_szRequestPrice);

}
void CHMSBedInformation::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("AdmitDate")] =  m_szAdmitDate;
	m_jData[_T("OutDate")] =  m_szOutDate;
	m_jData[_T("DayOfTreat")] =  m_nDayOfTreat;
	m_jData[_T("Room")] =  m_szRoomKey;
	m_jData[_T("Bed")] =  m_szBedKey;
	m_jData[_T("RequestOption")] =  m_bRequestOption;
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	m_jData[_T("Nurse")] =  m_szNurseKey;
	m_jData[_T("ServicePrice")] =  m_szServicePrice;
	m_jData[_T("InsurancePrice")] =  m_szInsurancePrice;
	m_jData[_T("PolicyPrice")] =  m_szPolicyPrice;
	m_jData[_T("RequestPrice")] =  m_szRequestPrice;
	}
	else
	{
			
	m_jData[_T("AdmitDate")].GetValue(m_szAdmitDate);
	m_jData[_T("OutDate")].GetValue(m_szOutDate);
	m_jData[_T("DayOfTreat")].GetValue(m_nDayOfTreat);
	m_jData[_T("Room")].GetValue(m_szRoomKey);
	m_jData[_T("Bed")].GetValue(m_szBedKey);
	m_jData[_T("RequestOption")].GetValue(m_bRequestOption);
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	m_jData[_T("Nurse")].GetValue(m_szNurseKey);
	m_jData[_T("ServicePrice")].GetValue(m_szServicePrice);
	m_jData[_T("InsurancePrice")].GetValue(m_szInsurancePrice);
	m_jData[_T("PolicyPrice")].GetValue(m_szPolicyPrice);
	m_jData[_T("RequestPrice")].GetValue(m_szRequestPrice);
	}

}
void CHMSBedInformation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedInformation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

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
void CHMSBedInformation::OnListDblClick(){
	
} 
void CHMSBedInformation::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedInformation::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBedInformation::OnListLoadData(){
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
/*void CHMSBedInformation::OnAdmitDateChange(){
	
} */
/*void CHMSBedInformation::OnAdmitDateSetfocus(){
	
} */
/*void CHMSBedInformation::OnAdmitDateKillfocus(){
	
} */
int CHMSBedInformation::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSBedInformation::OnOutDateChange(){
	
} */
/*void CHMSBedInformation::OnOutDateSetfocus(){
	
} */
/*void CHMSBedInformation::OnOutDateKillfocus(){
	
} */
int CHMSBedInformation::OnOutDateCheckValue(){
	return 0;
} 
/*void CHMSBedInformation::OnDayOfTreatChange(){
	
} */
/*void CHMSBedInformation::OnDayOfTreatSetfocus(){
	
} */
/*void CHMSBedInformation::OnDayOfTreatKillfocus(){
	
} */
int CHMSBedInformation::OnDayOfTreatCheckValue(){
	return 0;
} 
void CHMSBedInformation::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnRoomSelendok(){
	 
}
/*void CHMSBedInformation::OnRoomSetfocus(){
	
}*/
/*void CHMSBedInformation::OnRoomKillfocus(){
	
}*/
long CHMSBedInformation::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBed.IsSearchKey() && !m_szBedKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBedKey
};
	m_wndBed.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBed.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedInformation::OnBedAddNew(){
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
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
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurse.IsSearchKey() && !m_szNurseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNurseKey
};
	m_wndNurse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurse.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedInformation::OnNurseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
void CHMSBedInformation::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedInformation::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedInformation::OnAddHMSBedInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedInformation::OnEditHMSBedInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedInformation::OnDeleteHMSBedInformation(){
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
 		OnCancelHMSBedInformation();
 	}
	return 0;
}
int CHMSBedInformation::OnSaveHMSBedInformation(){
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
 		//OnHMSBedInformationListLoadData();
 		SetMode(VM_VIEW);
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
