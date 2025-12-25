#include "EduTransferOrder.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDocIDChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDocIDChange();
} */
/*static void _OnDocIDSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDocIDSetfocus();} */ 
/*static void _OnDocIDKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDocIDKillfocus();
} */
static int _OnDocIDCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnDocIDCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStatusAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrder* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNameAddNew();
}*/
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnContentCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnDateCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnEndDateCheckValue();
} 
static void _OnTeacherSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrder* )pWnd)->OnTeacherSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTeacherSelendokFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnTeacherSelendok();
}
/*static void _OnTeacherSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnTeacherKillfocus();
}*/
/*static void _OnTeacherKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnTeacherKillfocus();
}*/
static long _OnTeacherLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnTeacherLoadData();
}
/*static void _OnTeacherAddNewFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnTeacherAddNew();
}*/
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnLocationCheckValue();
} 
/*static void _OnProjectChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnProjectChange();
} */
/*static void _OnProjectSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnProjectSetfocus();} */ 
/*static void _OnProjectKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnProjectKillfocus();
} */
static int _OnProjectCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnProjectCheckValue();
} 
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrder* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnResultAddNew();
}*/
static void _OnWorkUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrder* )pWnd)->OnWorkUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkUnitSelendokFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnWorkUnitSelendok();
}
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnWorkUnitKillfocus();
}*/
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnWorkUnitKillfocus();
}*/
static long _OnWorkUnitLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnWorkUnitLoadData();
}
/*static void _OnWorkUnitAddNewFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnWorkUnitAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrder *)pWnd)->OnNoteCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduTransferOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduTransferOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CEduTransferOrder *pVw = (CEduTransferOrder *)pWnd;
	pVw->OnAddLineSelect();
} 
static int _OnAddEduTransferOrderFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnAddEduTransferOrder();
} 
static int _OnEditEduTransferOrderFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnEditEduTransferOrder();
} 
static int _OnDeleteEduTransferOrderFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnDeleteEduTransferOrder();
} 
static int _OnSaveEduTransferOrderFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnSaveEduTransferOrder();
} 
static int _OnCancelEduTransferOrderFnc(CWnd *pWnd){
	 return ((CEduTransferOrder*)pWnd)->OnCancelEduTransferOrder();
} 
CEduTransferOrder::CEduTransferOrder(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduTransferOrder::~CEduTransferOrder(){
}
void CEduTransferOrder::OnCreateComponents(){
	m_wndGroupInformation.Create(this, _T("Information"), 5, 5, 795, 270);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 130, 55);
	m_wndID.Create(this,135, 30, 255, 55); 
	m_wndDocIDLabel.Create(this, _T("Doc ID"), 260, 30, 380, 55);
	m_wndDocID.Create(this,385, 30, 505, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 510, 30, 630, 55);
	m_wndStatus.Create(this,635, 30, 790, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 130, 85);
	m_wndName.Create(this,135, 60, 790, 85); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 90, 130, 115);
	m_wndContent.Create(this,135, 90, 790, 115); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 120, 130, 145);
	m_wndDate.Create(this,135, 120, 255, 145); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 260, 120, 380, 145);
	m_wndStartDate.Create(this,385, 120, 505, 145); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 510, 120, 630, 145);
	m_wndEndDate.Create(this,635, 120, 790, 145); 
	m_wndTeacherLabel.Create(this, _T("Teacher"), 10, 150, 130, 175);
	m_wndTeacher.Create(this,135, 150, 380, 175); 
	m_wndLocationLabel.Create(this, _T("Location"), 385, 150, 505, 175);
	m_wndLocation.Create(this,510, 150, 790, 175); 
	m_wndProjectLabel.Create(this, _T("Project"), 10, 180, 130, 205);
	m_wndProject.Create(this,135, 180, 380, 205); 
	m_wndResultLabel.Create(this, _T("Result"), 385, 180, 505, 205);
	m_wndResult.Create(this,510, 180, 790, 205); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 210, 130, 235);
	m_wndWorkUnit.Create(this,135, 210, 790, 235); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 240, 130, 265);
	m_wndNote.Create(this,135, 240, 790, 265); 
	m_wndList.Create(this,5, 305, 795, 664); 
	m_wndAdd.Create(this, _T("&Add"), 230, 275, 320, 300);
	m_wndEdit.Create(this, _T("&Edit"), 325, 275, 415, 300);
	m_wndDelete.Create(this, _T("&Delete"), 420, 275, 510, 300);
	m_wndSave.Create(this, _T("&Save"), 515, 275, 605, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 610, 275, 700, 300);
	m_wndPrint.Create(this, _T("&Print"), 705, 275, 795, 300);
	m_wndAddLine.Create(this, _T("&Add Line"), 10, 275, 100, 300);

}
void CEduTransferOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(4);
	m_wndID.SetCheckValue(true);
	m_wndDocID.SetLimitText(10);
	m_wndDocID.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(50);
	m_wndContent.SetLimitText(200);
	m_wndContent.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndStartDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStartDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndTeacher.SetCheckValue(true);
	m_wndTeacher.LimitText(15);
	m_wndLocation.SetLimitText(30);
	m_wndLocation.SetCheckValue(true);
	m_wndProject.SetLimitText(2);
	m_wndProject.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(2);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndWorkUnit.LimitText(35);
	m_wndNote.SetLimitText(200);
	m_wndNote.SetCheckValue(true);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);










	m_edu_transferorderTbl.SetTableName(_T("edu_transferorder"));
	m_edu_transferorderTbl.AddField(_T("eto_createdby"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_createddate"), dfDateTime); 
	m_edu_transferorderTbl.AddField(_T("eto_updatedby"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_updateddate"), dfDateTime); 
	m_edu_transferorderTbl.AddField(_T("eto_id"), dfLong); 
	m_edu_transferorderTbl.AddField(_T("eto_doc_id"), dfText, 10); 
	m_edu_transferorderTbl.AddField(_T("eto_name"), dfText, 50); 
	m_edu_transferorderTbl.AddField(_T("eto_date"), dfDateTime); 
	m_edu_transferorderTbl.AddField(_T("eto_start_time"), dfDateTime); 
	m_edu_transferorderTbl.AddField(_T("eto_end_time"), dfDateTime); 
	m_edu_transferorderTbl.AddField(_T("eto_managerid"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_teacher"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_teacher1"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_teacher2"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("eto_teacher3"), dfText, 15); 
	m_edu_transferorderTbl.AddField(_T("etc_unit"), dfText, 55); 
	m_edu_transferorderTbl.AddField(_T("eto_location"), dfText, 30); 
	m_edu_transferorderTbl.AddField(_T("eto_content"), dfText, 200); 
	m_edu_transferorderTbl.AddField(_T("eto_sourceid"), dfText, 2); 
	m_edu_transferorderTbl.AddField(_T("eto_result"), dfText, 2); 
	m_edu_transferorderTbl.AddField(_T("eto_typeid"), dfText, 2); 
	m_edu_transferorderTbl.AddField(_T("eto_note"), dfText, 200); 
	m_edu_transferorderTbl.AddField(_T("eto_status"), dfText, 1); 

}
void CEduTransferOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDocID.SetEvent(WE_CHANGE, _OnDocIDChangeFnc);
	//m_wndDocID.SetEvent(WE_SETFOCUS, _OnDocIDSetfocusFnc);
	//m_wndDocID.SetEvent(WE_KILLFOCUS, _OnDocIDKillfocusFnc);
	m_wndDocID.SetEvent(WE_CHECKVALUE, _OnDocIDCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndTeacher.SetEvent(WE_SELENDOK, _OnTeacherSelendokFnc);
	//m_wndTeacher.SetEvent(WE_SETFOCUS, _OnTeacherSetfocusFnc);
	//m_wndTeacher.SetEvent(WE_KILLFOCUS, _OnTeacherKillfocusFnc);
	m_wndTeacher.SetEvent(WE_SELCHANGE, _OnTeacherSelectChangeFnc);
	m_wndTeacher.SetEvent(WE_LOADDATA, _OnTeacherLoadDataFnc);
	//m_wndTeacher.SetEvent(WE_ADDNEW, _OnTeacherAddNewFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	//m_wndProject.SetEvent(WE_CHANGE, _OnProjectChangeFnc);
	//m_wndProject.SetEvent(WE_SETFOCUS, _OnProjectSetfocusFnc);
	//m_wndProject.SetEvent(WE_KILLFOCUS, _OnProjectKillfocusFnc);
	m_wndProject.SetEvent(WE_CHECKVALUE, _OnProjectCheckValueFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	m_wndWorkUnit.SetEvent(WE_SELENDOK, _OnWorkUnitSelendokFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_SELCHANGE, _OnWorkUnitSelectChangeFnc);
	m_wndWorkUnit.SetEvent(WE_LOADDATA, _OnWorkUnitLoadDataFnc);
	//m_wndWorkUnit.SetEvent(WE_ADDNEW, _OnWorkUnitAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduTransferOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduTransferOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduTransferOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduTransferOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduTransferOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduTransferOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndDocID.GetDlgCtrlID(), m_szDocID);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndTeacher.GetDlgCtrlID(), m_szTeacherKey);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_Text(pDX, m_wndProject.GetDlgCtrlID(), m_szProject);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnitKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CEduTransferOrder::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("DocID")] =  m_szDocID;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("StartDate")] =  m_szStartDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("Teacher")] =  m_szTeacherKey;
	m_jData[_T("Location")] =  m_szLocation;
	m_jData[_T("Project")] =  m_szProject;
	m_jData[_T("Result")] =  m_szResultKey;
	m_jData[_T("WorkUnit")] =  m_szWorkUnitKey;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("DocID")].GetValue(m_szDocID);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("StartDate")].GetValue(m_szStartDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("Teacher")].GetValue(m_szTeacherKey);
	m_jData[_T("Location")].GetValue(m_szLocation);
	m_jData[_T("Project")].GetValue(m_szProject);
	m_jData[_T("Result")].GetValue(m_szResultKey);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnitKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CEduTransferOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("eto_id"), m_nID);
	rs.GetValue(_T("eto_doc_id"), m_szDocID);
	rs.GetValue(_T("eto_name"), m_szNameKey);
	rs.GetValue(_T("eto_date"), m_szDate);
	rs.GetValue(_T("eto_start_time"), m_szStartDate);
	rs.GetValue(_T("eto_end_time"), m_szEndDate);
	rs.GetValue(_T("eto_managerid"), m_szTeacherKey);
	rs.GetValue(_T("eto_location"), m_szLocation);
	rs.GetValue(_T("eto_content"), m_szContent);
	rs.GetValue(_T("eto_sourceid"), m_szProject);
	rs.GetValue(_T("eto_result"), m_szResultKey);
	rs.GetValue(_T("eto_note"), m_szNote);
	rs.GetValue(_T("eto_status"), m_szStatusKey);

}
void CEduTransferOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorderTbl.SetValue(_T("eto_createdby"), pMF->GetCurrentUser());
	m_edu_transferorderTbl.SetValue(_T("eto_createddate"), pMF->GetSysDateTime());
	m_edu_transferorderTbl.SetValue(_T("eto_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorderTbl.SetValue(_T("eto_updateddate"), pMF->GetSysDateTime());
	m_edu_transferorderTbl.SetValue(_T("eto_id"), m_nID);
	m_edu_transferorderTbl.SetValue(_T("eto_doc_id"), m_szDocID);
	m_edu_transferorderTbl.SetValue(_T("eto_name"), m_szNameKey);
	m_edu_transferorderTbl.SetValue(_T("eto_date"), m_szDate);
	m_edu_transferorderTbl.SetValue(_T("eto_start_time"), m_szStartDate);
	m_edu_transferorderTbl.SetValue(_T("eto_end_time"), m_szEndDate);
	m_edu_transferorderTbl.SetValue(_T("eto_managerid"), m_szTeacherKey);
	m_edu_transferorderTbl.SetValue(_T("eto_location"), m_szLocation);
	m_edu_transferorderTbl.SetValue(_T("eto_content"), m_szContent);
	m_edu_transferorderTbl.SetValue(_T("eto_sourceid"), m_szProject);
	m_edu_transferorderTbl.SetValue(_T("eto_result"), m_szResultKey);
	m_edu_transferorderTbl.SetValue(_T("eto_note"), m_szNote);
	m_edu_transferorderTbl.SetValue(_T("eto_status"), m_szStatusKey);

}
void CEduTransferOrder::SetDefaultValues(){

	m_nID=0;
	m_szDocID.Empty();
	m_szStatusKey.Empty();
	m_szNameKey.Empty();
	m_szContent.Empty();
	m_szDate.Empty();
	m_szStartDate.Empty();
	m_szEndDate.Empty();
	m_szTeacherKey.Empty();
	m_szLocation.Empty();
	m_szProject.Empty();
	m_szResultKey.Empty();
	m_szWorkUnitKey.Empty();
	m_szNote.Empty();

}
int CEduTransferOrder::SetMode(int nMode){
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
/*void CEduTransferOrder::OnIDChange(){
	
} */
/*void CEduTransferOrder::OnIDSetfocus(){
	
} */
/*void CEduTransferOrder::OnIDKillfocus(){
	
} */
int CEduTransferOrder::OnIDCheckValue(){
	return 0;
} 
/*void CEduTransferOrder::OnDocIDChange(){
	
} */
/*void CEduTransferOrder::OnDocIDSetfocus(){
	
} */
/*void CEduTransferOrder::OnDocIDKillfocus(){
	
} */
int CEduTransferOrder::OnDocIDCheckValue(){
	return 0;
} 
void CEduTransferOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnStatusSelendok(){
	 
}
/*void CEduTransferOrder::OnStatusSetfocus(){
	
}*/
/*void CEduTransferOrder::OnStatusKillfocus(){
	
}*/
long CEduTransferOrder::OnStatusLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduTransferOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrder::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnNameSelendok(){
	 
}
/*void CEduTransferOrder::OnNameSetfocus(){
	
}*/
/*void CEduTransferOrder::OnNameKillfocus(){
	
}*/
long CEduTransferOrder::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduTransferOrder::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrder::OnContentChange(){
	
} */
/*void CEduTransferOrder::OnContentSetfocus(){
	
} */
/*void CEduTransferOrder::OnContentKillfocus(){
	
} */
int CEduTransferOrder::OnContentCheckValue(){
	return 0;
} 
/*void CEduTransferOrder::OnDateChange(){
	
} */
/*void CEduTransferOrder::OnDateSetfocus(){
	
} */
/*void CEduTransferOrder::OnDateKillfocus(){
	
} */
int CEduTransferOrder::OnDateCheckValue(){
	return 0;
} 
/*void CEduTransferOrder::OnStartDateChange(){
	
} */
/*void CEduTransferOrder::OnStartDateSetfocus(){
	
} */
/*void CEduTransferOrder::OnStartDateKillfocus(){
	
} */
int CEduTransferOrder::OnStartDateCheckValue(){
	return 0;
} 
/*void CEduTransferOrder::OnEndDateChange(){
	
} */
/*void CEduTransferOrder::OnEndDateSetfocus(){
	
} */
/*void CEduTransferOrder::OnEndDateKillfocus(){
	
} */
int CEduTransferOrder::OnEndDateCheckValue(){
	return 0;
} 
void CEduTransferOrder::OnTeacherSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnTeacherSelendok(){
	 
}
/*void CEduTransferOrder::OnTeacherSetfocus(){
	
}*/
/*void CEduTransferOrder::OnTeacherKillfocus(){
	
}*/
long CEduTransferOrder::OnTeacherLoadData(){
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
/*void CEduTransferOrder::OnTeacherAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrder::OnLocationChange(){
	
} */
/*void CEduTransferOrder::OnLocationSetfocus(){
	
} */
/*void CEduTransferOrder::OnLocationKillfocus(){
	
} */
int CEduTransferOrder::OnLocationCheckValue(){
	return 0;
} 
/*void CEduTransferOrder::OnProjectChange(){
	
} */
/*void CEduTransferOrder::OnProjectSetfocus(){
	
} */
/*void CEduTransferOrder::OnProjectKillfocus(){
	
} */
int CEduTransferOrder::OnProjectCheckValue(){
	return 0;
} 
void CEduTransferOrder::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnResultSelendok(){
	 
}
/*void CEduTransferOrder::OnResultSetfocus(){
	
}*/
/*void CEduTransferOrder::OnResultKillfocus(){
	
}*/
long CEduTransferOrder::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResultKey
};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduTransferOrder::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrder::OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnWorkUnitSelendok(){
	 
}
/*void CEduTransferOrder::OnWorkUnitSetfocus(){
	
}*/
/*void CEduTransferOrder::OnWorkUnitKillfocus(){
	
}*/
long CEduTransferOrder::OnWorkUnitLoadData(){
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
/*void CEduTransferOrder::OnWorkUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrder::OnNoteChange(){
	
} */
/*void CEduTransferOrder::OnNoteSetfocus(){
	
} */
/*void CEduTransferOrder::OnNoteKillfocus(){
	
} */
int CEduTransferOrder::OnNoteCheckValue(){
	return 0;
} 
void CEduTransferOrder::OnListDblClick(){
	
} 
void CEduTransferOrder::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTransferOrder::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduTransferOrder::OnListLoadData(){
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
void CEduTransferOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrder::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTransferOrder::OnAddEduTransferOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduTransferOrder::OnEditEduTransferOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduTransferOrder::OnDeleteEduTransferOrder(){
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
 		OnCancelEduTransferOrder();
 	}
	return 0;
}
int CEduTransferOrder::OnSaveEduTransferOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_transferorderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_transferorderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduTransferOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduTransferOrder::OnCancelEduTransferOrder(){
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
int CEduTransferOrder::OnEduTransferOrderListLoadData(){
	return 0;
}
