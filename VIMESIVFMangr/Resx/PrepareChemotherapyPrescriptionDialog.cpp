#include "PrepareChemotherapyPrescriptionDialog.h"
#include "MainFrm.h"
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPrepareChemotherapyPrescriptionDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnCycleChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnCycleChange();
} */
/*static void _OnCycleSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnCycleSetfocus();} */ 
/*static void _OnCycleKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnCycleKillfocus();
} */
static int _OnCycleCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnCycleCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnHeightCheckValue();
} 
static void _OnSBACalcMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPrepareChemotherapyPrescriptionDialog* )pWnd)->OnSBACalcMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSBACalcMethodSelendokFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodSelendok();
}
/*static void _OnSBACalcMethodSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
/*static void _OnSBACalcMethodKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
static long _OnSBACalcMethodLoadDataFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodLoadData();
}
/*static void _OnSBACalcMethodAddNewFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodAddNew();
}*/
/*static void _OnSBAChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBAChange();
} */
/*static void _OnSBASetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBASetfocus();} */ 
/*static void _OnSBAKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBAKillfocus();
} */
static int _OnSBACheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnSBACheckValue();
} 
/*static void _OnPathologicalChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalChange();
} */
/*static void _OnPathologicalSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalSetfocus();} */ 
/*static void _OnPathologicalKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalKillfocus();
} */
static int _OnPathologicalCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalCheckValue();
} 
static void _OnTreatDiagramSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPrepareChemotherapyPrescriptionDialog* )pWnd)->OnTreatDiagramSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatDiagramSelendokFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramSelendok();
}
/*static void _OnTreatDiagramSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
/*static void _OnTreatDiagramKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
static long _OnTreatDiagramLoadDataFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramLoadData();
}
/*static void _OnTreatDiagramAddNewFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CPrepareChemotherapyPrescriptionDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CPrepareChemotherapyPrescriptionDialog *pVw = (CPrepareChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnSendSelect();
} 
static int _OnAddPrepareChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnAddPrepareChemotherapyPrescriptionDialog();
} 
static int _OnEditPrepareChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnEditPrepareChemotherapyPrescriptionDialog();
} 
static int _OnDeletePrepareChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnDeletePrepareChemotherapyPrescriptionDialog();
} 
static int _OnSavePrepareChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnSavePrepareChemotherapyPrescriptionDialog();
} 
static int _OnCancelPrepareChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CPrepareChemotherapyPrescriptionDialog*)pWnd)->OnCancelPrepareChemotherapyPrescriptionDialog();
} 
CPrepareChemotherapyPrescriptionDialog::CPrepareChemotherapyPrescriptionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 540;
	SetDefaultValues();
}
CPrepareChemotherapyPrescriptionDialog::~CPrepareChemotherapyPrescriptionDialog(){
}
void CPrepareChemotherapyPrescriptionDialog::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 900, 500);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 5, 30, 105, 55);
	m_wndDoctor.Create(this,110, 30, 402, 55); 
	m_wndCycleLabel.Create(this, _T("Cycle"), 407, 30, 512, 55);
	m_wndCycle.Create(this,517, 30, 608, 55); 
	m_wndDateLabel.Create(this, _T("Date"), 613, 30, 713, 55);
	m_wndDate.Create(this,718, 30, 773, 55); 
	m_wndOrderDate.Create(this,778, 30, 898, 55); 
	m_wndWeightLabel.Create(this, _T("Weight"), 5, 60, 105, 85);
	m_wndWeight.Create(this,110, 60, 201, 85); 
	m_wndHeightLabel.Create(this, _T("Height"), 206, 60, 306, 85);
	m_wndHeight.Create(this,311, 60, 402, 85); 
	m_wndSBACalcMethodLabel.Create(this, _T("SBA Calc Method"), 407, 60, 512, 85);
	m_wndSBACalcMethod.Create(this,517, 60, 608, 85); 
	m_wndSBALabel.Create(this, _T("SBA(m2)"), 613, 60, 713, 85);
	m_wndSBA.Create(this,718, 60, 773, 85); 
	m_wndPathologicalLabel.Create(this, _T("Pathological"), 5, 90, 105, 115);
	m_wndPathological.Create(this,110, 90, 608, 115); 
	m_wndTreatDiagramLabel.Create(this, _T("Treat Diagram"), 613, 90, 713, 115);
	m_wndTreatDiagram.Create(this,718, 90, 898, 115); 
	m_wndList.Create(this,5, 120, 898, 405); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 410, 105, 435);
	m_wndNote.Create(this,111, 410, 899, 495); 
	m_wndAdd.Create(this, _T("&Add"), 225, 505, 305, 530);
	m_wndEdit.Create(this, _T("&Edit"), 310, 505, 390, 529);
	m_wndDelete.Create(this, _T("&Delete"), 395, 505, 475, 530);
	m_wndSave.Create(this, _T("&Save"), 480, 505, 560, 530);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 505, 645, 530);
	m_wndPrint.Create(this, _T("&Print"), 735, 505, 815, 530);
	m_wndClose.Create(this, _T("&Close"), 820, 505, 900, 530);
	m_wndSend.Create(this, _T("&Send"), 650, 505, 730, 530);

}
void CPrepareChemotherapyPrescriptionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(20);
	m_wndCycle.SetLimitText(128);
	m_wndCycle.SetCheckValue(true);
	m_wndDate.SetLimitText(20);
	m_wndDate.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndWeight.SetLimitText(22);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(22);
	m_wndHeight.SetCheckValue(true);
	m_wndSBACalcMethod.SetCheckValue(true);
	m_wndSBACalcMethod.LimitText(35);
	m_wndSBA.SetLimitText(22);
	m_wndSBA.SetCheckValue(true);
	m_wndPathological.SetLimitText(254);
	m_wndPathological.SetCheckValue(true);
	m_wndTreatDiagram.SetCheckValue(true);
	m_wndTreatDiagram.LimitText(254);
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSBACalcMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSBACalcMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatDiagram.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatDiagram.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("LD/M2"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Lieu/BN"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Qty Order"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(5, _T("D/Moi"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("T/tich(ml)"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("T/g SD"), CFMT_TEXT, 80);
	m_hms_prepare_orderTbl.SetTableName(_T("hms_prepare_order"));
	m_hms_prepare_orderTbl.AddField(_T("HPO_CREATEDDATE"), dfDateTime); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_CREATEDBY"), dfText, 20); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_UPDATEDDATE"), dfDateTime); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_UPDATEDBY"), dfText, 20); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_PREPARE_ORDER_ID"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_ORDERID"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_ORDERDATE"), dfDateTime); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_DOCNO"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_DEPTID"), dfText, 7); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_DOCTOR"), dfText, 20); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_WEIGHT"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_HEIGHT"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_AREA"), dfLong); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_CYCLE"), dfText, 128); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_CYCLEDATE"), dfText, 20); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_PATHOLOGICAL"), dfText, 254); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_TREATDIAGRAM"), dfText, 254); 
	m_hms_prepare_orderTbl.AddField(_T("HPO_NOTE"), dfText, 254); 

}
void CPrepareChemotherapyPrescriptionDialog::OnSetWindowEvents(){
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
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
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
	//m_wndPathological.SetEvent(WE_CHANGE, _OnPathologicalChangeFnc);
	//m_wndPathological.SetEvent(WE_SETFOCUS, _OnPathologicalSetfocusFnc);
	//m_wndPathological.SetEvent(WE_KILLFOCUS, _OnPathologicalKillfocusFnc);
	m_wndPathological.SetEvent(WE_CHECKVALUE, _OnPathologicalCheckValueFnc);
	m_wndTreatDiagram.SetEvent(WE_SELENDOK, _OnTreatDiagramSelendokFnc);
	//m_wndTreatDiagram.SetEvent(WE_SETFOCUS, _OnTreatDiagramSetfocusFnc);
	//m_wndTreatDiagram.SetEvent(WE_KILLFOCUS, _OnTreatDiagramKillfocusFnc);
	m_wndTreatDiagram.SetEvent(WE_SELCHANGE, _OnTreatDiagramSelectChangeFnc);
	m_wndTreatDiagram.SetEvent(WE_LOADDATA, _OnTreatDiagramLoadDataFnc);
	//m_wndTreatDiagram.SetEvent(WE_ADDNEW, _OnTreatDiagramAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	SetMode(VM_NONE);

}
void CPrepareChemotherapyPrescriptionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndCycle.GetDlgCtrlID(), m_szCycle);
	DDX_Text(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_TextEx(pDX, m_wndSBACalcMethod.GetDlgCtrlID(), m_szSBACalcMethodKey);
	DDX_Text(pDX, m_wndSBA.GetDlgCtrlID(), m_nSBA);
	DDX_Text(pDX, m_wndPathological.GetDlgCtrlID(), m_szPathological);
	DDX_TextEx(pDX, m_wndTreatDiagram.GetDlgCtrlID(), m_szTreatDiagramKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CPrepareChemotherapyPrescriptionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HPO_DOCTOR"), m_szDoctorKey);
	rs.GetValue(_T("HPO_WEIGHT"), m_nWeight);
	rs.GetValue(_T("HPO_HEIGHT"), m_nHeight);
	rs.GetValue(_T("HPO_AREA"), m_nSBA);
	rs.GetValue(_T("HPO_CYCLE"), m_szCycle);
	rs.GetValue(_T("HPO_CYCLEDATE"), m_szDate);
	rs.GetValue(_T("HPO_PATHOLOGICAL"), m_szPathological);
	rs.GetValue(_T("HPO_TREATDIAGRAM"), m_szTreatDiagramKey);
	rs.GetValue(_T("HPO_NOTE"), m_szNote);

}
void CPrepareChemotherapyPrescriptionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_prepare_orderTbl.SetValue(_T("HPO_DOCTOR"), m_szDoctorKey);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_WEIGHT"), m_nWeight);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_HEIGHT"), m_nHeight);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_AREA"), m_nSBA);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_CYCLE"), m_szCycle);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_CYCLEDATE"), m_szDate);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_PATHOLOGICAL"), m_szPathological);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_TREATDIAGRAM"), m_szTreatDiagramKey);
	m_hms_prepare_orderTbl.SetValue(_T("HPO_NOTE"), m_szNote);

}
void CPrepareChemotherapyPrescriptionDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szCycle.Empty();
	m_szDate.Empty();
	m_szOrderDate.Empty();
	m_nWeight=0;
	m_nHeight=0;
	m_szSBACalcMethodKey.Empty();
	m_nSBA=0;
	m_szPathological.Empty();
	m_szTreatDiagramKey.Empty();
	m_szNote.Empty();

}
int CPrepareChemotherapyPrescriptionDialog::SetMode(int nMode){
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
void CPrepareChemotherapyPrescriptionDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnDoctorSelendok(){
	 
}
/*void CPrepareChemotherapyPrescriptionDialog::OnDoctorSetfocus(){
	
}*/
/*void CPrepareChemotherapyPrescriptionDialog::OnDoctorKillfocus(){
	
}*/
long CPrepareChemotherapyPrescriptionDialog::OnDoctorLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPrepareChemotherapyPrescriptionDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnCycleChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnCycleSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnCycleKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnCycleCheckValue(){
	return 0;
} 
/*void CPrepareChemotherapyPrescriptionDialog::OnDateChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnDateSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnDateKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnDateCheckValue(){
	return 0;
} 
/*void CPrepareChemotherapyPrescriptionDialog::OnOrderDateChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnOrderDateSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnOrderDateKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPrepareChemotherapyPrescriptionDialog::OnWeightChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnWeightSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnWeightKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnWeightCheckValue(){
	return 0;
} 
/*void CPrepareChemotherapyPrescriptionDialog::OnHeightChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnHeightSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnHeightKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnHeightCheckValue(){
	return 0;
} 
void CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodSelendok(){
	 
}
/*void CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodSetfocus(){
	
}*/
/*void CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodKillfocus(){
	
}*/
long CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPrepareChemotherapyPrescriptionDialog::OnSBACalcMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnSBAChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnSBASetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnSBAKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnSBACheckValue(){
	return 0;
} 
/*void CPrepareChemotherapyPrescriptionDialog::OnPathologicalChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnPathologicalSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnPathologicalKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnPathologicalCheckValue(){
	return 0;
} 
void CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramSelendok(){
	 
}
/*void CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramSetfocus(){
	
}*/
/*void CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramKillfocus(){
	
}*/
long CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPrepareChemotherapyPrescriptionDialog::OnTreatDiagramAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPrepareChemotherapyPrescriptionDialog::OnListDblClick(){
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareChemotherapyPrescriptionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPrepareChemotherapyPrescriptionDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugName")), 
			rs.GetValue(_T("LD/M2")), 
			rs.GetValue(_T("Lieu/BN")), 
			rs.GetValue(_T("QtyOrder")), 
			rs.GetValue(_T("D/Moi")), 
			rs.GetValue(_T("T/tich(ml)")), 
			rs.GetValue(_T("T/gSD")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CPrepareChemotherapyPrescriptionDialog::OnNoteChange(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnNoteSetfocus(){
	
} */
/*void CPrepareChemotherapyPrescriptionDialog::OnNoteKillfocus(){
	
} */
int CPrepareChemotherapyPrescriptionDialog::OnNoteCheckValue(){
	return 0;
} 
void CPrepareChemotherapyPrescriptionDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPrepareChemotherapyPrescriptionDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPrepareChemotherapyPrescriptionDialog::OnAddPrepareChemotherapyPrescriptionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPrepareChemotherapyPrescriptionDialog::OnEditPrepareChemotherapyPrescriptionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPrepareChemotherapyPrescriptionDialog::OnDeletePrepareChemotherapyPrescriptionDialog(){
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
 		OnCancelPrepareChemotherapyPrescriptionDialog();
 	}
	return 0;
}
int CPrepareChemotherapyPrescriptionDialog::OnSavePrepareChemotherapyPrescriptionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_prepare_orderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_prepare_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPrepareChemotherapyPrescriptionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPrepareChemotherapyPrescriptionDialog::OnCancelPrepareChemotherapyPrescriptionDialog(){
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
int CPrepareChemotherapyPrescriptionDialog::OnPrepareChemotherapyPrescriptionDialogListLoadData(){
	return 0;
}
