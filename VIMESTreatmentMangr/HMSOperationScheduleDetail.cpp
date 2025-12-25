#include "HMSOperationScheduleDetail.h"
#include "MainFrm.h"
#include "HMSOperationScheduleAddEntryPopup.h"
#include ".\HMSOperationScheduleDetail.h"

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

static void _OnNotUseSelectFnc(CWnd *pWnd){
	  ((CHMSOperationScheduleDetail*)pWnd)->OnNotUseSelect();
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
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleDetail*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSOperationScheduleDetail*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationScheduleDetail*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleDetail*)pWnd)->OnDrugListDeleteItem();
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
CHMSOperationScheduleDetail::CHMSOperationScheduleDetail()
{
	m_nDlgWidth = 560;
	m_nDlgHeight = 625;
	SetDefaultValues();
	
}
CHMSOperationScheduleDetail::~CHMSOperationScheduleDetail(){
}
void CHMSOperationScheduleDetail::OnCreateComponents()
{
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
	

	/*m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 10, 210, 130, 235);
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
	m_wndDrugList.Create(this,10, 390, 555, 610); */


	m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 10, 210, 130, 235);
	m_wndBeforeSurgery.Create(this,135, 210, 555, 235); 
	m_wndAntibioticBackup.Create(this, _T("Sử dụng KSDP:"), 10, 239, 130, 264);
	m_wndYes.Create(this, _T("Sử dụng KSDP"), 263, 239, 394, 264);
	m_wndNo.Create(this, _T("Không dùng KS"), 135, 239, 256, 264);
	m_wndNotUse.Create(this, _T("Sử dụng KS điều trị"), 399, 239, 555, 264);
	m_wndAnesthesiaMethodLabel.Create(this, _T("Anesthesia Method"), 10, 270, 130, 295);
	m_wndAnesthesiaMethod.Create(this,135, 270, 285, 295); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 290, 270, 395, 295);
	m_wndSurgeon.Create(this,400, 270, 555, 295); 
	m_wndAssistLabel.Create(this, _T("Assist"), 10, 300, 130, 325);
	m_wndAssist.Create(this,135, 300, 285, 325); 
	m_wndAssist2Label.Create(this, _T("Assist2"), 290, 300, 395, 325);
	m_wndAssist2.Create(this,400, 300, 555, 325); 
	m_wndStartAtLabel.Create(this, _T("Start at"), 10, 330, 130, 355);
	m_wndStartAt.Create(this,135, 330, 285, 355); 
	m_wndEndAtLabel.Create(this, _T("End At"), 290, 330, 395, 355);
	m_wndEndAt.Create(this,400, 330, 555, 355); 
	m_wndExpectedTimeLabel.Create(this, _T("ExpectedTime"), 10, 360, 130, 385);
	m_wndExpectedTime.Create(this,135, 360, 285, 385); 
	m_wndAdd.Create(this, _T("&Add"), 10, 390, 90, 415);
	m_wndEdit.Create(this, _T("&Edit"), 95, 390, 175, 415);
	m_wndDelete.Create(this, _T("&Delete"), 180, 390, 260, 415);
	m_wndSave.Create(this, _T("&Save"), 265, 390, 345, 415);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 390, 430, 415);
	m_wndAddDrugMaterial.Create(this, _T("&Add Material"), 435, 390, 555, 415);
	m_wndDrugList.Create(this,10, 416, 555, 615); 
	m_wndAntibioticBackup.SetTextColor(RGB(255,0,0));
}
void CHMSOperationScheduleDetail::OnInitializeComponents(){
	//m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.LimitText(16);

	m_wndPatientName.SetReadOnly(TRUE);
	//m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetReadOnly(true);

	m_wndPerformDept.SetReadOnly(true);
	m_wndPerformDept.LimitText(254);

	//m_wndTable.SetCheckValue(true);
	m_wndTable.LimitText(35);
	m_wndIndex.SetLimitText(16);
	m_wndIndex.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	//m_wndDiagnostic.SetCheckValue(true);

	m_wndSurgeryName.SetCheckValue(true);
	m_wndSurgeryName.LimitText(254);

	m_wndComment.SetLimitText(254);
	//m_wndComment.SetCheckValue(true);

	m_wndBeforeSurgery.SetCheckValue(true);
	m_wndBeforeSurgery.LimitText(81);

	//m_wndAnesthesiaMethod.SetCheckValue(true);
	m_wndAnesthesiaMethod.LimitText(128);

	//m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(65);
	//m_wndAssist.SetCheckValue(true);
	m_wndAssist.LimitText(65);
	//m_wndAssist2.SetCheckValue(true);
	m_wndAssist2.LimitText(65);
	m_wndStartAt.SetCheckValue(true);
	m_wndEndAt.SetCheckValue(true);

	m_wndExpectedTime.SetLimitText(35);
	m_wndExpectedTime.SetCheckValue(true);

	m_wndDocumentNo.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 80);
	m_wndDocumentNo.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndDocumentNo.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndDocumentNo.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);
	m_wndDocumentNo.InsertColumn(4, _T("Object"), CFMT_TEXT, 100);
	m_wndDocumentNo.InsertColumn(5, _T("SexID"), CFMT_TEXT, 0);
	m_wndDocumentNo.InsertColumn(6, _T("ObjectID"), CFMT_TEXT, 0);
	m_wndDocumentNo.InsertColumn(7, _T("PID"), CFMT_TEXT, 0);
	m_wndDocumentNo.Format(7, 0, 10, 1);



	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndPerformDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPerformDept.Format(1, 0, 10, 1);


	m_wndTable.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTable.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSurgeryName.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndSurgeryName.InsertColumn(1, _T("Surgery Name"), CFMT_TEXT, 600);
	m_wndSurgeryName.InsertColumn(2, _T("Serv.Price"), CFMT_MONEY | CFMT_RIGHT, 95);	
	m_wndSurgeryName.InsertColumn(4, _T("Type"), CFMT_TEXT | CFMT_RIGHT, 55);


	m_wndBeforeSurgery.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBeforeSurgery.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndAnesthesiaMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAnesthesiaMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSurgeon.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndSurgeon.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSurgeon.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndAssist.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndAssist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndAssist.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndAssist2.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndAssist2.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndAssist2.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndDrugList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 260);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(3, _T("Price"), CFMT_NUMBER, 70);
	m_wndDrugList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 40);
	m_wndDrugList.InsertColumn(5, _T("Money"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(6, _T("TT"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(7, _T("OrderID"), CFMT_TEXT, 0);

//	m_wndDrugList.SetEditLabel(4, GUI_NUMBERCTRL);
//	m_wndDrugList.ModifyStyle(0, LVS_NOSORTHEADER);
//	m_wndDrugList.GetHeaderControl()->SetItemHeight(2);

	m_hms_operation_Tbl.SetTableName(_T("hms_operation"));
	m_hms_operation_Tbl.AddField(_T("ho_createdby"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_createddate"), dfDateTime);
	m_hms_operation_Tbl.AddField(_T("ho_updatedby"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_updateddate"), dfDateTime);

	//m_hms_operation_Tbl.AddField(_T("ho_type"), dfText, 1);
	//m_hms_operation_Tbl.AddField(_T("ho_group"), dfText, 3);

	m_hms_operation_Tbl.AddField(_T("ho_patientno"), dfLong);
	m_hms_operation_Tbl.AddField(_T("ho_docno"), dfLong);

	//m_hms_operation_Tbl.AddField(_T("ho_recordno"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_deptid"), dfText, 7);
	m_hms_operation_Tbl.AddField(_T("ho_pdeptid"), dfText, 7);

	m_hms_operation_Tbl.AddField(_T("ho_roomid"), dfInteger);
	m_hms_operation_Tbl.AddField(_T("ho_bedid"), dfInteger);
	m_hms_operation_Tbl.AddField(_T("ho_refidx"), dfInteger);

	m_hms_operation_Tbl.AddField(_T("ho_orderdate"), dfDateTime);
	m_hms_operation_Tbl.AddField(_T("ho_doctor"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_itemid"), dfText, 13);
	m_hms_operation_Tbl.AddField(_T("ho_qty"), dfInteger);


	m_hms_operation_Tbl.AddField(_T("ho_practitioner"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_assistant"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_performdate"), dfDateTime);
	m_hms_operation_Tbl.AddField(_T("ho_status"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_payment"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_hasfee"), dfText, 1);
	
	m_hms_operation_Tbl.AddField(_T("ho_depttype"), dfText, 1);

	m_hms_operation_Tbl.AddField(_T("ho_user4"), dfText, 15);
	
	m_hms_operation_Tbl.AddField(_T("ho_opera_table"), dfInteger);
	m_hms_operation_Tbl.AddField(_T("ho_opera_index"), dfInteger);


	m_hms_operation_Tbl.AddField(_T("ho_anes_method"), dfInteger);
	m_hms_operation_Tbl.AddField(_T("ho_comment"), dfText, 254);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_result"), dfText, 1);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_method2"), dfInteger);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_result2"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_diagnostic"), dfText, 254);
	
	m_hms_operation_Tbl.AddField(_T("ho_before_optype"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_antibiotic"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_isordering"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_matorder_id"), dfLong);
	m_hms_operation_Tbl.AddField(_T("ho_startat"), dfDateTime);
	m_hms_operation_Tbl.AddField(_T("ho_endat"), dfDateTime);

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
	m_wndNotUse.SetEvent(WE_CLICK, _OnNotUseSelectFnc);
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
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	//AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationScheduleDetailFnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationScheduleDetailFnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationScheduleDetailFnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationScheduleDetailFnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationScheduleDetailFnc, 0, 'T', VK_CONTROL);
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
	DDX_Check(pDX, m_wndYes.GetDlgCtrlID(), m_bYes);
	DDX_Check(pDX, m_wndNo.GetDlgCtrlID(), m_bNo);
	DDX_Check(pDX, m_wndNotUse.GetDlgCtrlID(), m_bNotUse);
	DDX_TextEx(pDX, m_wndAnesthesiaMethod.GetDlgCtrlID(), m_szAnesthesiaMethodKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_TextEx(pDX, m_wndAssist.GetDlgCtrlID(), m_szAssistKey);
	DDX_TextEx(pDX, m_wndAssist2.GetDlgCtrlID(), m_szAssist2Key);
	DDX_TextEx(pDX, m_wndStartAt.GetDlgCtrlID(), m_szStartAt);
	DDX_TextEx(pDX, m_wndEndAt.GetDlgCtrlID(), m_szEndAt);
	DDX_Text(pDX, m_wndExpectedTime.GetDlgCtrlID(), m_szExpectedTime);

}
void CHMSOperationScheduleDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szTemp;

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hd_patientno as patientno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hd_object as objectid,") \
				_T("        obj.ho_type as objtype,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        hp_sex as sex,") \
				_T("        ho_idx as idx,") \
				_T("        ho_orderdate as orderdate,") \
				_T("        ho_itemid as itemid,") \
				_T("        ho_comment as opname,") \
				_T("        ho_practitioner as practitioner,") \
				_T("        ho_pdeptid as pdeptid,") \
				_T("        ho_assistant as assistant,") \
				_T("        ho_user4 as assist2,") \
				_T("        ho_opera_table as optable,") \
				_T("        ho_opera_index as optidx,") \
				_T("        ho_anes_method as anesmethod,") \
				_T("        ho_diagnostic as diagnostic,") \
				_T("        ho_before_optype as optype,") \
				_T("        NVL(ho_antibiotic, 'X') as antibiotic,") \
				_T("        ho_status as opstatus,") \
				_T("        ho_matorder_status as matstatus, ") \
				_T("		ho_startat, ho_endat, ho_expectedtime ") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object obj on(ho_id=hd_object)") \
				_T(" left join hms_operation on(ho_docno=hd_docno)") \
				_T(" where ho_idx=%ld and ho_matorder_id=%ld"),
		        m_nOperationID, m_nMaterialOID);

//	_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	
	m_wndDrugList.DeleteAllItems();

	if (!rs.IsEOF())
	{

		rs.GetValue(_T("docno"), m_nDocumentNo);
		
		m_szDocumentNoKey.Format(_T("%ld"), m_nDocumentNo);
		rs.GetValue(_T("patientno"), m_nPatientNo);

		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		m_szOldOrderDate = m_szOrderDate;
		rs.GetValue(_T("pdeptid"), m_szPerformDeptKey);
		rs.GetValue(_T("optable"), m_szTableKey);
		rs.GetValue(_T("optidx"), m_nIndex);
		rs.GetValue(_T("diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("itemid"), m_szSurgeryNameKey);
		rs.GetValue(_T("opname"), m_szComment);
		rs.GetValue(_T("optype"), m_szBeforeSurgeryKey);
		rs.GetValue(_T("antibiotic"), szTemp);

		/*if (szTemp == _T("Y")) m_nYes = 0;
		else m_nYes = 1;*/

		if (szTemp == _T("N"))
		{
			m_bNo = true;
			m_bYes = false;			
			m_bNotUse = false;
		}
		else if (szTemp == _T("Y"))
		{
			m_bYes = true;
			m_bNo = false;
			m_bNotUse = false;
		}	
		else if (szTemp == _T("O"))		
		{
			m_bNotUse = true;
			m_bYes = false;
			m_bNo = false;			
		}
		else
		{
			m_bNotUse = false;
			m_bYes = false;
			m_bNo = false;			
		}

		rs.GetValue(_T("anesmethod"), m_szAnesthesiaMethodKey);
		rs.GetValue(_T("practitioner"), m_szSurgeonKey);
		rs.GetValue(_T("assistant"), m_szAssistKey);
		rs.GetValue(_T("assist2"), m_szAssist2Key);

		rs.GetValue(_T("objectid"), m_szObject);
		rs.GetValue(_T("objtype"), m_szObjectType);
		rs.GetValue(_T("porder"), m_szPOrder);
		rs.GetValue(_T("opstatus"), m_szOpStatus);
		rs.GetValue(_T("matstatus"), m_szMatStatus);
		rs.GetValue(_T("ho_startat"), m_szStartAt);
		rs.GetValue(_T("ho_endat"), m_szEndAt);
		if (m_szStartAt.IsEmpty())
		{
			m_szStartAt = m_szOrderDate;
		}
		if (m_szEndAt.IsEmpty())
		{
			m_szEndAt = m_szOrderDate;
		}

		rs.GetValue(_T("ho_expectedtime"), m_szExpectedTime);
 		//MessageBox(m_szMatStatus);

		OnDrugListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	
}
void CHMSOperationScheduleDetail::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_operation_Tbl.SetValue(_T("ho_createdby"), pMF->GetCurrentUser());
	m_hms_operation_Tbl.SetValue(_T("ho_createddate"), pMF->GetSysDateTime());
	m_hms_operation_Tbl.SetValue(_T("ho_updatedby"), pMF->GetCurrentUser());
	m_hms_operation_Tbl.SetValue(_T("ho_updateddate"), pMF->GetSysDateTime());

	m_hms_operation_Tbl.SetValue(_T("ho_patientno"), m_nPatientNo);
	m_hms_operation_Tbl.SetValue(_T("ho_docno"), m_nDocumentNo);

	m_hms_operation_Tbl.SetValue(_T("ho_refidx"), pMF->m_nRefIndex);
	m_hms_operation_Tbl.SetValue(_T("ho_deptid"), pMF->m_szDept);
	m_hms_operation_Tbl.SetValue(_T("ho_roomid"), pMF->m_nRoomID);
	m_hms_operation_Tbl.SetValue(_T("ho_bedid"), pMF->m_nBedID);

	m_hms_operation_Tbl.SetValue(_T("ho_orderdate"), m_szOrderDate);
	m_hms_operation_Tbl.SetValue(_T("ho_doctor"), pMF->m_szDoctor);
	m_hms_operation_Tbl.SetValue(_T("ho_itemid"), m_szSurgeryNameKey);
	m_hms_operation_Tbl.SetValue(_T("ho_qty"), 1);
	m_hms_operation_Tbl.SetValue(_T("ho_pdeptid"), m_szPerformDeptKey);

	m_hms_operation_Tbl.SetValue(_T("ho_practitioner"), m_szSurgeonKey);
	m_hms_operation_Tbl.SetValue(_T("ho_assistant"), m_szAssistKey);
	m_hms_operation_Tbl.SetValue(_T("ho_performdate"), m_szOrderDate);

	m_hms_operation_Tbl.SetValue(_T("ho_comment"), m_szComment);

	m_hms_operation_Tbl.SetValue(_T("ho_status"), _T("O"));
	m_hms_operation_Tbl.SetValue(_T("ho_payment"), _T("O"));
	m_hms_operation_Tbl.SetValue(_T("ho_hasfee"), _T("Y"));
	
	m_hms_operation_Tbl.SetValue(_T("ho_depttype"), _T("I"));

	m_hms_operation_Tbl.SetValue(_T("ho_user4"), m_szAssist2Key);
	m_hms_operation_Tbl.SetValue(_T("ho_opera_table"), m_szTableKey);
	m_hms_operation_Tbl.SetValue(_T("ho_opera_index"), m_nIndex);

	m_hms_operation_Tbl.SetValue(_T("ho_anes_method"), m_szAnesthesiaMethodKey);

	m_hms_operation_Tbl.SetValue(_T("ho_diagnostic"), m_szDiagnostic);
	//m_hms_operation_Tbl.SetValue(_T("ho_object"), str2int(m_szObjectKey));
	m_hms_operation_Tbl.SetValue(_T("ho_before_optype"), m_szBeforeSurgeryKey);

	/*if (m_nYes == 0)
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("Y"));
	else
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("N"));*/

	if (m_bYes)
    {
        m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("Y"));
    }

    if (m_bNo)
    {
        m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("N"));
    }

    if (m_bNotUse)
    {
        m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("O"));
    }


	m_hms_operation_Tbl.SetValue(_T("ho_isordering"), _T("Y"));
	m_hms_operation_Tbl.SetValue(_T("ho_matorder_id"), m_nMaterialOID);
	m_hms_operation_Tbl.SetValue(_T("ho_startat"), m_szStartAt);
	m_hms_operation_Tbl.SetValue(_T("ho_endat"), m_szEndAt);

}
void CHMSOperationScheduleDetail::SetDefaultValues()
{
	//m_szFromDate.Empty();
	//m_szToDate.Empty();
	//m_nFindDoc=0;
	//m_szFindName.Empty();
	m_szDocumentNoKey.Empty();
	m_szPatientName.Empty();
	//m_szOrderDate.Empty();
	//m_szPerformDeptKey.Empty();
	m_szTableKey.Empty();
	m_szDiagnostic.Empty();
	m_szSurgeryNameKey.Empty();
	m_szComment.Empty();
	m_szBeforeSurgeryKey.Empty();
	//m_nYes=0;
	m_bNo = true;
	m_bYes = false;
	m_bNotUse = false;

	m_szAnesthesiaMethodKey.Empty();
	m_szSurgeonKey.Empty();
	m_szAssistKey.Empty();
	m_szAssist2Key.Empty();
	m_szOldOrderDate.Empty();
	m_szOpStatus = _T("S");
	m_szMatStatus = _T("O");
	m_szPOrder = _T("N");
	m_nIndex = 1;
	m_szEndAt = m_szStartAt = m_szOrderDate;
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
			if(m_szOrderDate.IsEmpty())
			{
				CDate dte;
				dte.ParseDate(pMF->GetSysDate());
				dte += 1;
				m_szOrderDate = dte.GetDate();
				m_szStartAt = m_szEndAt = m_szOrderDate;
			}
			m_wndDocumentNo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			/*if(m_szOpStatus != _T("O"))
			{
				EnableButtons(TRUE, -1);
			}
			else*/
			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE,  0, -1);
 			SetDefaultValues();
 			break;
 		};
		_tprintf(_T("\r\nStartAt: %s"), m_szStartAt);
 		UpdateData(FALSE);
		m_wndAdd.EnableWindow(FALSE);
		m_wndPerformDept.EnableWindow(FALSE);
 		return nOldMode;
}
void CHMSOperationScheduleDetail::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnDocumentNoSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	m_nDocumentNo = str2long(m_szDocumentNoKey);
	m_szPatientName = m_wndDocumentNo.GetCurrent(1);
	m_nPatientNo = str2long(m_wndDocumentNo.GetCurrent(7));

	CString szSQL;

	szSQL.Format(_T(" SELECT hd_object       AS objectid,") \
_T("   ho_type              AS objecttype,") \
_T("   TRUNC(hcr_admitdate) AS admitdate") \
_T(" FROM hms_doc,") \
_T("   hms_clinical_record,") \
_T("   hms_object") \
_T(" WHERE hd_docno = %ld") \
_T(" AND hcr_docno  = hd_docno") \
_T(" AND hd_object  = ho_id"), m_nDocumentNo);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("objectid"), m_szObject);
		rs.GetValue(_T("objecttype"), m_szObjectType);
		rs.GetValue(_T("admitdate"), m_szAdmitDate);
	}
	UpdateData(FALSE);
}
/*void CHMSOperationScheduleDetail::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnDocumentNoKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnDocumentNoLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDocumentNo.IsSearchKey() && str2long(m_szDocumentNoKey) > 0)
	{
		szWhere.Format(_T(" and hd_docno=%ld "), str2long(m_szDocumentNoKey));
	}
	m_wndDocumentNo.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hd_patientno as patientno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        hp_sex,") \
				_T("        (select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,") \
				_T("        hd_object,") \
				_T("        ho_desc as objname") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record on (htr_docno = hcr_docno)") \
				_T(" where hcr_status in('I') and nvl(hcr_dischargedept, htr_deptid) in('%s') %s and htr_status = 'I'"),
				pMF->m_szDept, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocumentNo.AddItems(
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("objname")),
			rs.GetValue(_T("hp_sex")),
			rs.GetValue(_T("hd_object")),
			rs.GetValue(_T("patientno")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
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
int CHMSOperationScheduleDetail::OnOrderDateCheckValue()
{
	UpdateData(TRUE);

	if (GetMode() == VM_ADD)
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CDateTime dt;
		dt.ParseDateTime(m_szOrderDate);
		CDate date = dt.GetDate();
		CString szDate;
		szDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());

		if (CompareDate(pMF->GetSysDate(), szDate) > 0)
		{
			m_wndOrderDate.SetToolTipMessage(_T("This value must be greater than or equal to current date"));
			return -1;
		}
	}
	if (!m_szOldOrderDate.IsEmpty())
	{
		if (CompareDateTime(m_szOldOrderDate, m_szOrderDate) > 0)
		{
			//m_wndOrderDate.SetToolTipMessage(_T("This value must be greater than or equal to current date"));
			return -1;
		}
	}

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
long CHMSOperationScheduleDetail::OnPerformDeptLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id='%s' "), m_szPerformDeptKey);
	}

	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 and sd_type='DT' %s") \
				 _T("ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationScheduleDetail::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleDetail::OnTableSelendok(){
	 CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 CRecord rs(&pMF->m_db);
	 CString szSQL;
	// if(GetMode() == VM_ADD)
	 {
		UpdateData(TRUE);
		szSQL.Format(_T("SELECT coalesce(max(ho_opera_index), 0)+1 as opera_index ") \
			_T("FROM hms_operation ") \
			_T("WHERE ho_pdeptid='%s' and ho_opera_table=%d and trunc(ho_orderdate) = TO_DATE('%s','YYYY-MM-DD') "),
			m_szPerformDeptKey, str2int(m_szTableKey), m_szOrderDate.Left(10));
		rs.ExecSQL(szSQL);

		rs.GetValue(_T("opera_index"), m_nIndex);
		UpdateData(FALSE);
	 }
}
/*void CHMSOperationScheduleDetail::OnTableSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnTableKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnTableLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndTable.IsSearchKey() && str2int(m_szTableKey))
	{
		szWhere.Format(_T("WHERE hst_idx=%d"), str2int(m_szTableKey));
	}
	m_wndTable.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hst_idx as id, hst_name as name ") \
		         _T("FROM hms_surgery_table %s ORDER BY hst_idx "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTable.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
	return;
	//Auto set comment
	UpdateData(true);
	m_szComment = m_wndSurgeryName.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSOperationScheduleDetail::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnSurgeryNameKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnSurgeryNameLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	return pMF->LoadOperationList(&m_wndSurgeryName, m_szSurgeryNameKey, m_szObjectType, m_szAdmitDate);


	if (m_wndSurgeryName.IsSearchKey() && !m_szSurgeryNameKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szSurgeryNameKey);
	}
	
	m_wndSurgeryName.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hfl_feeid as itemid,") \
				_T("        hfl_name as itemname,") \
				_T("        hfl_servprice as servprice,") \
				_T("        trim(hfg_desc) as grouptype") \
				_T(" FROM hms_fee_list") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid)") \
				_T(" WHERE substr(hfl_groupid, 1, 2) in('B4','B5') and ((hfl_insprice+hfl_polprice+hfl_servprice) > 0 or hfl_opt_ref is not null)  %s") \
				_T(" ORDER BY hfl_feeid"), szWhere);

	
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{
		m_wndSurgeryName.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("itemname")),
			rs.GetValue(_T("servprice")),
			rs.GetValue(_T("grouptype")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
void CHMSOperationScheduleDetail::OnBeforeSurgerySelendok()
{
	/*UpdateData(TRUE);

	if (m_szBeforeSurgeryKey == _T("1"))
	{
		m_nYes = 1;
	}
	else
	{
		m_nYes = 0;
	}

	UpdateData(FALSE);*/
}
/*void CHMSOperationScheduleDetail::OnBeforeSurgerySetfocus(){
	
}*/
/*void CHMSOperationScheduleDetail::OnBeforeSurgeryKillfocus(){
	
}*/
long CHMSOperationScheduleDetail::OnBeforeSurgeryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndBeforeSurgery.IsSearchKey() && !m_szBeforeSurgeryKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szBeforeSurgeryKey);
	}

	m_wndBeforeSurgery.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
		         _T("FROM sys_sel WHERE 1=1 and ss_id='hms_before_operation' %s ") \
				 _T("ORDER BY cast(ss_code as integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBeforeSurgery.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationScheduleDetail::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleDetail::OnYesSelect()
{
	UpdateData(true);

	m_bYes = true;
	m_bNo = false;
	m_bNotUse = false;

	UpdateData(false);
	
}
void CHMSOperationScheduleDetail::OnNoSelect()
{
	UpdateData(true);

	m_bNo = true;
	m_bYes = false;	
	m_bNotUse = false;

	UpdateData(false);
}
void  CHMSOperationScheduleDetail::OnNotUseSelect()
{
	UpdateData(true);

	m_bNotUse = true;
	m_bYes = false;
	m_bNo = false;	

	UpdateData(false);
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
long CHMSOperationScheduleDetail::OnAnesthesiaMethodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndAnesthesiaMethod.IsSearchKey() && str2int(m_szAnesthesiaMethodKey) > 0)
	{
		szWhere.Format(_T(" WHERE ham_idx=%d "), str2int(m_szAnesthesiaMethodKey));
	}
	m_wndAnesthesiaMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ham_idx as id, ham_name as name ") \
		         _T("FROM hms_anesthesia_method %s ORDER BY ham_idx"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthesiaMethod.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSOperationScheduleDetail::OnSurgeonLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szAssistKey.Trim().IsEmpty())
	{
		m_szAssistKey = _T("''''");
	}

	if (m_szAssist2Key.Trim().IsEmpty())
	{
		m_szAssist2Key = _T("''''");
	}

	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szSurgeonKey);
	}

	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KB','HC')") \
				_T("       and lower(su_userid) not in('%s','%s') %s") \
				_T(" ORDER BY su_userid"),
				m_szAssistKey, m_szAssist2Key, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;

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
long CHMSOperationScheduleDetail::OnAssistLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szSurgeonKey.Trim().IsEmpty())
	{
		m_szSurgeonKey = _T("''''");
	}

	if (m_szAssist2Key.Trim().IsEmpty())
	{
		m_szAssist2Key = _T("''''");
	}

	if (m_wndAssist.IsSearchKey() && !m_szAssistKey.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szAssistKey);
	}

	m_wndAssist.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KB','HC')") \
				_T("       and lower(su_userid) not in('%s','%s') %s") \
				_T(" ORDER BY su_userid"),
				m_szSurgeonKey, m_szAssist2Key, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
long CHMSOperationScheduleDetail::OnAssist2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szSurgeonKey.Trim().IsEmpty())
	{
		m_szSurgeonKey = _T("''''");
	}

	if (m_szAssistKey.Trim().IsEmpty())
	{
		m_szAssistKey = _T("''''");
	}

	if(m_wndAssist2.IsSearchKey() && !m_szAssist2Key.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szAssist2Key);
	}

	m_wndAssist2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id,") \
				_T("        su_name as name,") \
				_T("        su_deptid as deptid") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE sd_type not in('KB','HC')") \
				_T("       and lower(su_userid) not in('%s','%s') %s") \
				_T(" ORDER BY su_userid"),
				m_szSurgeonKey, m_szAssistKey, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssist2.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
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

void CHMSOperationScheduleDetail::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSOperationScheduleDetail();
} 
void CHMSOperationScheduleDetail::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSOperationScheduleDetail();
} 
void CHMSOperationScheduleDetail::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSOperationScheduleDetail();
} 
void CHMSOperationScheduleDetail::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOperationScheduleDetail();
} 
void CHMSOperationScheduleDetail::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSOperationScheduleDetail();
} 
void CHMSOperationScheduleDetail::OnAddDrugMaterialSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}

	CHMSOperationScheduleAddEntryPopup *newPopup = new CHMSOperationScheduleAddEntryPopup(this, VM_ADD);
	newPopup->m_nOperationID = m_nOperationID;
	newPopup->m_nDocNo = m_nDocumentNo;
	newPopup->m_szObjType = m_szObjectType;
	newPopup->m_szOrderDate = m_szOrderDate;

	newPopup->ShowPopup(&m_wndDrugList);
} 
void CHMSOperationScheduleDetail::OnDrugListDblClick()
{
	int nSel = m_wndDrugList.GetCurSel();

	if (nSel < 0)
		return;

	long nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 7));
	if (nOrderID <= 0)
		return;

	CString szStatus = m_wndDrugList.GetItemText(nSel, 6);
	if (szStatus == _T("S"))
		return;

	m_wndDrugList.PostMessage(WM_KEYDOWN, VK_F2);
} 
void CHMSOperationScheduleDetail::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationScheduleDetail::OnDrugListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDrugList.GetCurSel();

	if (nSel < 0)
		return -1;

	CString szStatus = GetOrderStatus();
	_tprintf(_T("\r\nStt: %s| Opt: %s"), szStatus, m_szOpStatus);
	//if (szStatus != _T("O") || m_szOpStatus != _T("O"))
	//{
	//	ShowMessageBox(_T("Cannot process with current status"));
	//	return -1;
	//}

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_ipharmaorder ") \
		         _T("WHERE hpo_docno=%ld AND hpo_reference_id=%ld"), 
				 m_nDocumentNo, m_nOperationID);

	rs.ExecSQL(szSQL);

	//if (rs.GetIntValue() > 0)
	//{
	//	ShowMessageBox(_T("Ph\x1EABu thu\x1EADt \x111\xE3 \x63\xF3 \x64\x1EF1 tr\xF9 thu\x1ED1\x63 v\xE0 v\x1EADt t\x1B0. Kh\xF4ng th\x1EC3 \x78\xF3\x61!"),
	//		           MB_OK | MB_ICONERROR);
	//	return -1;
	//}

	if (ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	long nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 7));

	if (nOrderID < 0)
		return -1;

	szSQL.Format(_T("DELETE FROM hms_op_materialorder WHERE hopm_op_materialorder_id=%ld"),
		         nOrderID);
	int nRet = pMF->ExecSQL(szSQL);

	OnDrugListLoadData();

	return nRet;
} 
long CHMSOperationScheduleDetail::OnDrugListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr;

	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
/*
	szSQL.Format(_T(" SELECT distinct hopm_op_materialorder_id as orderid,") \
		        _T("        hfg_index,") \
				_T("        product_producttype,") \
				_T("        product_typename,") \
				_T("        product_id,") \
				_T("        product_name,") \
				_T("        product_uomname,") \
				_T("        hopm_qtyorder as qty,") \
				_T("        hopm_unitprice as price,") \
				_T("        hopm_amount as amount,") \
				_T("        ho_matorder_status as status") \
				_T(" FROM hms_operation") \
				_T(" LEFT JOIN hms_op_materialorder ON(hopm_docno=ho_docno AND hopm_operation_id=ho_idx)") \
				_T(" LEFT JOIN m_productitem_view ON(product_id=hopm_product_id)") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=product_producttype)") \
				_T(" WHERE hopm_docno=%ld AND hopm_operation_id=%ld") \
				_T(" ORDER BY hfg_index, product_producttype, hopm_op_materialorder_id, product_name, product_uomname"),
				m_nDocumentNo, m_nOperationID);
_msg(_T("%s"), szSQL);
*/
	szSQL.Format(_T(" SELECT DISTINCT hopm_op_materialorder_id AS orderid,") \
_T("   hfg_index,") \
_T("   mp_producttype     AS product_producttype,") \
_T("   mpt_name           AS product_typename,") \
_T("   mp_product_id      AS product_id,") \
_T("   mp_name            AS product_name,") \
_T("   adu_name           AS product_uomname,") \
_T("   hopm_qtyorder      AS qty,") \
_T("   hopm_unitprice     AS price,") \
_T("   hopm_amount        AS amount,") \
_T("   ho_matorder_status AS status") \
_T(" FROM hms_operation") \
_T(" LEFT JOIN hms_op_materialorder") \
_T(" ON(hopm_docno        =ho_docno") \
_T(" AND hopm_operation_id=ho_idx)") \
_T(" LEFT JOIN m_product") \
_T(" ON(mp_product_id=hopm_product_id)") \
_T(" LEFT JOIN m_product_type") \
_T(" ON(mpt_product_type_id = mp_producttype)") \
_T(" LEFT JOIN ad_uom") \
_T(" ON(adu_uom_id = mp_product_uom_id)") \
_T(" LEFT JOIN hms_fee_group") \
_T(" ON(hfg_id            = mp_producttype)") \
_T(" WHERE hopm_operation_id=%ld ") \
_T(" ORDER BY hfg_index, product_producttype, hopm_op_materialorder_id, product_name, product_uomname "), m_nOperationID);
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("\r\n%s"), szSQL);
	CString szOldGroup, szNewGroup;
	szOldGroup.Empty();
	szNewGroup.Empty();

	double nCost;
	double nGroupAmount = 0;
	double nTotalAmount = 0;

	int nIndex = 1;
	int nItem = -1;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("product_producttype"), szNewGroup);

		if (!szNewGroup.IsEmpty() && szOldGroup != szNewGroup)
		{
			if (nGroupAmount > 0)
			{
				tmpStr.Format(_T("%ld"), nGroupAmount);
				m_wndDrugList.SetItemText(nItem, 2, tmpStr);
				nTotalAmount += nGroupAmount;
			}
			

			rs.GetValue(_T("product_typename"), tmpStr);
			CGridListItem *o = new CGridListItem();
			CGridListItem *o2 = new CGridListItem(RGB(64, 128, 192), COLOR_WHITE);
			CGridCell *cell = new CGridCell();
			o2->Add(_T("*"), 35);
			o2->Add(tmpStr, 380);
			o2->Add(_T(""), 70);
			cell->AddRow(o2);
			o->Add(cell);
			nItem = m_wndDrugList.Add(o);
			
//			nItem = m_wndDrugList.AddItems(_T(""), tmpStr, _T(""), _T(""), _T(""),
//										   _T(""), _T(""), szNewGroup, NULL);

			
//			m_wndDrugList.MergeCell(nItem, 1, nItem, 4, DT_LEFT | DT_VCENTER | DT_SINGLELINE, true);

			nIndex = 1;
			nGroupAmount = 0;
			szOldGroup = szNewGroup;
		}

		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("amount"), nCost);
		nGroupAmount += nCost;

		m_wndDrugList.AddItems(
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("price")), 
			rs.GetValue(_T("qty")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("orderid")),
			NULL);
		rs.MoveNext();
	}

	if (nGroupAmount > 0)
	{
		tmpStr.Format(_T("%ld"), nGroupAmount);
		m_wndDrugList.SetItemText(nItem, 5, tmpStr);
		nTotalAmount += nGroupAmount;
	}

	if (nTotalAmount > 0)
	{
		CString szTemp;
		TranslateString(_T("Total Amount"), tmpStr);
		szTemp.Format(_T("%ld"), nTotalAmount);

		nItem = m_wndDrugList.AddItems(_T(""), tmpStr, _T(""), _T(""), _T(""),
			                           szTemp, _T(""), _T(""), NULL);
		m_wndDrugList.SetItemBkColor(nItem, RGB(200, 200, 200));
		m_wndDrugList.SetItemTextColor(nItem, RGB(0, 0, 255));
	}

	m_wndDrugList.EndLoad(); 
	return nCount;
}
int CHMSOperationScheduleDetail::OnAddHMSOperationScheduleDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
	if(GetOrderStatus() != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}

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
int CHMSOperationScheduleDetail::OnDeleteHMSOperationScheduleDetail()
{
 	if (GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);

	/*if (m_szOpStatus == _T("T"))
	{
		ShowMessageBox(_T("Tr\x1EA1ng th\xE1i phi\x1EBFu \x111\xE3 k\x1EBFt th\xFA\x63. Kh\xF4ng th\x1EC3 \x78\xF3\x61!"),
			           MB_OK | MB_ICONERROR);
		return -1;
	}*/

	szSQL.Format(_T("SELECT Count(*) FROM hms_op_materialorder ") \
		         _T("WHERE hopm_docno=%ld AND hopm_operation_id=%ld"), m_nDocumentNo, m_nOperationID);

	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Ph\x1EABu thu\x1EADt \x111\xE3 \x63\xF3 \x64\x1EF1 tr\xF9 thu\x1ED1\x63 v\xE0 v\x1EADt t\x1B0. Kh\xF4ng th\x1EC3 \x78\xF3\x61!"),
			           MB_OK | MB_ICONERROR);
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_ipharmaorder ") \
		         _T("WHERE hpo_docno=%ld AND hpo_reference_id=%ld"), 
				 m_nDocumentNo, m_nOperationID);

	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Ph\x1EABu thu\x1EADt \x111\xE3 \x63\xF3 \x64\x1EF1 tr\xF9 thu\x1ED1\x63 v\xE0 v\x1EADt t\x1B0. Kh\xF4ng th\x1EC3 \x78\xF3\x61!"),
			           MB_OK | MB_ICONERROR);
		return -1;
	}
 
 	if (ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM hms_operation WHERE ho_docno=%ld AND ho_idx=%ld and ho_status='O' "),
		         m_nDocumentNo, m_nOperationID);
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret >= 0)
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		if(m_wndOrderList) m_wndOrderList->PostMessage(WM_REFRESH);
 	}
	return 0;
}
int CHMSOperationScheduleDetail::OnSaveHMSOperationScheduleDetail(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
	{
 		return -1;
	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

 	if (!IsValidateData())
	{
		return -1;
	}



	bool bAdd = false;

 	if (GetMode() == VM_ADD)
	{
 		bAdd = true;
		szSQL = m_hms_operation_Tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
		szWhere.Format(_T(" WHERE ho_docno=%ld AND ho_idx=%ld "), m_nDocumentNo, m_nOperationID);
 		szSQL = m_hms_operation_Tbl.GetUpdateSQL(_T("ho_createdby, ho_createddate, ho_doco, ho_patientno, ho_idx, ho_status, ho_payment, ho_hasfee"));
 		szSQL += szWhere;
 	}
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(bAdd)
		{
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T("SELECT max(ho_idx) FROM hms_operation WHERE ho_docno=%ld and ho_itemid='%s' and ho_orderdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') "),
				m_nDocumentNo, m_szSurgeryNameKey,  m_szOrderDate);
			rs.ExecSQL(szSQL);
			m_nOperationID = rs.GetIntValue();
		}
		GetDataToScreen();

		if (bAdd)
		{
			m_wndAddDrugMaterial.SetFocus();
			if(m_wndOrderList) m_wndOrderList->PostMessage(WM_REFRESH);
		}
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSOperationScheduleDetail::OnCancelHMSOperationScheduleDetail()
{
 	if (GetMode() == VM_EDIT)
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

LRESULT CHMSOperationScheduleDetail::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(message == WM_REFRESH)
	{
	//	m_nOperationID = (long) lParam;
	//	GetDataToScreen();
	}

	return CGuiView::WindowProc(message, wParam, lParam);
}


CString CHMSOperationScheduleDetail::GetOrderStatus(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szStatus;
	szStatus.Empty();

	szSQL.Format(_T("SELECT hom_status FROM hms_op_material WHERE hom_op_material_id=%ld "), m_nMaterialOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return szStatus;
	rs.GetValue(_T("hom_status"), szStatus);
	return szStatus;
}
BOOL CHMSOperationScheduleDetail::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	UINT nCmd = (UINT) wParam;

	long nOID = (long) lParam;

	if(nCmd == CMD_REFRESHDATA)
	{
		GetDataToScreen();
	}
	if(nCmd == CMD_REFRESHDATA+1)
	{
		OnDrugListLoadData();
	}
	return CGuiView::OnCommand(wParam, lParam);
}
