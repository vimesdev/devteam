#include "HMSOperationScheduleDetail.h"
#include "MainFrm.h"
static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDocumentNoAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTableSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnTableSelendok();
}
/*static void _OnTableSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
/*static void _OnTableKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
static long _OnTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnTableLoadData();
}
/*static void _OnTableAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnTableAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnCommentCheckValue();
} 
static void _OnBeforeSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnBeforeSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBeforeSurgerySelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgerySelendok();
}
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
static long _OnBeforeSurgeryLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryLoadData();
}
/*static void _OnBeforeSurgeryAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryAddNew();
}*/
static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CHMSOperationScheduleDetail*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CHMSOperationScheduleDetail*)pWnd)->OnNoSelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleDetail* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnAssist2AddNew();
}*/
/*static void _OnStartAtChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnStartAtChange();
} */
/*static void _OnStartAtSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnStartAtSetfocus();} */ 
/*static void _OnStartAtKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnStartAtKillfocus();
} */
static int _OnStartAtCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnStartAtCheckValue();
} 
/*static void _OnEndAtChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnEndAtChange();
} */
/*static void _OnEndAtSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnEndAtSetfocus();} */ 
/*static void _OnEndAtKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnEndAtKillfocus();
} */
static int _OnEndAtCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnEndAtCheckValue();
} 
/*static void _OnExpectedTimeChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnExpectedTimeChange();
} */
/*static void _OnExpectedTimeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnExpectedTimeSetfocus();} */ 
/*static void _OnExpectedTimeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail *)pWnd)->OnExpectedTimeKillfocus();
} */
static int _OnExpectedTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail *)pWnd)->OnExpectedTimeCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugMaterialSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleDetail *pVw = (CHMSOperationScheduleDetail *)pWnd;
	pVw->OnAddDrugMaterialSelect();
} 
static int _OnAddHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnAddHMSOperationScheduleDetail();
} 
static int _OnEditHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnEditHMSOperationScheduleDetail();
} 
static int _OnDeleteHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnDeleteHMSOperationScheduleDetail();
} 
static int _OnSaveHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnSaveHMSOperationScheduleDetail();
} 
static int _OnCancelHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnCancelHMSOperationScheduleDetail();
} 
CHMSOperationScheduleDetail::CHMSOperationScheduleDetail(){

	m_nDlgWidth = 1033;
	m_nDlgHeight = 1029;
	SetDefaultValues();
}
CHMSOperationScheduleDetail::~CHMSOperationScheduleDetail(){
}
void CHMSOperationScheduleDetail::OnCreateComponents(){
	m_wndSurgeryInfor.Create(this, _T("Surgery Information"), 5, 5, 560, 615);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 285, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 290, 30, 395, 55);
	m_wndPatientName.Create(this,400, 30, 555, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 130, 85);
	m_wndOrderDate.Create(this,135, 60, 285, 85); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Place"), 290, 60, 395, 85);
	m_wndPerformDept.Create(this,400, 60, 555, 85); 
	m_wndTableLabel.Create(this, _T("Table"), 10, 90, 130, 115);
	m_wndTable.Create(this,135, 90, 285, 115); 
	m_wndIndexLabel.Create(this, _T("Index"), 290, 90, 395, 115);
	m_wndIndex.Create(this,400, 90, 555, 115); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 120, 130, 145);
	m_wndDiagnostic.Create(this,135, 120, 555, 145); 
	m_wndSurgeryNameLabel.Create(this, _T("Surgery Name"), 10, 150, 130, 175);
	m_wndSurgeryName.Create(this,135, 150, 555, 175); 
	m_wndCommentLabel.Create(this, _T("Comment"), 10, 180, 130, 205);
	m_wndComment.Create(this,135, 180, 555, 205); 
	m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 10, 210, 130, 235);
	m_wndBeforeSurgery.Create(this,135, 210, 285, 235); 
	m_wndAntibioticBackup.Create(this, _T("Antibiotic Backup"), 290, 210, 395, 235);
	m_wndYes.Create(this, _T("Yes"), 400, 210, 475, 235);
	m_wndNo.Create(this, _T("No"), 480, 210, 555, 235);
	m_wndAnesthesiaMethodLabel.Create(this, _T("Anesthesia Method"), 10, 240, 130, 265);
	m_wndAnesthesiaMethod.Create(this,135, 240, 285, 265); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 290, 240, 395, 265);
	m_wndSurgeon.Create(this,400, 240, 555, 265); 
	m_wndAssistLabel.Create(this, _T("Assist"), 10, 270, 130, 295);
	m_wndAssist.Create(this,135, 270, 285, 295); 
	m_wndAssist2Label.Create(this, _T("Assist2"), 290, 270, 395, 295);
	m_wndAssist2.Create(this,400, 270, 555, 295); 
	m_wndStartAtLabel.Create(this, _T("Start at"), 10, 300, 130, 325);
	m_wndStartAt.Create(this,135, 300, 285, 325); 
	m_wndEndAtLabel.Create(this, _T("End At"), 290, 300, 395, 325);
	m_wndEndAt.Create(this,400, 300, 555, 325); 
	m_wndExpectedTimeLabel.Create(this, _T("ExpectedTime"), 10, 330, 130, 355);
	m_wndExpectedTime.Create(this,135, 330, 285, 355); 
	m_wndAdd.Create(this, _T("&Add"), 10, 360, 90, 385);
	m_wndEdit.Create(this, _T("&Edit"), 95, 360, 175, 385);
	m_wndDelete.Create(this, _T("&Delete"), 180, 360, 260, 385);
	m_wndSave.Create(this, _T("&Save"), 265, 360, 345, 385);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 360, 430, 385);
	m_wndAddDrugMaterial.Create(this, _T("&Add Material"), 435, 360, 555, 385);

}
void CHMSOperationScheduleDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(1024);
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
	m_wndStartAt.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStartAt.SetCheckValue(true);
	m_wndEndAt.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndAt.SetCheckValue(true);
	m_wndExpectedTime.SetLimitText(35);
	m_wndExpectedTime.SetCheckValue(true);



















}
void CHMSOperationScheduleDetail::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetEvent(WE_SELENDOK, _OnDocumentNoSelendokFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_SELCHANGE, _OnDocumentNoSelectChangeFnc);
	m_wndDocumentNo.SetEvent(WE_LOADDATA, _OnDocumentNoLoadDataFnc);
	//m_wndDocumentNo.SetEvent(WE_ADDNEW, _OnDocumentNoAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
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
	//m_wndStartAt.SetEvent(WE_CHANGE, _OnStartAtChangeFnc);
	//m_wndStartAt.SetEvent(WE_SETFOCUS, _OnStartAtSetfocusFnc);
	//m_wndStartAt.SetEvent(WE_KILLFOCUS, _OnStartAtKillfocusFnc);
	m_wndStartAt.SetEvent(WE_CHECKVALUE, _OnStartAtCheckValueFnc);
	//m_wndEndAt.SetEvent(WE_CHANGE, _OnEndAtChangeFnc);
	//m_wndEndAt.SetEvent(WE_SETFOCUS, _OnEndAtSetfocusFnc);
	//m_wndEndAt.SetEvent(WE_KILLFOCUS, _OnEndAtKillfocusFnc);
	m_wndEndAt.SetEvent(WE_CHECKVALUE, _OnEndAtCheckValueFnc);
	//m_wndExpectedTime.SetEvent(WE_CHANGE, _OnExpectedTimeChangeFnc);
	//m_wndExpectedTime.SetEvent(WE_SETFOCUS, _OnExpectedTimeSetfocusFnc);
	//m_wndExpectedTime.SetEvent(WE_KILLFOCUS, _OnExpectedTimeKillfocusFnc);
	m_wndExpectedTime.SetEvent(WE_CHECKVALUE, _OnExpectedTimeCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddDrugMaterial.SetEvent(WE_CLICK, _OnAddDrugMaterialSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationScheduleDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationScheduleDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationScheduleDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationScheduleDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationScheduleDetailFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSOperationScheduleDetail::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNoKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
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
	DDX_TextEx(pDX, m_wndStartAt.GetDlgCtrlID(), m_szStartAt);
	DDX_TextEx(pDX, m_wndEndAt.GetDlgCtrlID(), m_szEndAt);
	DDX_Text(pDX, m_wndExpectedTime.GetDlgCtrlID(), m_szExpectedTime);

}
void CHMSOperationScheduleDetail::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_szDocumentNoKey;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("PerformDept")] =  m_szPerformDeptKey;
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
	m_jData[_T("StartAt")] =  m_szStartAt;
	m_jData[_T("EndAt")] =  m_szEndAt;
	m_jData[_T("ExpectedTime")] =  m_szExpectedTime;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNoKey);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("PerformDept")].GetValue(m_szPerformDeptKey);
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
	m_jData[_T("StartAt")].GetValue(m_szStartAt);
	m_jData[_T("EndAt")].GetValue(m_szEndAt);
	m_jData[_T("ExpectedTime")].GetValue(m_szExpectedTime);
	}

}
void CHMSOperationScheduleDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationScheduleDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationScheduleDetail::SetDefaultValues(){

	m_szDocumentNoKey.Empty();
	m_szPatientName.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();
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
	m_szStartAt.Empty();
	m_szEndAt.Empty();
	m_szExpectedTime.Empty();

}
int CHMSOperationScheduleDetail::SetMode(int nMode){
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
void CHMSOperationScheduleDetail::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnDocumentNoSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnDocumentNoKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnDocumentNoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDocumentNo.IsSearchKey() && !m_szDocumentNoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDocumentNoKey
};
	m_wndDocumentNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocumentNo.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleDetail::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetail::OnPatientNameChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnPatientNameSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnPatientNameKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetail::OnOrderDateChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnOrderDateKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetail::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnPerformDeptLoadData(){
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
/*void CHMSOperationScheduleDetail::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnTableSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnTableSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnTableKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnTableLoadData(){
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
/*void CHMSOperationScheduleDetail::OnTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetail::OnIndexChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnIndexSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnIndexKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnIndexCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetail::OnDiagnosticChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnDiagnosticSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnDiagnosticKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetail::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnSurgeryNameSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnSurgeryNameKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnSurgeryNameLoadData(){
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
/*void CHMSOperationScheduleDetail::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetail::OnCommentChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnCommentSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnCommentKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnCommentCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetail::OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnBeforeSurgerySelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnBeforeSurgerySetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnBeforeSurgeryKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnBeforeSurgeryLoadData(){
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
/*void CHMSOperationScheduleDetail::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnYesSelect(){
	
}
void CHMSOperationScheduleDetail::OnNoSelect(){
	
}
void CHMSOperationScheduleDetail::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnAnesthesiaMethodSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnAnesthesiaMethodKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnAnesthesiaMethodLoadData(){
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
/*void CHMSOperationScheduleDetail::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnSurgeonSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnSurgeonSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnSurgeonKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnSurgeonLoadData(){
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
/*void CHMSOperationScheduleDetail::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnAssistSelendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnAssistSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnAssistKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnAssistLoadData(){
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
/*void CHMSOperationScheduleDetail::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnAssist2Selendok(){
	 
}
/*void CHMSOperationScheduleDetail::OnAssist2Setfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnAssist2Killfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnAssist2LoadData(){
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
/*void CHMSOperationScheduleDetail::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationScheduleDetail::OnStartAtChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnStartAtSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnStartAtKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnStartAtCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetail::OnEndAtChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnEndAtSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnEndAtKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnEndAtCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleDetail::OnExpectedTimeChange(){
	
} */
/*void CHMSOperationScheduleDetail::OnExpectedTimeSetfocus(){
	
} */
/*void CHMSOperationScheduleDetail::OnExpectedTimeKillfocus(){
	
} */
int CHMSOperationScheduleDetail::OnExpectedTimeCheckValue(){
	return 0;
} 
void CHMSOperationScheduleDetail::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnAddDrugMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationScheduleDetail::OnAddHMSOperationScheduleDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationScheduleDetail::OnEditHMSOperationScheduleDetail(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationScheduleDetail::OnDeleteHMSOperationScheduleDetail(){
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
 		OnCancelHMSOperationScheduleDetail();
 	}
	return 0;
}
int CHMSOperationScheduleDetail::OnSaveHMSOperationScheduleDetail(){
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
 		//OnHMSOperationScheduleDetailListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationScheduleDetail::OnCancelHMSOperationScheduleDetail(){
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
int CHMSOperationScheduleDetail::OnHMSOperationScheduleDetailListLoadData(){
	return 0;
}
