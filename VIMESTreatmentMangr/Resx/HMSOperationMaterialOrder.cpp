#include "HMSOperationMaterialOrder.h"
#include "MainFrm.h"
static void _OnDocumentNoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnDocumentNoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDocumentNoSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDocumentNoSelendok();
}
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDocumentNoKillfocus();
}*/
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDocumentNoKillfocus();
}*/
static long _OnDocumentNoLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnDocumentNoLoadData();
}
/*static void _OnDocumentNoAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDocumentNoAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnAgeCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSexAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTableSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnTableSelendok();
}
/*static void _OnTableSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnTableKillfocus();
}*/
/*static void _OnTableKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnTableKillfocus();
}*/
static long _OnTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnTableLoadData();
}
/*static void _OnTableAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnTableAddNew();
}*/
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnDiagnosticCheckValue();
} 
static void _OnSurgeryNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnSurgeryNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeryNameSelendok();
}
/*static void _OnSurgeryNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeryNameKillfocus();
}*/
/*static void _OnSurgeryNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeryNameKillfocus();
}*/
static long _OnSurgeryNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnSurgeryNameLoadData();
}
/*static void _OnSurgeryNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeryNameAddNew();
}*/
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnCommentCheckValue();
} 
static void _OnBeforeSurgerySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnBeforeSurgerySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBeforeSurgerySelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnBeforeSurgerySelendok();
}
/*static void _OnBeforeSurgerySetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
/*static void _OnBeforeSurgeryKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnBeforeSurgeryKillfocus();
}*/
static long _OnBeforeSurgeryLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnBeforeSurgeryLoadData();
}
/*static void _OnBeforeSurgeryAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnBeforeSurgeryAddNew();
}*/
static void _OnYesSelectFnc(CWnd *pWnd){
	  ((CHMSOperationMaterialOrder*)pWnd)->OnYesSelect();
}
static void _OnNoSelectFnc(CWnd *pWnd){
	  ((CHMSOperationMaterialOrder*)pWnd)->OnNoSelect();
}
static void _OnAnesthesiaMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnAnesthesiaMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthesiaMethodSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAnesthesiaMethodSelendok();
}
/*static void _OnAnesthesiaMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
/*static void _OnAnesthesiaMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAnesthesiaMethodKillfocus();
}*/
static long _OnAnesthesiaMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnAnesthesiaMethodLoadData();
}
/*static void _OnAnesthesiaMethodAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAnesthesiaMethodAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnAssistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnAssistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistSelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssistSelendok();
}
/*static void _OnAssistSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssistKillfocus();
}*/
/*static void _OnAssistKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssistKillfocus();
}*/
static long _OnAssistLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnAssistLoadData();
}
/*static void _OnAssistAddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssistAddNew();
}*/
static void _OnAssist2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMaterialOrder* )pWnd)->OnAssist2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssist2SelendokFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssist2Selendok();
}
/*static void _OnAssist2SetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssist2Killfocus();
}*/
/*static void _OnAssist2KillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssist2Killfocus();
}*/
static long _OnAssist2LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder *)pWnd)->OnAssist2LoadData();
}
/*static void _OnAssist2AddNewFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder *)pWnd)->OnAssist2AddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnAddDrugMaterialSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrder *pVw = (CHMSOperationMaterialOrder *)pWnd;
	pVw->OnAddDrugMaterialSelect();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrder*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrder*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationMaterialOrder*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddHMSOperationMaterialOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnAddHMSOperationMaterialOrder();
} 
static int _OnEditHMSOperationMaterialOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnEditHMSOperationMaterialOrder();
} 
static int _OnDeleteHMSOperationMaterialOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnDeleteHMSOperationMaterialOrder();
} 
static int _OnSaveHMSOperationMaterialOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnSaveHMSOperationMaterialOrder();
} 
static int _OnCancelHMSOperationMaterialOrderFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrder*)pWnd)->OnCancelHMSOperationMaterialOrder();
} 
CHMSOperationMaterialOrder::CHMSOperationMaterialOrder(){

	m_nDlgWidth = 570;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSOperationMaterialOrder::~CHMSOperationMaterialOrder(){
}
void CHMSOperationMaterialOrder::OnCreateComponents(){
	m_wndSurgeryInfor.Create(this, _T("Surgery Information"), 5, 5, 560, 615);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 245, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 250, 30, 335, 55);
	m_wndPatientName.Create(this,340, 30, 555, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 130, 85);
	m_wndObject.Create(this,135, 60, 245, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 250, 60, 335, 85);
	m_wndAge.Create(this,340, 60, 420, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 425, 60, 470, 85);
	m_wndSex.Create(this,475, 60, 555, 85); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 90, 130, 115);
	m_wndOrderDate.Create(this,135, 90, 245, 115); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 250, 90, 335, 115);
	m_wndPerformDept.Create(this,340, 90, 420, 115); 
	m_wndTableLabel.Create(this, _T("Table"), 425, 90, 470, 115);
	m_wndTable.Create(this,475, 90, 555, 115); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 120, 130, 145);
	m_wndDiagnostic.Create(this,135, 120, 555, 145); 
	m_wndSurgeryNameLabel.Create(this, _T("Surgery Name"), 10, 150, 130, 175);
	m_wndSurgeryName.Create(this,135, 150, 555, 175); 
	m_wndCommentLabel.Create(this, _T("Comment"), 10, 180, 130, 205);
	m_wndComment.Create(this,135, 180, 555, 205); 
	m_wndBeforeSurgeryLabel.Create(this, _T("Before Surgery"), 10, 210, 130, 235);
	m_wndBeforeSurgery.Create(this,135, 210, 290, 235); 
	m_wndAntibioticBackup.Create(this, _T("Antibiotic Backup"), 295, 210, 395, 235);
	m_wndYes.Create(this, _T("Yes"), 400, 210, 475, 235);
	m_wndNo.Create(this, _T("No"), 480, 210, 555, 235);
	m_wndAnesthesiaMethodLabel.Create(this, _T("Anesthesia Method"), 10, 240, 130, 265);
	m_wndAnesthesiaMethod.Create(this,135, 240, 290, 265); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 295, 240, 395, 265);
	m_wndSurgeon.Create(this,400, 240, 555, 265); 
	m_wndAssistLabel.Create(this, _T("Assist"), 10, 270, 130, 295);
	m_wndAssist.Create(this,135, 270, 290, 295); 
	m_wndAssist2Label.Create(this, _T("Assist2"), 295, 270, 395, 295);
	m_wndAssist2.Create(this,400, 270, 555, 295); 
	m_wndAdd.Create(this, _T("&Add"), 10, 300, 90, 325);
	m_wndEdit.Create(this, _T("&Edit"), 95, 300, 175, 325);
	m_wndDelete.Create(this, _T("&Delete"), 180, 300, 260, 325);
	m_wndSave.Create(this, _T("&Save"), 265, 300, 345, 325);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 300, 430, 325);
	m_wndAddDrugMaterial.Create(this, _T("&Add Material"), 435, 300, 555, 325);
	m_wndDrugList.Create(this,10, 330, 555, 610); 

}
void CHMSOperationMaterialOrder::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndFindDoc.SetLimitText(16);
	m_wndFindDoc.SetCheckValue(true);
	m_wndFindName.SetLimitText(75);
	m_wndFindName.SetCheckValue(true);

	//m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.LimitText(16);

	m_wndPatientName.SetLimitText(75);
	//m_wndPatientName.SetCheckValue(true);

	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndAge.SetLimitText(35);
	//m_wndAge.SetCheckValue(true);
	//m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(81);

	//m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);

	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(254);

	//m_wndTable.SetCheckValue(true);
	m_wndTable.LimitText(35);

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


	m_wndDocumentNo.InsertColumn(0, _T("Doc No"), CFMT_TEXT, 80);
	m_wndDocumentNo.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndDocumentNo.InsertColumn(2, _T("Age"), CFMT_TEXT, 40);
	m_wndDocumentNo.InsertColumn(3, _T("Sex"), CFMT_TEXT, 40);
	m_wndDocumentNo.InsertColumn(4, _T("Object"), CFMT_TEXT, 100);
	m_wndDocumentNo.InsertColumn(5, _T("SexID"), CFMT_TEXT, 0);
	m_wndDocumentNo.InsertColumn(6, _T("ObjectID"), CFMT_TEXT, 0);
	m_wndDocumentNo.InsertColumn(7, _T("PID"), CFMT_TEXT, 0);
	m_wndDocumentNo.Format(7, 0, 10, 1);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(3, _T("Operation Name"), CFMT_TEXT, 190);
	m_wndList.InsertColumn(4, _T("Status"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Idx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(6, _T("PID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("MStatus"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("ObjType"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("POrder"), CFMT_TEXT, 0);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndDrugList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 180);
	m_wndDrugList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndDrugList.InsertColumn(3, _T("Price"), CFMT_MONEY, 100);
	m_wndDrugList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndDrugList.InsertColumn(5, _T("Money"), CFMT_MONEY, 110);
	m_wndDrugList.InsertColumn(6, _T("Status"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(7, _T("OrderID"), CFMT_TEXT, 0);

	m_wndDrugList.SetEditLabel(4, GUI_NUMBERCTRL);
	m_wndDrugList.ModifyStyle(0, LVS_NOSORTHEADER);

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


	m_hms_operation_Tbl.AddField(_T("ho_anes_method"), dfInteger);
	m_hms_operation_Tbl.AddField(_T("ho_comment"), dfText, 254);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_result"), dfText, 1);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_method2"), dfInteger);
	//m_hms_operation_Tbl.AddField(_T("ho_anes_result2"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_diagnostic"), dfText, 254);
	
	m_hms_operation_Tbl.AddField(_T("ho_before_optype"), dfText, 15);
	m_hms_operation_Tbl.AddField(_T("ho_antibiotic"), dfText, 1);
	m_hms_operation_Tbl.AddField(_T("ho_isordering"), dfText, 1);

}

void CHMSOperationMaterialOrder::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationMaterialOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationMaterialOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationMaterialOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationMaterialOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationMaterialOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSOperationMaterialOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNoKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_TextEx(pDX, m_wndTable.GetDlgCtrlID(), m_szTableKey);
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
void CHMSOperationMaterialOrder::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
				_T("        ho_anes_method as anesmethod,") \
				_T("        ho_diagnostic as diagnostic,") \
				_T("        ho_before_optype as optype,") \
				_T("        ho_antibiotic as antibiotic,") \
				_T("        ho_status as opstatus,") \
				_T("        ho_matorder_status as matstatus,") \
				_T("        case when hpo_orderid > 0 then 'Y' else 'N' end as porder") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object obj on(ho_id=hd_object)") \
				_T(" left join hms_operation on(ho_docno=hd_docno)") \
				_T(" left join hms_ipharmaorder on(hpo_docno=hd_docno and ho_idx=hpo_reference_id") \
				_T("                               and hpo_ordertype='M')") \
				_T(" where ho_idx=%ld and ho_docno=%ld"),
		        m_nOperationID, m_nDocumentNo);

	//MessageBox(szSQL);

	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{

		rs.GetValue(_T("docno"), m_nDocumentNo);
		m_szDocumentNoKey.Format(_T("%ld"), m_nDocumentNo);
		rs.GetValue(_T("patientno"), m_nPatientNo);

		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("objectid"), m_szObjectKey);

		rs.GetValue(_T("age"), m_szAge);
		rs.GetValue(_T("sex"), m_szSexKey);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		m_szOldOrderDate = m_szOrderDate;
		rs.GetValue(_T("pdeptid"), m_szPerformDeptKey);
		rs.GetValue(_T("optable"), m_szTableKey);
		rs.GetValue(_T("diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("itemid"), m_szSurgeryNameKey);
		rs.GetValue(_T("opname"), m_szComment);
		rs.GetValue(_T("optype"), m_szBeforeSurgeryKey);
		rs.GetValue(_T("antibiotic"), szTemp);

		if (szTemp == _T("Y"))
		{
			m_nYes = 0;
			m_nNo = 1;
		}
		else
		{
			m_nNo = 0;
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
		rs.GetValue(_T("idx"), m_nOperationID);

		//MessageBox(m_szMatStatus);

		OnDrugListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}

void CHMSOperationMaterialOrder::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	/*if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT HMS_OPERATION_ID_ASQ.nextval AS idx FROM DUAL"));
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			m_nOperationID = rs.GetIntValue();
		}
	}*/

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

	m_hms_operation_Tbl.SetValue(_T("ho_status"), _T("S"));
	m_hms_operation_Tbl.SetValue(_T("ho_payment"), _T("O"));
	m_hms_operation_Tbl.SetValue(_T("ho_hasfee"), _T("Y"));
	
	m_hms_operation_Tbl.SetValue(_T("ho_depttype"), _T("I"));

	m_hms_operation_Tbl.SetValue(_T("ho_user4"), m_szAssist2Key);
	m_hms_operation_Tbl.SetValue(_T("ho_opera_table"), m_szTableKey);

	m_hms_operation_Tbl.SetValue(_T("ho_anes_method"), m_szAnesthesiaMethodKey);

	m_hms_operation_Tbl.SetValue(_T("ho_diagnostic"), m_szDiagnostic);
	//m_hms_operation_Tbl.SetValue(_T("ho_object"), str2int(m_szObjectKey));
	m_hms_operation_Tbl.SetValue(_T("ho_before_optype"), m_szBeforeSurgeryKey);

	if (m_nYes == 0)
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("Y"));
	else
		m_hms_operation_Tbl.SetValue(_T("ho_antibiotic"), _T("N"));
	m_hms_operation_Tbl.SetValue(_T("ho_isordering"), _T("Y"));

}

void CHMSOperationMaterialOrder::SetDefaultValues(){

	//m_szFromDate.Empty();
	//m_szToDate.Empty();
	//m_nFindDoc=0;
	//m_szFindName.Empty();

	m_szDocumentNoKey.Empty();
	m_nDocumentNo=0;

	m_szPatientName.Empty();
	m_szObjectKey.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();
	m_szTableKey.Empty();
	m_szDiagnostic.Empty();
	m_szSurgeryNameKey.Empty();
	m_szComment.Empty();
	m_szBeforeSurgeryKey.Empty();
	m_nYes=0;
	m_nNo=1;
	m_szAnesthesiaMethodKey.Empty();
	m_szSurgeonKey.Empty();
	m_szAssistKey.Empty();
	m_szAssist2Key.Empty();

	m_szOldOrderDate.Empty();
	m_szOpStatus = _T("S");
	m_szMatStatus = _T("O");
	m_szPOrder = _T("N");
}

int CHMSOperationMaterialOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			//SetDefaultValues();
			m_szOpStatus = _T("S");
			m_szOrderDate = pMF->GetSysDateTime();
			m_szPerformDeptKey.Empty();
			m_szTableKey.Empty();
			m_szDiagnostic.Empty();
			m_szSurgeryNameKey.Empty();
			m_szComment.Empty();
			m_szBeforeSurgeryKey.Empty();
			m_nYes=0;
			m_nNo=1;
			m_szAnesthesiaMethodKey.Empty();
			m_szSurgeonKey.Empty();
			m_szAssistKey.Empty();
			m_szAssist2Key.Empty();
			m_wndDrugList.DeleteAllItems();
			m_szOldOrderDate.Empty();


			m_wndDocumentNo.EnableWindow(TRUE);
			m_wndDocumentNo.SetFocus();
			if (m_szDocumentNoKey.GetLength() > 4)
				m_wndDocumentNo.SetEditSel(4, m_szDocumentNoKey.GetLength());
			else
				m_wndDocumentNo.SetEditSel(0, -1);

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, 5, -1);
			if (m_szPOrder == _T("Y") ||
			    m_szMatStatus == _T("S"))
			{
				m_wndSurgeryName.EnableWindow(FALSE);
			}
			m_wndOrderDate.SetFocus();
 			break;
 		case VM_VIEW:
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			OnCheckValidate();
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
			m_wndDrugList.DeleteAllItems();
 			break;
 		};

		m_wndPatientName.EnableWindow(FALSE);
		m_wndObject.EnableWindow(FALSE);
		m_wndAge.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);

		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndFindDoc.EnableWindow(TRUE);
		m_wndFindName.EnableWindow(TRUE);
		m_wndFind.EnableWindow(TRUE);

 		UpdateData(FALSE);
 		return nOldMode;
}

void CHMSOperationMaterialOrder::OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnDocumentNoSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnDocumentNoSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnDocumentNoKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnDocumentNoLoadData(){
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
/*void CHMSOperationMaterialOrder::OnDocumentNoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialOrder::OnPatientNameChange(){
	
} */
/*void CHMSOperationMaterialOrder::OnPatientNameSetfocus(){
	
} */
/*void CHMSOperationMaterialOrder::OnPatientNameKillfocus(){
	
} */
int CHMSOperationMaterialOrder::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrder::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnObjectSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnObjectSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnObjectKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialOrder::OnAgeChange(){
	
} */
/*void CHMSOperationMaterialOrder::OnAgeSetfocus(){
	
} */
/*void CHMSOperationMaterialOrder::OnAgeKillfocus(){
	
} */
int CHMSOperationMaterialOrder::OnAgeCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrder::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnSexSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnSexSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnSexKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialOrder::OnOrderDateChange(){
	
} */
/*void CHMSOperationMaterialOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationMaterialOrder::OnOrderDateKillfocus(){
	
} */
int CHMSOperationMaterialOrder::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrder::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnPerformDeptLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnTableSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnTableSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnTableKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnTableLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialOrder::OnDiagnosticChange(){
	
} */
/*void CHMSOperationMaterialOrder::OnDiagnosticSetfocus(){
	
} */
/*void CHMSOperationMaterialOrder::OnDiagnosticKillfocus(){
	
} */
int CHMSOperationMaterialOrder::OnDiagnosticCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrder::OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnSurgeryNameSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnSurgeryNameSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnSurgeryNameKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnSurgeryNameLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnSurgeryNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationMaterialOrder::OnCommentChange(){
	
} */
/*void CHMSOperationMaterialOrder::OnCommentSetfocus(){
	
} */
/*void CHMSOperationMaterialOrder::OnCommentKillfocus(){
	
} */
int CHMSOperationMaterialOrder::OnCommentCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrder::OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnBeforeSurgerySelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnBeforeSurgerySetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnBeforeSurgeryKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnBeforeSurgeryLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnBeforeSurgeryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnYesSelect(){
	
}
void CHMSOperationMaterialOrder::OnNoSelect(){
	
}
void CHMSOperationMaterialOrder::OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnAnesthesiaMethodSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnAnesthesiaMethodSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnAnesthesiaMethodKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnAnesthesiaMethodLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnAnesthesiaMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnSurgeonSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnSurgeonSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnSurgeonKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnSurgeonLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnAssistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnAssistSelendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnAssistSetfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnAssistKillfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnAssistLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnAssistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnAssist2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnAssist2Selendok(){
	 
}
/*void CHMSOperationMaterialOrder::OnAssist2Setfocus(){
	
}*/
/*void CHMSOperationMaterialOrder::OnAssist2Killfocus(){
	
}*/
long CHMSOperationMaterialOrder::OnAssist2LoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMaterialOrder::OnAssist2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMaterialOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnAddDrugMaterialSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrder::OnDrugListDblClick(){
	
} 
void CHMSOperationMaterialOrder::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialOrder::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationMaterialOrder::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Desc")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Money")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSOperationMaterialOrder::OnAddHMSOperationMaterialOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationMaterialOrder::OnEditHMSOperationMaterialOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationMaterialOrder::OnDeleteHMSOperationMaterialOrder(){
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
 		OnCancelHMSOperationMaterialOrder();
 	}
	return 0;
}
int CHMSOperationMaterialOrder::OnSaveHMSOperationMaterialOrder(){
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
 		//OnHMSOperationMaterialOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationMaterialOrder::OnCancelHMSOperationMaterialOrder(){
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
int CHMSOperationMaterialOrder::OnHMSOperationMaterialOrderListLoadData(){
	return 0;
}
