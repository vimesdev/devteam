#include "EduTeacher.h"
#include "MainFrm.h"
/*static void _OnTeacheridChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTeacheridChange();
} */
/*static void _OnTeacheridSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTeacheridSetfocus();} */ 
/*static void _OnTeacheridKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTeacheridKillfocus();
} */
static int _OnTeacheridCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnTeacheridCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirtDateChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnBirtDateChange();
} */
/*static void _OnBirtDateSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnBirtDateSetfocus();} */ 
/*static void _OnBirtDateKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnBirtDateKillfocus();
} */
static int _OnBirtDateCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnBirtDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTeacher* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSexAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnAddressCheckValue();
} 
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduTeacher* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnCardIDChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCardIDChange();
} */
/*static void _OnCardIDSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCardIDSetfocus();} */ 
/*static void _OnCardIDKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCardIDKillfocus();
} */
static int _OnCardIDCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnCardIDCheckValue();
} 
/*static void _OnTechNiqueChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTechNiqueChange();
} */
/*static void _OnTechNiqueSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTechNiqueSetfocus();} */ 
/*static void _OnTechNiqueKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnTechNiqueKillfocus();
} */
static int _OnTechNiqueCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnTechNiqueCheckValue();
} 
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCertificateSetfocus();} */ 
/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnCertificateKillfocus();
} */
static int _OnCertificateCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnCertificateCheckValue();
} 
/*static void _OnWorkUnitChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnWorkUnitChange();
} */
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnWorkUnitSetfocus();} */ 
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnWorkUnitKillfocus();
} */
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnWorkUnitCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnNoteCheckValue();
} 
static long _Oncontrol_25LoadDataFnc(CWnd *pWnd){
	return ((CEduTeacher*)pWnd)->Oncontrol_25LoadData();
} 
static void _Oncontrol_25DblClickFnc(CWnd *pWnd){
	((CEduTeacher*)pWnd)->Oncontrol_25DblClick();
} 
static void _Oncontrol_25SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEduTeacher*)pWnd)->Oncontrol_25SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_25DeleteItemFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->Oncontrol_25DeleteItem();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CEduTeacher *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CEduTeacher *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduTeacher *pVw = (CEduTeacher *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduTeacher *pVw = (CEduTeacher *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduTeacher *pVw = (CEduTeacher *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduTeacher *pVw = (CEduTeacher *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduTeacher *pVw = (CEduTeacher *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEduTeacherFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->OnAddEduTeacher();
} 
static int _OnEditEduTeacherFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->OnEditEduTeacher();
} 
static int _OnDeleteEduTeacherFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->OnDeleteEduTeacher();
} 
static int _OnSaveEduTeacherFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->OnSaveEduTeacher();
} 
static int _OnCancelEduTeacherFnc(CWnd *pWnd){
	 return ((CEduTeacher*)pWnd)->OnCancelEduTeacher();
} 
CEduTeacher::CEduTeacher(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 843;
	SetDefaultValues();
}
CEduTeacher::~CEduTeacher(){
}
void CEduTeacher::OnCreateComponents(){
	m_wndInformationGroup.Create(this, _T("Information"), 5, 395, 795, 630);
	m_wndTeacheridLabel.Create(this, _T("Teacher id"), 10, 420, 120, 445);
	m_wndTeacherid.Create(this,125, 420, 255, 445); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 450, 120, 475);
	m_wndName.Create(this,125, 450, 335, 475); 
	m_wndBirtDateLabel.Create(this, _T("Birt Date"), 340, 450, 440, 475);
	m_wndBirtDate.Create(this,445, 450, 555, 475); 
	m_wndSexLabel.Create(this, _T("Sex"), 560, 450, 660, 475);
	m_wndSex.Create(this,665, 450, 790, 475); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 480, 120, 505);
	m_wndAddress.Create(this,125, 480, 790, 505); 
	m_wndPositionLabel.Create(this, _T("Position"), 10, 510, 120, 535);
	m_wndPosition.Create(this,125, 510, 335, 535); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 540, 120, 565);
	m_wndPhone.Create(this,125, 540, 335, 565); 
	m_wndCardIDLabel.Create(this, _T("Card ID"), 340, 510, 440, 535);
	m_wndCardID.Create(this,445, 510, 790, 535); 
	m_wndTechNiqueLabel.Create(this, _T("Tech Nique"), 340, 540, 440, 565);
	m_wndTechNique.Create(this,445, 540, 555, 565); 
	m_wndCertificateLabel.Create(this, _T("Certificate"), 560, 540, 660, 565);
	m_wndCertificate.Create(this,665, 540, 790, 565); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 570, 120, 595);
	m_wndWorkUnit.Create(this,125, 570, 790, 595); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 600, 120, 625);
	m_wndNote.Create(this,125, 600, 790, 625); 
	m_wndcontrol_25.Create(this,5, 35, 795, 390); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 5, 5, 115, 30);
	m_wndSearchName.Create(this,120, 5, 330, 30); 
	m_wndAdd.Create(this, _T("&Add"), 325, 635, 415, 660);
	m_wndSave.Create(this, _T("&Save"), 420, 635, 510, 660);
	m_wndEdit.Create(this, _T("&Edit"), 515, 635, 605, 660);
	m_wndDelete.Create(this, _T("&Delete"), 610, 635, 700, 660);
	m_wndCancel.Create(this, _T("&Cancel"), 705, 635, 795, 660);

}
void CEduTeacher::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTeacherid.SetLimitText(15);
	m_wndTeacherid.SetCheckValue(true);
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndBirtDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirtDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(3);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(4);
	m_wndPhone.SetLimitText(12);
	m_wndPhone.SetCheckValue(true);
	m_wndCardID.SetLimitText(25);
	m_wndCardID.SetCheckValue(true);
	m_wndTechNique.SetLimitText(1);
	m_wndTechNique.SetCheckValue(true);
	m_wndCertificate.SetLimitText(15);
	m_wndCertificate.SetCheckValue(true);
	m_wndWorkUnit.SetLimitText(2);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_edu_teacherTbl.SetTableName(_T("edu_teacher"));
	m_edu_teacherTbl.AddField(_T("et_id"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_createdby"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_createddate"), dfDateTime); 
	m_edu_teacherTbl.AddField(_T("et_updatedby"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_updateddate"), dfDateTime); 
	m_edu_teacherTbl.AddField(_T("et_teacher_id"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_name"), dfText, 65); 
	m_edu_teacherTbl.AddField(_T("et_birthdate"), dfDate); 
	m_edu_teacherTbl.AddField(_T("et_sex"), dfText, 3); 
	m_edu_teacherTbl.AddField(_T("et_ethnic"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_address"), dfText, 254); 
	m_edu_teacherTbl.AddField(_T("et_occupation"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_position"), dfLong); 
	m_edu_teacherTbl.AddField(_T("et_phone"), dfText, 12); 
	m_edu_teacherTbl.AddField(_T("et_cardid"), dfText, 25); 
	m_edu_teacherTbl.AddField(_T("et_date"), dfDate); 
	m_edu_teacherTbl.AddField(_T("et_deptid"), dfText, 7); 
	m_edu_teacherTbl.AddField(_T("et_technique"), dfText, 1); 
	m_edu_teacherTbl.AddField(_T("et_certificate"), dfText, 15); 
	m_edu_teacherTbl.AddField(_T("et_content"), dfText, 115); 
	m_edu_teacherTbl.AddField(_T("et_workunit"), dfText, 2); 
	m_edu_teacherTbl.AddField(_T("et_note"), dfText, 254); 
	m_edu_teacherTbl.AddField(_T("et_status"), dfText, 1); 

}
void CEduTeacher::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndTeacherid.SetEvent(WE_CHANGE, _OnTeacheridChangeFnc);
	//m_wndTeacherid.SetEvent(WE_SETFOCUS, _OnTeacheridSetfocusFnc);
	//m_wndTeacherid.SetEvent(WE_KILLFOCUS, _OnTeacheridKillfocusFnc);
	m_wndTeacherid.SetEvent(WE_CHECKVALUE, _OnTeacheridCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndBirtDate.SetEvent(WE_CHANGE, _OnBirtDateChangeFnc);
	//m_wndBirtDate.SetEvent(WE_SETFOCUS, _OnBirtDateSetfocusFnc);
	//m_wndBirtDate.SetEvent(WE_KILLFOCUS, _OnBirtDateKillfocusFnc);
	m_wndBirtDate.SetEvent(WE_CHECKVALUE, _OnBirtDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
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
	//m_wndCardID.SetEvent(WE_CHANGE, _OnCardIDChangeFnc);
	//m_wndCardID.SetEvent(WE_SETFOCUS, _OnCardIDSetfocusFnc);
	//m_wndCardID.SetEvent(WE_KILLFOCUS, _OnCardIDKillfocusFnc);
	m_wndCardID.SetEvent(WE_CHECKVALUE, _OnCardIDCheckValueFnc);
	//m_wndTechNique.SetEvent(WE_CHANGE, _OnTechNiqueChangeFnc);
	//m_wndTechNique.SetEvent(WE_SETFOCUS, _OnTechNiqueSetfocusFnc);
	//m_wndTechNique.SetEvent(WE_KILLFOCUS, _OnTechNiqueKillfocusFnc);
	m_wndTechNique.SetEvent(WE_CHECKVALUE, _OnTechNiqueCheckValueFnc);
	//m_wndCertificate.SetEvent(WE_CHANGE, _OnCertificateChangeFnc);
	//m_wndCertificate.SetEvent(WE_SETFOCUS, _OnCertificateSetfocusFnc);
	//m_wndCertificate.SetEvent(WE_KILLFOCUS, _OnCertificateKillfocusFnc);
	m_wndCertificate.SetEvent(WE_CHECKVALUE, _OnCertificateCheckValueFnc);
	//m_wndWorkUnit.SetEvent(WE_CHANGE, _OnWorkUnitChangeFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_CHECKVALUE, _OnWorkUnitCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndcontrol_25.SetEvent(WE_SELCHANGE, _Oncontrol_25SelectChangeFnc);
	m_wndcontrol_25.SetEvent(WE_LOADDATA, _Oncontrol_25LoadDataFnc);
	m_wndcontrol_25.SetEvent(WE_DBLCLICK, _Oncontrol_25DblClickFnc);
	m_wndcontrol_25.AddEvent(1, _T("Delete"), _Oncontrol_25DeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEduTeacherFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEduTeacherFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEduTeacherFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEduTeacherFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEduTeacherFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CEduTeacher::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTeacherid.GetDlgCtrlID(), m_szTeacherid);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBirtDate.GetDlgCtrlID(), m_szBirtDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndCardID.GetDlgCtrlID(), m_szCardID);
	DDX_Text(pDX, m_wndTechNique.GetDlgCtrlID(), m_szTechNique);
	DDX_Text(pDX, m_wndCertificate.GetDlgCtrlID(), m_szCertificate);
	DDX_Text(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnit);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CEduTeacher::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Teacherid")] =  m_szTeacherid;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("BirtDate")] =  m_szBirtDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Position")] =  m_szPositionKey;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("CardID")] =  m_szCardID;
	m_jData[_T("TechNique")] =  m_szTechNique;
	m_jData[_T("Certificate")] =  m_szCertificate;
	m_jData[_T("WorkUnit")] =  m_szWorkUnit;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("SearchName")] =  m_szSearchName;
	}
	else
	{
			
	m_jData[_T("Teacherid")].GetValue(m_szTeacherid);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("BirtDate")].GetValue(m_szBirtDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Position")].GetValue(m_szPositionKey);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("CardID")].GetValue(m_szCardID);
	m_jData[_T("TechNique")].GetValue(m_szTechNique);
	m_jData[_T("Certificate")].GetValue(m_szCertificate);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnit);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	}

}
void CEduTeacher::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("et_teacher_id"), m_szTeacherid);
	rs.GetValue(_T("et_name"), m_szName);
	rs.GetValue(_T("et_birthdate"), m_szBirtDate);
	rs.GetValue(_T("et_sex"), m_szSexKey);
	rs.GetValue(_T("et_address"), m_szAddress);
	rs.GetValue(_T("et_position"), m_szPositionKey);
	rs.GetValue(_T("et_phone"), m_szPhone);
	rs.GetValue(_T("et_cardid"), m_szCardID);
	rs.GetValue(_T("et_technique"), m_szTechNique);
	rs.GetValue(_T("et_certificate"), m_szCertificate);
	rs.GetValue(_T("et_workunit"), m_szWorkUnit);
	rs.GetValue(_T("et_note"), m_szNote);

}
void CEduTeacher::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_teacherTbl.SetValue(_T("et_createdby"), pMF->GetCurrentUser());
	m_edu_teacherTbl.SetValue(_T("et_createddate"), pMF->GetSysDateTime());
	m_edu_teacherTbl.SetValue(_T("et_updatedby"), pMF->GetCurrentUser());
	m_edu_teacherTbl.SetValue(_T("et_updateddate"), pMF->GetSysDateTime());
	m_edu_teacherTbl.SetValue(_T("et_teacher_id"), m_szTeacherid);
	m_edu_teacherTbl.SetValue(_T("et_name"), m_szName);
	m_edu_teacherTbl.SetValue(_T("et_birthdate"), m_szBirtDate);
	m_edu_teacherTbl.SetValue(_T("et_sex"), m_szSexKey);
	m_edu_teacherTbl.SetValue(_T("et_address"), m_szAddress);
	m_edu_teacherTbl.SetValue(_T("et_position"), m_szPositionKey);
	m_edu_teacherTbl.SetValue(_T("et_phone"), m_szPhone);
	m_edu_teacherTbl.SetValue(_T("et_cardid"), m_szCardID);
	m_edu_teacherTbl.SetValue(_T("et_technique"), m_szTechNique);
	m_edu_teacherTbl.SetValue(_T("et_certificate"), m_szCertificate);
	m_edu_teacherTbl.SetValue(_T("et_workunit"), m_szWorkUnit);
	m_edu_teacherTbl.SetValue(_T("et_note"), m_szNote);

}
void CEduTeacher::SetDefaultValues(){

	m_szTeacherid.Empty();
	m_szName.Empty();
	m_szBirtDate.Empty();
	m_szSexKey.Empty();
	m_szAddress.Empty();
	m_szPositionKey.Empty();
	m_szPhone.Empty();
	m_szCardID.Empty();
	m_szTechNique.Empty();
	m_szCertificate.Empty();
	m_szWorkUnit.Empty();
	m_szNote.Empty();
	m_szSearchName.Empty();

}
int CEduTeacher::SetMode(int nMode){
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
/*void CEduTeacher::OnTeacheridChange(){
	
} */
/*void CEduTeacher::OnTeacheridSetfocus(){
	
} */
/*void CEduTeacher::OnTeacheridKillfocus(){
	
} */
int CEduTeacher::OnTeacheridCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnNameChange(){
	
} */
/*void CEduTeacher::OnNameSetfocus(){
	
} */
/*void CEduTeacher::OnNameKillfocus(){
	
} */
int CEduTeacher::OnNameCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnBirtDateChange(){
	
} */
/*void CEduTeacher::OnBirtDateSetfocus(){
	
} */
/*void CEduTeacher::OnBirtDateKillfocus(){
	
} */
int CEduTeacher::OnBirtDateCheckValue(){
	return 0;
} 
void CEduTeacher::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnSexSelendok(){
	 
}
/*void CEduTeacher::OnSexSetfocus(){
	
}*/
/*void CEduTeacher::OnSexKillfocus(){
	
}*/
long CEduTeacher::OnSexLoadData(){
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
/*void CEduTeacher::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTeacher::OnAddressChange(){
	
} */
/*void CEduTeacher::OnAddressSetfocus(){
	
} */
/*void CEduTeacher::OnAddressKillfocus(){
	
} */
int CEduTeacher::OnAddressCheckValue(){
	return 0;
} 
void CEduTeacher::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnPositionSelendok(){
	 
}
/*void CEduTeacher::OnPositionSetfocus(){
	
}*/
/*void CEduTeacher::OnPositionKillfocus(){
	
}*/
long CEduTeacher::OnPositionLoadData(){
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
/*void CEduTeacher::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduTeacher::OnPhoneChange(){
	
} */
/*void CEduTeacher::OnPhoneSetfocus(){
	
} */
/*void CEduTeacher::OnPhoneKillfocus(){
	
} */
int CEduTeacher::OnPhoneCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnCardIDChange(){
	
} */
/*void CEduTeacher::OnCardIDSetfocus(){
	
} */
/*void CEduTeacher::OnCardIDKillfocus(){
	
} */
int CEduTeacher::OnCardIDCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnTechNiqueChange(){
	
} */
/*void CEduTeacher::OnTechNiqueSetfocus(){
	
} */
/*void CEduTeacher::OnTechNiqueKillfocus(){
	
} */
int CEduTeacher::OnTechNiqueCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnCertificateChange(){
	
} */
/*void CEduTeacher::OnCertificateSetfocus(){
	
} */
/*void CEduTeacher::OnCertificateKillfocus(){
	
} */
int CEduTeacher::OnCertificateCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnWorkUnitChange(){
	
} */
/*void CEduTeacher::OnWorkUnitSetfocus(){
	
} */
/*void CEduTeacher::OnWorkUnitKillfocus(){
	
} */
int CEduTeacher::OnWorkUnitCheckValue(){
	return 0;
} 
/*void CEduTeacher::OnNoteChange(){
	
} */
/*void CEduTeacher::OnNoteSetfocus(){
	
} */
/*void CEduTeacher::OnNoteKillfocus(){
	
} */
int CEduTeacher::OnNoteCheckValue(){
	return 0;
} 
void CEduTeacher::Oncontrol_25DblClick(){
	
} 
void CEduTeacher::Oncontrol_25SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTeacher::Oncontrol_25DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEduTeacher::Oncontrol_25LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndcontrol_25.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_25.AddItems(
		rs.MoveNext();
	}
	m_wndcontrol_25.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CEduTeacher::OnSearchNameChange(){
	
} */
/*void CEduTeacher::OnSearchNameSetfocus(){
	
} */
/*void CEduTeacher::OnSearchNameKillfocus(){
	
} */
int CEduTeacher::OnSearchNameCheckValue(){
	return 0;
} 
void CEduTeacher::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduTeacher::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduTeacher::OnAddEduTeacher(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduTeacher::OnEditEduTeacher(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduTeacher::OnDeleteEduTeacher(){
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
 		OnCancelEduTeacher();
 	}
	return 0;
}
int CEduTeacher::OnSaveEduTeacher(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_teacherTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_teacherTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduTeacherListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduTeacher::OnCancelEduTeacher(){
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
int CEduTeacher::OnEduTeacherListLoadData(){
	return 0;
}
