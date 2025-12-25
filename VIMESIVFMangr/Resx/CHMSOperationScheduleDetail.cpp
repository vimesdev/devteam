#include "CHMSOperationScheduleDetail.h"
#include "MainFrm.h"
static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDocumentNoAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTableSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnTableSelendok();
}
/*static void _OnTableSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
/*static void _OnTableKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
static long _OnTableLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnTableLoadData();
}
/*static void _OnTableAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnTableAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnCommentCheckValue();
} 
static void _OnBeforeSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnBeforeSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBeforeSurgerySelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgerySelendok();
}
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
static long _OnBeforeSurgeryLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryLoadData();
}
/*static void _OnBeforeSurgeryAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnBeforeSurgeryAddNew();
}*/
static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CCHMSOperationScheduleDetail*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CCHMSOperationScheduleDetail*)pWnd)->OnNoSelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSOperationScheduleDetail* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail *)pWnd)->OnAssist2AddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugMaterialSelectFnc(CWnd *pWnd){
	CCHMSOperationScheduleDetail *pVw = (CCHMSOperationScheduleDetail *)pWnd;
	pVw->OnAddDrugMaterialSelect();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSOperationScheduleDetail*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CCHMSOperationScheduleDetail*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSOperationScheduleDetail*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddCHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnAddCHMSOperationScheduleDetail();
} 
static int _OnEditCHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnEditCHMSOperationScheduleDetail();
} 
static int _OnDeleteCHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnDeleteCHMSOperationScheduleDetail();
} 
static int _OnSaveCHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnSaveCHMSOperationScheduleDetail();
} 
static int _OnCancelCHMSOperationScheduleDetailFnc(CWnd *pWnd){
	 return ((CCHMSOperationScheduleDetail*)pWnd)->OnCancelCHMSOperationScheduleDetail();
} 
CCHMSOperationScheduleDetail::CCHMSOperationScheduleDetail(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSOperationScheduleDetail::~CCHMSOperationScheduleDetail(){
}
void CCHMSOperationScheduleDetail::OnCreateComponents(){
	m_wndSurgeryInfor.Create(this, _T("Surgery Information"), 5, 5, 560, 615);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 285, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 290, 30, 395, 55);
	m_wndPatientName.Create(this,400, 30, 555, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 130, 85);
	m_wndOrderDate.Create(this,135, 60, 285, 85); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 290, 60, 395, 85);
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
	m_wndAdd.Create(this, _T("&Add"), 10, 300, 90, 325);
	m_wndEdit.Create(this, _T("&Edit"), 95, 300, 175, 325);
	m_wndDelete.Create(this, _T("&Delete"), 180, 300, 260, 325);
	m_wndSave.Create(this, _T("&Save"), 265, 300, 345, 325);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 300, 430, 325);
	m_wndAddDrugMaterial.Create(this, _T("&Add Material"), 435, 300, 555, 325);
	m_wndDrugList.Create(this,10, 330, 555, 610); 

}
void CCHMSOperationScheduleDetail::OnInitializeComponents(){
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
	m_wndIndex.SetLimitText(16);
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





















}
void CCHMSOperationScheduleDetail::OnSetWindowEvents(){
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
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndAddDrugMaterial.SetEvent(WE_CLICK, _OnAddDrugMaterialSelectFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSOperationScheduleDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSOperationScheduleDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSOperationScheduleDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSOperationScheduleDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSOperationScheduleDetailFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSOperationScheduleDetail::OnDoDataExchange(CDataExchange* pDX){
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

}
void CCHMSOperationScheduleDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSOperationScheduleDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSOperationScheduleDetail::SetDefaultValues(){

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

}
int CCHMSOperationScheduleDetail::SetMode(int nMode){
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
void CCHMSOperationScheduleDetail::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnDocumentNoSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnDocumentNoSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnDocumentNoKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnDocumentNoLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSOperationScheduleDetail::OnPatientNameChange(){
	
} */
/*void CCHMSOperationScheduleDetail::OnPatientNameSetfocus(){
	
} */
/*void CCHMSOperationScheduleDetail::OnPatientNameKillfocus(){
	
} */
int CCHMSOperationScheduleDetail::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCHMSOperationScheduleDetail::OnOrderDateChange(){
	
} */
/*void CCHMSOperationScheduleDetail::OnOrderDateSetfocus(){
	
} */
/*void CCHMSOperationScheduleDetail::OnOrderDateKillfocus(){
	
} */
int CCHMSOperationScheduleDetail::OnOrderDateCheckValue(){
	return 0;
} 
void CCHMSOperationScheduleDetail::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnPerformDeptSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnPerformDeptSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnPerformDeptKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnPerformDeptLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnTableSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnTableSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnTableKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnTableLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSOperationScheduleDetail::OnIndexChange(){
	
} */
/*void CCHMSOperationScheduleDetail::OnIndexSetfocus(){
	
} */
/*void CCHMSOperationScheduleDetail::OnIndexKillfocus(){
	
} */
int CCHMSOperationScheduleDetail::OnIndexCheckValue(){
	return 0;
} 
/*void CCHMSOperationScheduleDetail::OnDiagnosticChange(){
	
} */
/*void CCHMSOperationScheduleDetail::OnDiagnosticSetfocus(){
	
} */
/*void CCHMSOperationScheduleDetail::OnDiagnosticKillfocus(){
	
} */
int CCHMSOperationScheduleDetail::OnDiagnosticCheckValue(){
	return 0;
} 
void CCHMSOperationScheduleDetail::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnSurgeryNameSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnSurgeryNameSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnSurgeryNameKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnSurgeryNameLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSOperationScheduleDetail::OnCommentChange(){
	
} */
/*void CCHMSOperationScheduleDetail::OnCommentSetfocus(){
	
} */
/*void CCHMSOperationScheduleDetail::OnCommentKillfocus(){
	
} */
int CCHMSOperationScheduleDetail::OnCommentCheckValue(){
	return 0;
} 
void CCHMSOperationScheduleDetail::OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnBeforeSurgerySelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnBeforeSurgerySetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnBeforeSurgeryKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnBeforeSurgeryLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnYesSelect(){
	
}
void CCHMSOperationScheduleDetail::OnNoSelect(){
	
}
void CCHMSOperationScheduleDetail::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnAnesthesiaMethodSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnAnesthesiaMethodKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnAnesthesiaMethodLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnSurgeonSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnSurgeonSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnSurgeonKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnSurgeonLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnAssistSelendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnAssistSetfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnAssistKillfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnAssistLoadData(){
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
/*void CCHMSOperationScheduleDetail::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnAssist2Selendok(){
	 
}
/*void CCHMSOperationScheduleDetail::OnAssist2Setfocus(){
	
}*/
/*void CCHMSOperationScheduleDetail::OnAssist2Killfocus(){
	
}*/
long CCHMSOperationScheduleDetail::OnAssist2LoadData(){
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
/*void CCHMSOperationScheduleDetail::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSOperationScheduleDetail::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnAddDrugMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSOperationScheduleDetail::OnDrugListDblClick(){
	
} 
void CCHMSOperationScheduleDetail::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSOperationScheduleDetail::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSOperationScheduleDetail::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CCHMSOperationScheduleDetail::OnAddCHMSOperationScheduleDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSOperationScheduleDetail::OnEditCHMSOperationScheduleDetail(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSOperationScheduleDetail::OnDeleteCHMSOperationScheduleDetail(){
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
 		OnCancelCHMSOperationScheduleDetail();
 	}
	return 0;
}
int CCHMSOperationScheduleDetail::OnSaveCHMSOperationScheduleDetail(){
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
 		//OnCHMSOperationScheduleDetailListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSOperationScheduleDetail::OnCancelCHMSOperationScheduleDetail(){
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
int CCHMSOperationScheduleDetail::OnCHMSOperationScheduleDetailListLoadData(){
	return 0;
}
