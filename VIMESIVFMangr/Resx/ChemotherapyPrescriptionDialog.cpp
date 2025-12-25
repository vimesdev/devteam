#include "ChemotherapyPrescriptionDialog.h"
#include "MainFrm.h"
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CChemotherapyPrescriptionDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnCycleChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnCycleChange();
} */
/*static void _OnCycleSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnCycleSetfocus();} */ 
/*static void _OnCycleKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnCycleKillfocus();
} */
static int _OnCycleCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnCycleCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnHeightCheckValue();
} 
static void _OnSBACalcMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CChemotherapyPrescriptionDialog* )pWnd)->OnSBACalcMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSBACalcMethodSelendokFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodSelendok();
}
/*static void _OnSBACalcMethodSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
/*static void _OnSBACalcMethodKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodKillfocus();
}*/
static long _OnSBACalcMethodLoadDataFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodLoadData();
}
/*static void _OnSBACalcMethodAddNewFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACalcMethodAddNew();
}*/
/*static void _OnSBAChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBAChange();
} */
/*static void _OnSBASetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBASetfocus();} */ 
/*static void _OnSBAKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnSBAKillfocus();
} */
static int _OnSBACheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnSBACheckValue();
} 
/*static void _OnPathologicalChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalChange();
} */
/*static void _OnPathologicalSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalSetfocus();} */ 
/*static void _OnPathologicalKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalKillfocus();
} */
static int _OnPathologicalCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnPathologicalCheckValue();
} 
static void _OnTreatDiagramSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CChemotherapyPrescriptionDialog* )pWnd)->OnTreatDiagramSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatDiagramSelendokFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramSelendok();
}
/*static void _OnTreatDiagramSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
/*static void _OnTreatDiagramKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramKillfocus();
}*/
static long _OnTreatDiagramLoadDataFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramLoadData();
}
/*static void _OnTreatDiagramAddNewFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnTreatDiagramAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CChemotherapyPrescriptionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CChemotherapyPrescriptionDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CChemotherapyPrescriptionDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CChemotherapyPrescriptionDialog *pVw = (CChemotherapyPrescriptionDialog *)pWnd;
	pVw->OnSendSelect();
} 
static int _OnAddChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnAddChemotherapyPrescriptionDialog();
} 
static int _OnEditChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnEditChemotherapyPrescriptionDialog();
} 
static int _OnDeleteChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnDeleteChemotherapyPrescriptionDialog();
} 
static int _OnSaveChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnSaveChemotherapyPrescriptionDialog();
} 
static int _OnCancelChemotherapyPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CChemotherapyPrescriptionDialog*)pWnd)->OnCancelChemotherapyPrescriptionDialog();
} 
CChemotherapyPrescriptionDialog::CChemotherapyPrescriptionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 850;
	m_nDlgHeight = 540;
	SetDefaultValues();
}
CChemotherapyPrescriptionDialog::~CChemotherapyPrescriptionDialog(){
}
void CChemotherapyPrescriptionDialog::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 840, 500);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 5, 30, 105, 55);
	m_wndDoctor.Create(this,110, 30, 401, 55); 
	m_wndCycleLabel.Create(this, _T("Cycle"), 406, 30, 506, 55);
	m_wndCycle.Create(this,511, 30, 602, 55); 
	m_wndDateLabel.Create(this, _T("Date"), 607, 30, 737, 55);
	m_wndDate.Create(this,742, 30, 833, 55); 
	m_wndWeightLabel.Create(this, _T("Weight"), 5, 60, 105, 85);
	m_wndWeight.Create(this,110, 60, 201, 85); 
	m_wndHeightLabel.Create(this, _T("Height"), 206, 60, 306, 85);
	m_wndHeight.Create(this,311, 60, 402, 85); 
	m_wndSBACalcMethodLabel.Create(this, _T("SBA Calc Method"), 407, 60, 507, 85);
	m_wndSBACalcMethod.Create(this,512, 60, 603, 85); 
	m_wndSBALabel.Create(this, _T("SBA"), 608, 60, 738, 85);
	m_wndSBA.Create(this,743, 60, 834, 85); 
	m_wndPathologicalLabel.Create(this, _T("Pathological"), 5, 90, 105, 115);
	m_wndPathological.Create(this,110, 90, 603, 115); 
	m_wndTreatDiagramLabel.Create(this, _T("Treat Diagram"), 608, 90, 738, 115);
	m_wndTreatDiagram.Create(this,743, 90, 834, 115); 
	m_wndList.Create(this,5, 120, 835, 405); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 410, 105, 435);
	m_wndNote.Create(this,110, 410, 834, 495); 
	m_wndAdd.Create(this, _T("&Add"), 165, 505, 245, 530);
	m_wndEdit.Create(this, _T("&Edit"), 250, 505, 330, 529);
	m_wndDelete.Create(this, _T("&Delete"), 335, 505, 415, 530);
	m_wndSave.Create(this, _T("&Save"), 420, 505, 500, 530);
	m_wndCancel.Create(this, _T("&Cancel"), 505, 505, 585, 530);
	m_wndPrint.Create(this, _T("&Print"), 675, 505, 755, 530);
	m_wndClose.Create(this, _T("&Close"), 760, 505, 840, 530);
	m_wndSend.Create(this, _T("&Send"), 590, 505, 670, 530);

}
void CChemotherapyPrescriptionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(20);
	m_wndCycle.SetLimitText(128);
	m_wndCycle.SetCheckValue(true);
	m_wndDate.SetLimitText(20);
	m_wndDate.SetCheckValue(true);
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
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSBACalcMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSBACalcMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatDiagram.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatDiagram.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("LD/M2"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Lieu/BN"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Qty Order"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("D/Moi"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("T/tich(ml)"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("T/g SD"), CFMT_TEXT, 100);
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
void CChemotherapyPrescriptionDialog::OnSetWindowEvents(){
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
void CChemotherapyPrescriptionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndCycle.GetDlgCtrlID(), m_szCycle);
	DDX_Text(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_TextEx(pDX, m_wndSBACalcMethod.GetDlgCtrlID(), m_szSBACalcMethodKey);
	DDX_Text(pDX, m_wndSBA.GetDlgCtrlID(), m_nSBA);
	DDX_Text(pDX, m_wndPathological.GetDlgCtrlID(), m_szPathological);
	DDX_TextEx(pDX, m_wndTreatDiagram.GetDlgCtrlID(), m_szTreatDiagramKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CChemotherapyPrescriptionDialog::GetDataToScreen(){
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
void CChemotherapyPrescriptionDialog::GetScreenToData(){
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
void CChemotherapyPrescriptionDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szCycle.Empty();
	m_szDate.Empty();
	m_nWeight=0;
	m_nHeight=0;
	m_szSBACalcMethodKey.Empty();
	m_nSBA=0;
	m_szPathological.Empty();
	m_szTreatDiagramKey.Empty();
	m_szNote.Empty();

}
int CChemotherapyPrescriptionDialog::SetMode(int nMode){
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
void CChemotherapyPrescriptionDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnDoctorSelendok(){
	 
}
/*void CChemotherapyPrescriptionDialog::OnDoctorSetfocus(){
	
}*/
/*void CChemotherapyPrescriptionDialog::OnDoctorKillfocus(){
	
}*/
long CChemotherapyPrescriptionDialog::OnDoctorLoadData(){
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
/*void CChemotherapyPrescriptionDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CChemotherapyPrescriptionDialog::OnCycleChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnCycleSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnCycleKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnCycleCheckValue(){
	return 0;
} 
/*void CChemotherapyPrescriptionDialog::OnDateChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnDateSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnDateKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnDateCheckValue(){
	return 0;
} 
/*void CChemotherapyPrescriptionDialog::OnWeightChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnWeightSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnWeightKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnWeightCheckValue(){
	return 0;
} 
/*void CChemotherapyPrescriptionDialog::OnHeightChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnHeightSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnHeightKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnHeightCheckValue(){
	return 0;
} 
void CChemotherapyPrescriptionDialog::OnSBACalcMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnSBACalcMethodSelendok(){
	 
}
/*void CChemotherapyPrescriptionDialog::OnSBACalcMethodSetfocus(){
	
}*/
/*void CChemotherapyPrescriptionDialog::OnSBACalcMethodKillfocus(){
	
}*/
long CChemotherapyPrescriptionDialog::OnSBACalcMethodLoadData(){
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
/*void CChemotherapyPrescriptionDialog::OnSBACalcMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CChemotherapyPrescriptionDialog::OnSBAChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnSBASetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnSBAKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnSBACheckValue(){
	return 0;
} 
/*void CChemotherapyPrescriptionDialog::OnPathologicalChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnPathologicalSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnPathologicalKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnPathologicalCheckValue(){
	return 0;
} 
void CChemotherapyPrescriptionDialog::OnTreatDiagramSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnTreatDiagramSelendok(){
	 
}
/*void CChemotherapyPrescriptionDialog::OnTreatDiagramSetfocus(){
	
}*/
/*void CChemotherapyPrescriptionDialog::OnTreatDiagramKillfocus(){
	
}*/
long CChemotherapyPrescriptionDialog::OnTreatDiagramLoadData(){
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
/*void CChemotherapyPrescriptionDialog::OnTreatDiagramAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CChemotherapyPrescriptionDialog::OnListDblClick(){
	
} 
void CChemotherapyPrescriptionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CChemotherapyPrescriptionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CChemotherapyPrescriptionDialog::OnListLoadData(){
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
/*void CChemotherapyPrescriptionDialog::OnNoteChange(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnNoteSetfocus(){
	
} */
/*void CChemotherapyPrescriptionDialog::OnNoteKillfocus(){
	
} */
int CChemotherapyPrescriptionDialog::OnNoteCheckValue(){
	return 0;
} 
void CChemotherapyPrescriptionDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CChemotherapyPrescriptionDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CChemotherapyPrescriptionDialog::OnAddChemotherapyPrescriptionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CChemotherapyPrescriptionDialog::OnEditChemotherapyPrescriptionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CChemotherapyPrescriptionDialog::OnDeleteChemotherapyPrescriptionDialog(){
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
 		OnCancelChemotherapyPrescriptionDialog();
 	}
	return 0;
}
int CChemotherapyPrescriptionDialog::OnSaveChemotherapyPrescriptionDialog(){
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
 		//OnChemotherapyPrescriptionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CChemotherapyPrescriptionDialog::OnCancelChemotherapyPrescriptionDialog(){
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
int CChemotherapyPrescriptionDialog::OnChemotherapyPrescriptionDialogListLoadData(){
	return 0;
}
