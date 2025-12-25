#include "CancerPrescriptionPrepare.h"
#include "MainFrame_E10.h"
#include "CancerPrescriptionLineEditDlg.h"

static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionPrepare* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnCycleChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleChange();
} */
/*static void _OnCycleSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleSetfocus();} */ 
/*static void _OnCycleKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleKillfocus();
} */
static int _OnCycleCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnCycleCheckValue();
} 
/*static void _OnCycleDateChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleDateChange();
} */
/*static void _OnCycleDateSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleDateSetfocus();} */ 
/*static void _OnCycleDateKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnCycleDateKillfocus();
} */
static int _OnCycleDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnCycleDateCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnTreatDiagramSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionPrepare* )pWnd)->OnTreatDiagramSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatDiagramSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnTreatDiagramSelendok();
}
/*static void _OnTreatDiagramSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnTreatDiagramKillfocus();
}*/
/*static void _OnTreatDiagramKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnTreatDiagramKillfocus();
}*/
static long _OnTreatDiagramLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnTreatDiagramLoadData();
}
/*static void _OnTreatDiagramAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnTreatDiagramAddNew();
}*/
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnGFRChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnGFRChange();
} */
/*static void _OnGFRSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnGFRSetfocus();} */ 
/*static void _OnGFRKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnGFRKillfocus();
} */
static int _OnGFRCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnGFRCheckValue();
} 
static void _OnSBACalcMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionPrepare* )pWnd)->OnSBACalcMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSBACalcMethodSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBACalcMethodSelendok();
}
/*static void _OnSBACalcMethodSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBACalcMethodKillfocus();
}*/
/*static void _OnSBACalcMethodKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBACalcMethodKillfocus();
}*/
static long _OnSBACalcMethodLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnSBACalcMethodLoadData();
}
/*static void _OnSBACalcMethodAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBACalcMethodAddNew();
}*/
/*static void _OnSBAChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBAChange();
} */
/*static void _OnSBASetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBASetfocus();} */ 
/*static void _OnSBAKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnSBAKillfocus();
} */
static int _OnSBACheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnSBACheckValue();
} 
/*static void _OnUACChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnUACChange();
} */
/*static void _OnUACSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnUACSetfocus();} */ 
/*static void _OnUACKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnUACKillfocus();
} */

static int _OnUACCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnUACCheckValue();
} 

/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnNoteCheckValue();
}

static void _OnPrepareSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionPrepare* )pWnd)->OnPrepareSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrepareSelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepareSelendok();
}
/*static void _OnPrepareSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepareKillfocus();
}*/
/*static void _OnPrepareKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepareKillfocus();
}*/
static long _OnPrepareLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnPrepareLoadData();
}
/*static void _OnPrepareAddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepareAddNew();
}*/

static void _OnPrepare2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCancerPrescriptionPrepare* )pWnd)->OnPrepare2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrepare2SelendokFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepare2Selendok();
}
/*static void _OnPrepare2SetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepare2Killfocus();
}*/
/*static void _OnPrepare2KillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepare2Killfocus();
}*/
static long _OnPrepare2LoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare *)pWnd)->OnPrepare2LoadData();
}
/*static void _OnPrepare2AddNewFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare *)pWnd)->OnPrepare2AddNew();
}*/

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionPrepare*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCancerPrescriptionPrepare*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCancerPrescriptionPrepare*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnListDeleteItem();
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnListAddItem();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CCancerPrescriptionPrepare *pVw = (CCancerPrescriptionPrepare *)pWnd;
	pVw->OnSendSelect();
} 
static int _OnAddHMSCancerPrescriptionPrepareFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnAddHMSCancerPrescriptionPrepare();
} 
static int _OnEditHMSCancerPrescriptionPrepareFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnEditHMSCancerPrescriptionPrepare();
} 
static int _OnDeleteHMSCancerPrescriptionPrepareFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnDeleteHMSCancerPrescriptionPrepare();
} 
static int _OnSaveHMSCancerPrescriptionPrepareFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnSaveHMSCancerPrescriptionPrepare();
} 
static int _OnCancelHMSCancerPrescriptionPrepareFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionPrepare*)pWnd)->OnCancelHMSCancerPrescriptionPrepare();
} 
CCancerPrescriptionPrepare::CCancerPrescriptionPrepare(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 905;
	m_nDlgHeight = 540;
	SetDefaultValues();	
	CGuiDialog::SetMode(nMode);
	m_nOID = 0;
	m_nOrderId = 0;
	m_bLocked = false;

}
CCancerPrescriptionPrepare::~CCancerPrescriptionPrepare(){
}
void CCancerPrescriptionPrepare::OnCreateComponents(){
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
	m_wndNote.Create(this,115, 120, 895, 145); 
	m_wndPrepareLabel.Create(this, _T("Người pha chế 1"), 10, 150, 110, 175);
	m_wndPrepare.Create(this,115, 150, 405, 175); 
	m_wndPrepare2Label.Create(this, _T("Người pha chế 2"), 410, 150, 510, 175);
	m_wndPrepare2.Create(this,515, 150, 895, 175); 
	m_wndList.Create(this,10, 180, 895, 495); 
	m_wndAdd.Create(this, _T("&Add"), 225, 505, 305, 530);
	m_wndEdit.Create(this, _T("&Update"), 395, 505, 475, 530);
	m_wndDelete.Create(this, _T("&Delete"), 395, 505, 475, 530);
	m_wndSave.Create(this, _T("&Save"), 480, 505, 560, 530);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 505, 645, 530);
	m_wndSend.Create(this, _T("&Confirm"), 650, 505, 730, 530);
	m_wndPrint.Create(this, _T("&Print"), 735, 505, 815, 530);
	m_wndClose.Create(this, _T("&Close"), 820, 505, 900, 530);
}

#include <cstdio>
#include <clocale>
#include <ctime>
#include <cwchar>

void CCancerPrescriptionPrepare::OnInitializeComponents(){

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
	m_wndPrepare.SetCheckValue(true);
	m_wndPrepare.LimitText(20);
	m_wndPrepare2.SetCheckValue(true);
	m_wndPrepare2.LimitText(20);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndSBACalcMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSBACalcMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatDiagram.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTreatDiagram.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndPrepare.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPrepare.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPrepare2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPrepare2.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

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
	m_wndList.SetSortHeader(false);

	//m_wndList.GetHeaderControl()->MergeCell(_T("T/tích(ml)"), 0, 7, 1, 8, true);	
	m_hms_cancer_orderTbl.SetTableName(_T("hms_prepare_order"));
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
	m_hms_cancer_orderTbl.AddField(_T("HCO_PREPARE"), dfText, 15); 
	m_hms_cancer_orderTbl.AddField(_T("HCO_PREPARE2"), dfText, 15); 

    

}
void CCancerPrescriptionPrepare::OnSetWindowEvents(){
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
	m_wndPrepare.SetEvent(WE_SELENDOK, _OnPrepareSelendokFnc);
	//m_wndPrepare.SetEvent(WE_SETFOCUS, _OnPrepareSetfocusFnc);
	//m_wndPrepare.SetEvent(WE_KILLFOCUS, _OnPrepareKillfocusFnc);
	m_wndPrepare.SetEvent(WE_SELCHANGE, _OnPrepareSelectChangeFnc);
	m_wndPrepare.SetEvent(WE_LOADDATA, _OnPrepareLoadDataFnc);
	//m_wndPrepare.SetEvent(WE_ADDNEW, _OnPrepareAddNewFnc);
	m_wndPrepare2.SetEvent(WE_SELENDOK, _OnPrepare2SelendokFnc);
	//m_wndPrepare2.SetEvent(WE_SETFOCUS, _OnPrepare2SetfocusFnc);
	//m_wndPrepare2.SetEvent(WE_KILLFOCUS, _OnPrepare2KillfocusFnc);
	m_wndPrepare2.SetEvent(WE_SELCHANGE, _OnPrepare2SelectChangeFnc);
	m_wndPrepare2.SetEvent(WE_LOADDATA, _OnPrepare2LoadDataFnc);
	//m_wndPrepare2.SetEvent(WE_ADDNEW, _OnPrepare2AddNewFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Add Items"), _OnListAddItemFnc);
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


	GetDataToScreen();	

}
void CCancerPrescriptionPrepare::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndTreatDiagram.GetDlgCtrlID(), m_szTreatDiagramKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndPrepare.GetDlgCtrlID(), m_szPrepareKey);
	DDX_TextEx(pDX, m_wndPrepare2.GetDlgCtrlID(), m_szPrepare2Key);

}
void CCancerPrescriptionPrepare::GetDataToScreen(){
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
		rs.GetValue(_T("HCO_STATUS"), m_szStatus);
		rs.GetValue(_T("HCO_PREPARE"), m_szPrepareKey);
		rs.GetValue(_T("HCO_PREPARE2"), m_szPrepare2Key);

		SetMode(VM_VIEW);
		OnListLoadData();
		if(m_szStatus == _T("S"))
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
void CCancerPrescriptionPrepare::GetScreenToData(){
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
	m_hms_cancer_orderTbl.SetValue(_T("HCO_PREPARE"), m_szPrepareKey);
	m_hms_cancer_orderTbl.SetValue(_T("HCO_PREPARE2"), m_szPrepare2Key);
	

}
void CCancerPrescriptionPrepare::SetDefaultValues(){

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
	m_szPrepareKey.Empty();
	m_szPrepare2Key.Empty();

}
int CCancerPrescriptionPrepare::SetMode(int nMode){
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
			m_szOrderDate = pMF->GetSysDateTime();
 			break;
 		case VM_EDIT: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndPrepare.EnableWindow(TRUE);
			m_wndPrepare2.EnableWindow(TRUE);
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

		if(m_szStatus  == _T("T"))
			{
				m_wndSend.EnableWindow(false);
				m_wndEdit.EnableWindow(false);
			}
 		UpdateData(FALSE);
		m_wndAdd.ShowWindow(SW_HIDE);
		m_wndDelete.ShowWindow(SW_HIDE);
 		return nOldMode;
}
void CCancerPrescriptionPrepare::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionPrepare::OnDoctorSelendok(){
	 
}
/*void CCancerPrescriptionPrepare::OnDoctorSetfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnDoctorKillfocus(){
	
}*/
long CCancerPrescriptionPrepare::OnDoctorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid = 'D' %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCancerPrescriptionPrepare::OnDoctorAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCancerPrescriptionPrepare::OnCycleChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnCycleSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnCycleKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnCycleCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnCycleDateChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnCycleDateSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnCycleDateKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnCycleDateCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnOrderDateChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnOrderDateSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnOrderDateKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnOrderDateCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnDiagnosticChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnDiagnosticSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnDiagnosticKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnDiagnosticCheckValue(){
	return 0;
} 
void CCancerPrescriptionPrepare::OnTreatDiagramSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionPrepare::OnTreatDiagramSelendok(){
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
/*void CCancerPrescriptionPrepare::OnTreatDiagramSetfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnTreatDiagramKillfocus(){
	
}*/
long CCancerPrescriptionPrepare::OnTreatDiagramLoadData(){
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
/*void CCancerPrescriptionPrepare::OnTreatDiagramAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CCancerPrescriptionPrepare::OnWeightChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnWeightSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnWeightKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnWeightCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnHeightChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnHeightSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnHeightKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnHeightCheckValue(){
		
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnGFRChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnGFRSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnGFRKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnGFRCheckValue(){
	return 0;
} 
void CCancerPrescriptionPrepare::OnSBACalcMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionPrepare::OnSBACalcMethodSelendok(){
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
/*void CCancerPrescriptionPrepare::OnSBACalcMethodSetfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnSBACalcMethodKillfocus(){
	
}*/
long CCancerPrescriptionPrepare::OnSBACalcMethodLoadData(){
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
/*void CCancerPrescriptionPrepare::OnSBACalcMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCancerPrescriptionPrepare::OnSBAChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnSBASetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnSBAKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnSBACheckValue(){


	return 0;
} 

/*void CCancerPrescriptionPrepare::OnUACChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnUACSetfocus(){
	
} */
/*void CCancerPrescriptionPrepare::OnUACKillfocus(){
	
} */
int CCancerPrescriptionPrepare::OnUACCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionPrepare::OnNoteChange(){
	
} */
/*void CCancerPrescriptionPrepare::OnNoteSetfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnNoteKillfocus(){
	
}*/
int CCancerPrescriptionPrepare::OnNoteCheckValue(){

	return 0;
}
void CCancerPrescriptionPrepare::OnPrepareSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionPrepare::OnPrepareSelendok(){
	 
}
/*void CCancerPrescriptionPrepare::OnPrepareSetfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnPrepareKillfocus(){
	
}*/
long CCancerPrescriptionPrepare::OnPrepareLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPrepare.IsSearchKey() && !m_szPrepareKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid='%s' "), m_szPrepareKey);
	}
	m_wndPrepare.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_deptid = 'KD' %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrepare.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCancerPrescriptionPrepare::OnPrepareAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerPrescriptionPrepare::OnPrepare2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCancerPrescriptionPrepare::OnPrepare2Selendok(){
	 
}
/*void CCancerPrescriptionPrepare::OnPrepare2Setfocus(){
	
}*/
/*void CCancerPrescriptionPrepare::OnPrepare2Killfocus(){
	
}*/
long CCancerPrescriptionPrepare::OnPrepare2LoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPrepare2.IsSearchKey() && !m_szPrepare2Key.IsEmpty()){
		szWhere.Format(_T(" AND su_userid='%s' "), m_szPrepare2Key);
	}
	m_wndPrepare2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_deptid = 'KD' %s ORDER BY su_userid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrepare2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCancerPrescriptionPrepare::OnPrepare2AddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCancerPrescriptionPrepare::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	if(m_szStatus == _T("T"))
	{
		ShowMessageBox(_T("Phiếu đã duyệt. Không thể điều chỉnh!"), MB_OK|MB_ICONERROR);
		return;
	}
	CString tmpStr;
	tmpStr = m_wndList.GetItemText(nSel, 0);
	if(tmpStr.IsEmpty())
		return;

	CCancerPrescriptionLineEditDlg dlg(this);
	dlg.m_nOrderID = m_nOrderId;
	dlg.m_nProductID = str2long(m_wndList.GetItemText(nSel, 11));
	dlg.m_nOrderItemLineID = str2long(m_wndList.GetItemText(nSel, 13));
	//dlg.m_nQuantity = str2float(m_wndList.GetItemText(nSel, 5));
	if(dlg.DoModal() == IDOK)
	{

	}

} 
void CCancerPrescriptionPrepare::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CCancerPrescriptionPrepare::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}

int CCancerPrescriptionPrepare::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	 return 0;
}


long CCancerPrescriptionPrepare::OnListLoadData(){

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
	_T("   case when hcoi_product_item_id > 0 then mp_name else hcoi_extname end AS tenbietduoc,") \
	_T("   case when hcoi_product_item_id > 0 then get_uomname(hcol_donvi) else hcoi_extunit end AS hcol_donvi,") \
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
	_T(" WHERE hcol_cancer_order_id = %ld and NVL(hcol_status, 'N') <> 'C' ") \
	_T(" ORDER BY hcol_type,hcol_index,") \
	_T("   hcol_tenthuoc"), m_nOrderId);
_debug(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString szType, szTypeOld;
	CString szNewLine, szOldLine;
	szOldLine.Empty();
	int nIndex2 = 1;
	int nItem;
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
			nItem = m_wndList.AddItems(
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
			
			nItem = m_wndList.AddItems(
				_T(""), 
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

		long nItemId;
		rs.GetValue(_T("hcoi_product_item_id"), nItemId);
		if(nItemId <= 0)
		{
			m_wndList.SetSubItemBkColor(nItem, 9, RGB(255, 128, 0));
			m_wndList.SetSubItemTextColor(nItem, 9, COLOR_WHITE);
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return nCount;
	return 0;
}

void CCancerPrescriptionPrepare::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_ADD);
	GetDataToScreen();

} 
void CCancerPrescriptionPrepare::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditHMSCancerPrescriptionPrepare();
} 
void CCancerPrescriptionPrepare::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteHMSCancerPrescriptionPrepare();
} 
void CCancerPrescriptionPrepare::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int ret = OnSaveHMSCancerPrescriptionPrepare();
	if(ret > 0)
	{
		//CGuiView::OnOK();
		OnListLoadData();
	}

} 
void CCancerPrescriptionPrepare::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelHMSCancerPrescriptionPrepare();
} 
void CCancerPrescriptionPrepare::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Phiếu điều chế"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Nhãn pha chế"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		InPhieudieuche();
		break;
	case 2:
		InNhanphache();
		break;
	}

} 


void CCancerPrescriptionPrepare::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
void CCancerPrescriptionPrepare::OnSendSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;

	if(ShowMessageBox(_T("Tác vụ duyệt đơn thuốc pha chế. Bạn có chắc duyệt đơn không?"), MB_YESNO|MB_ICONQUESTION)== IDNO)
		return;
		
	szSQL.Format(_T("UPDATE hms_cancer_order SET hco_status = 'T' WHERE hco_docno = %ld AND hco_treatidx = %ld AND hco_status = 'S'"), m_nDocumentNo, m_nTreatIdx);
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	GetDataToScreen();
} 
int CCancerPrescriptionPrepare::OnAddHMSCancerPrescriptionPrepare(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCancerPrescriptionPrepare::OnEditHMSCancerPrescriptionPrepare(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCancerPrescriptionPrepare::OnDeleteHMSCancerPrescriptionPrepare(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
/*
	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSCancerPrescriptionPrepare();
 	}
*/
	return 0;
}
int CCancerPrescriptionPrepare::OnSaveHMSCancerPrescriptionPrepare(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;

// 	szSQL.Format(_T("HMS_CANCER_ORDER_CREATE(%s)"), m_hms_cancer_orderTbl.FormatSQL());
//  long ret = str2long(pMF->ExecDML(szSQL));
// 	m_nOID = ret;

	szSQL.Format(_T("UPDATE hms_cancer_order SET hco_prepare = '%s', hco_prepare2 = '%s' ") \
				_T(" WHERE hco_docno=%ld and hco_treatidx=%ld"), m_szPrepareKey, m_szPrepare2Key, m_nDocumentNo, m_nTreatIdx);
	int ret = pMF->ExecSQL(szSQL);

 	if(ret > 0)
 	{
		//m_nOrderId = m_nOID;
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCancerPrescriptionPrepare::OnCancelHMSCancerPrescriptionPrepare(){
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
int CCancerPrescriptionPrepare::OnHMSCancerPrescriptionPrepareListLoadData(){
	return 0;
}

void CCancerPrescriptionPrepare::InPhieudieuche(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CReport rpt;
	long nOrderID;

	
	if(!rpt.Init(_T("Reports/HMS/PMS_PHIEUDIEUCHE.RPT")) )
		return;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderid     AS orderid,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_cancer_order_id,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   hpo_refidx,") \
	_T("   HCR_RECORDNO, ") \
	_T("   HCO_WEIGHT, ") \
	_T("   HCO_HEIGHT, ") \
	_T("   HCO_SBA_METHOD, ") \
	_T("   HCO_CYCLE, ") \
	_T("   HCO_SBA_AREA, ") \
	_T("   HCO_CYCLE_DATE, ") \
	_T("   TO_CHAR(HCO_ORDER_DATE, 'DD/MM/YYYY') as order_date, ") \
	_T("   HCO_DIAGNOSTIC, ") \
	_T("   HCO_NOTE, HCO_GFR, HCO_UAC, ") \
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
	_T("   hpo_approveby                                      AS approvedby,") \
	_T("   hco_cancer_treatdiag_id, ") \
	_T("   get_username(hco_doctor) AS doctor, ") \
	_T("   (SELECT hrl_name FROM hms_roomlist WHERE hb_deptid = hrl_deptid AND hb_roomid = hrl_id AND rownum = 1) AS roomname ") \
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
	_T("     hpo_refidx,") \
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
	_T("	 HCO_NOTE, HCO_GFR, HCO_UAC, ") \
	_T("	 HCO_DOCTOR, ") \
	_T("     (SELECT hct_desc as name FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id=hco_cancer_treatdiag_id) as treatdiagname, ") \
	_T(" hco_cancer_treatdiag_id, ") \
	_T("     'I' AS hpo_type") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno AND hco_treatidx=hpo_treatidx) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T("  LEFT JOIN hms_bed") \
	_T("  ON (hb_docno = hco_docno") \
	_T("  AND hpo_deptid = hb_deptid") \
	_T("  AND hpo_refidx = hb_refidx)") \
	_T(" WHERE hco_docno =%d") \
	_T(" AND hco_treatidx = %ld ") \
	_T(" AND hpo_ordertype   IN('D','P')"),m_nDocumentNo, m_nTreatIdx);
	_fmsg(_T("%s"), szSQL);
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
	rs.GetValue(_T("deptid"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(tmpStr));
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
	rs.GetValue(_T("ORDER_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("order_date"), tmpStr);
	rs.GetValue(_T("HCO_DIAGNOSTIC"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diagnstic"), tmpStr);
	rs.GetValue(_T("HCO_CANCER_TREATDIAG_ID"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cancer_treatdiag"), tmpStr);
	rs.GetValue(_T("HCO_NOTE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("note"), tmpStr);

	rs.GetValue(_T("HCO_GFR"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("GFR"), tmpStr);
	rs.GetValue(_T("HCO_UAC"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("UAC"), tmpStr);

	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);

	rs.GetValue(_T("hcr_recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("recordno"), tmpStr);

	
	rs.GetValue(_T("hco_cancer_treatdiag_id"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("treatdiag_id"), tmpStr);

	rs.GetValue(_T("treatdiagname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("treatdiagname"), tmpStr);

	rs.GetValue(_T("approvedate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ngaypha"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ORDER_DATE"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("doctor"), tmpStr);

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("cardno"), tmpStr);

	rs.GetValue(_T("roomname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("roomid"), tmpStr);

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	szSQL.Format(_T(" SELECT DISTINCT hcol_tenthuoc,") \
		_T("   CASE") \
		_T("     WHEN hcoi_product_item_id > 0") \
		_T("     THEN mp_name") \
		_T("     ELSE hcoi_extname") \
		_T("   END AS genericname,") \
		_T("   CASE") \
		_T("     WHEN hcoi_product_item_id > 0") \
		_T("     THEN get_uomname(hcol_donvi)") \
		_T("     ELSE hcoi_extunit") \
		_T("   END                    AS hcol_donvi,") \
		_T("   get_uomname(mp_uom_id) AS unit,") \
		_T("   hcol_lieudung_m2,") \
		_T("   hcol_lieudung_bn,") \
		_T("   hcoi_qtyorder AS hcol_soluong_linh,") \
		_T("   hcol_madungmoi,") \
		_T("   get_selection_desc('cancer_dungmoi', hcol_madungmoi) AS dungmoi,") \
		_T("   hcol_thetich,") \
		_T("   hcol_thoigian_sd,") \
		_T("   hcol_dvthoigian_sd,") \
		_T("   hcol_lieudung_tt,") \
		_T("   hcol_dungtich_tp,") \
		_T("   hctl_dvthoigian_sd,") \
		_T("   hcol_index,") \
		_T("   Get_productclassname(mp_product_class_id) AS genericname2") \
		_T(" FROM hms_cancer_orderline") \
		_T(" LEFT JOIN hms_cancer_orderitem") \
		_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id      = hcol_cancer_order_id") \
		_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id = hcol_cancer_orderline_id)") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON(mp_product_id           = mpi_product_id)") \
		_T(" LEFT JOIN hms_cancer_order") \
		_T(" ON(hco_cancer_order_id = hcol_cancer_order_id)") \
		_T(" LEFT JOIN hms_cancer_treatdiagln") \
		_T(" ON(hco_cancer_treatdiag_id = hctl_cancer_treatdiag_id AND hctl_cancer_treatdiagln_id = hcol_cancer_orderline_id)") \
		_T(" WHERE hcol_cancer_order_id = %ld") \
		_T(" AND NVL(hcol_status, 'N')           <> 'C'") \
		_T(" AND NVL(mp_dungmoi,'N')   <> 'Y'") \
		_T(" ORDER BY hcol_index,") \
		_T("   hcol_tenthuoc"), nOrderID);
	_debug(_T("\r\n%s"), szSQL);
	_fmsg(_T("%s"), szSQL);
	
	int nCount = rsl.ExecSQL(szSQL);
	int nItem =1;
	CReportSection* rptDetail = rpt.GetDetail(0); 
	CString szOldName, szNewName;
	while(!rsl.IsEOF()){ 
		
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);	
		rsl.GetValue(_T("hcol_tenthuoc"), szNewName); 
		if(szOldName == szNewName)
		{
			szOldName = szNewName;
			rsl.GetValue(_T("genericname"), tmpStr); 
			rptDetail->SetValue(_T("10"), tmpStr);
			rptDetail->SetValue(_T("3"), _T(""));
			rptDetail->SetValue(_T("4"), _T(""));
			rptDetail->SetValue(_T("5"), _T(""));
			rsl.GetValue(_T("hcol_soluong_linh"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);

			rptDetail->SetValue(_T("7"), _T(""));
			rptDetail->SetValue(_T("8"), _T(""));
			rptDetail->SetValue(_T("9"), _T(""));
			rptDetail->SetValue(_T("15"), szNewName);
			rsl.GetValue(_T("genericname2"), tmpStr);
			rptDetail->SetValue(_T("16"), tmpStr);
		}
		else
		{
			rsl.GetValue(_T("genericname"), tmpStr); 
			rptDetail->SetValue(_T("10"), tmpStr);

			rsl.GetValue(_T("hcol_donvi"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rsl.GetValue(_T("hcol_lieudung_m2"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rsl.GetValue(_T("hcol_lieudung_bn"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rsl.GetValue(_T("hcol_soluong_linh"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);

			rsl.GetValue(_T("dungmoi"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			
			rsl.GetValue(_T("hcol_madungmoi"), tmpStr);
			if(tmpStr == _T("NAT"))
			{
				rsl.GetValue(_T("hcol_thetich"), tmpStr);
				rptDetail->SetValue(_T("8.1"), tmpStr);
			}
			else
			{
				rsl.GetValue(_T("hcol_thetich"), tmpStr);
				rptDetail->SetValue(_T("8.2"), tmpStr);
			}
			

			rsl.GetValue(_T("hcol_thoigian_sd"),tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			rsl.GetValue(_T("hctl_dvthoigian_sd"),tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);
			rsl.GetValue(_T("hcol_lieudung_tt"),tmpStr);
			rptDetail->SetValue(_T("13"), tmpStr);
			rsl.GetValue(_T("hcol_dungtich_tp"),tmpStr);
			rptDetail->SetValue(_T("14"), tmpStr);
			rptDetail->SetValue(_T("15"), szNewName);
			rsl.GetValue(_T("genericname2"), tmpStr);
			rptDetail->SetValue(_T("16"), tmpStr);
		}
		rsl.MoveNext();
	}

	tmpStr.Format(_T("%d"), nCount);
	rpt.GetReportFooter()->SetValue(_T("total_item"), tmpStr);
	rpt.PrintPreview();
}


void CCancerPrescriptionPrepare::InNhanphache(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CReport rpt;
	CReportSection *rptDetail;
	long nOrderID;

	if(m_szStatus != _T("T"))
		return;
	
 	if(!rpt.Init(_T("Reports/HMS/PMS_NHANPHACHE.RPT")) )
 		return;

	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
	_T("   hpo_type,") \
	_T("   hpo_orderstatus,") \
	_T("   hco_cancer_order_id,") \
	_T("   hcol_cancer_orderline_id,") \
	_T("   hco_status	   AS status,") \
	_T("   hco_treatidx    AS treatidx,") \
	_T("   hpo_deptid      AS deptid,") \
	_T("   hcr_recordno, ") \
	_T("   HCO_WEIGHT, ") \
	_T("   HCO_HEIGHT, ") \
	_T("   HCO_SBA_METHOD, ") \
	_T("   HCO_CYCLE, ") \
	_T("   HCO_SBA_AREA, ") \
	_T("   HCO_CYCLE_DATE, ") \
	_T("   HCO_ORDER_DATE, ") \
	_T("   HCO_DIAGNOSTIC, ") \
	_T("   HCO_NOTE, ") \
	_T("   get_username(hco_prepare) AS preparename, ") \
	_T("   get_username(hco_prepare2) AS prepare2name, ") \
	_T("   get_username(HCO_DOCTOR) AS doctor, ") \
	_T("   treatdiagname, ") \
	_T("   hco_transaction_export_id, ") \
	_T("   CASE") \
	_T("     WHEN hpo_orderstatus='I'") \
	_T("     THEN trunc_date(hpo_approvedate)") \
	_T("     ELSE trunc_date(hpo_orderdate)") \
	_T("   END             AS issuedate,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS name,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   HMS_GETSEX(hp_sex)                                 AS sex,") \
	_T("   hd_cardno                                          AS cardno,") \
	_T("   HMS_GetObjectName(hd_object)                       AS objectname,") \
	_T("   hpo_approveby                                      AS approvedby,") \
	_T("   (SELECT hrl_name FROM hms_roomlist WHERE hb_deptid = hrl_deptid AND hb_roomid = hrl_id AND rownum = 1) AS roomname, ") \
	_T("   hb_deptid AS pdeptid, ") \
	_T("   hcol_dungtich_tp AS dungtich, ") \
	_T("   (SELECT adu_name FROM ad_uom WHERE adu_uom_id = hcol_donvi_tp) AS donvi ") \
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
	_T("     hpo_refidx,") \
	_T("     hpo_ordertype,") \
	_T("     hpo_storage_id,") \
	_T("     hpo_processed,") \
	_T("     hco_cancer_order_id,") \
	_T("     hcol_cancer_orderline_id,") \
	_T("     hco_treatidx,") \
	_T("     hco_status,") \
	_T("	 HCO_WEIGHT, ") \
	_T("	 HCO_HEIGHT, ") \
	_T("	 HCO_SBA_METHOD, ") \
	_T("	 HCO_SBA_AREA, ") \
	_T("     HCO_CYCLE, ") \
	_T("	 HCO_CYCLE_DATE, ") \
	_T("	 HCO_ORDER_DATE, ") \
	_T("	 HCO_DIAGNOSTIC, ") \
	_T("	 HCO_NOTE, ") \
	_T("	 HCO_PREPARE, ") \
	_T("	 HCO_PREPARE2, ") \
	_T("	 HCO_DOCTOR, ") \
	_T("     (SELECT hct_desc as name FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id=hco_cancer_treatdiag_id) as treatdiagname, ") \
	_T("	 hco_transaction_export_id, ") \
	_T("     'I' AS hpo_type, ") \
	_T("     hco_treattime, ") \
	_T("     hcol_dungtich_tp, ") \
	_T("     hcol_donvi_tp ") \
	_T("   FROM hms_ipharmaorder") \
	_T("   LEFT JOIN hms_cancer_order ") \
	_T("   ON(hco_docno=hpo_docno AND hco_treatidx=hpo_treatidx AND hpo_client_id = 'CANCER') ") \
	_T("   LEFT JOIN hms_cancer_orderline ") \
	_T("   ON(hco_cancer_order_id = hcol_cancer_order_id) ") \
	_T("   ) otbl") \
	_T(" ON(hco_docno         =hd_docno)") \
	_T("  LEFT JOIN hms_bed") \
	_T("  ON (hb_docno = hco_docno") \
	_T("  AND hpo_deptid = hb_deptid") \
	_T("  AND hpo_refidx = hb_refidx)") \
	_T(" WHERE hco_docno =%d") \
	_T(" AND hco_treatidx = %ld ") \
	_T(" AND hpo_ordertype   IN('D')") \
	_T(" AND hpo_orderstatus ='A'"), m_nDocumentNo, m_nTreatIdx);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return ;
	}

	while(!rs.IsEOF()){ 

	tmpStr.Empty();
	rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
	rs.GetValue(_T("docno"), tmpStr);	
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	rptDetail->SetValue(_T("Barcode"), tmpStr);
	rs.GetValue(_T("hco_cancer_order_id"), nOrderID);	
	rptDetail->SetValue(_T("OrderID"), tmpStr);
	
	
	CString szPatientName;
	rs.GetValue(_T("name"), szPatientName);
	rptDetail->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rptDetail->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("birthyear"), tmpStr);
	rptDetail->SetValue(_T("YearOfBirth"), tmpStr);
	rs.GetValue(_T("sex"), tmpStr);
	rptDetail->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("deptid"), tmpStr);
	rptDetail->SetValue(_T("Dept"), tmpStr);
	rs.GetValue(_T("HCO_ORDER_DATE"), tmpStr);
	rptDetail->SetValue(_T("order_date"), tmpStr);	
	rs.GetValue(_T("hcr_recordno"), tmpStr);
	rptDetail->SetValue(_T("recordno"), tmpStr);
	rs.GetValue(_T("objectname"), tmpStr);
	rptDetail->SetValue(_T("objectname"), tmpStr);
	rs.GetValue(_T("preparename"), tmpStr);
	tmpStr=GetNameUser(tmpStr);
	rptDetail->SetValue(_T("prepare"), tmpStr);
	rs.GetValue(_T("prepare2name"), tmpStr);
	tmpStr=GetNameUser(tmpStr);
	rptDetail->SetValue(_T("prepare2"), tmpStr);
	rs.GetValue(_T("roomname"), tmpStr);
	rptDetail->SetValue(_T("roomid"), tmpStr);
	rs.GetValue(_T("pdeptid"), tmpStr);
	rptDetail->SetValue(_T("deptid"), tmpStr);
	rs.GetValue(_T("HCO_CYCLE"), tmpStr);
	rptDetail->SetValue(_T("cycle"), tmpStr);
	rs.GetValue(_T("approvedate"), tmpStr);
	rptDetail->SetValue(_T("ngaypha"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("HCO_CYCLE_DATE"), tmpStr);
	rptDetail->SetValue(_T("cycledate"), tmpStr);
	rs.GetValue(_T("doctor"), tmpStr);	
	tmpStr=GetNameUser(tmpStr);
	rptDetail->SetValue(_T("doctor"), tmpStr);

	long nCancer_order_id;
	int nCancer_orderline_id;
	rs.GetValue(_T("hco_cancer_order_id"), nCancer_order_id);
	rs.GetValue(_T("hcol_cancer_orderline_id"), nCancer_orderline_id);

	szSQL.Format(_T(" SELECT CASE WHEN length(mp_name) > 0 THEN mp_name ELSE hcoi_extname END AS mp_name,") \
		_T("   hpou_dousage,") \
		_T("   CASE WHEN mp_dungmoi = 'N' THEN TRIM(hcol_lieudung_tt || ' ' ||") \
		_T("   (SELECT adu_name FROM ad_uom WHERE adu_uom_id = hcol_donvi)) ELSE CAST ('Vừa đủ' AS NVARCHAR2(10)) END AS lieudung") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_cancer_order") \
		_T(" ON(hco_docno     = hpo_docno") \
		_T(" AND hco_treatidx = hpo_treatidx)") \
		_T(" LEFT JOIN hms_cancer_orderline") \
		_T(" ON(hco_cancer_order_id = hcol_cancer_order_id)") \
		_T(" LEFT JOIN hms_cancer_orderitem") \
		_T(" ON(hcoi_cancer_order_id      = hcol_cancer_order_id") \
		_T(" AND hcoi_cancer_orderline_id = hcol_cancer_orderline_id") \
		_T(" AND hcoi_orderid = hpo_orderid ") \
		_T(" AND hcoi_docno = hpo_docno)") \
		_T(" LEFT JOIN m_product_item") \
		_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON(mp_product_id = mpi_product_id)") \
		_T(" LEFT JOIN hms_ipharmaorder_usage") \
		_T(" ON(hpo_orderid               = hpou_orderid") \
		_T(" AND hpou_product_id          = hcoi_product_id)") \
		_T(" WHERE hpo_client_id = 'CANCER' AND hcol_cancer_order_id   = %ld") \
		_T(" AND hcol_cancer_orderline_id = %d") \
		_T(" ORDER BY hcoi_orderline"), nCancer_order_id, nCancer_orderline_id);
	_debug(_T("\r\n%s"), szSQL);
	_fmsg(_T("%s"), szSQL);
	
	int nCount = rsl.ExecSQL(szSQL);
	int nItem = 1, nIdx = 1;
	CString tmpStr2;
	while(!rsl.IsEOF()){ 		
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
		rsl.GetValue(_T("mp_name"),tmpStr); 		
		rptDetail->SetValue(_T("1"), tmpStr);	
		rsl.GetValue(_T("lieudung"),tmpStr); 		
		rptDetail->SetValue(_T("2"), tmpStr);	
		if(nItem == 1)
			rsl.GetValue(_T("hpou_dousage"), tmpStr2);
		rptDetail->SetValue(_T("3"), int2str(nIdx++));	
		nItem++;
		rsl.MoveNext();
	}

	rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));
	rptDetail->SetValue(_T("dousage"), tmpStr2);
	rs.GetValue(_T("dungtich"), tmpStr);
	rptDetail->SetValue(_T("dungtich"), tmpStr);
	rs.GetValue(_T("donvi"), tmpStr);
	rptDetail->SetValue(_T("donvi"), tmpStr);
	rs.MoveNext();
	}

	rpt.PrintPreview();
}


CString CCancerPrescriptionPrepare::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0, nIdx = 1;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				if(nIdx == 2)
					flag=false;	
				nIdx++;
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	else
	{
		szValue=UserName;
	}
	return szValue;


}