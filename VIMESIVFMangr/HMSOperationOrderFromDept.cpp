#include "HMSOperationOrderFromDept.h"
#include "MainFrm.h"
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationOrderFromDept*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNameAddNew();
}*/
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDeptAddNew();
}*/
/*static void _OnInsensibleMethodChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnInsensibleMethodChange();
} */
/*static void _OnInsensibleMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnInsensibleMethodSetfocus();} */ 
/*static void _OnInsensibleMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnInsensibleMethodKillfocus();
} */
static int _OnInsensibleMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnInsensibleMethodCheckValue();
} 
/*static void _OnBeforeOperationChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnBeforeOperationChange();
} */
/*static void _OnBeforeOperationSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnBeforeOperationSetfocus();} */ 
/*static void _OnBeforeOperationKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnBeforeOperationKillfocus();
} */
static int _OnBeforeOperationCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnBeforeOperationCheckValue();
} 
/*static void _OnAfterOperationChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAfterOperationChange();
} */
/*static void _OnAfterOperationSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAfterOperationSetfocus();} */ 
/*static void _OnAfterOperationKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAfterOperationKillfocus();
} */
static int _OnAfterOperationCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnAfterOperationCheckValue();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPractitionerAddNew();
}*/
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnAnesthetistSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnAnesthetistSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnesthetistSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAnesthetistSelendok();
}
/*static void _OnAnesthetistSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAnesthetistKillfocus();
}*/
/*static void _OnAnesthetistKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAnesthetistKillfocus();
}*/
static long _OnAnesthetistLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnAnesthetistLoadData();
}
/*static void _OnAnesthetistAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAnesthetistAddNew();
}*/
static void _OnAssistantSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnAssistantSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAssistantSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAssistantSelendok();
}
/*static void _OnAssistantSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAssistantKillfocus();
}*/
/*static void _OnAssistantKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAssistantKillfocus();
}*/
static long _OnAssistantLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnAssistantLoadData();
}
/*static void _OnAssistantAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAssistantAddNew();
}*/
static void _OnUser4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnUser4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser4SelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser4Selendok();
}
/*static void _OnUser4SetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser4Killfocus();
}*/
/*static void _OnUser4KillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser4Killfocus();
}*/
static long _OnUser4LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnUser4LoadData();
}
/*static void _OnUser4AddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser4AddNew();
}*/
static void _OnUser5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnUser5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser5SelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser5Selendok();
}
/*static void _OnUser5SetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser5Killfocus();
}*/
/*static void _OnUser5KillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser5Killfocus();
}*/
static long _OnUser5LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnUser5LoadData();
}
/*static void _OnUser5AddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser5AddNew();
}*/
static void _OnUser6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnUser6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser6SelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser6Selendok();
}
/*static void _OnUser6SetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser6Killfocus();
}*/
/*static void _OnUser6KillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser6Killfocus();
}*/
static long _OnUser6LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnUser6LoadData();
}
/*static void _OnUser6AddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser6AddNew();
}*/
static void _OnUser7SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnUser7SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser7SelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser7Selendok();
}
/*static void _OnUser7SetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser7Killfocus();
}*/
/*static void _OnUser7KillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser7Killfocus();
}*/
static long _OnUser7LoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnUser7LoadData();
}
/*static void _OnUser7AddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnUser7AddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnNoteCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationOrderFromDept *pVw = (CHMSOperationOrderFromDept *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationOrderFromDept *pVw = (CHMSOperationOrderFromDept *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationOrderFromDept *pVw = (CHMSOperationOrderFromDept *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOperationOrderFromDept *pVw = (CHMSOperationOrderFromDept *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationOrderFromDept* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnWorkplaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnDeptChangeFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDeptChange();
} */
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDeptSetfocus();} */ 
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationOrderFromDept *)pWnd)->OnDeptKillfocus();
} */
static int _OnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationOrderFromDept *)pWnd)->OnDeptCheckValue();
} 
static int _OnAddHMSOperationOrderFromDeptFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnAddHMSOperationOrderFromDept();
} 
static int _OnEditHMSOperationOrderFromDeptFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnEditHMSOperationOrderFromDept();
} 
static int _OnDeleteHMSOperationOrderFromDeptFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnDeleteHMSOperationOrderFromDept();
} 
static int _OnSaveHMSOperationOrderFromDeptFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnSaveHMSOperationOrderFromDept();
} 
static int _OnCancelHMSOperationOrderFromDeptFnc(CWnd *pWnd){
	 return ((CHMSOperationOrderFromDept*)pWnd)->OnCancelHMSOperationOrderFromDept();
} 
static void _OnAddDrugLineSelectFnc(CWnd *pWnd){
	CHMSOperationOrderFromDept *pVw = (CHMSOperationOrderFromDept *)pWnd;
	pVw->OnAddDrugLineSelect();
} 

CHMSOperationOrderFromDept::CHMSOperationOrderFromDept(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 682;
	SetDefaultValues();
}
CHMSOperationOrderFromDept::~CHMSOperationOrderFromDept(){
}
void CHMSOperationOrderFromDept::OnCreateComponents(){
	m_wndOperationInformation.Create(this, _T("Operation Information"), 375, 5, 965, 550);
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 370, 550);
	m_wndGroupLabel.Create(this, _T("Group"), 380, 30, 500, 55);
	m_wndGroup.Create(this,505, 30, 705, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 710, 30, 815, 55);
	m_wndOrderDate.Create(this,820, 30, 960, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 380, 60, 500, 85);
	m_wndName.Create(this,505, 60, 960, 85); 
	m_wndPerformDeptLabel.Create(this, _T("Send Dept"), 380, 90, 500, 115);
	m_wndPerformDept.Create(this,505, 90, 705, 115); 
	m_wndTypeLabel.Create(this, _T("Machine"), 710, 90, 815, 115);
	m_wndType.Create(this,820, 90, 960, 115); 
	m_wndInsensibleMethodLabel.Create(this, _T("Insensible Method"), 380, 120, 500, 195);
	m_wndInsensibleMethod.Create(this,505, 120, 960, 195, TRUE, FALSE, TRUE); 
	m_wndAfterOperationLabel.Create(this, _T("After Operation"), 380, 280, 500, 355);
	m_wndBeforeOperation.Create(this,505, 200, 960, 275, TRUE, FALSE, TRUE); 
	m_wndBeforeOperationLabel.Create(this, _T("Before Operation"), 380, 200, 500, 275);
	m_wndAfterOperation.Create(this,505, 280, 960, 355, TRUE, FALSE, TRUE); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 380, 360, 500, 385);
	m_wndPractitioner.Create(this,505, 360, 705, 385); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 710, 360, 815, 385);
	m_wndPerformDate.Create(this,820, 360, 960, 385); 
	m_wndAnesthetistLabel.Create(this, _T("Anesthetist"), 380, 390, 500, 415);
	m_wndAnesthetist.Create(this,505, 390, 705, 415); 
	m_wndAssistantLabel.Create(this, _T("Assistant"), 710, 390, 815, 415);
	m_wndAssistant.Create(this,820, 390, 960, 415); 
	m_wndUser4Label.Create(this, _T("User4"), 380, 420, 500, 445);
	m_wndUser4.Create(this,505, 420, 705, 445); 
	m_wndUser5Label.Create(this, _T("User5"), 710, 420, 815, 445);
	m_wndUser5.Create(this,820, 420, 960, 445); 
	m_wndUser6Label.Create(this, _T("User6"), 380, 450, 500, 475);
	m_wndUser6.Create(this,505, 450, 705, 475); 
	m_wndUser7Label.Create(this, _T("User7"), 710, 450, 815, 475);
	m_wndUser7.Create(this,820, 450, 960, 475); 
	m_wndNoteLabel.Create(this, _T("Note"), 380, 480, 500, 505);
	m_wndNote.Create(this,505, 480, 960, 545); 
	m_wndEdit.Create(this, _T("&Update"), 590, 555, 680, 580);
	m_wndSave.Create(this, _T("&Save"), 685, 555, 775, 580);
	m_wndCancel.Create(this, _T("&Cancel"), 780, 555, 870, 580);
	m_wndPrint.Create(this, _T("&Print"), 875, 555, 965, 580);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 60, 90, 85);
	m_wndDocumentNo.Create(this,95, 60, 195, 85); 
	m_wndRecordNoLabel.Create(this, _T("Record"), 10, 30, 90, 55);
	m_wndRecordNo.Create(this,95, 30, 195, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 90, 115);
	m_wndPatientName.Create(this,95, 90, 365, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 10, 120, 90, 145);
	m_wndSex.Create(this,95, 120, 195, 145); 
	m_wndAgeLabel.Create(this, _T("Age"), 200, 120, 280, 145);
	m_wndAge.Create(this,285, 120, 365, 145); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 150, 90, 200);
	m_wndAddress.Create(this,95, 150, 365, 200); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 205, 90, 230);
	m_wndWorkplace.Create(this,95, 205, 365, 230); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 235, 90, 260);
	m_wndObject.Create(this,95, 235, 365, 260); 	
	m_wndDrugList.Create(this,10, 265, 365, 545); 
	m_wndAddDrugLine.Create(this, _T("Add Drug && Material"), 10, 555, 160, 580);

}
void CHMSOperationOrderFromDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(16);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(35);
	m_wndInsensibleMethod.SetLimitText(235);
	//m_wndInsensibleMethod.SetCheckValue(true);
	m_wndBeforeOperation.SetLimitText(235);
	//m_wndBeforeOperation.SetCheckValue(true);
	m_wndAfterOperation.SetLimitText(235);
	//m_wndAfterOperation.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndAnesthetist.SetCheckValue(true);
	m_wndAnesthetist.LimitText(35);
	//m_wndAssistant.SetCheckValue(true);
	m_wndAssistant.LimitText(35);
	//m_wndUser4.SetCheckValue(true);
	m_wndUser4.LimitText(35);
	//m_wndUser5.SetCheckValue(true);
	m_wndUser5.LimitText(35);
	//m_wndUser6.SetCheckValue(true);
	m_wndUser6.LimitText(35);
	//m_wndUser7.SetCheckValue(true);
	m_wndUser7.LimitText(35);
	m_wndNote.SetLimitText(1024);
	//m_wndNote.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(16);
	m_wndRecordNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(35);
	m_wndWorkplace.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	
	m_wndDrugList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndDrugList.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);
	m_wndDrugList.InsertColumn(2, _T("Uom"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndDrugList.InsertColumn(3, _T("Qty"), CFMT_MONEY, 30);
	m_wndDrugList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(5, _T("Country"), CFMT_TEXT, 100);
	

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);

	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);

	m_wndAnesthetist.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndAnesthetist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndAssistant.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndAssistant.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndPractitioner.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndUser4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUser4.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);


	m_wndUser5.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUser5.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);


	m_wndUser6.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUser6.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);


	m_wndUser7.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUser7.InsertColumn(1, _T("Description"), CFMT_TEXT, 130);

	m_hms_operationTbl.SetTableName(_T("hms_operation"));	
	m_hms_operationTbl.AddField(_T("ho_updatedby"), dfText, 15); 
	m_hms_operationTbl.AddField(_T("ho_updateddate"), dfDateTime); 
	m_hms_operationTbl.AddField(_T("ho_recordno"), dfText, 7);
	m_hms_operationTbl.AddField(_T("ho_group"), dfText, 7);	
	m_hms_operationTbl.AddField(_T("ho_inmethod"), dfText, 254); 
	m_hms_operationTbl.AddField(_T("ho_beforeopera"), dfText, 254); 
	m_hms_operationTbl.AddField(_T("ho_pdeptid"), dfText, 7); 
	m_hms_operationTbl.AddField(_T("ho_proomid"), dfInteger); 
	m_hms_operationTbl.AddField(_T("ho_afteropera"), dfText, 254); 
	m_hms_operationTbl.AddField(_T("ho_practitioner"), dfText, 15); 
	m_hms_operationTbl.AddField(_T("ho_anesthetist"), dfText, 15); 
	m_hms_operationTbl.AddField(_T("ho_assistant"), dfText, 15); 	
	m_hms_operationTbl.AddField(_T("ho_performdate"), dfDateTime); 
	m_hms_operationTbl.AddField(_T("ho_status"), dfText, 1); 	
	m_hms_operationTbl.AddField(_T("ho_note"), dfText, 81);	

}
void CHMSOperationOrderFromDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	//m_wndInsensibleMethod.SetEvent(WE_CHANGE, _OnInsensibleMethodChangeFnc);
	//m_wndInsensibleMethod.SetEvent(WE_SETFOCUS, _OnInsensibleMethodSetfocusFnc);
	//m_wndInsensibleMethod.SetEvent(WE_KILLFOCUS, _OnInsensibleMethodKillfocusFnc);
	m_wndInsensibleMethod.SetEvent(WE_CHECKVALUE, _OnInsensibleMethodCheckValueFnc);
	//m_wndBeforeOperation.SetEvent(WE_CHANGE, _OnBeforeOperationChangeFnc);
	//m_wndBeforeOperation.SetEvent(WE_SETFOCUS, _OnBeforeOperationSetfocusFnc);
	//m_wndBeforeOperation.SetEvent(WE_KILLFOCUS, _OnBeforeOperationKillfocusFnc);
	m_wndBeforeOperation.SetEvent(WE_CHECKVALUE, _OnBeforeOperationCheckValueFnc);
	//m_wndAfterOperation.SetEvent(WE_CHANGE, _OnAfterOperationChangeFnc);
	//m_wndAfterOperation.SetEvent(WE_SETFOCUS, _OnAfterOperationSetfocusFnc);
	//m_wndAfterOperation.SetEvent(WE_KILLFOCUS, _OnAfterOperationKillfocusFnc);
	m_wndAfterOperation.SetEvent(WE_CHECKVALUE, _OnAfterOperationCheckValueFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndAnesthetist.SetEvent(WE_SELENDOK, _OnAnesthetistSelendokFnc);
	//m_wndAnesthetist.SetEvent(WE_SETFOCUS, _OnAnesthetistSetfocusFnc);
	//m_wndAnesthetist.SetEvent(WE_KILLFOCUS, _OnAnesthetistKillfocusFnc);
	m_wndAnesthetist.SetEvent(WE_SELCHANGE, _OnAnesthetistSelectChangeFnc);
	m_wndAnesthetist.SetEvent(WE_LOADDATA, _OnAnesthetistLoadDataFnc);
	//m_wndAnesthetist.SetEvent(WE_ADDNEW, _OnAnesthetistAddNewFnc);
	m_wndAssistant.SetEvent(WE_SELENDOK, _OnAssistantSelendokFnc);
	//m_wndAssistant.SetEvent(WE_SETFOCUS, _OnAssistantSetfocusFnc);
	//m_wndAssistant.SetEvent(WE_KILLFOCUS, _OnAssistantKillfocusFnc);
	m_wndAssistant.SetEvent(WE_SELCHANGE, _OnAssistantSelectChangeFnc);
	m_wndAssistant.SetEvent(WE_LOADDATA, _OnAssistantLoadDataFnc);
	//m_wndAssistant.SetEvent(WE_ADDNEW, _OnAssistantAddNewFnc);
	m_wndUser4.SetEvent(WE_SELENDOK, _OnUser4SelendokFnc);
	//m_wndUser4.SetEvent(WE_SETFOCUS, _OnUser4SetfocusFnc);
	//m_wndUser4.SetEvent(WE_KILLFOCUS, _OnUser4KillfocusFnc);
	m_wndUser4.SetEvent(WE_SELCHANGE, _OnUser4SelectChangeFnc);
	m_wndUser4.SetEvent(WE_LOADDATA, _OnUser4LoadDataFnc);
	//m_wndUser4.SetEvent(WE_ADDNEW, _OnUser4AddNewFnc);
	m_wndUser5.SetEvent(WE_SELENDOK, _OnUser5SelendokFnc);
	//m_wndUser5.SetEvent(WE_SETFOCUS, _OnUser5SetfocusFnc);
	//m_wndUser5.SetEvent(WE_KILLFOCUS, _OnUser5KillfocusFnc);
	m_wndUser5.SetEvent(WE_SELCHANGE, _OnUser5SelectChangeFnc);
	m_wndUser5.SetEvent(WE_LOADDATA, _OnUser5LoadDataFnc);
	//m_wndUser5.SetEvent(WE_ADDNEW, _OnUser5AddNewFnc);
	m_wndUser6.SetEvent(WE_SELENDOK, _OnUser6SelendokFnc);
	//m_wndUser6.SetEvent(WE_SETFOCUS, _OnUser6SetfocusFnc);
	//m_wndUser6.SetEvent(WE_KILLFOCUS, _OnUser6KillfocusFnc);
	m_wndUser6.SetEvent(WE_SELCHANGE, _OnUser6SelectChangeFnc);
	m_wndUser6.SetEvent(WE_LOADDATA, _OnUser6LoadDataFnc);
	//m_wndUser6.SetEvent(WE_ADDNEW, _OnUser6AddNewFnc);
	m_wndUser7.SetEvent(WE_SELENDOK, _OnUser7SelendokFnc);
	//m_wndUser7.SetEvent(WE_SETFOCUS, _OnUser7SetfocusFnc);
	//m_wndUser7.SetEvent(WE_KILLFOCUS, _OnUser7KillfocusFnc);
	m_wndUser7.SetEvent(WE_SELCHANGE, _OnUser7SelectChangeFnc);
	m_wndUser7.SetEvent(WE_LOADDATA, _OnUser7LoadDataFnc);
	//m_wndUser7.SetEvent(WE_ADDNEW, _OnUser7AddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndDept.SetEvent(WE_CHANGE, _OnDeptChangeFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_CHECKVALUE, _OnDeptCheckValueFnc);
	m_wndAddDrugLine.SetEvent(WE_CLICK, _OnAddDrugLineSelectFnc);

	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationOrderFromDeptFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationOrderFromDeptFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationOrderFromDeptFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationOrderFromDeptFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationOrderFromDeptFnc, 0, 'T', VK_CONTROL);

	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));	
	SetMode(VM_NONE);

}
void CHMSOperationOrderFromDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_Text(pDX, m_wndInsensibleMethod.GetDlgCtrlID(), m_szInsensibleMethod);
	DDX_Text(pDX, m_wndBeforeOperation.GetDlgCtrlID(), m_szBeforeOperation);
	DDX_Text(pDX, m_wndAfterOperation.GetDlgCtrlID(), m_szAfterOperation);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_TextEx(pDX, m_wndAnesthetist.GetDlgCtrlID(), m_szAnesthetistKey);
	DDX_TextEx(pDX, m_wndAssistant.GetDlgCtrlID(), m_szAssistantKey);
	DDX_TextEx(pDX, m_wndUser4.GetDlgCtrlID(), m_szUser4Key);
	DDX_TextEx(pDX, m_wndUser5.GetDlgCtrlID(), m_szUser5Key);
	DDX_TextEx(pDX, m_wndUser6.GetDlgCtrlID(), m_szUser6Key);
	DDX_TextEx(pDX, m_wndUser7.GetDlgCtrlID(), m_szUser7Key);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_nRecordNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
}
void CHMSOperationOrderFromDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T(" SELECT hcr_recordno as recordno,	hp_patientno as patientno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnic, ") \
				_T(" 	sys_sel_getname('sys_occupation', hp_occupation) as occupation,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hms_getobjectname(hd_object) as objectname,") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hd_cardidx as cardidx,") \
				_T(" 	htr_outpatient as outpatient,") \
				_T(" 	htr_status as statusid,") \
				_T(" 	sys_sel_getname('hms_treatment_status', htr_status) as status,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T(" 	get_username(hcr_treatdoctor) as doctor,") \
				_T(" 	 trunc_date(htr_admitdate) as admitdate,") \
				_T(" 	 trunc_date(htr_dischargedate) as dischargedate,") \
				_T(" 	hcr_conclusion as conclusion,") \
				_T(" 	hms_geticdname(htr_mainicd) as mainicd,") \
				_T("	htr_suggestion as suggestionkey, ") \
				_T(" 	sys_sel_getname('hms_suggestion', htr_suggestion) as suggestion, ") \
				_T("	htr_tdeptid as todeptid, ") \
				_T("	hcr_numinward as numinward") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
				_T(" WHERE htr_docno=%ld "), m_nDocumentNo);


	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s %d"), szSQL, rs.GetRecordCount());
	

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), tmpStr);
		StringUpper(tmpStr, m_szPatientName);		
		rs.GetValue(_T("age"), m_szAge); 
		rs.GetValue(_T("sex"), m_szSex);		
		rs.GetValue(_T("workplace"), m_szWorkplace); 		
		rs.GetValue(_T("address"), m_szAddress);		
		rs.GetValue(_T("objectname"), m_szObject);		
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("numinward"), m_nRecordNo);

		szSQL.Format(_T("SELECT * FROM hms_operation WHERE ho_docno = %ld AND ho_idx=%ld "), m_nDocumentNo, m_nOrderID);	
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			//rs.GetValue(_T("ho_createdby"),  m_szCreatedBy); 
	//		m_szCreatedBy.MakeLower();
			rs.GetValue(_T("ho_orderdate"),  m_szOrderDate); 
			rs.GetValue(_T("ho_itemid"),  m_szNameKey);			
			rs.GetValue(_T("ho_recordno"),  m_szTypeKey);
			//rs.GetValue(_T("ho_qty"),  m_nQuantity); 
	//		rs.GetValue(_T("ho_doctor"),  m_szDoctor); 
			rs.GetValue(_T("ho_beforeopera"),  m_szBeforeOperation); 
			rs.GetValue(_T("ho_deptid"),  m_szPerformDeptKey); 
	//		rs.GetValue(_T("ho_status"),  m_szStatus); 
			rs.GetValue(_T("ho_inmethod"),  m_szInsensibleMethod); 
			rs.GetValue(_T("ho_afteropera"),  m_szAfterOperation); 
			rs.GetValue(_T("ho_practitioner"),  m_szPractitionerKey); 
			rs.GetValue(_T("ho_anesthetist"),  m_szAnesthetistKey); 
			rs.GetValue(_T("ho_assistant"),  m_szAssistantKey); 
			rs.GetValue(_T("ho_performdate"),  m_szPerformDate); 
			rs.GetValue(_T("ho_note"),  m_szNote); 
	//		rs.GetValue(_T("ho_deptid"),  m_szDepartmentID); 
	//		rs.GetValue(_T("ho_depttype"),  m_szDeptType);
			
			rs.GetValue(_T("ho_payment"),  tmpStr); 			
			SetMode(VM_VIEW);

			OnDrugListLoadData();
		}
	}
	else
	{
		SetMode(VM_NONE);
		m_wndDrugList.DeleteAllItems();
	}

}
void CHMSOperationOrderFromDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_operationTbl.SetValue(_T("ho_updatedby"),  pMF->GetCurrentUser()); 
	m_hms_operationTbl.SetValue(_T("ho_updateddate"), pMF->GetSysDateTime()); 
	m_hms_operationTbl.SetValue(_T("ho_inmethod"),  m_szInsensibleMethod); 
	m_hms_operationTbl.SetValue(_T("ho_beforeopera"),  m_szBeforeOperation); 
	m_hms_operationTbl.SetValue(_T("ho_afteropera"),  m_szAfterOperation); 
	m_hms_operationTbl.SetValue(_T("ho_pdeptid"),  pMF->m_szDept); 
	m_hms_operationTbl.SetValue(_T("ho_practitioner"),  m_szPractitionerKey); 
	m_hms_operationTbl.SetValue(_T("ho_anesthetist"),  m_szAnesthetistKey); 
	m_hms_operationTbl.SetValue(_T("ho_assistant"),  m_szAssistantKey); 
	m_hms_operationTbl.SetValue(_T("ho_status"),  _T("T")); 
	m_hms_operationTbl.SetValue(_T("ho_performdate"),  pMF->GetSysDateTime());
	m_hms_operationTbl.SetValue(_T("ho_recordno"),  m_szTypeKey); 
	m_hms_operationTbl.SetValue(_T("ho_note"),  m_szNote);
}
void CHMSOperationOrderFromDept::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_szPerformDeptKey.Empty();
	m_szInsensibleMethod.Empty();
	m_szBeforeOperation.Empty();
	m_szAfterOperation.Empty();
	m_szPractitionerKey.Empty();
	m_szPerformDate.Empty();
	m_szAnesthetistKey.Empty();
	m_szAssistantKey.Empty();
	m_szUser4Key.Empty();
	m_szUser5Key.Empty();
	m_szUser6Key.Empty();
	m_szUser7Key.Empty();
	m_szNote.Empty();
	m_szTypeKey.Empty();
	//m_nDocumentNo=0;
	//m_nRecordNo=0;
	//m_szPatientName.Empty();
	//m_szSex.Empty();
	//m_szAge.Empty();
	//m_szAddress.Empty();
	//m_szWorkplace.Empty();
	//m_szObject.Empty();
	//m_szDept.Empty();

}
int CHMSOperationOrderFromDept::SetMode(int nMode){
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
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndType.EnableWindow(true);
			m_wndGroup.EnableWindow(true);			
			m_wndPerformDate.EnableWindow(true);
			m_wndInsensibleMethod.EnableWindow(true);
			m_wndBeforeOperation.EnableWindow(true);
			m_wndAfterOperation.EnableWindow(true);
			m_wndPractitioner.EnableWindow(true);
			m_wndAnesthetist.EnableWindow(true);
			m_wndAssistant.EnableWindow(true);
			m_wndOrderDate.EnableWindow(false);
			m_wndName.EnableWindow(false);
			m_wndPractitioner.SetCheckValue(true);
			m_wndPerformDate.SetCheckValue(true);

 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
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
void CHMSOperationOrderFromDept::OnDrugListDblClick(){
	
} 
void CHMSOperationOrderFromDept::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(nNewItem < 0)
	//	return;
	//m_nOrderID = ToLong(m_wndDrugList.GetItemText(nNewItem, 0));
	//m_szGroupKey = m_wndDrugList.GetItemText(nNewItem, 8);	
	//GetDataToScreen();
} 
int CHMSOperationOrderFromDept::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationOrderFromDept::OnDrugListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szUsage, tmpStr, szStatus;
	long nOldOID=0, nNewOID;
	int nItem =0;
	double totalMoney = 0;
	m_wndDrugList.BeginLoad();
	
	int nCount = 0;
	
		szSQL.Format(_T("") \
	_T(" SELECT hpol_line,") \
	_T("   product_id                        AS id,") \
	_T("   product_countryid                 AS countryid,") \
	_T("   product_name                      AS name,") \
	_T("   product_countryname               AS country,") \
	_T("   product_uomname                   AS unit,") \
	_T("   hpo_deptid						 AS deptid, ") \
	_T("   hpo_doctor						 AS doctor, ") \
	_T("   hpo_storage_id					 AS storageid, ") \
	_T("   hpo_orderstatus					 AS orderstatus, ") \
	_T("   hpo_orderdate					 AS orderdate, ") \
	_T("   hpol_orderid						 AS orderid, ") \
	_T("   hpol_qtyorder                     AS qty,") \
	_T("   hpol_unitprice					 AS unitprice, ") \
	_T("   SUM(hpol_unitprice*hpol_qtyorder) AS Amount, ") \
	_T("   hms_getdousage(hpol_orderid, hpol_product_id) AS usage") \
	_T(" FROM hms_ipharmaorder") \
	_T(" LEFT JOIN hms_ipharmaorderline ") \
	_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON(product_item_id=hpol_product_item_id)") \
	_T(" WHERE hpo_docno = %ld") \
	_T(" AND hpo_transaction_id = %ld") \
	_T(" GROUP BY hpol_line,") \
	_T("   product_id,") \
	_T("   product_countryid,") \
	_T("   product_name,") \
	_T("   product_countryname,") \
	_T("   product_uomname ,") \
	_T("   hpol_qtyorder,") \
	_T("   hpo_orderstatus, hpol_orderid, hpo_orderdate, hpol_unitprice, ") \
	_T("   hpol_orderid, hpol_product_id, hpo_storage_id, hpo_deptid, hpo_doctor") \
	_T(" ORDER BY storageid,hpol_line"), m_nDocumentNo, m_nOrderID);	

_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 		
		rs.GetValue(_T("hpol_usage"), szUsage);
		double money;
		rs.GetValue(_T("amount"), money);
		totalMoney += money;
		nItem++;
		tmpStr.Format(_T("%ld"), nItem);
		m_wndDrugList.AddItems(
			tmpStr, 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("qty")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("country")), 			
			NULL);
		rs.MoveNext();
	}
	//if(totalMoney > 0)
	//{
	//	CString tmpStr;
	//	TranslateString(_T("Total Money"), tmpStr);
	//	int nItem = m_wndDrugList.AddItems(_T(""), tmpStr, _T(""), _T(""), _T(""), ToString(totalMoney), NULL);
	//	m_wndDrugList.SetItemBkColor(nItem, RGB(220, 220, 255), false);
	//	m_wndDrugList.SetItemTextColor(nItem, RGB(0, 0, 255), false);
	//}
	m_wndDrugList.EndLoad();
	return nCount;
}
void CHMSOperationOrderFromDept::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnGroupSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnGroupSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnGroupKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id,1,2) in('B4','B5') AND hfg_active='Y' %s ORDER BY hfg_level "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("hfg_id")),
			rs.GetValue(_T("hfg_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationOrderFromDept::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrderFromDept::OnOrderDateChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnOrderDateKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationOrderFromDept::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnNameSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnNameSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnNameKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szNameKey);
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, hfl_servprice as servprice, hfl_insprice as insprice, hfl_polprice as polprice, hfl_reqprice as reqprice FROM hms_fee_list WHERE substr(hfl_groupid, 1, 2) in('B4','B5')  and hfl_servprice > 0 %s ORDER BY hfl_feeid "), szWhere); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("polprice")), 
			rs.GetValue(_T("reqprice")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationOrderFromDept::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnPerformDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szPerformDeptKey);
	};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in('DT','KB') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationOrderFromDept::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrderFromDept::OnInsensibleMethodChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnInsensibleMethodSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnInsensibleMethodKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnInsensibleMethodCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnBeforeOperationChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnBeforeOperationSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnBeforeOperationKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnBeforeOperationCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnAfterOperationChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnAfterOperationSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnAfterOperationKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnAfterOperationCheckValue(){
	return 0;
} 
void CHMSOperationOrderFromDept::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnPractitionerSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnPractitionerSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnPractitionerKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_groupid in('D','P') "));
	return pMF->LoadDoctorList(&m_wndPractitioner, m_szPractitionerKey, pMF->m_szDept, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPractitionerKey
};
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrderFromDept::OnPerformDateChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnPerformDateSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnPerformDateKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSOperationOrderFromDept::OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnAnesthetistSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnAnesthetistSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnAnesthetistKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnAnesthetistLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndAnesthetist, m_szAnesthetistKey);
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAnesthetist.IsSearchKey() && !m_szAnesthetistKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAnesthetistKey
};
	m_wndAnesthetist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnesthetist.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnAnesthetistAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnAssistantSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnAssistantSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnAssistantSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnAssistantKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnAssistantLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndAssistant, m_szAssistantKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAssistant.IsSearchKey() && !m_szAssistantKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAssistantKey
};
	m_wndAssistant.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssistant.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnAssistantAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnUser4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnUser4Selendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnUser4Setfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnUser4Killfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnUser4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndUser4, m_szUser4Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser4.IsSearchKey() && !m_szUser4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser4Key
};
	m_wndUser4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnUser4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnUser5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnUser5Selendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnUser5Setfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnUser5Killfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnUser5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndUser5, m_szUser5Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser5.IsSearchKey() && !m_szUser5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser5Key
};
	m_wndUser5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnUser5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnUser6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnUser6Selendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnUser6Setfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnUser6Killfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnUser6LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndUser6, m_szUser6Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser6.IsSearchKey() && !m_szUser6Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser6Key
};
	m_wndUser6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser6.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnUser6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationOrderFromDept::OnUser7SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnUser7Selendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnUser7Setfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnUser7Killfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnUser7LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndUser7, m_szUser7Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser7.IsSearchKey() && !m_szUser7Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser7Key
};
	m_wndUser7.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser7.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationOrderFromDept::OnUser7AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrderFromDept::OnNoteChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnNoteSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnNoteKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnNoteCheckValue(){
	return 0;
} 
void CHMSOperationOrderFromDept::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSOperationOrderFromDept();
} 
void CHMSOperationOrderFromDept::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOperationOrderFromDept();
} 
void CHMSOperationOrderFromDept::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSOperationOrderFromDept();
} 
void CHMSOperationOrderFromDept::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	TranslateString(_T("In phieu DT van dong"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	TranslateString(_T("In phieu DT vat ly"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	
	m_wndPrint.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top-20*3, this);

	switch(nPos){
	case 1:
		OnPrintOperation(_T("PHIEUDIEUTRIVANDONG"));
		break;
	case 2:
		OnPrintOperation(_T("PHIEUDIEUTRIVANDONG"));
		break;	
	
	};	
	
} 
void CHMSOperationOrderFromDept::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationOrderFromDept::OnTypeSelendok(){
	 
}
/*void CHMSOperationOrderFromDept::OnTypeSetfocus(){
	
}*/
/*void CHMSOperationOrderFromDept::OnTypeKillfocus(){
	
}*/
long CHMSOperationOrderFromDept::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND fa_assetno='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fa_assetno as id, fa_name as name FROM fam_asset WHERE fa_department='%s' %s ORDER BY fa_assetno"), pMF->m_szDept,szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationOrderFromDept::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationOrderFromDept::OnDocumentNoChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnDocumentNoSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnDocumentNoKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnRecordNoChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnRecordNoSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnRecordNoKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnPatientNameChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnPatientNameSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnPatientNameKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnSexChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnSexSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnSexKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnSexCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnAgeChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnAgeSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnAgeKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnAddressChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnAddressSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnAddressKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnWorkplaceChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnWorkplaceSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnWorkplaceKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnWorkplaceCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnObjectChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnObjectSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnObjectKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSOperationOrderFromDept::OnDeptChange(){
	
} */
/*void CHMSOperationOrderFromDept::OnDeptSetfocus(){
	
} */
/*void CHMSOperationOrderFromDept::OnDeptKillfocus(){
	
} */
int CHMSOperationOrderFromDept::OnDeptCheckValue(){
	return 0;
} 
int CHMSOperationOrderFromDept::OnAddHMSOperationOrderFromDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationOrderFromDept::OnEditHMSOperationOrderFromDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);

	return 0;  
}
int CHMSOperationOrderFromDept::OnDeleteHMSOperationOrderFromDept(){
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
 		OnCancelHMSOperationOrderFromDept();
 	}
	return 0;
}
int CHMSOperationOrderFromDept::OnSaveHMSOperationOrderFromDept(){
 	if(GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	
	if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE ho_idx = %ld"), m_nOrderID);
 		szSQL = m_hms_operationTbl.GetUpdateSQL(_T("ho_createdby,ho_itemid,ho_deptid"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSOperationOrderFromDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationOrderFromDept::OnCancelHMSOperationOrderFromDept(){
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
int CHMSOperationOrderFromDept::OnHMSOperationOrderFromDeptListLoadData(){
	return 0;
}
#include "HMSOperationMaterialDialog.h"
void CHMSOperationOrderFromDept::OnAddDrugLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL;

	
	/*if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("06.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	if(!pMF->IsActiveDocument())
		return ;*/
	
	
	CHMSOperationMaterialDialog dlg(this);
	dlg.m_szOperationName = m_wndName.GetCurrent(1);
	pMF->m_nDocumentNo = m_nDocumentNo;
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_szFeeID = m_szNameKey;
	dlg.m_nRefIndex = m_nOrderID;	
	dlg.m_szCreatedBy = pMF->GetCurrentUser();
	dlg.m_szOrderDept = pMF->m_szDept;
	dlg.m_szType = _T("M");	
	pMF->GetModuleID() == _T("TM");
	dlg.SetMode(VM_NONE);
	dlg.DoModal();

	OnDrugListLoadData();
} 
void CHMSOperationOrderFromDept::OnPrintOperation(CString szReportName){
	
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	CString szDate, szSysDate, szAdmit, szPerformDate;
	szSysDate = pMF->GetSysDateTime(); 
	if(szReportName.IsEmpty())
		szReportName = _T("HMS_OPERATIONSHEET");

	tmpStr.Format(_T("Reports\\HMS\\%s.RPT"), szReportName);

	if(!rpt.Init(tmpStr))
		return ;

	/*if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("06.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}*/


	szSQL.Format(_T(" SELECT 	hd_docno as docno,") \
			_T("  trim(hp_surname||' '||hp_midname||' '||hp_firstname) as PatientName,") \
			_T("  trunc_date(hp_birthdate) as birthdate,") \
			_T("  hms_getage(trunc_date(hd_admitdate), hp_birthdate) as Age,") \
			_T("  hp_sex as sexid,") \
			_T("  sys_sel_getname('sys_sex', hp_sex) as Sex,") \
			_T("  ho_deptid as deptid,") \
			_T("  ho_roomid as roomid,") \
			_T("  ho_bedid as bedid,") \
			_T("  (select sd_name from sys_dept where sd_id=ho_deptid) as Department,") \
			_T("  hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address,") \
			_T("  hd_cardno as cardno,") \
			_T("  hd_cardidx as cardidx, ") \
			_T("  hc_expdate as expdate,") \
			_T("  hd_admitdate as Admitdate, ") \
			_T("  ho_beforeopera  as  BeforeOpera, ho_afteropera  as  AfterOpera, ") \
			_T("  ho_performdate as PerformDate,") \
			_T("  ho_practitioner as practitioner, ho_assistant as assistant,") \
			_T("  ho_anesthetist as anesthetist, hd_admitdate as admitdate,") \
			_T("  hd_diagnostic as Diagnostic, ho_inmethod as InMethod,") \
			_T("  ho_itemid as itemid, ") \
			_T("  hfl_name as operationname ") \
			_T("  FROM hms_operation") \
			_T("  RIGHT JOIN hms_patient ON(hp_patientno=ho_patientno)") \
			_T("  RIGHT JOIN hms_doc on (hd_docno=ho_docno) ") \
			_T("  LEFT JOIN hms_card ON (hd_patientno=hc_patientno AND hd_cardno = hc_cardno AND hd_cardidx=hc_idx)") \
			_T("  LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
			_T("  WHERE ho_idx=%ld"), m_nOrderID);
	int ret = rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Patient not found."));
		return;
	}
	
			//Report Header

	//StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTH_SERVICE"), pMF->m_CompanyInfo.sc_pname);
	//StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITAL_NAME"), pMF->m_CompanyInfo.sc_name);
	rs.GetValue(_T("docno"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("docno"), tmpStr);
	tmpStr.Format(_T("%ld"), m_nOrderID);
	rpt.GetReportHeader()->SetValue(_T("orderid"), tmpStr);

	rs.GetValue(_T("PatientName"),tmpStr); //benh nhan
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("Age"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("Sex"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	
	rs.GetValue(_T("CardNo"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ppvocam"), _T(""));
	rs.GetValue(_T("ExpDate"),tmpStr);// ngay het han
	rpt.GetReportHeader()->SetValue(_T("ExpDate"), CDate::Convert(rs.GetValue(_T("ExpDate")), yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("Practitioner"),tmpStr);// bac sy phau thuat
	rpt.GetReportHeader()->SetValue(_T("Practitioner"), pMF->GetDoctorName(tmpStr));
	rs.GetValue(_T("Assistant"),tmpStr);// thu thuat vien
	rpt.GetReportHeader()->SetValue(_T("Assistant"), pMF->GetDoctorName(tmpStr));
	rs.GetValue(_T("Anesthetist"),tmpStr);//bac sy gay me
	rpt.GetReportHeader()->SetValue(_T("Anesthetist"), pMF->GetDoctorName(tmpStr));
	rs.GetValue(_T("address"),tmpStr);//dia chi
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("Department"),tmpStr);//khoa
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	rs.GetValue(_T("roomid"),tmpStr);// ten phong
	rpt.GetReportHeader()->SetValue(_T("Room"), tmpStr);
	rs.GetValue(_T("bedid"),tmpStr);//giuong
	rpt.GetReportHeader()->SetValue(_T("Bed"), tmpStr);

	tmpStr=rpt.GetReportHeader()->GetValue(_T("AdmitDate"));
	rs.GetValue(_T("AdmitDate"),szAdmit);// vao khoa luc			
	szAdmit.Format(tmpStr,szAdmit.Mid(11,2),szAdmit.Mid(14,2),CDate::Convert(szAdmit.Left(10), yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("AdmitDate"), szAdmit);//

	tmpStr=rpt.GetReportHeader()->GetValue(_T("PerformDate"));
	rs.GetValue(_T("PerformDate"),szPerformDate);// thuc hien luc		
	szPerformDate.Format(tmpStr,szPerformDate.Mid(11,2),szPerformDate.Mid(14,2),CDate::Convert(szPerformDate.Left(10), yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("PerformDate"), szPerformDate);//
	rs.GetValue(_T("Diagnostic"),tmpStr);// chan doan
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	rs.GetValue(_T("BeforeOpera"),tmpStr);// truoc phau thuat thu thuat
	rpt.GetReportHeader()->SetValue(_T("BeforeOpera"), tmpStr);
	rs.GetValue(_T("AfterOpera"),tmpStr);// sau phau thuat thu thuat
	rpt.GetReportHeader()->SetValue(_T("AfterOpera"), tmpStr);
	rs.GetValue(_T("operationname"),tmpStr);// phuong phap phau thuat thu thuat
	rpt.GetReportHeader()->SetValue(_T("InMethod"), tmpStr);
	rs.GetValue(_T("OperationType"),tmpStr);// loai phau thuat thu thuat
	rpt.GetReportHeader()->SetValue(_T("OperationType"), _T(""));
	//phuong phap vo cam			
		
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 

	//Page Footer
	//Report Footer
	
	rs.GetValue(_T("Assistant"),tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Assistant"), pMF->GetDoctorName(tmpStr));
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(11,5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();

} 