#include "HMSOperationScheduleDetailDialog.h"
#include "MainFrm.h"
static void _OnPerformPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnPerformPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformPlaceSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformPlaceSelendok();
}
/*static void _OnPerformPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformPlaceKillfocus();
}*/
/*static void _OnPerformPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformPlaceKillfocus();
}*/
static long _OnPerformPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformPlaceLoadData();
}
/*static void _OnPerformPlaceAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformPlaceAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDeptAddNew();
}*/
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTableSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTableSelendok();
}
/*static void _OnTableSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTableKillfocus();
}*/
/*static void _OnTableKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTableKillfocus();
}*/
static long _OnTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnTableLoadData();
}
/*static void _OnTableAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTableAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnCommentCheckValue();
} 
static void _OnBeforeSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnBeforeSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBeforeSurgerySelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeforeSurgerySelendok();
}
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
static long _OnBeforeSurgeryLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeforeSurgeryLoadData();
}
/*static void _OnBeforeSurgeryAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeforeSurgeryAddNew();
}*/
static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CHMSOperationScheduleDetailDialog*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CHMSOperationScheduleDetailDialog*)pWnd)->OnNoSelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnAssist2AddNew();
}*/
/*static void _OnBeginTimeChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeginTimeChange();
} */
/*static void _OnBeginTimeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeginTimeSetfocus();} */ 
/*static void _OnBeginTimeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeginTimeKillfocus();
} */
static int _OnBeginTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnBeginTimeCheckValue();
} 
/*static void _OnEndTimeChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnEndTimeChange();
} */
/*static void _OnEndTimeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnEndTimeSetfocus();} */ 
/*static void _OnEndTimeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnEndTimeKillfocus();
} */
static int _OnEndTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnEndTimeCheckValue();
} 
/*static void _OnTGDukienChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTGDukienChange();
} */
/*static void _OnTGDukienSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTGDukienSetfocus();} */ 
/*static void _OnTGDukienKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnTGDukienKillfocus();
} */
static int _OnTGDukienCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnTGDukienCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRateSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnRateSelendok();
}
/*static void _OnRateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnRateKillfocus();
}*/
/*static void _OnRateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnRateKillfocus();
}*/
static long _OnRateLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnRateLoadData();
}
/*static void _OnRateAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnRateAddNew();
}*/
static void _OnMachineSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetailDialog* )pWnd)->OnMachineSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMachineSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnMachineSelendok();
}
/*static void _OnMachineSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnMachineKillfocus();
}*/
/*static void _OnMachineKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnMachineKillfocus();
}*/
static long _OnMachineLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetailDialog *)pWnd)->OnMachineLoadData();
}
/*static void _OnMachineAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetailDialog *)pWnd)->OnMachineAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugMaterialSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetailDialog *pVw = (CHMSOperationScheduleDetailDialog *)pWnd;
	pVw->OnAddDrugMaterialSelect();
} 
static int _OnAddHMSOperationScheduleDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetailDialog*)pWnd)->OnAddHMSOperationScheduleDetailDialog();
} 
static int _OnEditHMSOperationScheduleDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetailDialog*)pWnd)->OnEditHMSOperationScheduleDetailDialog();
} 
static int _OnDeleteHMSOperationScheduleDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetailDialog*)pWnd)->OnDeleteHMSOperationScheduleDetailDialog();
} 
static int _OnSaveHMSOperationScheduleDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetailDialog*)pWnd)->OnSaveHMSOperationScheduleDetailDialog();
} 
static int _OnCancelHMSOperationScheduleDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetailDialog*)pWnd)->OnCancelHMSOperationScheduleDetailDialog();
} 
CHMSOperationScheduleDetailDialog::CHMSOperationScheduleDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSOperationScheduleDetailDialog::~CHMSOperationScheduleDetailDialog(){
}
void CHMSOperationScheduleDetailDialog::OnCreateComponents(){
	m_wndSurgeryInfor.Create(this, _T("Surgery Information"), 5, 5, 755, 600);
	m_wndPerformPlaceLabel.Create(this, _T("Perform Place"), 10, 30, 130, 55);
	m_wndPerformPlace.Create(this,135, 30, 385, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 390, 30, 495, 55);
	m_wndOrderDate.Create(this,500, 30, 625, 55); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 10, 60, 130, 85);
	m_wndPerformDept.Create(this,135, 60, 385, 85); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 390, 60, 495, 85);
	m_wndPerformDate.Create(this,500, 60, 625, 85); 
	m_wndTableLabel.Create(this, _T("Table"), 10, 90, 130, 115);
	m_wndTable.Create(this,135, 90, 385, 115); 
	m_wndIndexLabel.Create(this, _T("Index"), 390, 90, 495, 115);
	m_wndIndex.Create(this,500, 90, 625, 115); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 120, 130, 145);
	m_wndDiagnostic.Create(this,135, 120, 750, 145); 
	m_wndSurgeryNameLabel.Create(this, _T("Surgery Name"), 10, 150, 130, 175);
	m_wndSurgeryName.Create(this,135, 150, 750, 175); 
	m_wndCommentLabel.Create(this, _T("Comment"), 10, 180, 130, 205);
	m_wndComment.Create(this,135, 180, 750, 205); 
	m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 10, 210, 130, 235);
	m_wndBeforeSurgery.Create(this,135, 210, 385, 235); 
	m_wndAntibioticBackup.Create(this, _T("Antibiotic Backup"), 390, 210, 495, 235);
	m_wndYes.Create(this, _T("Yes"), 500, 210, 575, 235);
	m_wndNo.Create(this, _T("No"), 580, 210, 655, 235);
	m_wndAnesthesiaMethodLabel.Create(this, _T("Anesthesia Method"), 10, 240, 130, 265);
	m_wndAnesthesiaMethod.Create(this,135, 240, 385, 265); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 390, 240, 495, 265);
	m_wndSurgeon.Create(this,500, 240, 750, 265); 
	m_wndAssistLabel.Create(this, _T("Assist"), 10, 270, 130, 295);
	m_wndAssist.Create(this,135, 270, 385, 295); 
	m_wndAssist2Label.Create(this, _T("Assist2"), 390, 270, 495, 295);
	m_wndAssist2.Create(this,500, 270, 750, 295); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 300, 130, 325);
	m_wndBeginTime.Create(this,135, 300, 260, 325); 
	m_wndEndTimeLabel.Create(this, _T("End Time"), 390, 300, 495, 325);
	m_wndEndTime.Create(this,500, 300, 625, 325); 
	m_wndTGDukienLabel.Create(this, _T("TG d? ki?n"), 630, 300, 690, 325);
	m_wndTGDukien.Create(this,695, 300, 751, 325); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 330, 130, 355);
	m_wndQuantity.Create(this,135, 330, 205, 355); 
	m_wndRateLabel.Create(this, _T("Rate"), 210, 330, 310, 355);
	m_wndRate.Create(this,315, 330, 384, 355); 
	m_wndMachineLabel.Create(this, _T("Machine"), 389, 330, 494, 355);
	m_wndMachine.Create(this,499, 330, 749, 355); 
	m_wndAdd.Create(this, _T("&Add"), 9, 360, 89, 385);
	m_wndEdit.Create(this, _T("&Edit"), 94, 360, 174, 385);
	m_wndDelete.Create(this, _T("&Delete"), 179, 360, 259, 385);
	m_wndSave.Create(this, _T("&Save"), 264, 360, 344, 385);
	m_wndCancel.Create(this, _T("&Cancel"), 349, 360, 429, 385);
	m_wndAddDrugMaterial.Create(this, _T("&Add Material"), 629, 360, 750, 385);

}
void CHMSOperationScheduleDetailDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPerformPlace.SetCheckValue(true);
	m_wndPerformPlace.LimitText(1024);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(1024);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndTable.SetCheckValue(true);
	m_wndTable.LimitText(1024);
	m_wndIndex.SetLimitText(1024);
	m_wndIndex.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndSurgeryName.SetCheckValue(true);
	m_wndSurgeryName.LimitText(1024);
	m_wndComment.SetLimitText(1024);
	m_wndComment.SetCheckValue(true);
	m_wndBeforeSurgery.SetCheckValue(true);
	m_wndBeforeSurgery.LimitText(1024);
	m_wndAnesthesiaMethod.SetCheckValue(true);
	m_wndAnesthesiaMethod.LimitText(1024);
	m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(1024);
	m_wndAssist.SetCheckValue(true);
	m_wndAssist.LimitText(1024);
	m_wndAssist2.SetCheckValue(true);
	m_wndAssist2.LimitText(1024);
	m_wndBeginTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndBeginTime.SetCheckValue(true);
	m_wndEndTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndTime.SetCheckValue(true);
	m_wndTGDukien.SetLimitText(35);
	m_wndTGDukien.SetCheckValue(true);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndRate.SetCheckValue(true);
	m_wndRate.LimitText(35);
	m_wndMachine.SetCheckValue(true);
	m_wndMachine.LimitText(35);




















	m_wndRate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMachine.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMachine.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOperationScheduleDetailDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPerformPlace.SetEvent(WE_SELENDOK, _OnPerformPlaceSelendokFnc);
	//m_wndPerformPlace.SetEvent(WE_SETFOCUS, _OnPerformPlaceSetfocusFnc);
	//m_wndPerformPlace.SetEvent(WE_KILLFOCUS, _OnPerformPlaceKillfocusFnc);
	m_wndPerformPlace.SetEvent(WE_SELCHANGE, _OnPerformPlaceSelectChangeFnc);
	m_wndPerformPlace.SetEvent(WE_LOADDATA, _OnPerformPlaceLoadDataFnc);
	//m_wndPerformPlace.SetEvent(WE_ADDNEW, _OnPerformPlaceAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndTable.SetEvent(WE_SELENDOK, _OnTableSelendokFnc);
	//m_wndTable.SetEvent(WE_SETFOCUS, _OnTableSetfocusFnc);
	//m_wndTable.SetEvent(WE_KILLFOCUS, _OnTableKillfocusFnc);
	m_wndTable.SetEvent(WE_SELCHANGE, _OnTableSelectChangeFnc);
	m_wndTable.SetEvent(WE_LOADDATA, _OnTableLoadDataFnc);
	//m_wndTable.SetEvent(WE_ADDNEW, _OnTableAddNewFnc);
	//m_wndIndex.SetEvent(WE_CHANGE, _OnIndexChangeFnc);
	//m_wndIndex.SetEvent(WE_SETFOCUS, _OnIndexSetfocusFnc);
	//m_wndIndex.SetEvent(WE_KILLFOCUS, _OnIndexKillfocusFnc);
	m_wndIndex.SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndSurgeryName.SetEvent(WE_SELENDOK, _OnSurgeryNameSelendokFnc);
	//m_wndSurgeryName.SetEvent(WE_SETFOCUS, _OnSurgeryNameSetfocusFnc);
	//m_wndSurgeryName.SetEvent(WE_KILLFOCUS, _OnSurgeryNameKillfocusFnc);
	m_wndSurgeryName.SetEvent(WE_SELCHANGE, _OnSurgeryNameSelectChangeFnc);
	m_wndSurgeryName.SetEvent(WE_LOADDATA, _OnSurgeryNameLoadDataFnc);
	//m_wndSurgeryName.SetEvent(WE_ADDNEW, _OnSurgeryNameAddNewFnc);
	//m_wndComment.SetEvent(WE_CHANGE, _OnCommentChangeFnc);
	//m_wndComment.SetEvent(WE_SETFOCUS, _OnCommentSetfocusFnc);
	//m_wndComment.SetEvent(WE_KILLFOCUS, _OnCommentKillfocusFnc);
	m_wndComment.SetEvent(WE_CHECKVALUE, _OnCommentCheckValueFnc);
	m_wndBeforeSurgery.SetEvent(WE_SELENDOK, _OnBeforeSurgerySelendokFnc);
	//m_wndBeforeSurgery.SetEvent(WE_SETFOCUS, _OnBeforeSurgerySetfocusFnc);
	//m_wndBeforeSurgery.SetEvent(WE_KILLFOCUS, _OnBeforeSurgeryKillfocusFnc);
	m_wndBeforeSurgery.SetEvent(WE_SELCHANGE, _OnBeforeSurgerySelectChangeFnc);
	m_wndBeforeSurgery.SetEvent(WE_LOADDATA, _OnBeforeSurgeryLoadDataFnc);
	//m_wndBeforeSurgery.SetEvent(WE_ADDNEW, _OnBeforeSurgeryAddNewFnc);
	m_wndYes.SetEvent(WE_CLICK, _OnYesSelectFnc);
	m_wndNo.SetEvent(WE_CLICK, _OnNoSelectFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_SELENDOK, _OnAnesthesiaMethodSelendokFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_SETFOCUS, _OnAnesthesiaMethodSetfocusFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_KILLFOCUS, _OnAnesthesiaMethodKillfocusFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_SELCHANGE, _OnAnesthesiaMethodSelectChangeFnc);
	m_wndAnesthesiaMethod.SetEvent(WE_LOADDATA, _OnAnesthesiaMethodLoadDataFnc);
	//m_wndAnesthesiaMethod.SetEvent(WE_ADDNEW, _OnAnesthesiaMethodAddNewFnc);
	m_wndSurgeon.SetEvent(WE_SELENDOK, _OnSurgeonSelendokFnc);
	//m_wndSurgeon.SetEvent(WE_SETFOCUS, _OnSurgeonSetfocusFnc);
	//m_wndSurgeon.SetEvent(WE_KILLFOCUS, _OnSurgeonKillfocusFnc);
	m_wndSurgeon.SetEvent(WE_SELCHANGE, _OnSurgeonSelectChangeFnc);
	m_wndSurgeon.SetEvent(WE_LOADDATA, _OnSurgeonLoadDataFnc);
	//m_wndSurgeon.SetEvent(WE_ADDNEW, _OnSurgeonAddNewFnc);
	m_wndAssist.SetEvent(WE_SELENDOK, _OnAssistSelendokFnc);
	//m_wndAssist.SetEvent(WE_SETFOCUS, _OnAssistSetfocusFnc);
	//m_wndAssist.SetEvent(WE_KILLFOCUS, _OnAssistKillfocusFnc);
	m_wndAssist.SetEvent(WE_SELCHANGE, _OnAssistSelectChangeFnc);
	m_wndAssist.SetEvent(WE_LOADDATA, _OnAssistLoadDataFnc);
	//m_wndAssist.SetEvent(WE_ADDNEW, _OnAssistAddNewFnc);
	m_wndAssist2.SetEvent(WE_SELENDOK, _OnAssist2SelendokFnc);
	//m_wndAssist2.SetEvent(WE_SETFOCUS, _OnAssist2SetfocusFnc);
	//m_wndAssist2.SetEvent(WE_KILLFOCUS, _OnAssist2KillfocusFnc);
	m_wndAssist2.SetEvent(WE_SELCHANGE, _OnAssist2SelectChangeFnc);
	m_wndAssist2.SetEvent(WE_LOADDATA, _OnAssist2LoadDataFnc);
	//m_wndAssist2.SetEvent(WE_ADDNEW, _OnAssist2AddNewFnc);
	//m_wndBeginTime.SetEvent(WE_CHANGE, _OnBeginTimeChangeFnc);
	//m_wndBeginTime.SetEvent(WE_SETFOCUS, _OnBeginTimeSetfocusFnc);
	//m_wndBeginTime.SetEvent(WE_KILLFOCUS, _OnBeginTimeKillfocusFnc);
	m_wndBeginTime.SetEvent(WE_CHECKVALUE, _OnBeginTimeCheckValueFnc);
	//m_wndEndTime.SetEvent(WE_CHANGE, _OnEndTimeChangeFnc);
	//m_wndEndTime.SetEvent(WE_SETFOCUS, _OnEndTimeSetfocusFnc);
	//m_wndEndTime.SetEvent(WE_KILLFOCUS, _OnEndTimeKillfocusFnc);
	m_wndEndTime.SetEvent(WE_CHECKVALUE, _OnEndTimeCheckValueFnc);
	//m_wndTGDukien.SetEvent(WE_CHANGE, _OnTGDukienChangeFnc);
	//m_wndTGDukien.SetEvent(WE_SETFOCUS, _OnTGDukienSetfocusFnc);
	//m_wndTGDukien.SetEvent(WE_KILLFOCUS, _OnTGDukienKillfocusFnc);
	m_wndTGDukien.SetEvent(WE_CHECKVALUE, _OnTGDukienCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndRate.SetEvent(WE_SELENDOK, _OnRateSelendokFnc);
	//m_wndRate.SetEvent(WE_SETFOCUS, _OnRateSetfocusFnc);
	//m_wndRate.SetEvent(WE_KILLFOCUS, _OnRateKillfocusFnc);
	m_wndRate.SetEvent(WE_SELCHANGE, _OnRateSelectChangeFnc);
	m_wndRate.SetEvent(WE_LOADDATA, _OnRateLoadDataFnc);
	//m_wndRate.SetEvent(WE_ADDNEW, _OnRateAddNewFnc);
	m_wndMachine.SetEvent(WE_SELENDOK, _OnMachineSelendokFnc);
	//m_wndMachine.SetEvent(WE_SETFOCUS, _OnMachineSetfocusFnc);
	//m_wndMachine.SetEvent(WE_KILLFOCUS, _OnMachineKillfocusFnc);
	m_wndMachine.SetEvent(WE_SELCHANGE, _OnMachineSelectChangeFnc);
	m_wndMachine.SetEvent(WE_LOADDATA, _OnMachineLoadDataFnc);
	//m_wndMachine.SetEvent(WE_ADDNEW, _OnMachineAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddDrugMaterial.SetEvent(WE_CLICK, _OnAddDrugMaterialSelectFnc);
	SetMode(VM_NONE);

}
void CHMSOperationScheduleDetailDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPerformPlace.GetDlgCtrlID(), m_szPerformPlaceKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndTable.GetDlgCtrlID(), m_szTableKey);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndSurgeryName.GetDlgCtrlID(), m_szSurgeryNameKey);
	DDX_Text(pDX, m_wndComment.GetDlgCtrlID(), m_szComment);
	DDX_TextEx(pDX, m_wndBeforeSurgery.GetDlgCtrlID(), m_szBeforeSurgeryKey);
	DDX_Radio(pDX, m_wndYes.GetDlgCtrlID(), m_nYes);
	DDX_Radio(pDX, m_wndNo.GetDlgCtrlID(), m_nNo);
	DDX_TextEx(pDX, m_wndAnesthesiaMethod.GetDlgCtrlID(), m_szAnesthesiaMethodKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_TextEx(pDX, m_wndAssist.GetDlgCtrlID(), m_szAssistKey);
	DDX_TextEx(pDX, m_wndAssist2.GetDlgCtrlID(), m_szAssist2Key);
	DDX_TextEx(pDX, m_wndBeginTime.GetDlgCtrlID(), m_szBeginTime);
	DDX_TextEx(pDX, m_wndEndTime.GetDlgCtrlID(), m_szEndTime);
	DDX_Text(pDX, m_wndTGDukien.GetDlgCtrlID(), m_szTGDukien);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndRate.GetDlgCtrlID(), m_szRateKey);
	DDX_TextEx(pDX, m_wndMachine.GetDlgCtrlID(), m_szMachineKey);

}
void CHMSOperationScheduleDetailDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PerformPlace")] =  m_szPerformPlaceKey;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("PerformDept")] =  m_szPerformDeptKey;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	m_jData[_T("Table")] =  m_szTableKey;
	m_jData[_T("Index")] =  m_nIndex;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("SurgeryName")] =  m_szSurgeryNameKey;
	m_jData[_T("Comment")] =  m_szComment;
	m_jData[_T("BeforeSurgery")] =  m_szBeforeSurgeryKey;
	m_jData[_T("Yes")] =  m_nYes;
	m_jData[_T("No")] =  m_nNo;
	m_jData[_T("AnesthesiaMethod")] =  m_szAnesthesiaMethodKey;
	m_jData[_T("Surgeon")] =  m_szSurgeonKey;
	m_jData[_T("Assist")] =  m_szAssistKey;
	m_jData[_T("Assist2")] =  m_szAssist2Key;
	m_jData[_T("BeginTime")] =  m_szBeginTime;
	m_jData[_T("EndTime")] =  m_szEndTime;
	m_jData[_T("TGDukien")] =  m_szTGDukien;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("Rate")] =  m_szRateKey;
	m_jData[_T("Machine")] =  m_szMachineKey;
	}
	else
	{
			
	m_jData[_T("PerformPlace")].GetValue(m_szPerformPlaceKey);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("PerformDept")].GetValue(m_szPerformDeptKey);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	m_jData[_T("Table")].GetValue(m_szTableKey);
	m_jData[_T("Index")].GetValue(m_nIndex);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("SurgeryName")].GetValue(m_szSurgeryNameKey);
	m_jData[_T("Comment")].GetValue(m_szComment);
	m_jData[_T("BeforeSurgery")].GetValue(m_szBeforeSurgeryKey);
	m_jData[_T("Yes")].GetValue(m_nYes);
	m_jData[_T("No")].GetValue(m_nNo);
	m_jData[_T("AnesthesiaMethod")].GetValue(m_szAnesthesiaMethodKey);
	m_jData[_T("Surgeon")].GetValue(m_szSurgeonKey);
	m_jData[_T("Assist")].GetValue(m_szAssistKey);
	m_jData[_T("Assist2")].GetValue(m_szAssist2Key);
	m_jData[_T("BeginTime")].GetValue(m_szBeginTime);
	m_jData[_T("EndTime")].GetValue(m_szEndTime);
	m_jData[_T("TGDukien")].GetValue(m_szTGDukien);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("Rate")].GetValue(m_szRateKey);
	m_jData[_T("Machine")].GetValue(m_szMachineKey);
	}

}
void CHMSOperationScheduleDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationScheduleDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationScheduleDetailDialog::SetDefaultValues(){

	m_szPerformPlaceKey.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();
	m_szPerformDate.Empty();
	m_szTableKey.Empty();
	m_nIndex=0;
	m_szDiagnostic.Empty();
	m_szSurgeryNameKey.Empty();
	m_szComment.Empty();
	m_szBeforeSurgeryKey.Empty();
	m_nYes=0;
	m_nNo=0;
	m_szAnesthesiaMethodKey.Empty();
	m_szSurgeonKey.Empty();
	m_szAssistKey.Empty();
	m_szAssist2Key.Empty();
	m_szBeginTime.Empty();
	m_szEndTime.Empty();
	m_szTGDukien.Empty();
	m_nQuantity=0;
	m_szRateKey.Empty();
	m_szMachineKey.Empty();

}
int CHMSOperationScheduleDetailDialog::SetMode(int nMode){
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
void CHMSOperationScheduleDetailDialog::OnPerformPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnPerformPlaceSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnPerformPlaceSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnPerformPlaceKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnPerformPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformPlace.IsSearchKey() && !m_szPerformPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformPlaceKey
};
	m_wndPerformPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnPerformPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetailDialog::OnOrderDateChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnOrderDateKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetailDialog::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnPerformDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformDeptKey
};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetailDialog::OnPerformDateChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnPerformDateSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnPerformDateKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetailDialog::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnTableSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnTableSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnTableKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnTableLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTable.IsSearchKey() && !m_szTableKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTableKey
};
	m_wndTable.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTable.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetailDialog::OnIndexChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnIndexSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnIndexKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnIndexCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetailDialog::OnDiagnosticChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnDiagnosticSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnDiagnosticKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetailDialog::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnSurgeryNameSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnSurgeryNameKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnSurgeryNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryName.IsSearchKey() && !m_szSurgeryNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSurgeryNameKey
};
	m_wndSurgeryName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetailDialog::OnCommentChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnCommentSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnCommentKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnCommentCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetailDialog::OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnBeforeSurgerySelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnBeforeSurgerySetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnBeforeSurgeryKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnBeforeSurgeryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBeforeSurgery.IsSearchKey() && !m_szBeforeSurgeryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBeforeSurgeryKey
};
	m_wndBeforeSurgery.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBeforeSurgery.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnYesSelect(){
	
}
void CHMSOperationScheduleDetailDialog::OnNoSelect(){
	
}
void CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthesiaMethod.IsSearchKey() && !m_szAnesthesiaMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthesiaMethodKey
};
	m_wndAnesthesiaMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthesiaMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnSurgeonSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnSurgeonSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnSurgeonKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnSurgeonLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSurgeonKey
};
	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnAssistSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnAssistSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnAssistKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnAssistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist.IsSearchKey() && !m_szAssistKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssistKey
};
	m_wndAssist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnAssist2Selendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnAssist2Setfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnAssist2Killfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnAssist2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssist2.IsSearchKey() && !m_szAssist2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssist2Key
};
	m_wndAssist2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetailDialog::OnBeginTimeChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnBeginTimeSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnBeginTimeKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnBeginTimeCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetailDialog::OnEndTimeChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnEndTimeSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnEndTimeKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnEndTimeCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetailDialog::OnTGDukienChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnTGDukienSetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnTGDukienKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnTGDukienCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetailDialog::OnQuantityChange(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSOperationScheduleDetailDialog::OnQuantityKillfocus(){
	
} */
int CHMSOperationScheduleDetailDialog::OnQuantityCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetailDialog::OnRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnRateSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnRateSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnRateKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnRateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRate.IsSearchKey() && !m_szRateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRateKey
};
	m_wndRate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnRateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnMachineSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnMachineSelendok(){
	 
}
/*void CHMSOperationScheduleDetailDialog::OnMachineSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetailDialog::OnMachineKillfocus(){
	
}*/
long CHMSOperationScheduleDetailDialog::OnMachineLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMachine.IsSearchKey() && !m_szMachineKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMachineKey
};
	m_wndMachine.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMachine.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetailDialog::OnMachineAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetailDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetailDialog::OnAddDrugMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationScheduleDetailDialog::OnAddHMSOperationScheduleDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationScheduleDetailDialog::OnEditHMSOperationScheduleDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationScheduleDetailDialog::OnDeleteHMSOperationScheduleDetailDialog(){
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
 		OnCancelHMSOperationScheduleDetailDialog();
 	}
	return 0;
}
int CHMSOperationScheduleDetailDialog::OnSaveHMSOperationScheduleDetailDialog(){
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
 		//OnHMSOperationScheduleDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationScheduleDetailDialog::OnCancelHMSOperationScheduleDetailDialog(){
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
int CHMSOperationScheduleDetailDialog::OnHMSOperationScheduleDetailDialogListLoadData(){
	return 0;
}
