#include "EduMeetingOnline.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDocIDChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDocIDChange();
} */
/*static void _OnDocIDSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDocIDSetfocus();} */ 
/*static void _OnDocIDKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDocIDKillfocus();
} */
static int _OnDocIDCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnDocIDCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnline* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnNameCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnContentCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnDateCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnTeacherChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnTeacherChange();
} */
/*static void _OnTeacherSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnTeacherSetfocus();} */ 
/*static void _OnTeacherKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnTeacherKillfocus();
} */
static int _OnTeacherCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnTeacherCheckValue();
} 
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnLocationCheckValue();
} 
/*static void _OnWorkUnitChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnWorkUnitChange();
} */
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnWorkUnitSetfocus();} */ 
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnWorkUnitKillfocus();
} */
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnWorkUnitCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnline *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnline *)pWnd)->OnNoteCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnline*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduMeetingOnline*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduMeetingOnline*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CEduMeetingOnline *pVw = (CEduMeetingOnline *)pWnd;
	pVw->OnAddLineSelect();
} 
static int _OnAddEduMeetingOnlineFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnAddEduMeetingOnline();
} 
static int _OnEditEduMeetingOnlineFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnEditEduMeetingOnline();
} 
static int _OnDeleteEduMeetingOnlineFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnDeleteEduMeetingOnline();
} 
static int _OnSaveEduMeetingOnlineFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnSaveEduMeetingOnline();
} 
static int _OnCancelEduMeetingOnlineFnc(CWnd *pWnd){
	 return ((CEduMeetingOnline*)pWnd)->OnCancelEduMeetingOnline();
} 
CEduMeetingOnline::CEduMeetingOnline(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduMeetingOnline::~CEduMeetingOnline(){
}
void CEduMeetingOnline::OnCreateComponents(){
	m_wndGroupInformation.Create(this, _T("Information"), 5, 5, 795, 365);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 130, 55);
	m_wndID.Create(this,135, 30, 255, 55); 
	m_wndDocIDLabel.Create(this, _T("Doc ID"), 260, 30, 380, 55);
	m_wndDocID.Create(this,385, 30, 505, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 510, 30, 630, 55);
	m_wndStatus.Create(this,635, 30, 790, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 130, 85);
	m_wndName.Create(this,135, 60, 790, 85); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 180, 130, 205);
	m_wndContent.Create(this,135, 180, 790, 305); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 90, 130, 115);
	m_wndDate.Create(this,135, 90, 255, 115); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 260, 90, 380, 115);
	m_wndStartDate.Create(this,385, 90, 505, 115); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 510, 90, 630, 115);
	m_wndEndDate.Create(this,635, 90, 790, 115); 
	m_wndTeacherLabel.Create(this, _T("Teacher"), 10, 120, 130, 145);
	m_wndTeacher.Create(this,135, 120, 380, 145); 
	m_wndLocationLabel.Create(this, _T("Location"), 385, 120, 505, 145);
	m_wndLocation.Create(this,510, 120, 790, 145); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 150, 130, 175);
	m_wndWorkUnit.Create(this,135, 150, 790, 175); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 310, 130, 335);
	m_wndNote.Create(this,135, 310, 790, 360); 
	m_wndList.Create(this,5, 400, 795, 660); 
	m_wndAdd.Create(this, _T("&Add"), 230, 370, 320, 395);
	m_wndEdit.Create(this, _T("&Edit"), 325, 370, 415, 395);
	m_wndDelete.Create(this, _T("&Delete"), 420, 370, 510, 395);
	m_wndSave.Create(this, _T("&Save"), 515, 370, 605, 395);
	m_wndCancel.Create(this, _T("&Cancel"), 610, 370, 700, 395);
	m_wndPrint.Create(this, _T("&Print"), 705, 370, 795, 395);
	m_wndAddLine.Create(this, _T("&Add Line"), 10, 370, 100, 395);

}
void CEduMeetingOnline::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(4);
	m_wndID.SetCheckValue(true);
	m_wndDocID.SetLimitText(10);
	m_wndDocID.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndContent.SetLimitText(200);
	m_wndContent.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndStartDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStartDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndTeacher.SetLimitText(15);
	m_wndTeacher.SetCheckValue(true);
	m_wndLocation.SetLimitText(30);
	m_wndLocation.SetCheckValue(true);
	m_wndWorkUnit.SetLimitText(35);
	m_wndWorkUnit.SetCheckValue(true);
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
void CEduMeetingOnline::OnSetWindowEvents(){
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
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	//m_wndTeacher.SetEvent(WE_CHANGE, _OnTeacherChangeFnc);
	//m_wndTeacher.SetEvent(WE_SETFOCUS, _OnTeacherSetfocusFnc);
	//m_wndTeacher.SetEvent(WE_KILLFOCUS, _OnTeacherKillfocusFnc);
	m_wndTeacher.SetEvent(WE_CHECKVALUE, _OnTeacherCheckValueFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	//m_wndWorkUnit.SetEvent(WE_CHANGE, _OnWorkUnitChangeFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_CHECKVALUE, _OnWorkUnitCheckValueFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduMeetingOnlineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduMeetingOnlineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduMeetingOnlineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduMeetingOnlineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduMeetingOnlineFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduMeetingOnline::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndDocID.GetDlgCtrlID(), m_szDocID);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndTeacher.GetDlgCtrlID(), m_szTeacher);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_Text(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnit);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CEduMeetingOnline::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("DocID")] =  m_szDocID;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("StartDate")] =  m_szStartDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("Teacher")] =  m_szTeacher;
	m_jData[_T("Location")] =  m_szLocation;
	m_jData[_T("WorkUnit")] =  m_szWorkUnit;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("DocID")].GetValue(m_szDocID);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("StartDate")].GetValue(m_szStartDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("Teacher")].GetValue(m_szTeacher);
	m_jData[_T("Location")].GetValue(m_szLocation);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnit);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CEduMeetingOnline::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("eto_id"), m_nID);
	rs.GetValue(_T("eto_doc_id"), m_szDocID);
	rs.GetValue(_T("eto_name"), m_szName);
	rs.GetValue(_T("eto_date"), m_szDate);
	rs.GetValue(_T("eto_start_time"), m_szStartDate);
	rs.GetValue(_T("eto_end_time"), m_szEndDate);
	rs.GetValue(_T("eto_managerid"), m_szTeacher);
	rs.GetValue(_T("eto_location"), m_szLocation);
	rs.GetValue(_T("eto_content"), m_szContent);
	rs.GetValue(_T("eto_note"), m_szNote);
	rs.GetValue(_T("eto_status"), m_szStatusKey);

}
void CEduMeetingOnline::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorderTbl.SetValue(_T("eto_createdby"), pMF->GetCurrentUser());
	m_edu_transferorderTbl.SetValue(_T("eto_createddate"), pMF->GetSysDateTime());
	m_edu_transferorderTbl.SetValue(_T("eto_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorderTbl.SetValue(_T("eto_updateddate"), pMF->GetSysDateTime());
	m_edu_transferorderTbl.SetValue(_T("eto_id"), m_nID);
	m_edu_transferorderTbl.SetValue(_T("eto_doc_id"), m_szDocID);
	m_edu_transferorderTbl.SetValue(_T("eto_name"), m_szName);
	m_edu_transferorderTbl.SetValue(_T("eto_date"), m_szDate);
	m_edu_transferorderTbl.SetValue(_T("eto_start_time"), m_szStartDate);
	m_edu_transferorderTbl.SetValue(_T("eto_end_time"), m_szEndDate);
	m_edu_transferorderTbl.SetValue(_T("eto_managerid"), m_szTeacher);
	m_edu_transferorderTbl.SetValue(_T("eto_location"), m_szLocation);
	m_edu_transferorderTbl.SetValue(_T("eto_content"), m_szContent);
	m_edu_transferorderTbl.SetValue(_T("eto_note"), m_szNote);
	m_edu_transferorderTbl.SetValue(_T("eto_status"), m_szStatusKey);

}
void CEduMeetingOnline::SetDefaultValues(){

	m_nID=0;
	m_szDocID.Empty();
	m_szStatusKey.Empty();
	m_szName.Empty();
	m_szContent.Empty();
	m_szDate.Empty();
	m_szStartDate.Empty();
	m_szEndDate.Empty();
	m_szTeacher.Empty();
	m_szLocation.Empty();
	m_szWorkUnit.Empty();
	m_szNote.Empty();

}
int CEduMeetingOnline::SetMode(int nMode){
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
/*void CEduMeetingOnline::OnIDChange(){
	
} */
/*void CEduMeetingOnline::OnIDSetfocus(){
	
} */
/*void CEduMeetingOnline::OnIDKillfocus(){
	
} */
int CEduMeetingOnline::OnIDCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnDocIDChange(){
	
} */
/*void CEduMeetingOnline::OnDocIDSetfocus(){
	
} */
/*void CEduMeetingOnline::OnDocIDKillfocus(){
	
} */
int CEduMeetingOnline::OnDocIDCheckValue(){
	return 0;
} 
void CEduMeetingOnline::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnStatusSelendok(){
	 
}
/*void CEduMeetingOnline::OnStatusSetfocus(){
	
}*/
/*void CEduMeetingOnline::OnStatusKillfocus(){
	
}*/
long CEduMeetingOnline::OnStatusLoadData(){
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
/*void CEduMeetingOnline::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduMeetingOnline::OnNameChange(){
	
} */
/*void CEduMeetingOnline::OnNameSetfocus(){
	
} */
/*void CEduMeetingOnline::OnNameKillfocus(){
	
} */
int CEduMeetingOnline::OnNameCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnContentChange(){
	
} */
/*void CEduMeetingOnline::OnContentSetfocus(){
	
} */
/*void CEduMeetingOnline::OnContentKillfocus(){
	
} */
int CEduMeetingOnline::OnContentCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnDateChange(){
	
} */
/*void CEduMeetingOnline::OnDateSetfocus(){
	
} */
/*void CEduMeetingOnline::OnDateKillfocus(){
	
} */
int CEduMeetingOnline::OnDateCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnStartDateChange(){
	
} */
/*void CEduMeetingOnline::OnStartDateSetfocus(){
	
} */
/*void CEduMeetingOnline::OnStartDateKillfocus(){
	
} */
int CEduMeetingOnline::OnStartDateCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnEndDateChange(){
	
} */
/*void CEduMeetingOnline::OnEndDateSetfocus(){
	
} */
/*void CEduMeetingOnline::OnEndDateKillfocus(){
	
} */
int CEduMeetingOnline::OnEndDateCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnTeacherChange(){
	
} */
/*void CEduMeetingOnline::OnTeacherSetfocus(){
	
} */
/*void CEduMeetingOnline::OnTeacherKillfocus(){
	
} */
int CEduMeetingOnline::OnTeacherCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnLocationChange(){
	
} */
/*void CEduMeetingOnline::OnLocationSetfocus(){
	
} */
/*void CEduMeetingOnline::OnLocationKillfocus(){
	
} */
int CEduMeetingOnline::OnLocationCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnWorkUnitChange(){
	
} */
/*void CEduMeetingOnline::OnWorkUnitSetfocus(){
	
} */
/*void CEduMeetingOnline::OnWorkUnitKillfocus(){
	
} */
int CEduMeetingOnline::OnWorkUnitCheckValue(){
	return 0;
} 
/*void CEduMeetingOnline::OnNoteChange(){
	
} */
/*void CEduMeetingOnline::OnNoteSetfocus(){
	
} */
/*void CEduMeetingOnline::OnNoteKillfocus(){
	
} */
int CEduMeetingOnline::OnNoteCheckValue(){
	return 0;
} 
void CEduMeetingOnline::OnListDblClick(){
	
} 
void CEduMeetingOnline::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduMeetingOnline::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduMeetingOnline::OnListLoadData(){
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
void CEduMeetingOnline::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnline::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduMeetingOnline::OnAddEduMeetingOnline(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduMeetingOnline::OnEditEduMeetingOnline(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduMeetingOnline::OnDeleteEduMeetingOnline(){
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
 		OnCancelEduMeetingOnline();
 	}
	return 0;
}
int CEduMeetingOnline::OnSaveEduMeetingOnline(){
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
 		//OnEduMeetingOnlineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduMeetingOnline::OnCancelEduMeetingOnline(){
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
int CEduMeetingOnline::OnEduMeetingOnlineListLoadData(){
	return 0;
}
