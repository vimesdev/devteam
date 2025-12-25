#include "EduMeetingOnlineDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnPhoneCheckValue();
} 
static void _OnDeptIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnDeptIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptIDSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnDeptIDSelendok();
}
/*static void _OnDeptIDSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnDeptIDKillfocus();
}*/
/*static void _OnDeptIDKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnDeptIDKillfocus();
}*/
static long _OnDeptIDLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnDeptIDLoadData();
}
/*static void _OnDeptIDAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnDeptIDAddNew();
}*/
static void _OnWorkUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnWorkUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkUnitSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnWorkUnitSelendok();
}
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnWorkUnitKillfocus();
}*/
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnWorkUnitKillfocus();
}*/
static long _OnWorkUnitLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnWorkUnitLoadData();
}
/*static void _OnWorkUnitAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnWorkUnitAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduMeetingOnlineDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduMeetingOnlineDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduMeetingOnlineDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduMeetingOnlineDialog *pVw = (CEduMeetingOnlineDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduMeetingOnlineDialog *pVw = (CEduMeetingOnlineDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduMeetingOnlineDialog *pVw = (CEduMeetingOnlineDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduMeetingOnlineDialog *pVw = (CEduMeetingOnlineDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduMeetingOnlineDialog *pVw = (CEduMeetingOnlineDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEduMeetingOnlineDialogFnc(CWnd *pWnd){
	 return ((CEduMeetingOnlineDialog*)pWnd)->OnAddEduMeetingOnlineDialog();
} 
static int _OnEditEduMeetingOnlineDialogFnc(CWnd *pWnd){
	 return ((CEduMeetingOnlineDialog*)pWnd)->OnEditEduMeetingOnlineDialog();
} 
static int _OnDeleteEduMeetingOnlineDialogFnc(CWnd *pWnd){
	 return ((CEduMeetingOnlineDialog*)pWnd)->OnDeleteEduMeetingOnlineDialog();
} 
static int _OnSaveEduMeetingOnlineDialogFnc(CWnd *pWnd){
	 return ((CEduMeetingOnlineDialog*)pWnd)->OnSaveEduMeetingOnlineDialog();
} 
static int _OnCancelEduMeetingOnlineDialogFnc(CWnd *pWnd){
	 return ((CEduMeetingOnlineDialog*)pWnd)->OnCancelEduMeetingOnlineDialog();
} 
CEduMeetingOnlineDialog::CEduMeetingOnlineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEduMeetingOnlineDialog::~CEduMeetingOnlineDialog(){
}
void CEduMeetingOnlineDialog::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 620, 240);
	m_wndIDLabel.Create(this, _T("ID"), 10, 29, 130, 54);
	m_wndID.Create(this,135, 29, 255, 54); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 59, 130, 84);
	m_wndName.Create(this,135, 59, 365, 84); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 370, 59, 490, 84);
	m_wndBirthDate.Create(this,495, 59, 615, 84); 
	m_wndSexLabel.Create(this, _T("Sex"), 10, 89, 130, 114);
	m_wndSex.Create(this,135, 89, 365, 114); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 370, 89, 490, 114);
	m_wndEthnic.Create(this,495, 89, 615, 114); 
	m_wndPositionLabel.Create(this, _T("Position"), 10, 119, 130, 144);
	m_wndPosition.Create(this,135, 119, 365, 144); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 370, 119, 490, 144);
	m_wndPhone.Create(this,495, 119, 615, 144); 
	m_wndDeptIDLabel.Create(this, _T("Dept ID"), 10, 149, 130, 174);
	m_wndDeptID.Create(this,135, 149, 615, 174); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 179, 130, 204);
	m_wndWorkUnit.Create(this,135, 179, 615, 204); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 209, 130, 234);
	m_wndNote.Create(this,135, 209, 615, 234); 
	m_wndStatusLabel.Create(this, _T("Status"), 370, 29, 490, 54);
	m_wndStatus.Create(this,495, 29, 615, 54); 
	m_wndAdd.Create(this, _T("&Add"), 200, 245, 280, 270);
	m_wndEdit.Create(this, _T("&Edit"), 285, 245, 365, 270);
	m_wndDelete.Create(this, _T("&Delete"), 370, 245, 450, 270);
	m_wndSave.Create(this, _T("&Save"), 455, 245, 535, 270);
	m_wndCancel.Create(this, _T("&Cancel"), 540, 245, 620, 270);

}
void CEduMeetingOnlineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(4);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(3);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(4);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(4);
	m_wndPhone.SetLimitText(12);
	m_wndPhone.SetCheckValue(true);
	m_wndDeptID.SetCheckValue(true);
	m_wndDeptID.LimitText(7);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndWorkUnit.LimitText(2);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);






	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_edu_transferorder_lineTbl.SetTableName(_T("edu_transferorder_line"));
	m_edu_transferorder_lineTbl.AddField(_T("etol_id"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_createdby"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_createddate"), dfDateTime); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_updatedby"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_updateddate"), dfDateTime); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_transfer_id"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_student_id"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_name"), dfText, 65); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_birthdate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_sex"), dfText, 3); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_ethnic"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_address"), dfText, 254); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_occupation"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_position"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_rank"), dfLong); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_phone"), dfText, 12); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_cardid"), dfText, 25); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_date"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_startdate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_enddate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_deptid"), dfText, 7); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_technique"), dfText, 1); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_certificate"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_decide"), dfText, 15); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_decidedate"), dfDate); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_content"), dfText, 115); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_projectid"), dfText, 5); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_placetol_id"), dfText, 5); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_certificate_receive"), dfText, 115); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_deptid_receive"), dfText, 7); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_result"), dfText, 1); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_typeid"), dfText, 2); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_workunit"), dfText, 2); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_note"), dfText, 254); 
	m_edu_transferorder_lineTbl.AddField(_T("etol_status"), dfText, 1); 

}
void CEduMeetingOnlineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndDeptID.SetEvent(WE_SELENDOK, _OnDeptIDSelendokFnc);
	//m_wndDeptID.SetEvent(WE_SETFOCUS, _OnDeptIDSetfocusFnc);
	//m_wndDeptID.SetEvent(WE_KILLFOCUS, _OnDeptIDKillfocusFnc);
	m_wndDeptID.SetEvent(WE_SELCHANGE, _OnDeptIDSelectChangeFnc);
	m_wndDeptID.SetEvent(WE_LOADDATA, _OnDeptIDLoadDataFnc);
	//m_wndDeptID.SetEvent(WE_ADDNEW, _OnDeptIDAddNewFnc);
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CEduMeetingOnlineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndDeptID.GetDlgCtrlID(), m_szDeptIDKey);
	DDX_TextEx(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnitKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CEduMeetingOnlineDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_nID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Ethnic")] =  m_szEthnicKey;
	m_jData[_T("Position")] =  m_szPositionKey;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("DeptID")] =  m_szDeptIDKey;
	m_jData[_T("WorkUnit")] =  m_szWorkUnitKey;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Status")] =  m_szStatusKey;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_nID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Ethnic")].GetValue(m_szEthnicKey);
	m_jData[_T("Position")].GetValue(m_szPositionKey);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("DeptID")].GetValue(m_szDeptIDKey);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnitKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	}

}
void CEduMeetingOnlineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("etol_id"), m_nID);
	rs.GetValue(_T("etol_name"), m_szName);
	rs.GetValue(_T("etol_birthdate"), m_szBirthDate);
	rs.GetValue(_T("etol_sex"), m_szSexKey);
	rs.GetValue(_T("etol_ethnic"), m_szEthnicKey);
	rs.GetValue(_T("etol_position"), m_szPositionKey);
	rs.GetValue(_T("etol_phone"), m_szPhone);
	rs.GetValue(_T("etol_deptid"), m_szDeptIDKey);
	rs.GetValue(_T("etol_workunit"), m_szWorkUnitKey);
	rs.GetValue(_T("etol_note"), m_szNote);
	rs.GetValue(_T("etol_status"), m_szStatusKey);

}
void CEduMeetingOnlineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_transferorder_lineTbl.SetValue(_T("etol_id"), m_nID);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createdby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_createddate"), pMF->GetSysDateTime());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updatedby"), pMF->GetCurrentUser());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_updateddate"), pMF->GetSysDateTime());
	m_edu_transferorder_lineTbl.SetValue(_T("etol_name"), m_szName);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_birthdate"), m_szBirthDate);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_sex"), m_szSexKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_ethnic"), m_szEthnicKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_position"), m_szPositionKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_phone"), m_szPhone);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_deptid"), m_szDeptIDKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_workunit"), m_szWorkUnitKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_note"), m_szNote);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_status"), m_szStatusKey);

}
void CEduMeetingOnlineDialog::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szPositionKey.Empty();
	m_szPhone.Empty();
	m_szDeptIDKey.Empty();
	m_szWorkUnitKey.Empty();
	m_szNote.Empty();
	m_szStatusKey.Empty();

}
int CEduMeetingOnlineDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CEduMeetingOnlineDialog::OnIDChange(){
	
} */
/*void CEduMeetingOnlineDialog::OnIDSetfocus(){
	
} */
/*void CEduMeetingOnlineDialog::OnIDKillfocus(){
	
} */
int CEduMeetingOnlineDialog::OnIDCheckValue(){
	return 0;
} 
/*void CEduMeetingOnlineDialog::OnNameChange(){
	
} */
/*void CEduMeetingOnlineDialog::OnNameSetfocus(){
	
} */
/*void CEduMeetingOnlineDialog::OnNameKillfocus(){
	
} */
int CEduMeetingOnlineDialog::OnNameCheckValue(){
	return 0;
} 
/*void CEduMeetingOnlineDialog::OnBirthDateChange(){
	
} */
/*void CEduMeetingOnlineDialog::OnBirthDateSetfocus(){
	
} */
/*void CEduMeetingOnlineDialog::OnBirthDateKillfocus(){
	
} */
int CEduMeetingOnlineDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CEduMeetingOnlineDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnSexSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnSexSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnSexKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnSexLoadData(){
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
/*void CEduMeetingOnlineDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduMeetingOnlineDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnEthnicSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnEthnicSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnEthnicKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEthnicKey
};
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduMeetingOnlineDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduMeetingOnlineDialog::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnPositionSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnPositionSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnPositionKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPositionKey
};
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduMeetingOnlineDialog::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduMeetingOnlineDialog::OnPhoneChange(){
	
} */
/*void CEduMeetingOnlineDialog::OnPhoneSetfocus(){
	
} */
/*void CEduMeetingOnlineDialog::OnPhoneKillfocus(){
	
} */
int CEduMeetingOnlineDialog::OnPhoneCheckValue(){
	return 0;
} 
void CEduMeetingOnlineDialog::OnDeptIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnDeptIDSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnDeptIDSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnDeptIDKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnDeptIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptID.IsSearchKey() && !m_szDeptIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptIDKey
};
	m_wndDeptID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptID.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduMeetingOnlineDialog::OnDeptIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduMeetingOnlineDialog::OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnWorkUnitSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnWorkUnitSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnWorkUnitKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnWorkUnitLoadData(){
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
/*void CEduMeetingOnlineDialog::OnWorkUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduMeetingOnlineDialog::OnNoteChange(){
	
} */
/*void CEduMeetingOnlineDialog::OnNoteSetfocus(){
	
} */
/*void CEduMeetingOnlineDialog::OnNoteKillfocus(){
	
} */
int CEduMeetingOnlineDialog::OnNoteCheckValue(){
	return 0;
} 
void CEduMeetingOnlineDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnStatusSelendok(){
	 
}
/*void CEduMeetingOnlineDialog::OnStatusSetfocus(){
	
}*/
/*void CEduMeetingOnlineDialog::OnStatusKillfocus(){
	
}*/
long CEduMeetingOnlineDialog::OnStatusLoadData(){
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
/*void CEduMeetingOnlineDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduMeetingOnlineDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduMeetingOnlineDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduMeetingOnlineDialog::OnAddEduMeetingOnlineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduMeetingOnlineDialog::OnEditEduMeetingOnlineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduMeetingOnlineDialog::OnDeleteEduMeetingOnlineDialog(){
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
 		OnCancelEduMeetingOnlineDialog();
 	}
	return 0;
}
int CEduMeetingOnlineDialog::OnSaveEduMeetingOnlineDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_transferorder_lineTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_transferorder_lineTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduMeetingOnlineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduMeetingOnlineDialog::OnCancelEduMeetingOnlineDialog(){
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
int CEduMeetingOnlineDialog::OnEduMeetingOnlineDialogListLoadData(){
	return 0;
}
