#include "HMSAnestheticScheduleDetail.h"
#include "MainFrm.h"
#include "HMSAnestheticScheduleAddEntryPopup.h"
#include ".\HMSAnestheticScheduleDetail.h"

static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoAddNew();
}*/
static int _OnDocumentNoCheckValueFnc(CWnd* pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnDocumentNoCheckValue();
}
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTableSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnTableSelendok();
}
/*static void _OnTableSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
/*static void _OnTableKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnTableKillfocus();
}*/
static long _OnTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnTableLoadData();
}
/*static void _OnTableAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnTableAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnCommentCheckValue();
} 
static void _OnBeforeSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnBeforeSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBeforeSurgerySelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnBeforeSurgerySelendok();
}
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
static long _OnBeforeSurgeryLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnBeforeSurgeryLoadData();
}
/*static void _OnBeforeSurgeryAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnBeforeSurgeryAddNew();
}*/
static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CHMSAnestheticScheduleDetail*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CHMSAnestheticScheduleDetail*)pWnd)->OnNoSelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleDetail* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail *)pWnd)->OnAssist2AddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugMaterialSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleDetail *pVw = (CHMSAnestheticScheduleDetail *)pWnd;
	pVw->OnAddDrugMaterialSelect();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleDetail*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleDetail*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAnestheticScheduleDetail*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddHMSAnestheticScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnAddHMSAnestheticScheduleDetail();
} 
static int _OnEditHMSAnestheticScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnEditHMSAnestheticScheduleDetail();
} 
static int _OnDeleteHMSAnestheticScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnDeleteHMSAnestheticScheduleDetail();
} 
static int _OnSaveHMSAnestheticScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnSaveHMSAnestheticScheduleDetail();
} 
static int _OnCancelHMSAnestheticScheduleDetailFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleDetail*)pWnd)->OnCancelHMSAnestheticScheduleDetail();
} 
CHMSAnestheticScheduleDetail::CHMSAnestheticScheduleDetail(){

	m_nDlgWidth = 560;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSAnestheticScheduleDetail::~CHMSAnestheticScheduleDetail(){
}
void CHMSAnestheticScheduleDetail::OnCreateComponents(){
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

	m_wndDocumentNoComBo.Create(this, 0, 0, 0, 0);
	m_wndDocumentNoComBo.ShowWindow(SW_HIDE);
	m_wndDocumentNoComBo.EnableWindow(FALSE);
}
void CHMSAnestheticScheduleDetail::OnInitializeComponents(){
	//m_wndDocumentNoComBo.SetLimitText(16);
	//m_wndDocumentNoComBo.SetCheckValue(true);
	//m_wndDocumentNoComBo.SetCheckValue(true);
	m_wndDocumentNoComBo.LimitText(16);

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


	m_wndDocumentNoComBo.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 80);
	m_wndDocumentNoComBo.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndDocumentNoComBo.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndDocumentNoComBo.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);
	m_wndDocumentNoComBo.InsertColumn(4, _T("Object"), CFMT_TEXT, 100);
	m_wndDocumentNoComBo.InsertColumn(5, _T("SexID"), CFMT_TEXT, 0);
	m_wndDocumentNoComBo.InsertColumn(6, _T("ObjectID"), CFMT_TEXT, 0);
	m_wndDocumentNoComBo.InsertColumn(7, _T("PID"), CFMT_TEXT, 0);
	m_wndDocumentNoComBo.Format(7, 0, 10, 1);



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


}
void CHMSAnestheticScheduleDetail::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNoComBo.SetEvent(WE_SELENDOK, _OnDocumentNoSelendokFnc);
	//m_wndDocumentNoComBo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNoComBo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	//m_wndDocumentNoComBo.SetEvent(WE_SELCHANGE, _OnDocumentNoSelectChangeFnc);
	//m_wndDocumentNoComBo.SetEvent(WE_LOADDATA, _OnDocumentNoLoadDataFnc);
	//m_wndDocumentNoComBo.SetEvent(WE_ADDNEW, _OnDocumentNoAddNewFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
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
	//AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAnestheticScheduleDetailFnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAnestheticScheduleDetailFnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAnestheticScheduleDetailFnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAnestheticScheduleDetailFnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAnestheticScheduleDetailFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSAnestheticScheduleDetail::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndDocumentNoComBo.GetDlgCtrlID(), m_szDocumentNoKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
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
	DDX_TextEx(pDX, m_wndAnesthesiaMethod.GetDlgCtrlID(), m_szAnesthesiaMethodKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);
	DDX_TextEx(pDX, m_wndAssist.GetDlgCtrlID(), m_szAssistKey);
	DDX_TextEx(pDX, m_wndAssist2.GetDlgCtrlID(), m_szAssist2Key);

}
void CHMSAnestheticScheduleDetail::GetDataToScreen(){
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
				_T("        ho_antibiotic as antibiotic,") \
				_T("        ho_status as opstatus,") \
				_T("        ho_matorder_status as matstatus ") \
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

		if (szTemp == _T("Y"))
		{
			m_nYes = 0;
		}
		else
		{
			m_nYes = 1;
		}

		rs.GetValue(_T("anesmethod"), m_szAnesthesiaMethodKey);
		rs.GetValue(_T("practitioner"), m_szSurgeonKey);
		rs.GetValue(_T("assistant"), m_szAssistKey);
		rs.GetValue(_T("assist2"), m_szAssist2Key);

		rs.GetValue(_T("objtype"), m_szObjectType);
		rs.GetValue(_T("porder"), m_szPOrder);
		rs.GetValue(_T("opstatus"), m_szOpStatus);
		rs.GetValue(_T("matstatus"), m_szMatStatus);

		//MessageBox(m_szMatStatus);

		OnDrugListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	
}
void CHMSAnestheticScheduleDetail::GetScreenToData()
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

	if (m_nYes == 0)
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("Y"));
	else
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("N"));
	m_hms_operation_Tbl.SetValue(_T("ho_isordering"), _T("Y"));
	m_hms_operation_Tbl.SetValue(_T("ho_matorder_id"), m_nMaterialOID);

}
void CHMSAnestheticScheduleDetail::SetDefaultValues()
{

	//m_szFromDate.Empty();
	//m_szToDate.Empty();
	//m_nFindDoc=0;
	//m_szFindName.Empty();

	m_szDocumentNoKey.Empty();
	m_nDocumentNo = 0;
	m_szPatientName.Empty();
	//m_szOrderDate.Empty();
	//m_szPerformDeptKey.Empty();
	m_szTableKey.Empty();
	m_szDiagnostic.Empty();
	m_szSurgeryNameKey.Empty();
	m_szComment.Empty();
	m_szBeforeSurgeryKey.Empty();
	m_nYes=0;
	m_szAnesthesiaMethodKey.Empty();
	m_szSurgeonKey.Empty();
	m_szAssistKey.Empty();
	m_szAssist2Key.Empty();

	m_szOldOrderDate.Empty();
	m_szOpStatus = _T("S");
	m_szMatStatus = _T("O");
	m_szPOrder = _T("N");
	m_nIndex = 1;
}
int CHMSAnestheticScheduleDetail::SetMode(int nMode){
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
			}
			m_wndDocumentNoComBo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			if(m_szOpStatus != _T("O"))
			{
				EnableButtons(TRUE, -1);
			}
			else
				EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE,  0, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);

		m_wndPerformDept.EnableWindow(FALSE);
 		return nOldMode;
}
void CHMSAnestheticScheduleDetail::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnDocumentNoSelendok()
{
	UpdateData(TRUE);

	m_nDocumentNo = str2long(m_szDocumentNoKey);
	m_szPatientName = m_wndDocumentNoComBo.GetCurrent(1);
	m_nPatientNo = str2long(m_wndDocumentNoComBo.GetCurrent(7));

	UpdateData(FALSE);
}
/*void CHMSAnestheticScheduleDetail::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnDocumentNoKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnDocumentNoLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	
	if (m_wndDocumentNoComBo.IsSearchKey() && str2long(m_szDocumentNoKey) > 0)
	{
		szWhere.Format(_T(" and hd_docno=%ld "), str2long(m_szDocumentNoKey));
	}
	m_wndDocumentNoComBo.DeleteAllItems(); 
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
				_T(" where hcr_status in('I') and hcr_dischargedept in('%s') %s"),
				pMF->m_szDept, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDocumentNoComBo.AddItems(
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
/*void CHMSAnestheticScheduleDetail::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSAnestheticScheduleDetail::OnDocumentNoCheckValue(){
	if (LoadPatientInfo() == 0){
		AfxMessageBox(_T("Invalid Document No or Profile is terminated!"));
		return -1;
	}
	return 0;
}

int CHMSAnestheticScheduleDetail::LoadPatientInfo(){
	UpdateData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT get_patientname(hd_docno) patient_name, hd_patientno patient_no FROM hms_doc, hms_patient ") \
				 _T(" WHERE hd_patientno = hp_patientno AND hd_docno = %ld AND hd_status IN ('O', 'P')"), m_nDocumentNo);
	int nRes = rs.ExecSQL(szSQL);
	if (nRes >= 0){
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("patient_no"), m_nPatientNo);
		UpdateData(FALSE);
	}
	else AfxMessageBox(_T("Error query string!"));
	return nRes;
}

/*void CHMSAnestheticScheduleDetail::OnPatientNameChange(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnPatientNameSetfocus(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnPatientNameKillfocus(){
	
} */
int CHMSAnestheticScheduleDetail::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSAnestheticScheduleDetail::OnOrderDateChange(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnOrderDateSetfocus(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnOrderDateKillfocus(){
	
} */
int CHMSAnestheticScheduleDetail::OnOrderDateCheckValue()
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
void CHMSAnestheticScheduleDetail::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnPerformDeptSelendok(){
	 
}
/*void CHMSAnestheticScheduleDetail::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnPerformDeptKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnPerformDeptLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnTableSelendok(){
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
/*void CHMSAnestheticScheduleDetail::OnTableSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnTableKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnTableLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAnestheticScheduleDetail::OnIndexChange(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnIndexSetfocus(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnIndexKillfocus(){
	
} */
int CHMSAnestheticScheduleDetail::OnIndexCheckValue(){
	return 0;
} 
/*void CHMSAnestheticScheduleDetail::OnDiagnosticChange(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnDiagnosticSetfocus(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnDiagnosticKillfocus(){
	
} */
int CHMSAnestheticScheduleDetail::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSAnestheticScheduleDetail::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnSurgeryNameSelendok(){
	return;
	//Auto set comment
	UpdateData(true);
	m_szComment = m_wndSurgeryName.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSAnestheticScheduleDetail::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnSurgeryNameKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnSurgeryNameLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

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
				_T(" WHERE substr(hfl_groupid, 1, 2) in('B4','B5') and (hfl_insprice+hfl_polprice+hfl_servprice) = 0 AND hfl_name LIKE chr(37)||'gây mê'||chr(37) %s") \
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
/*void CHMSAnestheticScheduleDetail::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAnestheticScheduleDetail::OnCommentChange(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnCommentSetfocus(){
	
} */
/*void CHMSAnestheticScheduleDetail::OnCommentKillfocus(){
	
} */
int CHMSAnestheticScheduleDetail::OnCommentCheckValue(){
	return 0;
} 
void CHMSAnestheticScheduleDetail::OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnBeforeSurgerySelendok()
{
	UpdateData(TRUE);

	if (m_szBeforeSurgeryKey == _T("1"))
	{
		m_nYes = 1;
	}
	else
	{
		m_nYes = 0;
	}

	UpdateData(FALSE);
}
/*void CHMSAnestheticScheduleDetail::OnBeforeSurgerySetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnBeforeSurgeryKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnBeforeSurgeryLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnYesSelect(){
	
}
void CHMSAnestheticScheduleDetail::OnNoSelect(){
	
}
void CHMSAnestheticScheduleDetail::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnAnesthesiaMethodSelendok(){
	 
}
/*void CHMSAnestheticScheduleDetail::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnAnesthesiaMethodKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnAnesthesiaMethodLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnSurgeonSelendok(){
	 
}
/*void CHMSAnestheticScheduleDetail::OnSurgeonSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnSurgeonKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnSurgeonLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnAssistSelendok(){
	 
}
/*void CHMSAnestheticScheduleDetail::OnAssistSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnAssistKillfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnAssistLoadData()
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
/*void CHMSAnestheticScheduleDetail::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleDetail::OnAssist2Selendok(){
	 
}
/*void CHMSAnestheticScheduleDetail::OnAssist2Setfocus(){
	
}*/
/*void CHMSAnestheticScheduleDetail::OnAssist2Killfocus(){
	
}*/
long CHMSAnestheticScheduleDetail::OnAssist2LoadData()
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
/*void CHMSAnestheticScheduleDetail::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAnestheticScheduleDetail::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSAnestheticScheduleDetail();
} 
void CHMSAnestheticScheduleDetail::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAnestheticScheduleDetail();
} 
void CHMSAnestheticScheduleDetail::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSAnestheticScheduleDetail();
} 
void CHMSAnestheticScheduleDetail::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAnestheticScheduleDetail();
} 
void CHMSAnestheticScheduleDetail::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAnestheticScheduleDetail();
} 
void CHMSAnestheticScheduleDetail::OnAddDrugMaterialSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetOrderStatus() != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return;
	}

	CHMSAnestheticScheduleAddEntryPopup *newPopup = new CHMSAnestheticScheduleAddEntryPopup(this, VM_ADD);
	newPopup->m_nOperationID = m_nOperationID;
	newPopup->m_nDocNo = m_nDocumentNo;
	newPopup->m_szObjType = m_szObjectType;
	newPopup->m_szOrderDate = m_szOrderDate;

	newPopup->ShowPopup(&m_wndDrugList);
} 
void CHMSAnestheticScheduleDetail::OnDrugListDblClick()
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
void CHMSAnestheticScheduleDetail::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAnestheticScheduleDetail::OnDrugListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDrugList.GetCurSel();

	if (nSel < 0)
		return -1;

	CString szStatus = GetOrderStatus();

	if (szStatus != _T("O") || m_szOpStatus != _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return -1;
	}

	CRecord rs(&pMF->m_db);
	CString szSQL;
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

	long nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 7));

	if (nOrderID < 0)
		return -1;

	szSQL.Format(_T("DELETE FROM hms_op_materialorder WHERE hopm_op_materialorder_id=%ld"),
		         nOrderID);
	int nRet = pMF->ExecSQL(szSQL);

	OnDrugListLoadData();

	return nRet;
} 
long CHMSAnestheticScheduleDetail::OnDrugListLoadData()
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
			//CGridListItem *o2 = new CGridListItem(RGB(64, 128, 192), COLOR_WHITE);
			CGridListItem *o2 = new CGridListItem();
			CGridCell *cell = new CGridCell();
			o2->m_clrBackground = RGB(64, 128, 192);
			o2->m_clrText = COLOR_WHITE;
			o2->Add(_T("*"), 35);
			o2->Add(tmpStr, 380);
			o2->Add(_T(""), 70);
			cell->AddRow(o2);
			o->Add(cell);
			//nItem = m_wndDrugList.Add(o);
			
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
int CHMSAnestheticScheduleDetail::OnAddHMSAnestheticScheduleDetail(){
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
int CHMSAnestheticScheduleDetail::OnEditHMSAnestheticScheduleDetail(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAnestheticScheduleDetail::OnDeleteHMSAnestheticScheduleDetail()
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
int CHMSAnestheticScheduleDetail::OnSaveHMSAnestheticScheduleDetail(){
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
int CHMSAnestheticScheduleDetail::OnCancelHMSAnestheticScheduleDetail()
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
int CHMSAnestheticScheduleDetail::OnHMSAnestheticScheduleDetailListLoadData(){
	return 0;
}

LRESULT CHMSAnestheticScheduleDetail::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(message == WM_REFRESH)
	{
	//	m_nOperationID = (long) lParam;
	//	GetDataToScreen();
	}

	return CGuiView::WindowProc(message, wParam, lParam);
}


CString CHMSAnestheticScheduleDetail::GetOrderStatus(){
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
BOOL CHMSAnestheticScheduleDetail::OnCommand(WPARAM wParam, LPARAM lParam)
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
