#include "EduClassOrder.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnIDCheckValue();
} 
/*static void _OnClassIDChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnClassIDChange();
} */
/*static void _OnClassIDSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnClassIDSetfocus();} */ 
/*static void _OnClassIDKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnClassIDKillfocus();
} */
static int _OnClassIDCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnClassIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnNameCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnEndDateCheckValue();
} 
static void _OnManagerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnManagerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManagerSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnManagerSelendok();
}
/*static void _OnManagerSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnManagerKillfocus();
}*/
/*static void _OnManagerKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnManagerKillfocus();
}*/
static long _OnManagerLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnManagerLoadData();
}
/*static void _OnManagerAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnManagerAddNew();
}*/
static void _OnTeacherSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnTeacherSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTeacherSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTeacherSelendok();
}
/*static void _OnTeacherSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTeacherKillfocus();
}*/
/*static void _OnTeacherKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTeacherKillfocus();
}*/
static long _OnTeacherLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnTeacherLoadData();
}
/*static void _OnTeacherAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTeacherAddNew();
}*/
/*static void _OnTotalNumberChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTotalNumberChange();
} */
/*static void _OnTotalNumberSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTotalNumberSetfocus();} */ 
/*static void _OnTotalNumberKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTotalNumberKillfocus();
} */
static int _OnTotalNumberCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnTotalNumberCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnContentCheckValue();
} 
/*static void _OnNodeChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNodeChange();
} */
/*static void _OnNodeSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNodeSetfocus();} */ 
/*static void _OnNodeKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnNodeKillfocus();
} */
static int _OnNodeCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnNodeCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnLocationCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnTypeAddNew();
}*/
static void _OnDeptReceiveSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnDeptReceiveSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptReceiveSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDeptReceiveSelendok();
}
/*static void _OnDeptReceiveSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDeptReceiveKillfocus();
}*/
/*static void _OnDeptReceiveKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDeptReceiveKillfocus();
}*/
static long _OnDeptReceiveLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnDeptReceiveLoadData();
}
/*static void _OnDeptReceiveAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDeptReceiveAddNew();
}*/
static void _OnWorkUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnWorkUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkUnitSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnWorkUnitSelendok();
}
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnWorkUnitKillfocus();
}*/
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnWorkUnitKillfocus();
}*/
static long _OnWorkUnitLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnWorkUnitLoadData();
}
/*static void _OnWorkUnitAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnWorkUnitAddNew();
}*/
/*static void _OnDecideChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDecideChange();
} */
/*static void _OnDecideSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDecideSetfocus();} */ 
/*static void _OnDecideKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnDecideKillfocus();
} */
static int _OnDecideCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnDecideCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnPhoneCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduClassOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduClassOrder *)pWnd)->OnStatusAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CEduClassOrder *pVw = (CEduClassOrder *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduClassOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduClassOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduClassOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnListDeleteItem();
} 
static int _OnAddEduClassOrderFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnAddEduClassOrder();
} 
static int _OnEditEduClassOrderFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnEditEduClassOrder();
} 
static int _OnDeleteEduClassOrderFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnDeleteEduClassOrder();
} 
static int _OnSaveEduClassOrderFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnSaveEduClassOrder();
} 
static int _OnCancelEduClassOrderFnc(CWnd *pWnd){
	 return ((CEduClassOrder*)pWnd)->OnCancelEduClassOrder();
} 
CEduClassOrder::CEduClassOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEduClassOrder::~CEduClassOrder(){
}
void CEduClassOrder::OnCreateComponents(){
	m_wndClassInforGroupBox.Create(this, _T("Class Infor"), 5, 5, 795, 270);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 120, 55);
	m_wndID.Create(this,125, 30, 225, 55); 
	m_wndClassIDLabel.Create(this, _T("Class ID"), 230, 30, 340, 55);
	m_wndClassID.Create(this,345, 30, 445, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 120, 85);
	m_wndName.Create(this,125, 60, 790, 85); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 10, 150, 120, 175);
	m_wndStartDate.Create(this,125, 150, 225, 175); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 230, 150, 340, 175);
	m_wndEndDate.Create(this,345, 150, 445, 175); 
	m_wndManagerLabel.Create(this, _T("Manager"), 10, 120, 120, 145);
	m_wndManager.Create(this,125, 120, 285, 145); 
	m_wndTeacherLabel.Create(this, _T("Teacher"), 290, 120, 400, 145);
	m_wndTeacher.Create(this,405, 120, 565, 145); 
	m_wndTotalNumberLabel.Create(this, _T("Tổng số"), 565, 240, 675, 265);
	m_wndTotalNumber.Create(this,680, 240, 790, 265); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 90, 120, 115);
	m_wndContent.Create(this,125, 90, 790, 115); 
	m_wndNodeLabel.Create(this, _T("Note"), 10, 240, 120, 265);
	m_wndNode.Create(this,125, 240, 560, 265); 
	m_wndSourceLabel.Create(this, _T("Theo kế hoạch"), 450, 30, 560, 55);
	m_wndSource.Create(this,565, 30, 790, 55); 
	m_wndLocationLabel.Create(this, _T("Location"), 9, 180, 119, 205);
	m_wndLocation.Create(this,124, 180, 225, 205); 
	m_wndTypeLabel.Create(this, _T("Type"), 450, 150, 560, 175);
	m_wndType.Create(this,565, 150, 790, 175); 
	m_wndDeptReceiveLabel.Create(this, _T("Khoa nhận"), 450, 180, 560, 205);
	m_wndDeptReceive.Create(this,565, 180, 790, 205); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 210, 120, 235);
	m_wndWorkUnit.Create(this,125, 210, 445, 235); 
	m_wndDecideLabel.Create(this, _T("Decide"), 230, 180, 340, 205);
	m_wndDecide.Create(this,345, 180, 445, 205); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 570, 120, 680, 145);
	m_wndPhone.Create(this,685, 120, 790, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 450, 210, 560, 235);
	m_wndStatus.Create(this,565, 210, 790, 235); 
	m_wndAdd.Create(this, _T("&Add"), 232, 275, 322, 300);
	m_wndSave.Create(this, _T("&Save"), 327, 275, 417, 300);
	m_wndEdit.Create(this, _T("&Edit"), 422, 275, 512, 300);
	m_wndDelete.Create(this, _T("&Delete"), 517, 275, 607, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 612, 275, 702, 300);
	m_wndPrint.Create(this, _T("&Print"), 707, 275, 797, 300);
	m_wndAddLine.Create(this, _T("&Thêm học viên"), 7, 275, 107, 300);
	m_wndList.Create(this,5, 305, 797, 645); 

}
void CEduClassOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndClassID.SetLimitText(1024);
	m_wndClassID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(true);
	m_wndManager.SetCheckValue(true);
	m_wndManager.LimitText(1024);
	m_wndTeacher.SetCheckValue(true);
	m_wndTeacher.LimitText(1024);
	m_wndTotalNumber.SetLimitText(1024);
	m_wndTotalNumber.SetCheckValue(true);
	m_wndContent.SetLimitText(1024);
	m_wndContent.SetCheckValue(true);
	m_wndNode.SetLimitText(1024);
	m_wndNode.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);
	m_wndLocation.SetLimitText(1024);
	m_wndLocation.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndDeptReceive.SetCheckValue(true);
	m_wndDeptReceive.LimitText(1024);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndWorkUnit.LimitText(1024);
	m_wndDecide.SetLimitText(1024);
	m_wndDecide.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);

















}
void CEduClassOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndClassID.SetEvent(WE_CHANGE, _OnClassIDChangeFnc);
	//m_wndClassID.SetEvent(WE_SETFOCUS, _OnClassIDSetfocusFnc);
	//m_wndClassID.SetEvent(WE_KILLFOCUS, _OnClassIDKillfocusFnc);
	m_wndClassID.SetEvent(WE_CHECKVALUE, _OnClassIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndManager.SetEvent(WE_SELENDOK, _OnManagerSelendokFnc);
	//m_wndManager.SetEvent(WE_SETFOCUS, _OnManagerSetfocusFnc);
	//m_wndManager.SetEvent(WE_KILLFOCUS, _OnManagerKillfocusFnc);
	m_wndManager.SetEvent(WE_SELCHANGE, _OnManagerSelectChangeFnc);
	m_wndManager.SetEvent(WE_LOADDATA, _OnManagerLoadDataFnc);
	//m_wndManager.SetEvent(WE_ADDNEW, _OnManagerAddNewFnc);
	m_wndTeacher.SetEvent(WE_SELENDOK, _OnTeacherSelendokFnc);
	//m_wndTeacher.SetEvent(WE_SETFOCUS, _OnTeacherSetfocusFnc);
	//m_wndTeacher.SetEvent(WE_KILLFOCUS, _OnTeacherKillfocusFnc);
	m_wndTeacher.SetEvent(WE_SELCHANGE, _OnTeacherSelectChangeFnc);
	m_wndTeacher.SetEvent(WE_LOADDATA, _OnTeacherLoadDataFnc);
	//m_wndTeacher.SetEvent(WE_ADDNEW, _OnTeacherAddNewFnc);
	//m_wndTotalNumber.SetEvent(WE_CHANGE, _OnTotalNumberChangeFnc);
	//m_wndTotalNumber.SetEvent(WE_SETFOCUS, _OnTotalNumberSetfocusFnc);
	//m_wndTotalNumber.SetEvent(WE_KILLFOCUS, _OnTotalNumberKillfocusFnc);
	m_wndTotalNumber.SetEvent(WE_CHECKVALUE, _OnTotalNumberCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndNode.SetEvent(WE_CHANGE, _OnNodeChangeFnc);
	//m_wndNode.SetEvent(WE_SETFOCUS, _OnNodeSetfocusFnc);
	//m_wndNode.SetEvent(WE_KILLFOCUS, _OnNodeKillfocusFnc);
	m_wndNode.SetEvent(WE_CHECKVALUE, _OnNodeCheckValueFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndDeptReceive.SetEvent(WE_SELENDOK, _OnDeptReceiveSelendokFnc);
	//m_wndDeptReceive.SetEvent(WE_SETFOCUS, _OnDeptReceiveSetfocusFnc);
	//m_wndDeptReceive.SetEvent(WE_KILLFOCUS, _OnDeptReceiveKillfocusFnc);
	m_wndDeptReceive.SetEvent(WE_SELCHANGE, _OnDeptReceiveSelectChangeFnc);
	m_wndDeptReceive.SetEvent(WE_LOADDATA, _OnDeptReceiveLoadDataFnc);
	//m_wndDeptReceive.SetEvent(WE_ADDNEW, _OnDeptReceiveAddNewFnc);
	m_wndWorkUnit.SetEvent(WE_SELENDOK, _OnWorkUnitSelendokFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_SELCHANGE, _OnWorkUnitSelectChangeFnc);
	m_wndWorkUnit.SetEvent(WE_LOADDATA, _OnWorkUnitLoadDataFnc);
	//m_wndWorkUnit.SetEvent(WE_ADDNEW, _OnWorkUnitAddNewFnc);
	//m_wndDecide.SetEvent(WE_CHANGE, _OnDecideChangeFnc);
	//m_wndDecide.SetEvent(WE_SETFOCUS, _OnDecideSetfocusFnc);
	//m_wndDecide.SetEvent(WE_KILLFOCUS, _OnDecideKillfocusFnc);
	m_wndDecide.SetEvent(WE_CHECKVALUE, _OnDecideCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduClassOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduClassOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduClassOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduClassOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduClassOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduClassOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndClassID.GetDlgCtrlID(), m_szClassID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndManager.GetDlgCtrlID(), m_szManagerKey);
	DDX_TextEx(pDX, m_wndTeacher.GetDlgCtrlID(), m_szTeacherKey);
	DDX_Text(pDX, m_wndTotalNumber.GetDlgCtrlID(), m_nTotalNumber);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndNode.GetDlgCtrlID(), m_szNode);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndDeptReceive.GetDlgCtrlID(), m_szDeptReceiveKey);
	DDX_TextEx(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnitKey);
	DDX_Text(pDX, m_wndDecide.GetDlgCtrlID(), m_szDecide);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CEduClassOrder::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("ClassID")] =  m_szClassID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("StartDate")] =  m_szStartDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("Manager")] =  m_szManagerKey;
	m_jData[_T("Teacher")] =  m_szTeacherKey;
	m_jData[_T("TotalNumber")] =  m_nTotalNumber;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("Node")] =  m_szNode;
	m_jData[_T("Source")] =  m_szSourceKey;
	m_jData[_T("Location")] =  m_szLocation;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("DeptReceive")] =  m_szDeptReceiveKey;
	m_jData[_T("WorkUnit")] =  m_szWorkUnitKey;
	m_jData[_T("Decide")] =  m_szDecide;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("Status")] =  m_szStatusKey;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("ClassID")].GetValue(m_szClassID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("StartDate")].GetValue(m_szStartDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("Manager")].GetValue(m_szManagerKey);
	m_jData[_T("Teacher")].GetValue(m_szTeacherKey);
	m_jData[_T("TotalNumber")].GetValue(m_nTotalNumber);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("Node")].GetValue(m_szNode);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	m_jData[_T("Location")].GetValue(m_szLocation);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("DeptReceive")].GetValue(m_szDeptReceiveKey);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnitKey);
	m_jData[_T("Decide")].GetValue(m_szDecide);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	}

}
void CEduClassOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEduClassOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CEduClassOrder::SetDefaultValues(){

	m_nID=0;
	m_szClassID.Empty();
	m_szName.Empty();
	m_szStartDate.Empty();
	m_szEndDate.Empty();
	m_szManagerKey.Empty();
	m_szTeacherKey.Empty();
	m_nTotalNumber=0;
	m_szContent.Empty();
	m_szNode.Empty();
	m_szSourceKey.Empty();
	m_szLocation.Empty();
	m_szTypeKey.Empty();
	m_szDeptReceiveKey.Empty();
	m_szWorkUnitKey.Empty();
	m_szDecide.Empty();
	m_szPhone.Empty();
	m_szStatusKey.Empty();

}
int CEduClassOrder::SetMode(int nMode){
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
/*void CEduClassOrder::OnIDChange(){
	
} */
/*void CEduClassOrder::OnIDSetfocus(){
	
} */
/*void CEduClassOrder::OnIDKillfocus(){
	
} */
int CEduClassOrder::OnIDCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnClassIDChange(){
	
} */
/*void CEduClassOrder::OnClassIDSetfocus(){
	
} */
/*void CEduClassOrder::OnClassIDKillfocus(){
	
} */
int CEduClassOrder::OnClassIDCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnNameChange(){
	
} */
/*void CEduClassOrder::OnNameSetfocus(){
	
} */
/*void CEduClassOrder::OnNameKillfocus(){
	
} */
int CEduClassOrder::OnNameCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnStartDateChange(){
	
} */
/*void CEduClassOrder::OnStartDateSetfocus(){
	
} */
/*void CEduClassOrder::OnStartDateKillfocus(){
	
} */
int CEduClassOrder::OnStartDateCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnEndDateChange(){
	
} */
/*void CEduClassOrder::OnEndDateSetfocus(){
	
} */
/*void CEduClassOrder::OnEndDateKillfocus(){
	
} */
int CEduClassOrder::OnEndDateCheckValue(){
	return 0;
} 
void CEduClassOrder::OnManagerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnManagerSelendok(){
	 
}
/*void CEduClassOrder::OnManagerSetfocus(){
	
}*/
/*void CEduClassOrder::OnManagerKillfocus(){
	
}*/
long CEduClassOrder::OnManagerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndManager.IsSearchKey() && !m_szManagerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szManagerKey
};
	m_wndManager.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndManager.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnManagerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduClassOrder::OnTeacherSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnTeacherSelendok(){
	 
}
/*void CEduClassOrder::OnTeacherSetfocus(){
	
}*/
/*void CEduClassOrder::OnTeacherKillfocus(){
	
}*/
long CEduClassOrder::OnTeacherLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTeacher.IsSearchKey() && !m_szTeacherKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTeacherKey
};
	m_wndTeacher.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTeacher.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnTeacherAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduClassOrder::OnTotalNumberChange(){
	
} */
/*void CEduClassOrder::OnTotalNumberSetfocus(){
	
} */
/*void CEduClassOrder::OnTotalNumberKillfocus(){
	
} */
int CEduClassOrder::OnTotalNumberCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnContentChange(){
	
} */
/*void CEduClassOrder::OnContentSetfocus(){
	
} */
/*void CEduClassOrder::OnContentKillfocus(){
	
} */
int CEduClassOrder::OnContentCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnNodeChange(){
	
} */
/*void CEduClassOrder::OnNodeSetfocus(){
	
} */
/*void CEduClassOrder::OnNodeKillfocus(){
	
} */
int CEduClassOrder::OnNodeCheckValue(){
	return 0;
} 
void CEduClassOrder::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnSourceSelendok(){
	 
}
/*void CEduClassOrder::OnSourceSetfocus(){
	
}*/
/*void CEduClassOrder::OnSourceKillfocus(){
	
}*/
long CEduClassOrder::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduClassOrder::OnLocationChange(){
	
} */
/*void CEduClassOrder::OnLocationSetfocus(){
	
} */
/*void CEduClassOrder::OnLocationKillfocus(){
	
} */
int CEduClassOrder::OnLocationCheckValue(){
	return 0;
} 
void CEduClassOrder::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnTypeSelendok(){
	 
}
/*void CEduClassOrder::OnTypeSetfocus(){
	
}*/
/*void CEduClassOrder::OnTypeKillfocus(){
	
}*/
long CEduClassOrder::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduClassOrder::OnDeptReceiveSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnDeptReceiveSelendok(){
	 
}
/*void CEduClassOrder::OnDeptReceiveSetfocus(){
	
}*/
/*void CEduClassOrder::OnDeptReceiveKillfocus(){
	
}*/
long CEduClassOrder::OnDeptReceiveLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptReceive.IsSearchKey() && !m_szDeptReceiveKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptReceiveKey
};
	m_wndDeptReceive.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptReceive.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnDeptReceiveAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduClassOrder::OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnWorkUnitSelendok(){
	 
}
/*void CEduClassOrder::OnWorkUnitSetfocus(){
	
}*/
/*void CEduClassOrder::OnWorkUnitKillfocus(){
	
}*/
long CEduClassOrder::OnWorkUnitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWorkUnit.IsSearchKey() && !m_szWorkUnitKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWorkUnitKey
};
	m_wndWorkUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWorkUnit.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnWorkUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduClassOrder::OnDecideChange(){
	
} */
/*void CEduClassOrder::OnDecideSetfocus(){
	
} */
/*void CEduClassOrder::OnDecideKillfocus(){
	
} */
int CEduClassOrder::OnDecideCheckValue(){
	return 0;
} 
/*void CEduClassOrder::OnPhoneChange(){
	
} */
/*void CEduClassOrder::OnPhoneSetfocus(){
	
} */
/*void CEduClassOrder::OnPhoneKillfocus(){
	
} */
int CEduClassOrder::OnPhoneCheckValue(){
	return 0;
} 
void CEduClassOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnStatusSelendok(){
	 
}
/*void CEduClassOrder::OnStatusSetfocus(){
	
}*/
/*void CEduClassOrder::OnStatusKillfocus(){
	
}*/
long CEduClassOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduClassOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduClassOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduClassOrder::OnListDblClick(){
	
} 
void CEduClassOrder::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduClassOrder::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduClassOrder::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CEduClassOrder::OnAddEduClassOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduClassOrder::OnEditEduClassOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduClassOrder::OnDeleteEduClassOrder(){
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
 		OnCancelEduClassOrder();
 	}
	return 0;
}
int CEduClassOrder::OnSaveEduClassOrder(){
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
 		//OnEduClassOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduClassOrder::OnCancelEduClassOrder(){
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
int CEduClassOrder::OnEduClassOrderListLoadData(){
	return 0;
}
