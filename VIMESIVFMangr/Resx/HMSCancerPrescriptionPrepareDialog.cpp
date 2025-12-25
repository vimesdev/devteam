#include "HMSCancerPrescriptionPrepareDialog.h"
#include "MainFrm.h"
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionPrepareDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnCycleChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleChange();
} */
/*static void _OnCycleSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleSetfocus();} */ 
/*static void _OnCycleKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleKillfocus();
} */
static int _OnCycleCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleCheckValue();
} 
/*static void _OnCycleDateChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleDateChange();
} */
/*static void _OnCycleDateSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleDateSetfocus();} */ 
/*static void _OnCycleDateKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleDateKillfocus();
} */
static int _OnCycleDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnCycleDateCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnTreatDiagramSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionPrepareDialog* )pWnd)->OnTreatDiagramSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatDiagramSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnTreatDiagramSelendok();
}
/*static void _OnTreatDiagramSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
/*static void _OnTreatDiagramKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
static long _OnTreatDiagramLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnTreatDiagramLoadData();
}
/*static void _OnTreatDiagramAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnTreatDiagramAddNew();
}*/
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnGFRChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnGFRChange();
} */
/*static void _OnGFRSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnGFRSetfocus();} */ 
/*static void _OnGFRKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnGFRKillfocus();
} */
static int _OnGFRCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnGFRCheckValue();
} 
static void _OnSBACalcMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionPrepareDialog* )pWnd)->OnSBACalcMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSBACalcMethodSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACalcMethodSelendok();
}
/*static void _OnSBACalcMethodSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
/*static void _OnSBACalcMethodKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
static long _OnSBACalcMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACalcMethodLoadData();
}
/*static void _OnSBACalcMethodAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACalcMethodAddNew();
}*/
/*static void _OnSBAChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBAChange();
} */
/*static void _OnSBASetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBASetfocus();} */ 
/*static void _OnSBAKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBAKillfocus();
} */
static int _OnSBACheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnSBACheckValue();
} 
/*static void _OnUACChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnUACChange();
} */
/*static void _OnUACSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnUACSetfocus();} */ 
/*static void _OnUACKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnUACKillfocus();
} */
static int _OnUACCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnUACCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog *)pWnd)->OnNoteCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionPrepareDialog *pVw = (CHMSCancerPrescriptionPrepareDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static int _OnAddHMSCancerPrescriptionPrepareDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnAddHMSCancerPrescriptionPrepareDialog();
} 
static int _OnEditHMSCancerPrescriptionPrepareDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnEditHMSCancerPrescriptionPrepareDialog();
} 
static int _OnDeleteHMSCancerPrescriptionPrepareDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnDeleteHMSCancerPrescriptionPrepareDialog();
} 
static int _OnSaveHMSCancerPrescriptionPrepareDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnSaveHMSCancerPrescriptionPrepareDialog();
} 
static int _OnCancelHMSCancerPrescriptionPrepareDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnCancelHMSCancerPrescriptionPrepareDialog();
} 
CHMSCancerPrescriptionPrepareDialog::CHMSCancerPrescriptionPrepareDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerPrescriptionPrepareDialog::~CHMSCancerPrescriptionPrepareDialog(){
}
void CHMSCancerPrescriptionPrepareDialog::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Ðon hóa tr? li?u"), 5, 5, 900, 500);
	m_wndDoctorLabel.Create(this, _T("Bác si"), 10, 30, 110, 55);
	m_wndDoctor.Create(this,115, 30, 405, 55); 
	m_wndCycleLabel.Create(this, _T("Chu k?"), 410, 30, 515, 55);
	m_wndCycle.Create(this,520, 30, 610, 55); 
	m_wndCycleDateLabel.Create(this, _T("Ngày(CK)"), 615, 30, 715, 55);
	m_wndCycleDate.Create(this,720, 30, 775, 55); 
	m_wndOrderDate.Create(this,780, 30, 895, 55); 
	m_wndDiagnosticLabel.Create(this, _T("B?nh lý"), 10, 60, 110, 85);
	m_wndDiagnostic.Create(this,115, 60, 610, 85); 
	m_wndTreatDiagramLabel.Create(this, _T("Phác d? di?u tr?"), 615, 60, 715, 85);
	m_wndTreatDiagram.Create(this,720, 60, 895, 85); 
	m_wndWeightLabel.Create(this, _T("Cân n?ng"), 10, 90, 110, 115);
	m_wndWeight.Create(this,115, 90, 165, 115); 
	m_wndHeightLabel.Create(this, _T("Chi?u cao"), 170, 90, 240, 115);
	m_wndHeight.Create(this,245, 90, 295, 115); 
	m_wndSBACalcMethodLabel.Create(this, _T("Phuong pháp tính SBA"), 410, 90, 515, 115);
	m_wndGFRLabel.Create(this, _T("GFR"), 300, 90, 335, 115);
	m_wndGFR.Create(this,340, 90, 405, 115); 
	m_wndSBACalcMethod.Create(this,520, 90, 610, 115); 
	m_wndSBALabel.Create(this, _T("SBA(m2)"), 615, 90, 715, 115);
	m_wndSBA.Create(this,720, 90, 775, 115); 
	m_wndUACLabel.Create(this, _T("UAC"), 780, 90, 835, 115);
	m_wndUAC.Create(this,840, 90, 895, 115); 
	m_wndNoteLabel.Create(this, _T("Ghi chú"), 10, 120, 110, 145);
	m_wndNote.Create(this,115, 120, 895, 170); 
	m_wndList.Create(this,10, 175, 895, 495); 
	m_wndAdd.Create(this, _T("&Add"), 225, 505, 305, 530);
	m_wndEdit.Create(this, _T("&Edit"), 310, 505, 390, 529);
	m_wndDelete.Create(this, _T("&Delete"), 395, 505, 475, 530);
	m_wndSave.Create(this, _T("&Save"), 480, 505, 560, 530);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 505, 645, 530);
	m_wndSend.Create(this, _T("&Confirm"), 650, 505, 730, 530);
	m_wndPrint.Create(this, _T("&Print"), 735, 505, 815, 530);
	m_wndClose.Create(this, _T("&Close"), 820, 505, 900, 530);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 505, 85, 530);

}
void CHMSCancerPrescriptionPrepareDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(1024);
	m_wndCycle.SetLimitText(1024);
	m_wndCycle.SetCheckValue(true);
	m_wndCycleDate.SetLimitText(1024);
	m_wndCycleDate.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndTreatDiagram.SetCheckValue(true);
	m_wndTreatDiagram.LimitText(1024);
	m_wndWeight.SetLimitText(1024);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(1024);
	m_wndHeight.SetCheckValue(true);
	m_wndGFR.SetLimitText(16);
	m_wndGFR.SetCheckValue(true);
	m_wndSBACalcMethod.SetCheckValue(true);
	m_wndSBACalcMethod.LimitText(1024);
	m_wndSBA.SetLimitText(1024);
	m_wndSBA.SetCheckValue(true);
	m_wndUAC.SetLimitText(1024);
	m_wndUAC.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);









}
void CHMSCancerPrescriptionPrepareDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndCycle.SetEvent(WE_CHANGE, _OnCycleChangeFnc);
	//m_wndCycle.SetEvent(WE_SETFOCUS, _OnCycleSetfocusFnc);
	//m_wndCycle.SetEvent(WE_KILLFOCUS, _OnCycleKillfocusFnc);
	m_wndCycle.SetEvent(WE_CHECKVALUE, _OnCycleCheckValueFnc);
	//m_wndCycleDate.SetEvent(WE_CHANGE, _OnCycleDateChangeFnc);
	//m_wndCycleDate.SetEvent(WE_SETFOCUS, _OnCycleDateSetfocusFnc);
	//m_wndCycleDate.SetEvent(WE_KILLFOCUS, _OnCycleDateKillfocusFnc);
	m_wndCycleDate.SetEvent(WE_CHECKVALUE, _OnCycleDateCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndTreatDiagram.SetEvent(WE_SELENDOK, _OnTreatDiagramSelendokFnc);
	//m_wndTreatDiagram.SetEvent(WE_SETFOCUS, _OnTreatDiagramSetfocusFnc);
	//m_wndTreatDiagram.SetEvent(WE_KILLFOCUS, _OnTreatDiagramKillfocusFnc);
	m_wndTreatDiagram.SetEvent(WE_SELCHANGE, _OnTreatDiagramSelectChangeFnc);
	m_wndTreatDiagram.SetEvent(WE_LOADDATA, _OnTreatDiagramLoadDataFnc);
	//m_wndTreatDiagram.SetEvent(WE_ADDNEW, _OnTreatDiagramAddNewFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	//m_wndGFR.SetEvent(WE_CHANGE, _OnGFRChangeFnc);
	//m_wndGFR.SetEvent(WE_SETFOCUS, _OnGFRSetfocusFnc);
	//m_wndGFR.SetEvent(WE_KILLFOCUS, _OnGFRKillfocusFnc);
	m_wndGFR.SetEvent(WE_CHECKVALUE, _OnGFRCheckValueFnc);
	m_wndSBACalcMethod.SetEvent(WE_SELENDOK, _OnSBACalcMethodSelendokFnc);
	//m_wndSBACalcMethod.SetEvent(WE_SETFOCUS, _OnSBACalcMethodSetfocusFnc);
	//m_wndSBACalcMethod.SetEvent(WE_KILLFOCUS, _OnSBACalcMethodKillfocusFnc);
	m_wndSBACalcMethod.SetEvent(WE_SELCHANGE, _OnSBACalcMethodSelectChangeFnc);
	m_wndSBACalcMethod.SetEvent(WE_LOADDATA, _OnSBACalcMethodLoadDataFnc);
	//m_wndSBACalcMethod.SetEvent(WE_ADDNEW, _OnSBACalcMethodAddNewFnc);
	//m_wndSBA.SetEvent(WE_CHANGE, _OnSBAChangeFnc);
	//m_wndSBA.SetEvent(WE_SETFOCUS, _OnSBASetfocusFnc);
	//m_wndSBA.SetEvent(WE_KILLFOCUS, _OnSBAKillfocusFnc);
	m_wndSBA.SetEvent(WE_CHECKVALUE, _OnSBACheckValueFnc);
	//m_wndUAC.SetEvent(WE_CHANGE, _OnUACChangeFnc);
	//m_wndUAC.SetEvent(WE_SETFOCUS, _OnUACSetfocusFnc);
	//m_wndUAC.SetEvent(WE_KILLFOCUS, _OnUACKillfocusFnc);
	m_wndUAC.SetEvent(WE_CHECKVALUE, _OnUACCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCancerPrescriptionPrepareDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndCycle.GetDlgCtrlID(), m_szCycle);
	DDX_Text(pDX, m_wndCycleDate.GetDlgCtrlID(), m_nCycleDate);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndTreatDiagram.GetDlgCtrlID(), m_szTreatDiagramKey);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_Text(pDX, m_wndGFR.GetDlgCtrlID(), m_nGFR);
	DDX_TextEx(pDX, m_wndSBACalcMethod.GetDlgCtrlID(), m_szSBACalcMethodKey);
	DDX_Text(pDX, m_wndSBA.GetDlgCtrlID(), m_nSBA);
	DDX_Text(pDX, m_wndUAC.GetDlgCtrlID(), m_nUAC);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSCancerPrescriptionPrepareDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	m_jData[_T("Cycle")] =  m_szCycle;
	m_jData[_T("CycleDate")] =  m_nCycleDate;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("TreatDiagram")] =  m_szTreatDiagramKey;
	m_jData[_T("Weight")] =  m_nWeight;
	m_jData[_T("Height")] =  m_nHeight;
	m_jData[_T("GFR")] =  m_nGFR;
	m_jData[_T("SBACalcMethod")] =  m_szSBACalcMethodKey;
	m_jData[_T("SBA")] =  m_nSBA;
	m_jData[_T("UAC")] =  m_nUAC;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	m_jData[_T("Cycle")].GetValue(m_szCycle);
	m_jData[_T("CycleDate")].GetValue(m_nCycleDate);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("TreatDiagram")].GetValue(m_szTreatDiagramKey);
	m_jData[_T("Weight")].GetValue(m_nWeight);
	m_jData[_T("Height")].GetValue(m_nHeight);
	m_jData[_T("GFR")].GetValue(m_nGFR);
	m_jData[_T("SBACalcMethod")].GetValue(m_szSBACalcMethodKey);
	m_jData[_T("SBA")].GetValue(m_nSBA);
	m_jData[_T("UAC")].GetValue(m_nUAC);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSCancerPrescriptionPrepareDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerPrescriptionPrepareDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerPrescriptionPrepareDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szCycle.Empty();
	m_nCycleDate=0;
	m_szOrderDate.Empty();
	m_szDiagnostic.Empty();
	m_szTreatDiagramKey.Empty();
	m_nWeight=0;
	m_nHeight=0;
	m_nGFR=0;
	m_szSBACalcMethodKey.Empty();
	m_nSBA=0;
	m_nUAC=0;
	m_szNote.Empty();

}
int CHMSCancerPrescriptionPrepareDialog::SetMode(int nMode){
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
void CHMSCancerPrescriptionPrepareDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnDoctorSelendok(){
	 
}
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnDoctorLoadData(){
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
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnCycleCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleDateChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleDateSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnCycleDateKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnCycleDateCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnOrderDateChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnOrderDateKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnDiagnosticChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnDiagnosticSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnDiagnosticKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramSelendok(){
	 
}
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatDiagram.IsSearchKey() && !m_szTreatDiagramKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTreatDiagramKey
};
	m_wndTreatDiagram.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDiagram.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnWeightChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnWeightSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnWeightKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnHeightChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnHeightSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnHeightKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnGFRChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnGFRSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnGFRKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnGFRCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodSelendok(){
	 
}
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSBACalcMethod.IsSearchKey() && !m_szSBACalcMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSBACalcMethodKey
};
	m_wndSBACalcMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSBACalcMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnSBAChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnSBASetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnSBAKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnSBACheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnUACChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnUACSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnUACKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnUACCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionPrepareDialog::OnNoteChange(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnNoteSetfocus(){
	
} */
/*void CHMSCancerPrescriptionPrepareDialog::OnNoteKillfocus(){
	
} */
int CHMSCancerPrescriptionPrepareDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionPrepareDialog::OnListDblClick(){
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCancerPrescriptionPrepareDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCancerPrescriptionPrepareDialog::OnListLoadData(){
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
void CHMSCancerPrescriptionPrepareDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCancerPrescriptionPrepareDialog::OnAddHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerPrescriptionPrepareDialog::OnEditHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerPrescriptionPrepareDialog::OnDeleteHMSCancerPrescriptionPrepareDialog(){
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
 		OnCancelHMSCancerPrescriptionPrepareDialog();
 	}
	return 0;
}
int CHMSCancerPrescriptionPrepareDialog::OnSaveHMSCancerPrescriptionPrepareDialog(){
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
 		//OnHMSCancerPrescriptionPrepareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerPrescriptionPrepareDialog::OnCancelHMSCancerPrescriptionPrepareDialog(){
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
int CHMSCancerPrescriptionPrepareDialog::OnHMSCancerPrescriptionPrepareDialogListLoadData(){
	return 0;
}
