#include "CancerPrescriptionPrepareDialog.h"
#include "MainFrame_E10.h"
#include "HMSCancerDrugOrderDialog.h"
#include <math.h>
#include "HMSCancerPrescriptionEntryPopup.h"
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

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionPrepareDialog*)pWnd)->OnListAddItem();
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
CHMSCancerPrescriptionPrepareDialog::CHMSCancerPrescriptionPrepareDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 540;
	SetDefaultValues();
	CGuiDialog::SetMode(nMode);
	m_nOID = 0;
	m_nOrderId = 0;
	m_bLocked = false;

}
CHMSCancerPrescriptionPrepareDialog::~CHMSCancerPrescriptionPrepareDialog(){
}
void CHMSCancerPrescriptionPrepareDialog::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Đơn hóa trị liệu"), 5, 5, 900, 500);
	m_wndDoctorLabel.Create(this, _T("Bác sĩ"), 10, 30, 110, 55);
	m_wndDoctor.Create(this,115, 30, 405, 55); 
	m_wndCycleLabel.Create(this, _T("Chu kỳ"), 410, 30, 515, 55);
	m_wndCycle.Create(this,520, 30, 610, 55); 
	m_wndCycleDateLabel.Create(this, _T("Ngày(CK)"), 615, 30, 715, 55);
	m_wndCycleDate.Create(this,720, 30, 775, 55); 
	m_wndOrderDate.Create(this,780, 30, 895, 55); 
	m_wndDiagnosticLabel.Create(this, _T("Bệnh lý"), 10, 60, 110, 85);
	m_wndDiagnostic.Create(this,115, 60, 610, 85); 
	m_wndTreatDiagramLabel.Create(this, _T("Phác đồ điều trị"), 615, 60, 715, 85);
	m_wndTreatDiagram.Create(this,720, 60, 895, 85); 
	m_wndWeightLabel.Create(this, _T("Cân nặng"), 10, 90, 110, 115);
	m_wndWeight.Create(this,115, 90, 165, 115); 
	m_wndHeightLabel.Create(this, _T("Chiều cao"), 170, 90, 240, 115);
	m_wndHeight.Create(this,245, 90, 295, 115); 
	m_wndSBACalcMethodLabel.Create(this, _T("Phương pháp tính SBA"), 410, 90, 515, 115);
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

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(20);
	m_wndCycle.SetLimitText(128);
	m_wndCycle.SetCheckValue(true);
	m_wndCycleDate.SetLimitText(20);
	m_wndCycleDate.SetCheckValue(true);

	m_wndOrderDate.SetCheckValue(true);
	m_wndWeight.SetLimitText(22);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(22);
	m_wndHeight.SetCheckValue(true);
	m_wndGFR.SetLimitText(16);
	m_wndGFR.SetCheckValue(true);
	m_wndSBACalcMethod.SetCheckValue(true);
	m_wndSBACalcMethod.LimitText(35);
	m_wndSBA.SetLimitText(22);
	m_wndSBA.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndTreatDiagram.SetCheckValue(true);
	m_wndTreatDiagram.LimitText(254);
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndSBACalcMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSBACalcMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatDiagram.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTreatDiagram.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Stt"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Tên thuốc"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(2, _T("Đơn vị"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("LD/M2"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("LD/BN"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Số lượng"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(6, _T("T/tích(ml)"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("Loại"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(8, _T("Ngày dùng"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("Tên tương ứng trong kho"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(10, _T("Số lượng"), CFMT_MONEY, 50);	
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);//product_item_id
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);//hcol_cancer_orderline_id
	m_wndList.InsertColumn(13, _T(""), CFMT_TEXT, 0);//hcol_orderline

	m_wndList.GetHeaderControl()->SetItemHeight(1);
	m_wndList.GetHeaderControl()->MergeCell(_T("Dung môi"), 0, 6, 1, 7, true);
	//m_wndList.GetHeaderControl()->MergeCell(_T("T/tích(ml)"), 0, 7, 1, 8, true);
	


	m_hms_cancer_orderTbl.SetTableName(_T("HMS_CANCER_ORDER"));
	m_hms_cancer_orderTbl.AddField(_T("HCO_CANCER_ORDER_ID"), dfLong); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_CREATEDBY"), dfText, 20); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_CREATEDDATE"), dfDateTime); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_ORDER_DATE"), dfDateTime); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_DOCNO"), dfLong); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_TREATIDX"), dfLong); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_DOCTOR"), dfText, 15); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_CYCLE"), dfText, 10);
	m_hms_cancer_orderTbl.AddField(_T("HCO_CYCLE_DATE"), dfInteger);
	m_hms_cancer_orderTbl.AddField(_T("HCO_WEIGHT"), dfFloat); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_HEIGHT"), dfFloat); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_SBA_METHOD"), dfInteger); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_SBA_AREA"), dfFloat); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_UAC"), dfFloat); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_GFR"), dfFloat); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_DIAGNOSTIC"), dfText, 254); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_CANCER_TREATDIAG_ID"), dfText, 254); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_NOTE"), dfText, 254); 	

    

}
void CHMSCancerPrescriptionPrepareDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndList.AddEvent(1, _T("Add Items"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("&Xóa mục thuốc"), _OnListDeleteItemFnc);	
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);


	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	else
		SetMode(nMode);
	

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
void CHMSCancerPrescriptionPrepareDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);

	szSQL.Format(_T("SELECT * FROM hms_cancer_order ") \
		_T(" WHERE hco_docno=%ld and hco_treatidx=%ld"), m_nDocumentNo, m_nTreatIdx);

//_msg(_T("%s"), szSQL);
	m_nOrderId = 0;
	rs.ExecSQL(szSQL);
	m_wndList.DeleteAllItems();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HCO_CANCER_ORDER_ID"), m_nOrderId);
		
		rs.GetValue(_T("HCO_DOCTOR"), m_szDoctorKey);
		rs.GetValue(_T("HCO_WEIGHT"), m_nWeight);
		rs.GetValue(_T("HCO_HEIGHT"), m_nHeight);
		rs.GetValue(_T("HCO_SBA_METHOD"), m_szSBACalcMethodKey);
		rs.GetValue(_T("HCO_SBA_AREA"), m_nSBA);
		rs.GetValue(_T("HCO_UAC"), m_nUAC);
		rs.GetValue(_T("HCO_CYCLE"), m_szCycle);
		rs.GetValue(_T("HCO_CYCLE_DATE"), m_nCycleDate);
		rs.GetValue(_T("HCO_ORDER_DATE"), m_szOrderDate);
		rs.GetValue(_T("HCO_DIAGNOSTIC"), m_szDiagnostic);
		rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), m_szTreatDiagramKey);
		rs.GetValue(_T("HCO_NOTE"), m_szNote);
		rs.GetValue(_T("hco_status"), m_szStatus);
		SetMode(VM_VIEW);
		OnListLoadData();
		if(m_szStatus == _T("O"))
		{
			m_wndSend.SetWindowText(_T("&Xác nhận"));
		}
		else
		{
			m_wndSend.SetWindowText(_T("&Bỏ xác nhận"));
		}
	}
	else
	{
		if(!m_bLocked)
			SetMode(VM_ADD);
		else
		{
			SetMode(VM_NONE);
			CGuiDialog::OnCancel();
		}
		

	}
	

}
void CHMSCancerPrescriptionPrepareDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_cancer_orderTbl.SetValue(_T("HCO_ORDER_DATE"), m_szOrderDate);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CANCER_ORDER_ID"), m_nOrderId);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_DOCNO"), m_nDocumentNo);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_TREATIDX"), m_nTreatIdx);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_DOCTOR"), m_szDoctorKey);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_WEIGHT"), m_nWeight);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_HEIGHT"), m_nHeight);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_SBA_METHOD"), m_szSBACalcMethodKey);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_SBA_AREA"), m_nSBA);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_UAC"), m_nUAC);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CYCLE"), m_szCycle);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CYCLE_DATE"), m_nCycleDate);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_DIAGNOSTIC"), m_szDiagnostic);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_CANCER_TREATDIAG_ID"), m_szTreatDiagramKey);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_NOTE"), m_szNote);
	

}
void CHMSCancerPrescriptionPrepareDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szCycle.Empty();
	m_nCycleDate = 1;	
	m_szOrderDate.Empty();
	m_szDiagnostic.Empty();
	m_szTreatDiagramKey.Empty();
	m_nWeight=0;
	m_nHeight=0;
	m_nGFR=0;
	m_szSBACalcMethodKey.Empty();
	m_nSBA=0;
	m_nUAC = 0;
	m_szNote.Empty();
	m_szStatus.Empty();

}
int CHMSCancerPrescriptionPrepareDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_nOrderId = 0;
			m_szOrderDate = pMF->GetSysDateTime();
			m_szDiagnostic = pMF->m_szDiagnostic;
			m_szDoctorKey = pMF->GetCurrentUser();\

				szSQL.Format(_T("SELECT * FROM hms_cancer_order ") \
				_T(" WHERE hco_docno=%ld AND rownum = 1 ORDER BY hco_treatidx DESC"), m_nDocumentNo);			
				rs.ExecSQL(szSQL);
				if(!rs.IsEOF())
				{
					rs.GetValue(_T("HCO_CANCER_ORDER_ID"), m_nOrderId);
					rs.GetValue(_T("HCO_DOCTOR"), m_szDoctorKey);
					rs.GetValue(_T("HCO_WEIGHT"), m_nWeight);
					rs.GetValue(_T("HCO_HEIGHT"), m_nHeight);
					rs.GetValue(_T("HCO_SBA_METHOD"), m_szSBACalcMethodKey);
					rs.GetValue(_T("HCO_SBA_AREA"), m_nSBA);
					rs.GetValue(_T("HCO_CYCLE"), m_szCycle);
					rs.GetValue(_T("HCO_CYCLE_DATE"), m_nCycleDate);
					rs.GetValue(_T("HCO_ORDER_DATE"), m_szOrderDate);
					rs.GetValue(_T("HCO_DIAGNOSTIC"), m_szDiagnostic);
					rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), m_szTreatDiagramKey);
					rs.GetValue(_T("HCO_NOTE"), m_szNote);					
				}

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndTreatDiagram.EnableWindow(false);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			
 			break;
 		};
		
	//	m_wndSend.EnableWindow(false);
	//	if(m_szStatus == _T("O"))
	//		m_wndSend.EnableWindow(true);

 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCancerPrescriptionPrepareDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnDoctorSelendok(){
	 
}
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnDoctorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid = 'D' AND su_deptid='%s' %s ORDER BY su_userid "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCancerPrescriptionPrepareDialog::OnDoctorAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(TRUE);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_cancer_treatdiagln ") \
		_T(" WHERE hctl_cancer_treatdiag_id = '%s' and hctl_dvlieudung_m2='auc' "), m_szTreatDiagramKey);

	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndGFR.EnableWindow(TRUE);
		m_wndUAC.EnableWindow(TRUE);
	}
	else
	{
		m_wndGFR.EnableWindow(FALSE);
		m_wndUAC.EnableWindow(FALSE);
		m_nGFR = 0;
		m_nUAC = 0;
	}
	UpdateData(FALSE);
}
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatDiagram.IsSearchKey() && str2int(m_szTreatDiagramKey) > 0){
		szWhere.Format(_T(" and hct_cancer_treatdiag_id=%ld "), str2int(m_szTreatDiagramKey));
	};
	m_wndTreatDiagram.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hct_cancer_treatdiag_id as id, hct_desc as name ") \
		_T(" FROM hms_cancer_treatdiag ORDER BY hct_cancer_treatdiag_id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDiagram.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSCancerPrescriptionPrepareDialog::OnTreatDiagramAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodSelendok(){
	UpdateData(true);
	float nSBA;
	CString tmpStr;
	if(m_szSBACalcMethodKey == _T("1"))
		nSBA = sqrt(m_nWeight*m_nHeight/3600.0);
	else
		nSBA = (4*m_nWeight + 7.0) / (m_nWeight + 90.0);
	
	tmpStr.Format(_T("%.2f"), nSBA);
	m_nSBA = str2float(tmpStr);
	_tprintf(_T("\r\n%.2f"), m_nSBA);
	UpdateData(false);
}
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodKillfocus(){
	
}*/
long CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSBACalcMethod.AddItems(_T("1"),  _T("SBA Người lớn"), NULL);
	m_wndSBACalcMethod.AddItems(_T("2"),  _T("SBA Trẻ em"), NULL);
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionPrepareDialog::OnSBACalcMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
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
	
}*/
/*void CHMSCancerPrescriptionPrepareDialog::OnNoteKillfocus(){
	
}*/
int CHMSCancerPrescriptionPrepareDialog::OnNoteCheckValue(){

	return 0;
}
void CHMSCancerPrescriptionPrepareDialog::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CString szSQL;
	if(GetMode() != VM_VIEW)
		return;

	long nOrderlineId;
	CHMSCancerDrugOrderDialog dlg(this);
	dlg.m_cancer_order_id = m_nOrderId;
	nOrderlineId = str2long(m_wndList.GetItemText(nSel, 12));
	dlg.m_cancer_orderline_id = nOrderlineId;
	dlg.m_nOrderQty = str2float(m_wndList.GetItemText(nSel, 3));
	dlg.m_szCancerDiagramID = m_szTreatDiagramKey;
	dlg.SetMode(VM_VIEW);
	if(dlg.DoModal() == IDOK)
	{		
		szSQL.Format(_T("UPDATE hms_cancer_orderline SET hcol_status = 'Y' WHERE hcol_cancer_order_id = %ld and hcol_cancer_orderline_id = %d"), m_nOrderId, nOrderlineId);
		pMF->ExecSQL(szSQL);

		OnListLoadData();
	}

} 
void CHMSCancerPrescriptionPrepareDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHMSCancerPrescriptionPrepareDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;

	m_nOrderline_ID = str2long(m_wndList.GetItemText(nSel, 12));
	
	szSQL.Format(_T("HMS_CANCER_ORDER_DELETELINE(%ld, %ld, %ld, '%s') "),
		m_nDocumentNo, m_nOrderId, m_nOrderline_ID, pMF->GetCurrentUser());
//_msg(_T("%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		OnListLoadData();
	}
	else
	{
		ShowMessageBox(_T("Không xóa được đề mục. Kiểm tra lại trạng thái phiếu"));
	}
	 return 0;
}

int CHMSCancerPrescriptionPrepareDialog::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Không thêm được thuốc ở trạng thái hiện tại"));
		return 0;
	}
	CHMSCancerPrescriptionEntryPopup *newPopup = new CHMSCancerPrescriptionEntryPopup(this, VM_ADD);
	newPopup->m_nOrderId = m_nOrderId;
	newPopup->m_pPrescriptionOrder = this;
	newPopup->ShowPopup(&m_wndList);
/*
	
	szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM(%ld, %ld, '%s') "),
		m_nDocumentNo, m_nOrderId, pMF->GetCurrentUser());
//_msg(_T("%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		OnListLoadData();
	}
	else
	{
		ShowMessageBox(_T("Có lỗi xảy ra khi tạo đề mục. "));
	}
	*/
	 return 0;
}


long CHMSCancerPrescriptionPrepareDialog::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(m_nOrderId <= 0)
		return 0;

	UpdateData(TRUE);


	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString tmpStr;
	int nIndex = 0;
	szSQL.Format(_T(" SELECT hcol_tenthuoc,") \
	_T("   mp_name AS tenbietduoc,") \
	_T("   (SELECT distinct  adu_name FROM ad_uom WHERE adu_uom_id=hcol_donvi") \
	_T("   ) AS hcol_donvi,") \
	_T("   hcol_lieudung_m2,") \
	_T("   hcol_lieudung_bn,") \
	_T("   hcol_dungmoi,") \
	_T("   hcoi_qtyorder,") \
	_T("   hcoi_qtyissue,") \
	_T("   hcoi_dm_qtyorder,") \
	_T("   hcoi_dm_qtyissue,") \
	_T("   (SELECT distinct ss_desc FROM sys_sel WHERE ss_id='cancer_dungmoi' AND ss_code = hcol_madungmoi) AS loaidungmoi,") \
	_T("   hcol_thetich,") \
	_T("   hcol_type,") \
	_T("   hcol_thoigian_sd, hcol_ngaydung, ") \
	_T("   hcoi_product_item_id,") \
	_T("   hcol_cancer_orderline_id, ") \
	_T("   hcoi_orderline") \
	_T(" FROM hms_cancer_orderline") \
	_T(" LEFT JOIN hms_cancer_orderitem") \
	_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id = hcol_cancer_order_id") \
	_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id                 = hcol_cancer_orderline_id)") \
	_T(" LEFT JOIN m_product_item") \
	_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(mp_product_id           = mpi_product_id)") \
	_T(" WHERE hcol_cancer_order_id = %ld ") \
	_T(" ORDER BY hcol_type,hcol_index,") \
	_T("   hcol_tenthuoc"), m_nOrderId);
_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString szType, szTypeOld;
	CString szNewLine, szOldLine;
	szOldLine.Empty();
	int nIndex2 = 1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hcol_type"), szType);
		rs.GetValue(_T("hcol_cancer_orderline_id"), szNewLine);
		if(szType != szTypeOld && !szType.IsEmpty()){
			
			if(szType == _T("1"))
				tmpStr.Format(_T("Thuốc, dịch truyền, hóa chất"));
			else
				tmpStr.Format(_T("Dung môi pha chế"));

			int nItem = m_wndList.AddItems(_T(""), tmpStr, NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 7, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, true);
			szTypeOld = szType;			
		}

		if(szOldLine != szNewLine)
		{
			tmpStr.Format(_T("%d"), ++nIndex);
			m_wndList.AddItems(
				tmpStr, 
				rs.GetValue(_T("hcol_tenthuoc")), 
				rs.GetValue(_T("hcol_donvi")), 
				rs.GetValue(_T("hcol_lieudung_m2")), 
				rs.GetValue(_T("hcol_lieudung_bn")), 
				rs.GetValue(_T("hcol_soluong_linh")), 			
				rs.GetValue(_T("hcol_thetich")), 
				rs.GetValue(_T("loaidungmoi")), 			
				rs.GetValue(_T("hcol_ngaydung")), 			
				rs.GetValue(_T("tenbietduoc")), 
				rs.GetValue(_T("hcoi_qtyissue")),
				rs.GetValue(_T("hcoi_product_item_id")), 
				rs.GetValue(_T("hcol_cancer_orderline_id")), 
				rs.GetValue(_T("hcoi_orderline")), 
				NULL);
			szOldLine = szNewLine;
			nIndex2 = 0;
		}
		else
		{
			
			m_wndList.AddItems(
				_T(""), 
				_T(""), 
				_T(""), 
				_T(""), 
				_T(""), 
				_T(""), 			
				_T(""), 
				_T(""), 			
				rs.GetValue(_T("tenbietduoc")), 
				rs.GetValue(_T("hcoi_qtyissue")),
				rs.GetValue(_T("hcoi_product_item_id")), 
				rs.GetValue(_T("hcol_cancer_orderline_id")), 
				rs.GetValue(_T("hcoi_orderline")), 
				NULL);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSCancerPrescriptionPrepareDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_ADD);
	//GetDataToScreen();

} 
void CHMSCancerPrescriptionPrepareDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_EDIT);
} 
void CHMSCancerPrescriptionPrepareDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteHMSCancerPrescriptionPrepareDialog();
} 
void CHMSCancerPrescriptionPrepareDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int ret = OnSaveHMSCancerPrescriptionPrepareDialog();
	if(ret > 0)
	{
		//CGuiDialog::OnOK();
		OnListLoadData();
	}

} 
void CHMSCancerPrescriptionPrepareDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelHMSCancerPrescriptionPrepareDialog();
} 
void CHMSCancerPrescriptionPrepareDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	InDonhoatrilieu();
} 

void CHMSCancerPrescriptionPrepareDialog::InDonhoatrilieu(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CReport rpt;
	long nOrderID;

	
	if(!rpt.Init(_T("Reports/HMS/PMS_DONHOATRILIEU.RPT")) )
		return;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderid     AS orderid,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_cancer_order_id,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   HCR_RECORDNO, ") \
	_T("   HCO_WEIGHT, ") \
	_T("   HCO_HEIGHT, ") \
	_T("   HCO_SBA_METHOD, ") \
	_T("   HCO_CYCLE, ") \
	_T("   HCO_SBA_AREA, ") \
	_T("   HCO_CYCLE_DATE, ") \
	_T("   HCO_ORDER_DATE, ") \
	_T("   HCO_DIAGNOSTIC, ") \
	_T("   HCO_NOTE, ") \
	_T("   treatdiagname,") \
	_T("   CASE") \
	_T("     WHEN hpo_orderstatus='I'") \
	_T("     THEN trunc_date(hpo_approvedate)") \
	_T("     ELSE trunc_date(hpo_orderdate)") \
	_T("   END             AS issuedate,") \
	_T("   hpo_approvedate AS approvedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex)                                 AS sex,") \
	_T("   hd_cardno                                          AS cardno,") \
	_T("   HMS_GetObjectName(hd_object)                       AS objectname,") \
	_T("   hpo_approveby                                      AS approvedby") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hd_docno=hcr_docno)") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hco_docno,") \
	_T("     hpo_orderid,") \
	_T("     hpo_orderdate,") \
	_T("     hpo_approvedate,") \
	_T("     hpo_approveby,") \
	_T("     hpo_orderstatus,") \
	_T("     hpo_deptid,") \
	_T("     hpo_ordertype,") \
	_T("     hpo_storage_id,") \
	_T("     hpo_processed,") \
	_T("     hco_cancer_order_id,") \
	_T("     hco_treatidx,") \
	_T("     hco_status,") \
	_T("	 HCO_WEIGHT, ") \
	_T("	 HCO_HEIGHT, ") \
	_T("	 HCO_SBA_METHOD, ") \
	_T("     HCO_CYCLE, ") \
	_T("	 HCO_SBA_AREA, ") \
	_T("	 HCO_CYCLE_DATE, ") \
	_T("	 HCO_ORDER_DATE, ") \
	_T("	 HCO_DIAGNOSTIC, ") \
	_T("	 HCO_NOTE, ") \
	_T("     (SELECT hct_desc as name FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id=hco_cancer_treatdiag_id) as treatdiagname, ") \
	_T("     'I' AS hpo_type") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno AND hco_treatidx=hpo_treatidx) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T(" WHERE hco_docno =%d") \
	_T(" AND hco_treatidx = %ld ") \
	_T(" AND hpo_ordertype   IN('D')") \
	_T(" AND hpo_orderstatus ='A'"), m_nDocumentNo, m_nTreatIdx);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return ;
	}

	tmpStr.Empty();
	//StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	//StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rs.GetValue(_T("docno"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
	rs.GetValue(_T("hco_cancer_order_id"), nOrderID);	
	rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
	
	
	CString szPatientName;
	rs.GetValue(_T("name"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	
	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);


	rs.GetValue(_T("HCO_WEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Weight"), tmpStr);
	rs.GetValue(_T("HCO_HEIGHT"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Height"), tmpStr);
	rs.GetValue(_T("HCO_SBA_METHOD"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_method"), tmpStr);
	rs.GetValue(_T("HCO_SBA_AREA"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sba_aren"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cycle_date"), tmpStr);
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("order_date"), tmpStr);
	rs.GetValue(_T("HCO_DIAGNOSTIC"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diagnstic"), tmpStr);
	rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cancer_treatdiag"), tmpStr);
	rs.GetValue(_T("HCO_NOTE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("note"), tmpStr);

	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);

	rs.GetValue(_T("hcr_recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("recordno"), tmpStr);

	rs.GetValue(_T("treatdiagname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("treatdiagname"), tmpStr);

	CString szDate;
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	szSQL.Format(_T(" SELECT hms_cancer_orderline.*,") \
	_T("   hcoi_product_item_id,") \
	_T("   mp_name") \
	_T("   ||' ['") \
	_T("   ||hcoi_qtyorder") \
	_T("   ||']' AS tenbietduoc") \
	_T(" FROM hms_cancer_orderline") \
	_T(" LEFT JOIN hms_cancer_orderitem") \
	_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id = hcol_cancer_order_id") \
	_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id                 = hcol_cancer_orderline_id)") \
	_T(" LEFT JOIN m_product_item") \
	_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(mp_product_id           = mpi_product_id)") \
	_T(" WHERE hcol_cancer_order_id = %ld ") \
	_T(" ORDER BY hcol_index,") \
	_T("   hcol_tenthuoc"), nOrderID);
	_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	
	int nCount = rsl.ExecSQL(szSQL);
	int nItem =1;
	CReportSection* rptDetail = rpt.GetDetail(0); 
	while(!rsl.IsEOF()){ 
		
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);	
		rsl.GetValue(_T("hcol_tenthuoc"),tmpStr); 
		rptDetail->SetValue(_T("2"), tmpStr);
		rsl.GetValue(_T("hcol_donvi"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rsl.GetValue(_T("hcol_lieudung_m2"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rsl.GetValue(_T("hcol_lieudung_bn"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rsl.GetValue(_T("hcol_soluong_linh"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rsl.GetValue(_T("hcol_dungmoi"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rsl.GetValue(_T("hcol_thetich"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rsl.GetValue(_T("hcol_thoigian_sd"),tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rsl.GetValue(_T("tenbietduoc"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rsl.GetValue(_T("hcoi_product_item_id"),tmpStr); 
		rptDetail->SetValue(_T("11"), tmpStr);
		rsl.GetValue(_T("hcol_cancer_orderline_id"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
	
		rsl.MoveNext();
	}

	rpt.PrintPreview();
}

void CHMSCancerPrescriptionPrepareDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSCancerPrescriptionPrepareDialog::OnSendSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nCount =0;
	CString tmpStr, szIndex;
	
	for(int i=0; i < m_wndList.GetItemCount(); i++){
		tmpStr = m_wndList.GetItemText(i, 9);
		szIndex = m_wndList.GetItemText(i, 0);
		if(!szIndex.IsEmpty() && tmpStr.IsEmpty())
		{
			nCount++;
		}
	}

	if(nCount > 0)
	{
		ShowMessageBox(_T("Có mục thuốc chưa được thiết lập thuốc tương đương trong kho"), MB_ICONERROR);
		return;
	}

	if(m_szStatus == _T("O"))
	{
		szSQL.Format(_T("UPDATE hms_cancer_order SET hco_status = 'S' WHERE hco_docno = %ld AND hco_treatidx = %ld AND hco_status = 'O'"), m_nDocumentNo, m_nTreatIdx);
	}
	else
	{
		szSQL.Format(_T("SELECT hsie_locked FROM hms_sixam WHERE hsie_docno = %ld and hsie_idx=%ld"), m_nDocumentNo, m_nTreatIdx);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		CString szLocked;
		rs.GetValue(_T("hsie_locked"), szLocked);
		if(szLocked == _T("Y"))
		{
			ShowMessageBox(_T("Phiếu đã được xác nhận không cho phép bỏ xác nhận"));
			return;
		}
		szSQL.Format(_T("UPDATE hms_cancer_order SET hco_status = 'O' WHERE hco_docno = %ld AND hco_treatidx = %ld AND hco_status = 'S'"), m_nDocumentNo, m_nTreatIdx);
	}
	pMF->ExecSQL(szSQL);
	GetDataToScreen();	
} 
int CHMSCancerPrescriptionPrepareDialog::OnAddHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerPrescriptionPrepareDialog::OnEditHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerPrescriptionPrepareDialog::OnDeleteHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szMsg;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	szSQL.Format(_T("HMS_CANCER_ORDER_DELETE(%ld, %ld, %ld)"), m_nOrderId, m_nDocumentNo, m_nTreatIdx );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
		SetMode(VM_NONE);
		m_wndList.DeleteAllItems();
 	}
	else
	{
		if(ret == -1)
			szMsg.Format(_T("Chưa xóa các mục thuốc. Không thể xóa phác đồ điều trị!"));
		else if(ret == -2)
			szMsg.Format(_T("Phiếu đã xác nhận. Không thể xóa phác đồ điều trị!"));
		
		ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
	}

	return 0;
}
int CHMSCancerPrescriptionPrepareDialog::OnSaveHMSCancerPrescriptionPrepareDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szWhere;

	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("HMS_CANCER_ORDER_CREATE(%s)"), m_hms_cancer_orderTbl.FormatSQL());
 		long ret = str2long(pMF->ExecDML(szSQL));
		m_nOID = ret;
 		if(ret > 0)
 		{
			m_nOrderId = m_nOID;
			
			if(GetMode() == VM_ADD)
			{
				szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM(%ld, %ld, '%s') "),
				m_nDocumentNo, m_nOrderId, pMF->GetCurrentUser());
			
				int ret = str2int(pMF->ExecDML(szSQL));	
				if(ret > 0)
				{
					//OnListLoadData();
				}
			}	 		
		}
	}
 	else
 	{
		szWhere.Format(_T("WHERE hco_docno = %ld AND HCO_TREATIDX = %ld"), m_nDocumentNo, m_nTreatIdx);
		szSQL = m_hms_cancer_orderTbl.GetUpdateSQL();
		szSQL += szWhere;
		pMF->ExecSQL(szSQL);
 	}

	
	GetDataToScreen();
 	
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
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CHMSCancerPrescriptionPrepareDialog::OnHMSCancerPrescriptionPrepareDialogListLoadData(){
	return 0;
}


BOOL CHMSCancerPrescriptionPrepareDialog::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_COMMAND && pMsg->lParam == WM_REFRESH)
	{
_tprintf(_T("\r\nrefresh"));
		OnListLoadData();
		return TRUE;
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}


void CHMSCancerPrescriptionPrepareDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListAddItem();
} 
