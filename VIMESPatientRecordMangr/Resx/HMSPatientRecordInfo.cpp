#include "HMSPatientRecordInfo.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnRecordListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo*)pWnd)->OnRecordListLoadData();
} 
static void _OnRecordListDblClickFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo*)pWnd)->OnRecordListDblClick();
} 
static void _OnRecordListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientRecordInfo*)pWnd)->OnRecordListSelectChange(nOldItem, nNewItem);
} 
static int _OnRecordListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnRecordListDeleteItem();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnPatientNoCheckValue();
} 
static void _OnSearchPatientSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnSearchPatientSelect();
} 
/*static void _OnFullNameChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFullNameChange();
} */
/*static void _OnFullNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFullNameSetfocus();} */ 
/*static void _OnFullNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFullNameKillfocus();
} */
static int _OnFullNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnFullNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOccupationChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnOccupationChange();
} */
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnOccupationSetfocus();} */ 
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnOccupationKillfocus();
} */
static int _OnOccupationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnOccupationCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnAdmissionDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionDateChange();
} */
/*static void _OnAdmissionDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionDateSetfocus();} */ 
/*static void _OnAdmissionDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmissionDateKillfocus();
} */
static int _OnAdmissionDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnAdmissionDateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnAdmitDepartmentChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmitDepartmentChange();
} */
/*static void _OnAdmitDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmitDepartmentSetfocus();} */ 
/*static void _OnAdmitDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnAdmitDepartmentKillfocus();
} */
static int _OnAdmitDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnAdmitDepartmentCheckValue();
} 
/*static void _OnFromTimeChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTimeChange();
} */
/*static void _OnFromTimeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTimeSetfocus();} */ 
/*static void _OnFromTimeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnFromTimeCheckValue();
} 
/*static void _OnToTimeChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTimeChange();
} */
/*static void _OnToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTimeSetfocus();} */ 
/*static void _OnToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnToTimeCheckValue();
} 
/*static void _OnEndDepartmentChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnEndDepartmentChange();
} */
/*static void _OnEndDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnEndDepartmentSetfocus();} */ 
/*static void _OnEndDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnEndDepartmentKillfocus();
} */
static int _OnEndDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnEndDepartmentCheckValue();
} 
/*static void _OnFromTime2ChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTime2Change();
} */
/*static void _OnFromTime2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTime2Setfocus();} */ 
/*static void _OnFromTime2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnFromTime2Killfocus();
} */
static int _OnFromTime2CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnFromTime2CheckValue();
} 
/*static void _OnToTime2ChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTime2Change();
} */
/*static void _OnToTime2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTime2Setfocus();} */ 
/*static void _OnToTime2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnToTime2Killfocus();
} */
static int _OnToTime2CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnToTime2CheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnArchivalNoChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnArchivalNoChange();
} */
/*static void _OnArchivalNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnArchivalNoSetfocus();} */ 
/*static void _OnArchivalNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnArchivalNoKillfocus();
} */
static int _OnArchivalNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnArchivalNoCheckValue();
} 
/*static void _OnStoredDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnStoredDateChange();
} */
/*static void _OnStoredDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnStoredDateSetfocus();} */ 
/*static void _OnStoredDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnStoredDateKillfocus();
} */
static int _OnStoredDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnStoredDateCheckValue();
} 
static void _OnRecordStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordInfo* )pWnd)->OnRecordStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRecordStatusSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordStatusSelendok();
}
/*static void _OnRecordStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordStatusKillfocus();
}*/
/*static void _OnRecordStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordStatusKillfocus();
}*/
static long _OnRecordStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnRecordStatusLoadData();
}
/*static void _OnRecordStatusAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRecordStatusAddNew();
}*/
/*static void _OnRoomIDChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRoomIDChange();
} */
/*static void _OnRoomIDSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRoomIDSetfocus();} */ 
/*static void _OnRoomIDKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnRoomIDKillfocus();
} */
static int _OnRoomIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnRoomIDCheckValue();
} 
/*static void _OnCabinetChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnCabinetChange();
} */
/*static void _OnCabinetSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnCabinetSetfocus();} */ 
/*static void _OnCabinetKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnCabinetKillfocus();
} */
static int _OnCabinetCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnCabinetCheckValue();
} 
/*static void _OnDrawerChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDrawerChange();
} */
/*static void _OnDrawerSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDrawerSetfocus();} */ 
/*static void _OnDrawerKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDrawerKillfocus();
} */
static int _OnDrawerCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDrawerCheckValue();
} 
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnLocationCheckValue();
} 
/*static void _OnShortcutChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnShortcutChange();
} */
/*static void _OnShortcutSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnShortcutSetfocus();} */ 
/*static void _OnShortcutKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnShortcutKillfocus();
} */
static int _OnShortcutCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnShortcutCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientRecordInfo *pVw = (CHMSPatientRecordInfo *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnBorrowListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo*)pWnd)->OnBorrowListLoadData();
} 
static void _OnBorrowListDblClickFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo*)pWnd)->OnBorrowListDblClick();
} 
static void _OnBorrowListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientRecordInfo*)pWnd)->OnBorrowListSelectChange(nOldItem, nNewItem);
} 
static int _OnBorrowListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnBorrowListDeleteItem();
} 
/*static void _OnBorrowDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowDateChange();
} */
/*static void _OnBorrowDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowDateSetfocus();} */ 
/*static void _OnBorrowDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowDateKillfocus();
} */
static int _OnBorrowDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnBorrowDateCheckValue();
} 
/*static void _OnNumberOfDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNumberOfDateChange();
} */
/*static void _OnNumberOfDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNumberOfDateSetfocus();} */ 
/*static void _OnNumberOfDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNumberOfDateKillfocus();
} */
static int _OnNumberOfDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnNumberOfDateCheckValue();
} 
/*static void _OnBorrowerChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowerChange();
} */
/*static void _OnBorrowerSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowerSetfocus();} */ 
/*static void _OnBorrowerKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowerKillfocus();
} */
static int _OnBorrowerCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnBorrowerCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordInfo* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnReasonCheckValue();
} 
static void _OnBorrowStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordInfo* )pWnd)->OnBorrowStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBorrowStatusSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowStatusSelendok();
}
/*static void _OnBorrowStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowStatusKillfocus();
}*/
/*static void _OnBorrowStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowStatusKillfocus();
}*/
static long _OnBorrowStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnBorrowStatusLoadData();
}
/*static void _OnBorrowStatusAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnBorrowStatusAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReturnDateChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnDateChange();
} */
/*static void _OnReturnDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnDateSetfocus();} */ 
/*static void _OnReturnDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnDateKillfocus();
} */
static int _OnReturnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnReturnDateCheckValue();
} 
static void _OnReturnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientRecordInfo* )pWnd)->OnReturnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReturnStatusSelendokFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnStatusSelendok();
}
/*static void _OnReturnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnStatusKillfocus();
}*/
/*static void _OnReturnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnStatusKillfocus();
}*/
static long _OnReturnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnReturnStatusLoadData();
}
/*static void _OnReturnStatusAddNewFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnStatusAddNew();
}*/
/*static void _OnReturnerChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnerChange();
} */
/*static void _OnReturnerSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnerSetfocus();} */ 
/*static void _OnReturnerKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReturnerKillfocus();
} */
static int _OnReturnerCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnReturnerCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnNotesChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNotesChange();
} */
/*static void _OnNotesSetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNotesSetfocus();} */ 
/*static void _OnNotesKillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->OnNotesKillfocus();
} */
static int _OnNotesCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->OnNotesCheckValue();
} 
/*static void _Oncontrol_104ChangeFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->Oncontrol_104Change();
} */
/*static void _Oncontrol_104SetfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->Oncontrol_104Setfocus();} */ 
/*static void _Oncontrol_104KillfocusFnc(CWnd *pWnd){
	((CHMSPatientRecordInfo *)pWnd)->Oncontrol_104Killfocus();
} */
static int _Oncontrol_104CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientRecordInfo *)pWnd)->Oncontrol_104CheckValue();
} 
static int _OnAddHMSPatientRecordInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnAddHMSPatientRecordInfo();
} 
static int _OnEditHMSPatientRecordInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnEditHMSPatientRecordInfo();
} 
static int _OnDeleteHMSPatientRecordInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnDeleteHMSPatientRecordInfo();
} 
static int _OnSaveHMSPatientRecordInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnSaveHMSPatientRecordInfo();
} 
static int _OnCancelHMSPatientRecordInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientRecordInfo*)pWnd)->OnCancelHMSPatientRecordInfo();
} 
CHMSPatientRecordInfo::CHMSPatientRecordInfo(){

	m_nDlgWidth = 1505;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CHMSPatientRecordInfo::~CHMSPatientRecordInfo(){
}
void CHMSPatientRecordInfo::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 60);
	m_wndArchivalRecordList.Create(this, _T("Archival Record List"), 5, 65, 1015, 220);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 225, 710, 370);
	m_wndRecordInformation.Create(this, _T("Archival Record Information"), 5, 375, 710, 630);
	m_wndRecordDiaryInformation.Create(this, _T("Record Diary Information"), 715, 225, 1015, 660);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 80, 55);
	m_wndFromDate.Create(this,85, 30, 165, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 170, 30, 230, 55);
	m_wndToDate.Create(this,235, 30, 315, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 320, 30, 400, 55);
	m_wndDocumentNo.Create(this,405, 30, 490, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 495, 30, 565, 55);
	m_wndRecordNo.Create(this,570, 30, 665, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 670, 30, 715, 55);
	m_wndName.Create(this,720, 30, 930, 55); 
	m_wndSearch.Create(this, _T("Search"), 935, 30, 1010, 55);
	m_wndRecordList.Create(this,10, 90, 1010, 215); 
	m_wndDocNoLabel.Create(this, _T("Document No"), 10, 250, 100, 275);
	m_wndDocNo.Create(this,105, 250, 205, 275); 
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 210, 250, 300, 275);
	m_wndPatientNo.Create(this,305, 250, 420, 275); 
	m_wndSearchPatient.Create(this, _T("Search Patient"), 425, 250, 565, 275);
	m_wndFullNameLabel.Create(this, _T("Full Name"), 10, 280, 100, 305);
	m_wndFullName.Create(this,105, 280, 420, 305); 
	m_wndAgeLabel.Create(this, _T("Age"), 425, 280, 485, 305);
	m_wndAge.Create(this,490, 280, 565, 305); 
	m_wndSexLabel.Create(this, _T("Sex"), 570, 280, 610, 305);
	m_wndSex.Create(this,615, 280, 705, 305); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 310, 100, 335);
	m_wndAddress.Create(this,105, 310, 705, 335); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 10, 340, 100, 365);
	m_wndOccupation.Create(this,105, 340, 420, 365); 
	m_wndObjectLabel.Create(this, _T("Object"), 425, 340, 485, 365);
	m_wndObject.Create(this,490, 340, 705, 365); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 10, 400, 100, 425);
	m_wndAdmissionNo.Create(this,105, 400, 195, 425); 
	m_wndAdmissionDateLabel.Create(this, _T("Admission Date"), 200, 400, 295, 425);
	m_wndAdmissionDate.Create(this,300, 400, 420, 425); 
	m_wndDischargeDateLabel.Create(this, _T("Out Date"), 425, 400, 485, 425);
	m_wndDischargeDate.Create(this,490, 400, 615, 425); 
	m_wndAdmitDepartmentLabel.Create(this, _T("In From Dept"), 10, 430, 100, 455);
	m_wndAdmitDepartment.Create(this,105, 430, 420, 455); 
	m_wndFromTimeLabel.Create(this, _T("From"), 425, 430, 485, 455);
	m_wndFromTime.Create(this,490, 430, 575, 455); 
	m_wndToTimeLabel.Create(this, _T("To"), 580, 430, 615, 455);
	m_wndToTime.Create(this,620, 430, 705, 455); 
	m_wndEndDepartmentLabel.Create(this, _T("Out From Dept"), 10, 460, 100, 485);
	m_wndEndDepartment.Create(this,105, 460, 420, 485); 
	m_wndFromTime2Label.Create(this, _T("From"), 425, 460, 485, 485);
	m_wndFromTime2.Create(this,490, 460, 575, 485); 
	m_wndToTime2.Create(this,620, 460, 706, 485); 
	m_wndToTime2Label.Create(this, _T("To"), 580, 460, 615, 485);
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 490, 100, 515);
	m_wndDiagnostic.Create(this,105, 490, 705, 515); 
	m_wndArchivalNoLabel.Create(this, _T("Archival No"), 10, 520, 100, 545);
	m_wndArchivalNo.Create(this,105, 520, 265, 545); 
	m_wndStoredDateLabel.Create(this, _T("Stored Date"), 270, 521, 345, 546);
	m_wndStoredDate.Create(this,350, 520, 460, 545); 
	m_wndRecordStatusLabel.Create(this, _T("Record Status"), 465, 520, 550, 545);
	m_wndRecordStatus.Create(this,555, 520, 705, 545); 
	m_wndRoomIDLabel.Create(this, _T("Room ID"), 10, 550, 100, 575);
	m_wndRoomID.Create(this,105, 550, 155, 575); 
	m_wndCabinetLabel.Create(this, _T("Cabinet"), 160, 550, 205, 575);
	m_wndCabinet.Create(this,210, 550, 265, 575); 
	m_wndDrawerLabel.Create(this, _T("Drawer"), 270, 550, 345, 575);
	m_wndDrawer.Create(this,351, 550, 406, 575); 
	m_wndLocationLabel.Create(this, _T("Location"), 410, 550, 460, 575);
	m_wndLocation.Create(this,465, 550, 550, 575); 
	m_wndShortcutLabel.Create(this, _T("Symbol"), 555, 550, 605, 575);
	m_wndShortcut.Create(this,610, 550, 705, 575); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 580, 100, 605);
	m_wndNote.Create(this,105, 580, 705, 625); 
	m_wndAdd.Create(this, _T("&Add"), 205, 635, 285, 660);
	m_wndEdit.Create(this, _T("&Edit"), 290, 635, 370, 660);
	m_wndDelete.Create(this, _T("&Delete"), 375, 635, 455, 660);
	m_wndSave.Create(this, _T("&Save"), 460, 635, 540, 660);
	m_wndCancel.Create(this, _T("&Cancel"), 545, 635, 625, 660);
	m_wndPrint.Create(this, _T("&Print Report"), 630, 635, 710, 660);
	m_wndBorrowList.Create(this,720, 250, 1010, 355); 
	m_wndBorrowDateLabel.Create(this, _T("Borrow Date"), 720, 360, 800, 385);
	m_wndBorrowDate.Create(this,805, 360, 880, 385); 
	m_wndNumberOfDateLabel.Create(this, _T("Number of Date"), 885, 360, 975, 385);
	m_wndNumberOfDate.Create(this,980, 360, 1010, 385); 
	m_wndBorrowerLabel.Create(this, _T("Borrower"), 720, 390, 800, 415);
	m_wndBorrower.Create(this,805, 390, 1010, 415); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 720, 420, 800, 445);
	m_wndDepartment.Create(this,805, 420, 1010, 445); 
	m_wndReasonLabel.Create(this, _T("Reason"), 720, 450, 800, 475);
	m_wndReason.Create(this,805, 450, 1010, 475); 
	m_wndBorrowStatusLabel.Create(this, _T("Borrow Status"), 720, 480, 800, 505);
	m_wndBorrowStatus.Create(this,805, 480, 1010, 505); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 720, 510, 800, 535);
	m_wndDeliverer.Create(this,805, 510, 1010, 535); 
	m_wndReturnDateLabel.Create(this, _T("Return Date"), 720, 540, 800, 565);
	m_wndReturnDate.Create(this,805, 540, 880, 565); 
	m_wndReturnStatusLabel.Create(this, _T("Return Status"), 885, 540, 945, 565);
	m_wndReturnStatus.Create(this,950, 540, 1010, 565); 
	m_wndReturnerLabel.Create(this, _T("Returner"), 720, 570, 800, 595);
	m_wndReturner.Create(this,805, 570, 1010, 595); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 720, 600, 800, 625);
	m_wndReceiver.Create(this,805, 600, 1010, 625); 
	m_wndNotesLabel.Create(this, _T("Notes"), 720, 630, 800, 655);
	m_wndNotes.Create(this,805, 630, 1010, 655); 
	m_wndcontrol_104.Create(this,974, 182, 1024, 207); 

}
void CHMSPatientRecordInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndDocNo.SetLimitText(35);
	m_wndDocNo.SetCheckValue(true);
	m_wndPatientNo.SetLimitText(35);
	m_wndPatientNo.SetCheckValue(true);
	m_wndFullName.SetLimitText(35);
	m_wndFullName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndOccupation.SetLimitText(35);
	m_wndOccupation.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndAdmissionNo.SetLimitText(35);
	m_wndAdmissionNo.SetCheckValue(true);
	m_wndAdmissionDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmissionDate.SetCheckValue(true);
	m_wndDischargeDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndAdmitDepartment.SetLimitText(7);
	m_wndAdmitDepartment.SetCheckValue(true);
	m_wndFromTime.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromTime.SetCheckValue(true);
	m_wndToTime.SetMax(CDate(pMF->GetSysDate()));
	m_wndToTime.SetCheckValue(true);
	m_wndEndDepartment.SetLimitText(7);
	m_wndEndDepartment.SetCheckValue(true);
	m_wndFromTime2.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromTime2.SetCheckValue(true);
	m_wndToTime2.SetMax(CDate(pMF->GetSysDate()));
	m_wndToTime2.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndArchivalNo.SetLimitText(35);
	m_wndArchivalNo.SetCheckValue(true);
	m_wndStoredDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStoredDate.SetCheckValue(true);
	m_wndRecordStatus.SetCheckValue(true);
	m_wndRecordStatus.LimitText(1);
	m_wndRoomID.SetCheckValue(true);
	m_wndCabinet.SetCheckValue(true);
	m_wndDrawer.SetCheckValue(true);
	m_wndLocation.SetCheckValue(true);
	m_wndShortcut.SetLimitText(13);
	m_wndShortcut.SetCheckValue(true);
	m_wndNote.SetLimitText(512);
	m_wndNote.SetCheckValue(true);
	m_wndBorrowDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBorrowDate.SetCheckValue(true);
	m_wndNumberOfDate.SetLimitText(10);
	m_wndNumberOfDate.SetCheckValue(true);
	m_wndBorrower.SetLimitText(35);
	m_wndBorrower.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);
	m_wndBorrowStatus.SetCheckValue(true);
	m_wndBorrowStatus.LimitText(35);
	m_wndDeliverer.SetLimitText(35);
	m_wndDeliverer.SetCheckValue(true);
	m_wndReturnDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReturnDate.SetCheckValue(true);
	m_wndReturnStatus.SetCheckValue(true);
	m_wndReturnStatus.LimitText(35);
	m_wndReturner.SetLimitText(35);
	m_wndReturner.SetCheckValue(true);
	m_wndReceiver.SetLimitText(35);
	m_wndReceiver.SetCheckValue(true);
	m_wndNotes.SetLimitText(35);
	m_wndNotes.SetCheckValue(true);


	m_wndRecordList.InsertColumn(0, _T("Document No"), CFMT_TEXT, 80);
	m_wndRecordList.InsertColumn(1, _T("Record No"), CFMT_TEXT, 80);
	m_wndRecordList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndRecordList.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndRecordList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 50);
	m_wndRecordList.InsertColumn(5, _T("Admission Date"), CFMT_TEXT, 85);
	m_wndRecordList.InsertColumn(6, _T("Out Date"), CFMT_TEXT, 85);
	m_wndRecordList.InsertColumn(7, _T("In From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(8, _T("Out From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(9, _T("Diagnostic"), CFMT_TEXT, 150);


	m_wndRecordStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRecordStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndBorrowList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndBorrowList.InsertColumn(1, _T("Borrow Date"), CFMT_TEXT, 90);
	m_wndBorrowList.InsertColumn(2, _T("Return Date"), CFMT_TEXT, 90);
	m_wndBorrowList.InsertColumn(3, _T("Number of Date"), CFMT_TEXT, 90);
	m_wndBorrowList.InsertColumn(4, _T("Borrow Status"), CFMT_TEXT, 90);
	m_wndBorrowList.InsertColumn(5, _T("Borrower"), CFMT_TEXT, 150);
	m_wndBorrowList.InsertColumn(6, _T("Card Number"), CFMT_TEXT, 85);
	m_wndBorrowList.InsertColumn(7, _T("Reason"), CFMT_TEXT, 120);
	m_wndBorrowList.InsertColumn(8, _T("Deliverer"), CFMT_TEXT, 120);
	m_wndBorrowList.InsertColumn(9, _T("Returner"), CFMT_TEXT, 120);
	m_wndBorrowList.InsertColumn(10, _T("Receiver"), CFMT_TEXT, 120);
	m_wndBorrowList.InsertColumn(11, _T("Return Status"), CFMT_TEXT, 90);
	m_wndBorrowList.InsertColumn(12, _T("Note"), CFMT_TEXT, 100);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);




	m_wndReturnStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReturnStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_patient_recordTbl.SetTableName(_T("hms_patient_record"));
	m_hms_patient_recordTbl.AddField(_T("hpr_createdby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_createddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updatedby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updateddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_patientno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_idx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docrec"), dfText, 35); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_storeddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_status"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_roomidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_cabinetidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_draweridx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_position"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_shortcut"), dfText, 13); 
	m_hms_patient_recordTbl.AddField(_T("hpr_comment"), dfText, 512); 
	m_hms_patient_recordTbl.AddField(_T("hpr_reverse"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_rvsreason"), dfText, 512); 

}
void CHMSPatientRecordInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndRecordList.SetEvent(WE_SELCHANGE, _OnRecordListSelectChangeFnc);
	m_wndRecordList.SetEvent(WE_LOADDATA, _OnRecordListLoadDataFnc);
	m_wndRecordList.SetEvent(WE_DBLCLICK, _OnRecordListDblClickFnc);
	m_wndRecordList.AddEvent(1, _T("Delete"), _OnRecordListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	m_wndSearchPatient.SetEvent(WE_CLICK, _OnSearchPatientSelectFnc);
	//m_wndFullName.SetEvent(WE_CHANGE, _OnFullNameChangeFnc);
	//m_wndFullName.SetEvent(WE_SETFOCUS, _OnFullNameSetfocusFnc);
	//m_wndFullName.SetEvent(WE_KILLFOCUS, _OnFullNameKillfocusFnc);
	m_wndFullName.SetEvent(WE_CHECKVALUE, _OnFullNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndOccupation.SetEvent(WE_CHANGE, _OnOccupationChangeFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_CHECKVALUE, _OnOccupationCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndAdmissionNo.SetEvent(WE_CHANGE, _OnAdmissionNoChangeFnc);
	//m_wndAdmissionNo.SetEvent(WE_SETFOCUS, _OnAdmissionNoSetfocusFnc);
	//m_wndAdmissionNo.SetEvent(WE_KILLFOCUS, _OnAdmissionNoKillfocusFnc);
	m_wndAdmissionNo.SetEvent(WE_CHECKVALUE, _OnAdmissionNoCheckValueFnc);
	//m_wndAdmissionDate.SetEvent(WE_CHANGE, _OnAdmissionDateChangeFnc);
	//m_wndAdmissionDate.SetEvent(WE_SETFOCUS, _OnAdmissionDateSetfocusFnc);
	//m_wndAdmissionDate.SetEvent(WE_KILLFOCUS, _OnAdmissionDateKillfocusFnc);
	m_wndAdmissionDate.SetEvent(WE_CHECKVALUE, _OnAdmissionDateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndAdmitDepartment.SetEvent(WE_CHANGE, _OnAdmitDepartmentChangeFnc);
	//m_wndAdmitDepartment.SetEvent(WE_SETFOCUS, _OnAdmitDepartmentSetfocusFnc);
	//m_wndAdmitDepartment.SetEvent(WE_KILLFOCUS, _OnAdmitDepartmentKillfocusFnc);
	m_wndAdmitDepartment.SetEvent(WE_CHECKVALUE, _OnAdmitDepartmentCheckValueFnc);
	//m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
	//m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
	//m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
	m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
	//m_wndEndDepartment.SetEvent(WE_CHANGE, _OnEndDepartmentChangeFnc);
	//m_wndEndDepartment.SetEvent(WE_SETFOCUS, _OnEndDepartmentSetfocusFnc);
	//m_wndEndDepartment.SetEvent(WE_KILLFOCUS, _OnEndDepartmentKillfocusFnc);
	m_wndEndDepartment.SetEvent(WE_CHECKVALUE, _OnEndDepartmentCheckValueFnc);
	//m_wndFromTime2.SetEvent(WE_CHANGE, _OnFromTime2ChangeFnc);
	//m_wndFromTime2.SetEvent(WE_SETFOCUS, _OnFromTime2SetfocusFnc);
	//m_wndFromTime2.SetEvent(WE_KILLFOCUS, _OnFromTime2KillfocusFnc);
	m_wndFromTime2.SetEvent(WE_CHECKVALUE, _OnFromTime2CheckValueFnc);
	//m_wndToTime2.SetEvent(WE_CHANGE, _OnToTime2ChangeFnc);
	//m_wndToTime2.SetEvent(WE_SETFOCUS, _OnToTime2SetfocusFnc);
	//m_wndToTime2.SetEvent(WE_KILLFOCUS, _OnToTime2KillfocusFnc);
	m_wndToTime2.SetEvent(WE_CHECKVALUE, _OnToTime2CheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	//m_wndArchivalNo.SetEvent(WE_CHANGE, _OnArchivalNoChangeFnc);
	//m_wndArchivalNo.SetEvent(WE_SETFOCUS, _OnArchivalNoSetfocusFnc);
	//m_wndArchivalNo.SetEvent(WE_KILLFOCUS, _OnArchivalNoKillfocusFnc);
	m_wndArchivalNo.SetEvent(WE_CHECKVALUE, _OnArchivalNoCheckValueFnc);
	//m_wndStoredDate.SetEvent(WE_CHANGE, _OnStoredDateChangeFnc);
	//m_wndStoredDate.SetEvent(WE_SETFOCUS, _OnStoredDateSetfocusFnc);
	//m_wndStoredDate.SetEvent(WE_KILLFOCUS, _OnStoredDateKillfocusFnc);
	m_wndStoredDate.SetEvent(WE_CHECKVALUE, _OnStoredDateCheckValueFnc);
	m_wndRecordStatus.SetEvent(WE_SELENDOK, _OnRecordStatusSelendokFnc);
	//m_wndRecordStatus.SetEvent(WE_SETFOCUS, _OnRecordStatusSetfocusFnc);
	//m_wndRecordStatus.SetEvent(WE_KILLFOCUS, _OnRecordStatusKillfocusFnc);
	m_wndRecordStatus.SetEvent(WE_SELCHANGE, _OnRecordStatusSelectChangeFnc);
	m_wndRecordStatus.SetEvent(WE_LOADDATA, _OnRecordStatusLoadDataFnc);
	//m_wndRecordStatus.SetEvent(WE_ADDNEW, _OnRecordStatusAddNewFnc);
	//m_wndRoomID.SetEvent(WE_CHANGE, _OnRoomIDChangeFnc);
	//m_wndRoomID.SetEvent(WE_SETFOCUS, _OnRoomIDSetfocusFnc);
	//m_wndRoomID.SetEvent(WE_KILLFOCUS, _OnRoomIDKillfocusFnc);
	m_wndRoomID.SetEvent(WE_CHECKVALUE, _OnRoomIDCheckValueFnc);
	//m_wndCabinet.SetEvent(WE_CHANGE, _OnCabinetChangeFnc);
	//m_wndCabinet.SetEvent(WE_SETFOCUS, _OnCabinetSetfocusFnc);
	//m_wndCabinet.SetEvent(WE_KILLFOCUS, _OnCabinetKillfocusFnc);
	m_wndCabinet.SetEvent(WE_CHECKVALUE, _OnCabinetCheckValueFnc);
	//m_wndDrawer.SetEvent(WE_CHANGE, _OnDrawerChangeFnc);
	//m_wndDrawer.SetEvent(WE_SETFOCUS, _OnDrawerSetfocusFnc);
	//m_wndDrawer.SetEvent(WE_KILLFOCUS, _OnDrawerKillfocusFnc);
	m_wndDrawer.SetEvent(WE_CHECKVALUE, _OnDrawerCheckValueFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	//m_wndShortcut.SetEvent(WE_CHANGE, _OnShortcutChangeFnc);
	//m_wndShortcut.SetEvent(WE_SETFOCUS, _OnShortcutSetfocusFnc);
	//m_wndShortcut.SetEvent(WE_KILLFOCUS, _OnShortcutKillfocusFnc);
	m_wndShortcut.SetEvent(WE_CHECKVALUE, _OnShortcutCheckValueFnc);
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
	m_wndBorrowList.SetEvent(WE_SELCHANGE, _OnBorrowListSelectChangeFnc);
	m_wndBorrowList.SetEvent(WE_LOADDATA, _OnBorrowListLoadDataFnc);
	m_wndBorrowList.SetEvent(WE_DBLCLICK, _OnBorrowListDblClickFnc);
	m_wndBorrowList.AddEvent(1, _T("Delete"), _OnBorrowListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndBorrowDate.SetEvent(WE_CHANGE, _OnBorrowDateChangeFnc);
	//m_wndBorrowDate.SetEvent(WE_SETFOCUS, _OnBorrowDateSetfocusFnc);
	//m_wndBorrowDate.SetEvent(WE_KILLFOCUS, _OnBorrowDateKillfocusFnc);
	m_wndBorrowDate.SetEvent(WE_CHECKVALUE, _OnBorrowDateCheckValueFnc);
	//m_wndNumberOfDate.SetEvent(WE_CHANGE, _OnNumberOfDateChangeFnc);
	//m_wndNumberOfDate.SetEvent(WE_SETFOCUS, _OnNumberOfDateSetfocusFnc);
	//m_wndNumberOfDate.SetEvent(WE_KILLFOCUS, _OnNumberOfDateKillfocusFnc);
	m_wndNumberOfDate.SetEvent(WE_CHECKVALUE, _OnNumberOfDateCheckValueFnc);
	//m_wndBorrower.SetEvent(WE_CHANGE, _OnBorrowerChangeFnc);
	//m_wndBorrower.SetEvent(WE_SETFOCUS, _OnBorrowerSetfocusFnc);
	//m_wndBorrower.SetEvent(WE_KILLFOCUS, _OnBorrowerKillfocusFnc);
	m_wndBorrower.SetEvent(WE_CHECKVALUE, _OnBorrowerCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndBorrowStatus.SetEvent(WE_SELENDOK, _OnBorrowStatusSelendokFnc);
	//m_wndBorrowStatus.SetEvent(WE_SETFOCUS, _OnBorrowStatusSetfocusFnc);
	//m_wndBorrowStatus.SetEvent(WE_KILLFOCUS, _OnBorrowStatusKillfocusFnc);
	m_wndBorrowStatus.SetEvent(WE_SELCHANGE, _OnBorrowStatusSelectChangeFnc);
	m_wndBorrowStatus.SetEvent(WE_LOADDATA, _OnBorrowStatusLoadDataFnc);
	//m_wndBorrowStatus.SetEvent(WE_ADDNEW, _OnBorrowStatusAddNewFnc);
	//m_wndDeliverer.SetEvent(WE_CHANGE, _OnDelivererChangeFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_CHECKVALUE, _OnDelivererCheckValueFnc);
	//m_wndReturnDate.SetEvent(WE_CHANGE, _OnReturnDateChangeFnc);
	//m_wndReturnDate.SetEvent(WE_SETFOCUS, _OnReturnDateSetfocusFnc);
	//m_wndReturnDate.SetEvent(WE_KILLFOCUS, _OnReturnDateKillfocusFnc);
	m_wndReturnDate.SetEvent(WE_CHECKVALUE, _OnReturnDateCheckValueFnc);
	m_wndReturnStatus.SetEvent(WE_SELENDOK, _OnReturnStatusSelendokFnc);
	//m_wndReturnStatus.SetEvent(WE_SETFOCUS, _OnReturnStatusSetfocusFnc);
	//m_wndReturnStatus.SetEvent(WE_KILLFOCUS, _OnReturnStatusKillfocusFnc);
	m_wndReturnStatus.SetEvent(WE_SELCHANGE, _OnReturnStatusSelectChangeFnc);
	m_wndReturnStatus.SetEvent(WE_LOADDATA, _OnReturnStatusLoadDataFnc);
	//m_wndReturnStatus.SetEvent(WE_ADDNEW, _OnReturnStatusAddNewFnc);
	//m_wndReturner.SetEvent(WE_CHANGE, _OnReturnerChangeFnc);
	//m_wndReturner.SetEvent(WE_SETFOCUS, _OnReturnerSetfocusFnc);
	//m_wndReturner.SetEvent(WE_KILLFOCUS, _OnReturnerKillfocusFnc);
	m_wndReturner.SetEvent(WE_CHECKVALUE, _OnReturnerCheckValueFnc);
	//m_wndReceiver.SetEvent(WE_CHANGE, _OnReceiverChangeFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_CHECKVALUE, _OnReceiverCheckValueFnc);
	//m_wndNotes.SetEvent(WE_CHANGE, _OnNotesChangeFnc);
	//m_wndNotes.SetEvent(WE_SETFOCUS, _OnNotesSetfocusFnc);
	//m_wndNotes.SetEvent(WE_KILLFOCUS, _OnNotesKillfocusFnc);
	m_wndNotes.SetEvent(WE_CHECKVALUE, _OnNotesCheckValueFnc);
	//m_wndcontrol_104.SetEvent(WE_CHANGE, _Oncontrol_104ChangeFnc);
	//m_wndcontrol_104.SetEvent(WE_SETFOCUS, _Oncontrol_104SetfocusFnc);
	//m_wndcontrol_104.SetEvent(WE_KILLFOCUS, _Oncontrol_104KillfocusFnc);
	m_wndcontrol_104.SetEvent(WE_CHECKVALUE, _Oncontrol_104CheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientRecordInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientRecordInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientRecordInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientRecordInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientRecordInfoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientRecordInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_szPatientNo);
	DDX_Text(pDX, m_wndFullName.GetDlgCtrlID(), m_szFullName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupation);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_TextEx(pDX, m_wndAdmissionDate.GetDlgCtrlID(), m_szAdmissionDate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndAdmitDepartment.GetDlgCtrlID(), m_szAdmitDepartment);
	DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
	DDX_Text(pDX, m_wndEndDepartment.GetDlgCtrlID(), m_szEndDepartment);
	DDX_TextEx(pDX, m_wndFromTime2.GetDlgCtrlID(), m_szFromTime2);
	DDX_TextEx(pDX, m_wndToTime2.GetDlgCtrlID(), m_szToTime2);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_Text(pDX, m_wndArchivalNo.GetDlgCtrlID(), m_szArchivalNo);
	DDX_TextEx(pDX, m_wndStoredDate.GetDlgCtrlID(), m_szStoredDate);
	DDX_TextEx(pDX, m_wndRecordStatus.GetDlgCtrlID(), m_szRecordStatusKey);
	DDX_Text(pDX, m_wndRoomID.GetDlgCtrlID(), m_nRoomID);
	DDX_Text(pDX, m_wndCabinet.GetDlgCtrlID(), m_nCabinet);
	DDX_Text(pDX, m_wndDrawer.GetDlgCtrlID(), m_nDrawer);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_nLocation);
	DDX_Text(pDX, m_wndShortcut.GetDlgCtrlID(), m_szShortcut);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndBorrowDate.GetDlgCtrlID(), m_szBorrowDate);
	DDX_Text(pDX, m_wndNumberOfDate.GetDlgCtrlID(), m_nNumberOfDate);
	DDX_Text(pDX, m_wndBorrower.GetDlgCtrlID(), m_szBorrower);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndBorrowStatus.GetDlgCtrlID(), m_szBorrowStatusKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_TextEx(pDX, m_wndReturnDate.GetDlgCtrlID(), m_szReturnDate);
	DDX_TextEx(pDX, m_wndReturnStatus.GetDlgCtrlID(), m_szReturnStatusKey);
	DDX_Text(pDX, m_wndReturner.GetDlgCtrlID(), m_szReturner);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndNotes.GetDlgCtrlID(), m_szNotes);
	DDX_TextEx(pDX, m_wndcontrol_104.GetDlgCtrlID(), m_szcontrol_104);

}
void CHMSPatientRecordInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpr_docrec"), m_szArchivalNo);
	rs.GetValue(_T("hpr_admitdeptid"), m_szAdmitDepartment);
	rs.GetValue(_T("hpr_enddeptid"), m_szEndDepartment);
	rs.GetValue(_T("hpr_admitdate"), m_szAdmissionDate);
	rs.GetValue(_T("hpr_enddate"), m_szDischargeDate);
	rs.GetValue(_T("hpr_storeddate"), m_szStoredDate);
	rs.GetValue(_T("hpr_status"), m_szRecordStatusKey);
	rs.GetValue(_T("hpr_roomidx"), m_nRoomID);
	rs.GetValue(_T("hpr_cabinetidx"), m_nCabinet);
	rs.GetValue(_T("hpr_draweridx"), m_nDrawer);
	rs.GetValue(_T("hpr_position"), m_nLocation);
	rs.GetValue(_T("hpr_shortcut"), m_szShortcut);
	rs.GetValue(_T("hpr_comment"), m_szNote);

}
void CHMSPatientRecordInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patient_recordTbl.SetValue(_T("hpr_createdby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_createddate"), pMF->GetSysDateTime());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updatedby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updateddate"), pMF->GetSysDateTime());
	m_hms_patient_recordTbl.SetValue(_T("hpr_docrec"), m_szArchivalNo);
	m_hms_patient_recordTbl.SetValue(_T("hpr_admitdeptid"), m_szAdmitDepartment);
	m_hms_patient_recordTbl.SetValue(_T("hpr_enddeptid"), m_szEndDepartment);
	m_hms_patient_recordTbl.SetValue(_T("hpr_admitdate"), m_szAdmissionDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_enddate"), m_szDischargeDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_storeddate"), m_szStoredDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_status"), m_szRecordStatusKey);
	m_hms_patient_recordTbl.SetValue(_T("hpr_roomidx"), m_nRoomID);
	m_hms_patient_recordTbl.SetValue(_T("hpr_cabinetidx"), m_nCabinet);
	m_hms_patient_recordTbl.SetValue(_T("hpr_draweridx"), m_nDrawer);
	m_hms_patient_recordTbl.SetValue(_T("hpr_position"), m_nLocation);
	m_hms_patient_recordTbl.SetValue(_T("hpr_shortcut"), m_szShortcut);
	m_hms_patient_recordTbl.SetValue(_T("hpr_comment"), m_szNote);

}
void CHMSPatientRecordInfo::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szRecordNo.Empty();
	m_szName.Empty();
	m_nDocNo=0;
	m_szPatientNo.Empty();
	m_szFullName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szOccupation.Empty();
	m_szObject.Empty();
	m_szAdmissionNo.Empty();
	m_szAdmissionDate.Empty();
	m_szDischargeDate.Empty();
	m_szAdmitDepartment.Empty();
	m_szFromTime.Empty();
	m_szToTime.Empty();
	m_szEndDepartment.Empty();
	m_szFromTime2.Empty();
	m_szToTime2.Empty();
	m_szDiagnostic.Empty();
	m_szArchivalNo.Empty();
	m_szStoredDate.Empty();
	m_szRecordStatusKey.Empty();
	m_nRoomID=0;
	m_nCabinet=0;
	m_nDrawer=0;
	m_nLocation=0;
	m_szShortcut.Empty();
	m_szNote.Empty();
	m_szBorrowDate.Empty();
	m_nNumberOfDate=0;
	m_szBorrower.Empty();
	m_szDepartmentKey.Empty();
	m_szReason.Empty();
	m_szBorrowStatusKey.Empty();
	m_szDeliverer.Empty();
	m_szReturnDate.Empty();
	m_szReturnStatusKey.Empty();
	m_szReturner.Empty();
	m_szReceiver.Empty();
	m_szNotes.Empty();
	m_szcontrol_104.Empty();

}
int CHMSPatientRecordInfo::SetMode(int nMode){
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
/*void CHMSPatientRecordInfo::OnFromDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnFromDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnToDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnToDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnToDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnDocumentNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnRecordNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnRecordNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnRecordNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnNameChange(){
	
} */
/*void CHMSPatientRecordInfo::OnNameSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnNameKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnNameCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnRecordListDblClick(){
	
} 
void CHMSPatientRecordInfo::OnRecordListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientRecordInfo::OnRecordListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientRecordInfo::OnRecordListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRecordList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRecordList.AddItems(
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("AdmissionDate")), 
			rs.GetValue(_T("OutDate")), 
			rs.GetValue(_T("InFromDept")), 
			rs.GetValue(_T("OutFromDept")), 
			rs.GetValue(_T("Diagnostic")), NULL);
		rs.MoveNext();
	}
	m_wndRecordList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnDocNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDocNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDocNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDocNoCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnPatientNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnPatientNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnPatientNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnPatientNoCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnSearchPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPatientRecordInfo::OnFullNameChange(){
	
} */
/*void CHMSPatientRecordInfo::OnFullNameSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnFullNameKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnFullNameCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnAgeChange(){
	
} */
/*void CHMSPatientRecordInfo::OnAgeSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnAgeKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnSexChange(){
	
} */
/*void CHMSPatientRecordInfo::OnSexSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnSexKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnSexCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnAddressChange(){
	
} */
/*void CHMSPatientRecordInfo::OnAddressSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnAddressKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnOccupationChange(){
	
} */
/*void CHMSPatientRecordInfo::OnOccupationSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnOccupationKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnOccupationCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnObjectChange(){
	
} */
/*void CHMSPatientRecordInfo::OnObjectSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnObjectKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnAdmissionNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmissionNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnAdmissionNoCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnAdmissionDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmissionDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmissionDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnAdmissionDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnDischargeDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDischargeDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDischargeDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnAdmitDepartmentChange(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmitDepartmentSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnAdmitDepartmentKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnAdmitDepartmentCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnFromTimeChange(){
	
} */
/*void CHMSPatientRecordInfo::OnFromTimeSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnFromTimeKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnFromTimeCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnToTimeChange(){
	
} */
/*void CHMSPatientRecordInfo::OnToTimeSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnToTimeKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnToTimeCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnEndDepartmentChange(){
	
} */
/*void CHMSPatientRecordInfo::OnEndDepartmentSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnEndDepartmentKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnEndDepartmentCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnFromTime2Change(){
	
} */
/*void CHMSPatientRecordInfo::OnFromTime2Setfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnFromTime2Killfocus(){
	
} */
int CHMSPatientRecordInfo::OnFromTime2CheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnToTime2Change(){
	
} */
/*void CHMSPatientRecordInfo::OnToTime2Setfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnToTime2Killfocus(){
	
} */
int CHMSPatientRecordInfo::OnToTime2CheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnDiagnosticChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDiagnosticSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDiagnosticKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnArchivalNoChange(){
	
} */
/*void CHMSPatientRecordInfo::OnArchivalNoSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnArchivalNoKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnArchivalNoCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnStoredDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnStoredDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnStoredDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnStoredDateCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnRecordStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnRecordStatusSelendok(){
	 
}
/*void CHMSPatientRecordInfo::OnRecordStatusSetfocus(){
	
}*/
/*void CHMSPatientRecordInfo::OnRecordStatusKillfocus(){
	
}*/
long CHMSPatientRecordInfo::OnRecordStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRecordStatus.IsSearchKey() && !m_szRecordStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRecordStatusKey
};
	m_wndRecordStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRecordStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnRecordStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientRecordInfo::OnRoomIDChange(){
	
} */
/*void CHMSPatientRecordInfo::OnRoomIDSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnRoomIDKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnRoomIDCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnCabinetChange(){
	
} */
/*void CHMSPatientRecordInfo::OnCabinetSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnCabinetKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnCabinetCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnDrawerChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDrawerSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDrawerKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDrawerCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnLocationChange(){
	
} */
/*void CHMSPatientRecordInfo::OnLocationSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnLocationKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnLocationCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnShortcutChange(){
	
} */
/*void CHMSPatientRecordInfo::OnShortcutSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnShortcutKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnShortcutCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnNoteChange(){
	
} */
/*void CHMSPatientRecordInfo::OnNoteSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnNoteKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnNoteCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnBorrowListDblClick(){
	
} 
void CHMSPatientRecordInfo::OnBorrowListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientRecordInfo::OnBorrowListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientRecordInfo::OnBorrowListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndBorrowList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBorrowList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("BorrowDate")), 
			rs.GetValue(_T("ReturnDate")), 
			rs.GetValue(_T("NumberofDate")), 
			rs.GetValue(_T("BorrowStatus")), 
			rs.GetValue(_T("Borrower")), 
			rs.GetValue(_T("CardNumber")), 
			rs.GetValue(_T("Reason")), 
			rs.GetValue(_T("Deliverer")), 
			rs.GetValue(_T("Returner")), 
			rs.GetValue(_T("Receiver")), 
			rs.GetValue(_T("ReturnStatus")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndBorrowList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnBorrowDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnBorrowDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnBorrowDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnBorrowDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnNumberOfDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnNumberOfDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnNumberOfDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnNumberOfDateCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnBorrowerChange(){
	
} */
/*void CHMSPatientRecordInfo::OnBorrowerSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnBorrowerKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnBorrowerCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientRecordInfo::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientRecordInfo::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientRecordInfo::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientRecordInfo::OnReasonChange(){
	
} */
/*void CHMSPatientRecordInfo::OnReasonSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnReasonKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnReasonCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnBorrowStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnBorrowStatusSelendok(){
	 
}
/*void CHMSPatientRecordInfo::OnBorrowStatusSetfocus(){
	
}*/
/*void CHMSPatientRecordInfo::OnBorrowStatusKillfocus(){
	
}*/
long CHMSPatientRecordInfo::OnBorrowStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBorrowStatus.IsSearchKey() && !m_szBorrowStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBorrowStatusKey
};
	m_wndBorrowStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBorrowStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnBorrowStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientRecordInfo::OnDelivererChange(){
	
} */
/*void CHMSPatientRecordInfo::OnDelivererSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnDelivererKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnDelivererCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnReturnDateChange(){
	
} */
/*void CHMSPatientRecordInfo::OnReturnDateSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnReturnDateKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnReturnDateCheckValue(){
	return 0;
} 
void CHMSPatientRecordInfo::OnReturnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientRecordInfo::OnReturnStatusSelendok(){
	 
}
/*void CHMSPatientRecordInfo::OnReturnStatusSetfocus(){
	
}*/
/*void CHMSPatientRecordInfo::OnReturnStatusKillfocus(){
	
}*/
long CHMSPatientRecordInfo::OnReturnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReturnStatus.IsSearchKey() && !m_szReturnStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReturnStatusKey
};
	m_wndReturnStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReturnStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientRecordInfo::OnReturnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientRecordInfo::OnReturnerChange(){
	
} */
/*void CHMSPatientRecordInfo::OnReturnerSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnReturnerKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnReturnerCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnReceiverChange(){
	
} */
/*void CHMSPatientRecordInfo::OnReceiverSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnReceiverKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnReceiverCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::OnNotesChange(){
	
} */
/*void CHMSPatientRecordInfo::OnNotesSetfocus(){
	
} */
/*void CHMSPatientRecordInfo::OnNotesKillfocus(){
	
} */
int CHMSPatientRecordInfo::OnNotesCheckValue(){
	return 0;
} 
/*void CHMSPatientRecordInfo::Oncontrol_104Change(){
	
} */
/*void CHMSPatientRecordInfo::Oncontrol_104Setfocus(){
	
} */
/*void CHMSPatientRecordInfo::Oncontrol_104Killfocus(){
	
} */
int CHMSPatientRecordInfo::Oncontrol_104CheckValue(){
	return 0;
} 
int CHMSPatientRecordInfo::OnAddHMSPatientRecordInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientRecordInfo::OnEditHMSPatientRecordInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientRecordInfo::OnDeleteHMSPatientRecordInfo(){
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
 		OnCancelHMSPatientRecordInfo();
 	}
	return 0;
}
int CHMSPatientRecordInfo::OnSaveHMSPatientRecordInfo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_patient_recordTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_patient_recordTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPatientRecordInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientRecordInfo::OnCancelHMSPatientRecordInfo(){
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
int CHMSPatientRecordInfo::OnHMSPatientRecordInfoListLoadData(){
	return 0;
}
