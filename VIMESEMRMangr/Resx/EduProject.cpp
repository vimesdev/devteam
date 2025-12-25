#include "EduProject.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnNameCheckValue();
} 
/*static void _OnStartTimeChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStartTimeChange();
} */
/*static void _OnStartTimeSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStartTimeSetfocus();} */ 
/*static void _OnStartTimeKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStartTimeKillfocus();
} */
static int _OnStartTimeCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnStartTimeCheckValue();
} 
/*static void _OnEndTimeChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnEndTimeChange();
} */
/*static void _OnEndTimeSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnEndTimeSetfocus();} */ 
/*static void _OnEndTimeKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnEndTimeKillfocus();
} */
static int _OnEndTimeCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnEndTimeCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnContentCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnNoteCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnLocationCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeAddNew();
}*/
static void _OnUserSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnUserSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserSelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnUserSelendok();
}
/*static void _OnUserSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnUserKillfocus();
}*/
/*static void _OnUserKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnUserKillfocus();
}*/
static long _OnUserLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnUserLoadData();
}
/*static void _OnUserAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnUserAddNew();
}*/
static void _OnApprovedbySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnApprovedbySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnApprovedbySelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnApprovedbySelendok();
}
/*static void _OnApprovedbySetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnApprovedbyKillfocus();
}*/
/*static void _OnApprovedbyKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnApprovedbyKillfocus();
}*/
static long _OnApprovedbyLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnApprovedbyLoadData();
}
/*static void _OnApprovedbyAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnApprovedbyAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnCreatedDateChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnCreatedDateChange();
} */
/*static void _OnCreatedDateSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnCreatedDateSetfocus();} */ 
/*static void _OnCreatedDateKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnCreatedDateKillfocus();
} */
static int _OnCreatedDateCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnCreatedDateCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNameSearhChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameSearhChange();
} */
/*static void _OnNameSearhSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameSearhSetfocus();} */ 
/*static void _OnNameSearhKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnNameSearhKillfocus();
} */
static int _OnNameSearhCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnNameSearhCheckValue();
} 
/*static void _OnContentSearchChangeFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentSearchChange();
} */
/*static void _OnContentSearchSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentSearchSetfocus();} */ 
/*static void _OnContentSearchKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnContentSearchKillfocus();
} */
static int _OnContentSearchCheckValueFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnContentSearchCheckValue();
} 
static void _OnRefeshSelectFnc(CWnd *pWnd){
	CEduProject *pVw = (CEduProject *)pWnd;
	pVw->OnRefeshSelect();
} 
static void _OnTypeSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduProject* )pWnd)->OnTypeSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSearchSelendokFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeSearchSelendok();
}
/*static void _OnTypeSearchSetfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeSearchKillfocus();
}*/
/*static void _OnTypeSearchKillfocusFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeSearchKillfocus();
}*/
static long _OnTypeSearchLoadDataFnc(CWnd *pWnd){
	return ((CEduProject *)pWnd)->OnTypeSearchLoadData();
}
/*static void _OnTypeSearchAddNewFnc(CWnd *pWnd){
	((CEduProject *)pWnd)->OnTypeSearchAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEduProject*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEduProject*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduProject*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnListDeleteItem();
} 
static int _OnAddEduProjectFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnAddEduProject();
} 
static int _OnEditEduProjectFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnEditEduProject();
} 
static int _OnDeleteEduProjectFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnDeleteEduProject();
} 
static int _OnSaveEduProjectFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnSaveEduProject();
} 
static int _OnCancelEduProjectFnc(CWnd *pWnd){
	 return ((CEduProject*)pWnd)->OnCancelEduProject();
} 
CEduProject::CEduProject(){

	m_nDlgWidth = 956;
	m_nDlgHeight = 675;
	SetDefaultValues();
}
CEduProject::~CEduProject(){
}
void CEduProject::OnCreateComponents(){
	m_wndInformationGroup.Create(this, _T("Information"), 5, 400, 795, 635);
	m_wndGroupSearch.Create(this, _T("List Search"), 5, 5, 795, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 425, 130, 450);
	m_wndID.Create(this,135, 425, 255, 450); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 455, 130, 480);
	m_wndName.Create(this,135, 455, 789, 480); 
	m_wndStartTimeLabel.Create(this, _T("Start Time"), 10, 515, 130, 540);
	m_wndStartTime.Create(this,135, 515, 255, 540); 
	m_wndEndTimeLabel.Create(this, _T("End Time"), 260, 515, 360, 540);
	m_wndEndTime.Create(this,365, 515, 485, 540); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 485, 130, 510);
	m_wndContent.Create(this,135, 485, 789, 510); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 605, 130, 630);
	m_wndNote.Create(this,135, 605, 789, 630); 
	m_wndSourceLabel.Create(this, _T("Source"), 490, 515, 610, 540);
	m_wndSource.Create(this,615, 515, 789, 540); 
	m_wndLocationLabel.Create(this, _T("Location"), 10, 545, 130, 570);
	m_wndLocation.Create(this,135, 545, 485, 570); 
	m_wndTypeLabel.Create(this, _T("Type"), 490, 545, 610, 570);
	m_wndType.Create(this,615, 545, 789, 570); 
	m_wndUserLabel.Create(this, _T("User"), 10, 575, 130, 600);
	m_wndUser.Create(this,135, 575, 360, 600); 
	m_wndApprovedbyLabel.Create(this, _T("Approvedby"), 365, 575, 485, 600);
	m_wndApprovedby.Create(this,490, 575, 789, 600); 
	m_wndStatusLabel.Create(this, _T("Status"), 490, 425, 610, 450);
	m_wndStatus.Create(this,615, 425, 789, 450); 
	m_wndCreatedDateLabel.Create(this, _T("Created Date"), 260, 425, 360, 450);
	m_wndCreatedDate.Create(this,365, 425, 485, 450); 
	m_wndAdd.Create(this, _T("&Add"), 170, 640, 270, 665);
	m_wndSave.Create(this, _T("&Save"), 275, 640, 375, 665);
	m_wndEdit.Create(this, _T("&Edit"), 380, 640, 480, 665);
	m_wndDelete.Create(this, _T("&Delete"), 485, 640, 585, 665);
	m_wndCancel.Create(this, _T("&Cancel"), 590, 640, 690, 665);
	m_wndPrint.Create(this, _T("&Print"), 695, 640, 795, 665);
	m_wndFromDateLabel.Create(this, _T("&From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("&To Date"), 230, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 445, 55); 
	m_wndNameSearhLabel.Create(this, _T("Name Searh"), 400, 60, 490, 85);
	m_wndNameSearh.Create(this,495, 60, 790, 85); 
	m_wndContentSearchLabel.Create(this, _T("Content"), 10, 60, 100, 85);
	m_wndContentSearch.Create(this,105, 60, 395, 85); 
	m_wndRefesh.Create(this, _T("&Refesh"), 710, 30, 790, 55);
	m_wndTypeSearchLabel.Create(this, _T("Type"), 450, 30, 540, 55);
	m_wndTypeSearch.Create(this,545, 30, 705, 55); 
	m_wndList.Create(this,5, 95, 795, 395); 

}
void CEduProject::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(4);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndStartTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStartTime.SetCheckValue(true);
	m_wndEndTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndTime.SetCheckValue(true);
	m_wndContent.SetLimitText(200);
	m_wndContent.SetCheckValue(true);
	m_wndNote.SetLimitText(200);
	m_wndNote.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(2);
	m_wndLocation.SetLimitText(30);
	m_wndLocation.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndUser.SetCheckValue(true);
	m_wndUser.LimitText(15);
	m_wndApprovedby.SetCheckValue(true);
	m_wndApprovedby.LimitText(15);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndCreatedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndCreatedDate.SetCheckValue(true);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndNameSearh.SetLimitText(35);
	m_wndNameSearh.SetCheckValue(true);
	m_wndContentSearch.SetLimitText(35);
	m_wndContentSearch.SetCheckValue(true);
	m_wndTypeSearch.SetCheckValue(true);
	m_wndTypeSearch.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndApprovedby.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndApprovedby.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTypeSearch.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeSearch.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_edu_projectTbl.SetTableName(_T("edu_project"));
	m_edu_projectTbl.AddField(_T("ep_createdby"), dfText, 15); 
	m_edu_projectTbl.AddField(_T("ep_createddate"), dfDateTime); 
	m_edu_projectTbl.AddField(_T("ep_updatedby"), dfText, 15); 
	m_edu_projectTbl.AddField(_T("ep_updateddate"), dfDateTime); 
	m_edu_projectTbl.AddField(_T("ep_id"), dfLong); 
	m_edu_projectTbl.AddField(_T("ep_name"), dfText, 50); 
	m_edu_projectTbl.AddField(_T("ep_start_time"), dfDateTime); 
	m_edu_projectTbl.AddField(_T("ep_end_time"), dfDateTime); 
	m_edu_projectTbl.AddField(_T("ep_managerid"), dfText, 15); 
	m_edu_projectTbl.AddField(_T("ep_content"), dfText, 200); 
	m_edu_projectTbl.AddField(_T("ep_note"), dfText, 200); 
	m_edu_projectTbl.AddField(_T("ep_sourceid"), dfText, 2); 
	m_edu_projectTbl.AddField(_T("ep_location"), dfText, 30); 
	m_edu_projectTbl.AddField(_T("ep_type"), dfText, 3); 
	m_edu_projectTbl.AddField(_T("ep_userid"), dfText, 15); 
	m_edu_projectTbl.AddField(_T("ep_approvedby"), dfText, 15); 
	m_edu_projectTbl.AddField(_T("ep_status"), dfText, 1); 

}
void CEduProject::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndStartTime.SetEvent(WE_CHANGE, _OnStartTimeChangeFnc);
	//m_wndStartTime.SetEvent(WE_SETFOCUS, _OnStartTimeSetfocusFnc);
	//m_wndStartTime.SetEvent(WE_KILLFOCUS, _OnStartTimeKillfocusFnc);
	m_wndStartTime.SetEvent(WE_CHECKVALUE, _OnStartTimeCheckValueFnc);
	//m_wndEndTime.SetEvent(WE_CHANGE, _OnEndTimeChangeFnc);
	//m_wndEndTime.SetEvent(WE_SETFOCUS, _OnEndTimeSetfocusFnc);
	//m_wndEndTime.SetEvent(WE_KILLFOCUS, _OnEndTimeKillfocusFnc);
	m_wndEndTime.SetEvent(WE_CHECKVALUE, _OnEndTimeCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
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
	m_wndUser.SetEvent(WE_SELENDOK, _OnUserSelendokFnc);
	//m_wndUser.SetEvent(WE_SETFOCUS, _OnUserSetfocusFnc);
	//m_wndUser.SetEvent(WE_KILLFOCUS, _OnUserKillfocusFnc);
	m_wndUser.SetEvent(WE_SELCHANGE, _OnUserSelectChangeFnc);
	m_wndUser.SetEvent(WE_LOADDATA, _OnUserLoadDataFnc);
	//m_wndUser.SetEvent(WE_ADDNEW, _OnUserAddNewFnc);
	m_wndApprovedby.SetEvent(WE_SELENDOK, _OnApprovedbySelendokFnc);
	//m_wndApprovedby.SetEvent(WE_SETFOCUS, _OnApprovedbySetfocusFnc);
	//m_wndApprovedby.SetEvent(WE_KILLFOCUS, _OnApprovedbyKillfocusFnc);
	m_wndApprovedby.SetEvent(WE_SELCHANGE, _OnApprovedbySelectChangeFnc);
	m_wndApprovedby.SetEvent(WE_LOADDATA, _OnApprovedbyLoadDataFnc);
	//m_wndApprovedby.SetEvent(WE_ADDNEW, _OnApprovedbyAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndCreatedDate.SetEvent(WE_CHANGE, _OnCreatedDateChangeFnc);
	//m_wndCreatedDate.SetEvent(WE_SETFOCUS, _OnCreatedDateSetfocusFnc);
	//m_wndCreatedDate.SetEvent(WE_KILLFOCUS, _OnCreatedDateKillfocusFnc);
	m_wndCreatedDate.SetEvent(WE_CHECKVALUE, _OnCreatedDateCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndNameSearh.SetEvent(WE_CHANGE, _OnNameSearhChangeFnc);
	//m_wndNameSearh.SetEvent(WE_SETFOCUS, _OnNameSearhSetfocusFnc);
	//m_wndNameSearh.SetEvent(WE_KILLFOCUS, _OnNameSearhKillfocusFnc);
	m_wndNameSearh.SetEvent(WE_CHECKVALUE, _OnNameSearhCheckValueFnc);
	//m_wndContentSearch.SetEvent(WE_CHANGE, _OnContentSearchChangeFnc);
	//m_wndContentSearch.SetEvent(WE_SETFOCUS, _OnContentSearchSetfocusFnc);
	//m_wndContentSearch.SetEvent(WE_KILLFOCUS, _OnContentSearchKillfocusFnc);
	m_wndContentSearch.SetEvent(WE_CHECKVALUE, _OnContentSearchCheckValueFnc);
	m_wndRefesh.SetEvent(WE_CLICK, _OnRefeshSelectFnc);
	m_wndTypeSearch.SetEvent(WE_SELENDOK, _OnTypeSearchSelendokFnc);
	//m_wndTypeSearch.SetEvent(WE_SETFOCUS, _OnTypeSearchSetfocusFnc);
	//m_wndTypeSearch.SetEvent(WE_KILLFOCUS, _OnTypeSearchKillfocusFnc);
	m_wndTypeSearch.SetEvent(WE_SELCHANGE, _OnTypeSearchSelectChangeFnc);
	m_wndTypeSearch.SetEvent(WE_LOADDATA, _OnTypeSearchLoadDataFnc);
	//m_wndTypeSearch.SetEvent(WE_ADDNEW, _OnTypeSearchAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduProjectFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduProjectFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduProjectFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduProjectFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduProjectFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduProject::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndStartTime.GetDlgCtrlID(), m_szStartTime);
	DDX_TextEx(pDX, m_wndEndTime.GetDlgCtrlID(), m_szEndTime);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndUser.GetDlgCtrlID(), m_szUserKey);
	DDX_TextEx(pDX, m_wndApprovedby.GetDlgCtrlID(), m_szApprovedbyKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndCreatedDate.GetDlgCtrlID(), m_szCreatedDate);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndNameSearh.GetDlgCtrlID(), m_szNameSearh);
	DDX_Text(pDX, m_wndContentSearch.GetDlgCtrlID(), m_szContentSearch);
	DDX_TextEx(pDX, m_wndTypeSearch.GetDlgCtrlID(), m_szTypeSearchKey);

}
void CEduProject::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("StartTime")] =  m_szStartTime;
	m_jData[_T("EndTime")] =  m_szEndTime;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Source")] =  m_szSourceKey;
	m_jData[_T("Location")] =  m_szLocation;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("User")] =  m_szUserKey;
	m_jData[_T("Approvedby")] =  m_szApprovedbyKey;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("CreatedDate")] =  m_szCreatedDate;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("NameSearh")] =  m_szNameSearh;
	m_jData[_T("ContentSearch")] =  m_szContentSearch;
	m_jData[_T("TypeSearch")] =  m_szTypeSearchKey;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("StartTime")].GetValue(m_szStartTime);
	m_jData[_T("EndTime")].GetValue(m_szEndTime);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	m_jData[_T("Location")].GetValue(m_szLocation);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("User")].GetValue(m_szUserKey);
	m_jData[_T("Approvedby")].GetValue(m_szApprovedbyKey);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("CreatedDate")].GetValue(m_szCreatedDate);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("NameSearh")].GetValue(m_szNameSearh);
	m_jData[_T("ContentSearch")].GetValue(m_szContentSearch);
	m_jData[_T("TypeSearch")].GetValue(m_szTypeSearchKey);
	}

}
void CEduProject::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ep_id"), m_nID);
	rs.GetValue(_T("ep_name"), m_szName);
	rs.GetValue(_T("ep_start_time"), m_szStartTime);
	rs.GetValue(_T("ep_end_time"), m_szEndTime);
	rs.GetValue(_T("ep_content"), m_szContent);
	rs.GetValue(_T("ep_note"), m_szNote);
	rs.GetValue(_T("ep_sourceid"), m_szSourceKey);
	rs.GetValue(_T("ep_location"), m_szLocation);
	rs.GetValue(_T("ep_type"), m_szTypeKey);
	rs.GetValue(_T("ep_userid"), m_szUserKey);
	rs.GetValue(_T("ep_approvedby"), m_szApprovedbyKey);
	rs.GetValue(_T("ep_status"), m_szStatusKey);

}
void CEduProject::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_projectTbl.SetValue(_T("ep_createdby"), pMF->GetCurrentUser());
	m_edu_projectTbl.SetValue(_T("ep_createddate"), pMF->GetSysDateTime());
	m_edu_projectTbl.SetValue(_T("ep_updatedby"), pMF->GetCurrentUser());
	m_edu_projectTbl.SetValue(_T("ep_updateddate"), pMF->GetSysDateTime());
	m_edu_projectTbl.SetValue(_T("ep_id"), m_nID);
	m_edu_projectTbl.SetValue(_T("ep_name"), m_szName);
	m_edu_projectTbl.SetValue(_T("ep_start_time"), m_szStartTime);
	m_edu_projectTbl.SetValue(_T("ep_end_time"), m_szEndTime);
	m_edu_projectTbl.SetValue(_T("ep_content"), m_szContent);
	m_edu_projectTbl.SetValue(_T("ep_note"), m_szNote);
	m_edu_projectTbl.SetValue(_T("ep_sourceid"), m_szSourceKey);
	m_edu_projectTbl.SetValue(_T("ep_location"), m_szLocation);
	m_edu_projectTbl.SetValue(_T("ep_type"), m_szTypeKey);
	m_edu_projectTbl.SetValue(_T("ep_userid"), m_szUserKey);
	m_edu_projectTbl.SetValue(_T("ep_approvedby"), m_szApprovedbyKey);
	m_edu_projectTbl.SetValue(_T("ep_status"), m_szStatusKey);

}
void CEduProject::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szStartTime.Empty();
	m_szEndTime.Empty();
	m_szContent.Empty();
	m_szNote.Empty();
	m_szSourceKey.Empty();
	m_szLocation.Empty();
	m_szTypeKey.Empty();
	m_szUserKey.Empty();
	m_szApprovedbyKey.Empty();
	m_szStatusKey.Empty();
	m_szCreatedDate.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szNameSearh.Empty();
	m_szContentSearch.Empty();
	m_szTypeSearchKey.Empty();

}
int CEduProject::SetMode(int nMode){
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
/*void CEduProject::OnIDChange(){
	
} */
/*void CEduProject::OnIDSetfocus(){
	
} */
/*void CEduProject::OnIDKillfocus(){
	
} */
int CEduProject::OnIDCheckValue(){
	return 0;
} 
/*void CEduProject::OnNameChange(){
	
} */
/*void CEduProject::OnNameSetfocus(){
	
} */
/*void CEduProject::OnNameKillfocus(){
	
} */
int CEduProject::OnNameCheckValue(){
	return 0;
} 
/*void CEduProject::OnStartTimeChange(){
	
} */
/*void CEduProject::OnStartTimeSetfocus(){
	
} */
/*void CEduProject::OnStartTimeKillfocus(){
	
} */
int CEduProject::OnStartTimeCheckValue(){
	return 0;
} 
/*void CEduProject::OnEndTimeChange(){
	
} */
/*void CEduProject::OnEndTimeSetfocus(){
	
} */
/*void CEduProject::OnEndTimeKillfocus(){
	
} */
int CEduProject::OnEndTimeCheckValue(){
	return 0;
} 
/*void CEduProject::OnContentChange(){
	
} */
/*void CEduProject::OnContentSetfocus(){
	
} */
/*void CEduProject::OnContentKillfocus(){
	
} */
int CEduProject::OnContentCheckValue(){
	return 0;
} 
/*void CEduProject::OnNoteChange(){
	
} */
/*void CEduProject::OnNoteSetfocus(){
	
} */
/*void CEduProject::OnNoteKillfocus(){
	
} */
int CEduProject::OnNoteCheckValue(){
	return 0;
} 
void CEduProject::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnSourceSelendok(){
	 
}
/*void CEduProject::OnSourceSetfocus(){
	
}*/
/*void CEduProject::OnSourceKillfocus(){
	
}*/
long CEduProject::OnSourceLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduProject::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduProject::OnLocationChange(){
	
} */
/*void CEduProject::OnLocationSetfocus(){
	
} */
/*void CEduProject::OnLocationKillfocus(){
	
} */
int CEduProject::OnLocationCheckValue(){
	return 0;
} 
void CEduProject::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnTypeSelendok(){
	 
}
/*void CEduProject::OnTypeSetfocus(){
	
}*/
/*void CEduProject::OnTypeKillfocus(){
	
}*/
long CEduProject::OnTypeLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduProject::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduProject::OnUserSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnUserSelendok(){
	 
}
/*void CEduProject::OnUserSetfocus(){
	
}*/
/*void CEduProject::OnUserKillfocus(){
	
}*/
long CEduProject::OnUserLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser.IsSearchKey() && !m_szUserKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUserKey
};
	m_wndUser.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduProject::OnUserAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduProject::OnApprovedbySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnApprovedbySelendok(){
	 
}
/*void CEduProject::OnApprovedbySetfocus(){
	
}*/
/*void CEduProject::OnApprovedbyKillfocus(){
	
}*/
long CEduProject::OnApprovedbyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndApprovedby.IsSearchKey() && !m_szApprovedbyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szApprovedbyKey
};
	m_wndApprovedby.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndApprovedby.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduProject::OnApprovedbyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduProject::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnStatusSelendok(){
	 
}
/*void CEduProject::OnStatusSetfocus(){
	
}*/
/*void CEduProject::OnStatusKillfocus(){
	
}*/
long CEduProject::OnStatusLoadData(){
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
/*void CEduProject::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduProject::OnCreatedDateChange(){
	
} */
/*void CEduProject::OnCreatedDateSetfocus(){
	
} */
/*void CEduProject::OnCreatedDateKillfocus(){
	
} */
int CEduProject::OnCreatedDateCheckValue(){
	return 0;
} 
void CEduProject::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CEduProject::OnFromDateChange(){
	
} */
/*void CEduProject::OnFromDateSetfocus(){
	
} */
/*void CEduProject::OnFromDateKillfocus(){
	
} */
int CEduProject::OnFromDateCheckValue(){
	return 0;
} 
/*void CEduProject::OnToDateChange(){
	
} */
/*void CEduProject::OnToDateSetfocus(){
	
} */
/*void CEduProject::OnToDateKillfocus(){
	
} */
int CEduProject::OnToDateCheckValue(){
	return 0;
} 
/*void CEduProject::OnNameSearhChange(){
	
} */
/*void CEduProject::OnNameSearhSetfocus(){
	
} */
/*void CEduProject::OnNameSearhKillfocus(){
	
} */
int CEduProject::OnNameSearhCheckValue(){
	return 0;
} 
/*void CEduProject::OnContentSearchChange(){
	
} */
/*void CEduProject::OnContentSearchSetfocus(){
	
} */
/*void CEduProject::OnContentSearchKillfocus(){
	
} */
int CEduProject::OnContentSearchCheckValue(){
	return 0;
} 
void CEduProject::OnRefeshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduProject::OnTypeSearchSelendok(){
	 
}
/*void CEduProject::OnTypeSearchSetfocus(){
	
}*/
/*void CEduProject::OnTypeSearchKillfocus(){
	
}*/
long CEduProject::OnTypeSearchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeSearch.IsSearchKey() && !m_szTypeSearchKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeSearchKey
};
	m_wndTypeSearch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduProject::OnTypeSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduProject::OnListDblClick(){
	
} 
void CEduProject::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduProject::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduProject::OnListLoadData(){
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
int CEduProject::OnAddEduProject(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduProject::OnEditEduProject(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduProject::OnDeleteEduProject(){
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
 		OnCancelEduProject();
 	}
	return 0;
}
int CEduProject::OnSaveEduProject(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_projectTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_projectTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduProjectListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduProject::OnCancelEduProject(){
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
int CEduProject::OnEduProjectListLoadData(){
	return 0;
}
