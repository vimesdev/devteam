#include "EduTransferOrderDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnPhoneCheckValue();
} 
static void _OnDeptIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnDeptIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptIDSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnDeptIDSelendok();
}
/*static void _OnDeptIDSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnDeptIDKillfocus();
}*/
/*static void _OnDeptIDKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnDeptIDKillfocus();
}*/
static long _OnDeptIDLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnDeptIDLoadData();
}
/*static void _OnDeptIDAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnDeptIDAddNew();
}*/
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnCertificateSetfocus();} */ 
/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnCertificateKillfocus();
} */
static int _OnCertificateCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnCertificateCheckValue();
} 
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnResultAddNew();
}*/
static void _OnWorkUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnWorkUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkUnitSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnWorkUnitSelendok();
}
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnWorkUnitKillfocus();
}*/
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnWorkUnitKillfocus();
}*/
static long _OnWorkUnitLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnWorkUnitLoadData();
}
/*static void _OnWorkUnitAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnWorkUnitAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTransferOrderDialog* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CEduTransferOrderDialog *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CEduTransferOrderDialog *)pWnd)->OnRankAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduTransferOrderDialog *pVw = (CEduTransferOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduTransferOrderDialog *pVw = (CEduTransferOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduTransferOrderDialog *pVw = (CEduTransferOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduTransferOrderDialog *pVw = (CEduTransferOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduTransferOrderDialog *pVw = (CEduTransferOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEduTransferOrderDialogFnc(CWnd *pWnd){
	 return ((CEduTransferOrderDialog*)pWnd)->OnAddEduTransferOrderDialog();
} 
static int _OnEditEduTransferOrderDialogFnc(CWnd *pWnd){
	 return ((CEduTransferOrderDialog*)pWnd)->OnEditEduTransferOrderDialog();
} 
static int _OnDeleteEduTransferOrderDialogFnc(CWnd *pWnd){
	 return ((CEduTransferOrderDialog*)pWnd)->OnDeleteEduTransferOrderDialog();
} 
static int _OnSaveEduTransferOrderDialogFnc(CWnd *pWnd){
	 return ((CEduTransferOrderDialog*)pWnd)->OnSaveEduTransferOrderDialog();
} 
static int _OnCancelEduTransferOrderDialogFnc(CWnd *pWnd){
	 return ((CEduTransferOrderDialog*)pWnd)->OnCancelEduTransferOrderDialog();
} 
CEduTransferOrderDialog::CEduTransferOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEduTransferOrderDialog::~CEduTransferOrderDialog(){
}
void CEduTransferOrderDialog::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 620, 270);
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
	m_wndPhoneLabel.Create(this, _T("Phone"), 370, 149, 490, 174);
	m_wndPhone.Create(this,495, 149, 615, 174); 
	m_wndDeptIDLabel.Create(this, _T("Dept ID"), 10, 149, 130, 174);
	m_wndDeptID.Create(this,135, 149, 365, 174); 
	m_wndCertificateLabel.Create(this, _T("Certificate"), 10, 179, 130, 204);
	m_wndCertificate.Create(this,135, 179, 365, 204); 
	m_wndResultLabel.Create(this, _T("Result"), 370, 179, 490, 204);
	m_wndResult.Create(this,495, 179, 615, 204); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 209, 130, 234);
	m_wndWorkUnit.Create(this,135, 209, 615, 234); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 239, 130, 264);
	m_wndNote.Create(this,135, 239, 615, 264); 
	m_wndStatusLabel.Create(this, _T("Status"), 370, 29, 490, 54);
	m_wndStatus.Create(this,495, 29, 615, 54); 
	m_wndRankLabel.Create(this, _T("Rank"), 370, 119, 490, 144);
	m_wndRank.Create(this,495, 119, 614, 144); 
	m_wndAdd.Create(this, _T("&Add"), 200, 275, 280, 300);
	m_wndEdit.Create(this, _T("&Edit"), 285, 275, 365, 300);
	m_wndDelete.Create(this, _T("&Delete"), 370, 275, 450, 300);
	m_wndSave.Create(this, _T("&Save"), 455, 275, 535, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 540, 275, 620, 300);

}
void CEduTransferOrderDialog::OnInitializeComponents(){
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
	m_wndCertificate.SetLimitText(15);
	m_wndCertificate.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndWorkUnit.LimitText(2);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);








	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
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
void CEduTransferOrderDialog::OnSetWindowEvents(){
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
	//m_wndCertificate.SetEvent(WE_CHANGE, _OnCertificateChangeFnc);
	//m_wndCertificate.SetEvent(WE_SETFOCUS, _OnCertificateSetfocusFnc);
	//m_wndCertificate.SetEvent(WE_KILLFOCUS, _OnCertificateKillfocusFnc);
	m_wndCertificate.SetEvent(WE_CHECKVALUE, _OnCertificateCheckValueFnc);
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CEduTransferOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndDeptID.GetDlgCtrlID(), m_szDeptIDKey);
	DDX_Text(pDX, m_wndCertificate.GetDlgCtrlID(), m_szCertificate);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnitKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);

}
void CEduTransferOrderDialog::UpdateJson(BOOL bSave){
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
	m_jData[_T("Certificate")] =  m_szCertificate;
	m_jData[_T("Result")] =  m_szResultKey;
	m_jData[_T("WorkUnit")] =  m_szWorkUnitKey;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("Rank")] =  m_szRankKey;
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
	m_jData[_T("Certificate")].GetValue(m_szCertificate);
	m_jData[_T("Result")].GetValue(m_szResultKey);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnitKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("Rank")].GetValue(m_szRankKey);
	}

}
void CEduTransferOrderDialog::GetDataToScreen(){
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
	rs.GetValue(_T("etol_certificate"), m_szCertificate);
	rs.GetValue(_T("etol_result"), m_szResultKey);
	rs.GetValue(_T("etol_workunit"), m_szWorkUnitKey);
	rs.GetValue(_T("etol_note"), m_szNote);
	rs.GetValue(_T("etol_status"), m_szStatusKey);

}
void CEduTransferOrderDialog::GetScreenToData(){
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
	m_edu_transferorder_lineTbl.SetValue(_T("etol_certificate"), m_szCertificate);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_result"), m_szResultKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_workunit"), m_szWorkUnitKey);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_note"), m_szNote);
	m_edu_transferorder_lineTbl.SetValue(_T("etol_status"), m_szStatusKey);

}
void CEduTransferOrderDialog::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szPositionKey.Empty();
	m_szPhone.Empty();
	m_szDeptIDKey.Empty();
	m_szCertificate.Empty();
	m_szResultKey.Empty();
	m_szWorkUnitKey.Empty();
	m_szNote.Empty();
	m_szStatusKey.Empty();
	m_szRankKey.Empty();

}
int CEduTransferOrderDialog::SetMode(int nMode){
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
/*void CEduTransferOrderDialog::OnIDChange(){
	
} */
/*void CEduTransferOrderDialog::OnIDSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnIDKillfocus(){
	
} */
int CEduTransferOrderDialog::OnIDCheckValue(){
	return 0;
} 
/*void CEduTransferOrderDialog::OnNameChange(){
	
} */
/*void CEduTransferOrderDialog::OnNameSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnNameKillfocus(){
	
} */
int CEduTransferOrderDialog::OnNameCheckValue(){
	return 0;
} 
/*void CEduTransferOrderDialog::OnBirthDateChange(){
	
} */
/*void CEduTransferOrderDialog::OnBirthDateSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnBirthDateKillfocus(){
	
} */
int CEduTransferOrderDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CEduTransferOrderDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnSexSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnSexSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnSexKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnSexLoadData(){
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
/*void CEduTransferOrderDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrderDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnEthnicSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnEthnicSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnEthnicKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnEthnicLoadData(){
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
/*void CEduTransferOrderDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrderDialog::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnPositionSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnPositionSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnPositionKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnPositionLoadData(){
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
/*void CEduTransferOrderDialog::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrderDialog::OnPhoneChange(){
	
} */
/*void CEduTransferOrderDialog::OnPhoneSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnPhoneKillfocus(){
	
} */
int CEduTransferOrderDialog::OnPhoneCheckValue(){
	return 0;
} 
void CEduTransferOrderDialog::OnDeptIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnDeptIDSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnDeptIDSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnDeptIDKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnDeptIDLoadData(){
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
/*void CEduTransferOrderDialog::OnDeptIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrderDialog::OnCertificateChange(){
	
} */
/*void CEduTransferOrderDialog::OnCertificateSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnCertificateKillfocus(){
	
} */
int CEduTransferOrderDialog::OnCertificateCheckValue(){
	return 0;
} 
void CEduTransferOrderDialog::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnResultSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnResultSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnResultKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnResultLoadData(){
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
/*void CEduTransferOrderDialog::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrderDialog::OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnWorkUnitSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnWorkUnitSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnWorkUnitKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnWorkUnitLoadData(){
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
/*void CEduTransferOrderDialog::OnWorkUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTransferOrderDialog::OnNoteChange(){
	
} */
/*void CEduTransferOrderDialog::OnNoteSetfocus(){
	
} */
/*void CEduTransferOrderDialog::OnNoteKillfocus(){
	
} */
int CEduTransferOrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CEduTransferOrderDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnStatusSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnStatusSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnStatusKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnStatusLoadData(){
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
/*void CEduTransferOrderDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrderDialog::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnRankSelendok(){
	 
}
/*void CEduTransferOrderDialog::OnRankSetfocus(){
	
}*/
/*void CEduTransferOrderDialog::OnRankKillfocus(){
	
}*/
long CEduTransferOrderDialog::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRankKey
};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduTransferOrderDialog::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduTransferOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTransferOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTransferOrderDialog::OnAddEduTransferOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduTransferOrderDialog::OnEditEduTransferOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduTransferOrderDialog::OnDeleteEduTransferOrderDialog(){
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
 		OnCancelEduTransferOrderDialog();
 	}
	return 0;
}
int CEduTransferOrderDialog::OnSaveEduTransferOrderDialog(){
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
 		//OnEduTransferOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduTransferOrderDialog::OnCancelEduTransferOrderDialog(){
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
int CEduTransferOrderDialog::OnEduTransferOrderDialogListLoadData(){
	return 0;
}
