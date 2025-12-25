#include "HMSInpatientChargeFeeDialog.h"
#include "MainFrm.h"
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDeleteItem();
} 
static long _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListLoadData();
} 
static void _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListDblClick();
} 
static void _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListDeleteItem();
} 
static void _OnDeptFindSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientChargeFeeDialog* )pWnd)->OnDeptFindSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptFindSelendokFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDeptFindSelendok();
}
/*static void _OnDeptFindSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDeptFindKillfocus();
}*/
/*static void _OnDeptFindKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDeptFindKillfocus();
}*/
static long _OnDeptFindLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnDeptFindLoadData();
}
/*static void _OnDeptFindAddNewFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDeptFindAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnGroupSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnGroupSelect();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnRecordNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientChargeFeeDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnAgeCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientChargeFeeDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSexAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnAddHMSInpatientChargeFeeDialog();
} 
static int _OnEditHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnEditHMSInpatientChargeFeeDialog();
} 
static int _OnDeleteHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnDeleteHMSInpatientChargeFeeDialog();
} 
static int _OnSaveHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSaveHMSInpatientChargeFeeDialog();
} 
static int _OnCancelHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnCancelHMSInpatientChargeFeeDialog();
} 
CHMSInpatientChargeFeeDialog::CHMSInpatientChargeFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSInpatientChargeFeeDialog::~CHMSInpatientChargeFeeDialog(){
}
void CHMSInpatientChargeFeeDialog::OnCreateComponents(){
	m_wndGroupTest.Create(this, _T("Group Fee"), 5, 5, 274, 575);
	m_wndGroupPatient.Create(this, _T("Infromation Patient"), 280, 460, 985, 575);
	m_wndTestList.Create(this,279, 5, 984, 210); 
	m_wndParaclinicalList.Create(this,10, 30, 270, 570); 
	m_wndDeptFindLabel.Create(this, _T("Perform Dept"), 280, 215, 380, 240);
	m_wndDeptFind.Create(this,385, 215, 625, 240); 
	m_wndSearchLabel.Create(this, _T("&Search"), 630, 215, 700, 240);
	m_wndSearch.Create(this,705, 215, 860, 240); 
	m_wndGroup.Create(this, _T("Group Test"), 865, 215, 985, 240);
	m_wndSelectList.Create(this,280, 245, 985, 455); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 285, 485, 385, 510);
	m_wndDocumentNo.Create(this,390, 485, 490, 510); 
	m_wndRecordNo.Create(this,495, 485, 595, 510); 
	m_wndDepartmentLabel.Create(this, _T("&Department"), 600, 485, 688, 510);
	m_wndDepartment.Create(this,693, 485, 983, 510); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 285, 515, 385, 540);
	m_wndPatientName.Create(this,390, 515, 595, 540); 
	m_wndAgeLabel.Create(this, _T("Age"), 600, 515, 688, 540);
	m_wndAge.Create(this,693, 515, 763, 540); 
	m_wndSexLabel.Create(this, _T("Sex"), 768, 515, 858, 540);
	m_wndSex.Create(this,863, 515, 983, 540); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 285, 544, 385, 569);
	m_wndDescription.Create(this,390, 544, 983, 569); 
	m_wndApply.Create(this, _T("&Apply"), 780, 580, 880, 605);
	m_wndCancel.Create(this, _T("&Cancel"), 885, 580, 985, 605);

}
void CHMSInpatientChargeFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDeptFind.SetCheckValue(true);
	m_wndDeptFind.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(16);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 30);


	m_wndDeptFind.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptFind.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSelectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 30);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSInpatientChargeFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
	m_wndParaclinicalList.AddEvent(1, _T("Delete"), _OnParaclinicalListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptFind.SetEvent(WE_SELENDOK, _OnDeptFindSelendokFnc);
	//m_wndDeptFind.SetEvent(WE_SETFOCUS, _OnDeptFindSetfocusFnc);
	//m_wndDeptFind.SetEvent(WE_KILLFOCUS, _OnDeptFindKillfocusFnc);
	m_wndDeptFind.SetEvent(WE_SELCHANGE, _OnDeptFindSelectChangeFnc);
	m_wndDeptFind.SetEvent(WE_LOADDATA, _OnDeptFindLoadDataFnc);
	//m_wndDeptFind.SetEvent(WE_ADDNEW, _OnDeptFindAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.AddEvent(1, _T("Delete"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
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
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInpatientChargeFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDeptFind.GetDlgCtrlID(), m_szDeptFindKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_nRecordNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSInpatientChargeFeeDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DeptFind")] =  m_szDeptFindKey;
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("RecordNo")] =  m_nRecordNo;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Age")] =  m_szAge;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("DeptFind")].GetValue(m_szDeptFindKey);
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("RecordNo")].GetValue(m_nRecordNo);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Age")].GetValue(m_szAge);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSInpatientChargeFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInpatientChargeFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInpatientChargeFeeDialog::SetDefaultValues(){

	m_szDeptFindKey.Empty();
	m_szSearch.Empty();
	m_nDocumentNo=0;
	m_nRecordNo=0;
	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szDescription.Empty();

}
int CHMSInpatientChargeFeeDialog::SetMode(int nMode){
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
void CHMSInpatientChargeFeeDialog::OnTestListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInpatientChargeFeeDialog::OnParaclinicalListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnParaclinicalListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnParaclinicalListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndParaclinicalList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInpatientChargeFeeDialog::OnDeptFindSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnDeptFindSelendok(){
	 
}
/*void CHMSInpatientChargeFeeDialog::OnDeptFindSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnDeptFindKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnDeptFindLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptFind.IsSearchKey() && !m_szDeptFindKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptFindKey
};
	m_wndDeptFind.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptFind.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInpatientChargeFeeDialog::OnDeptFindAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientChargeFeeDialog::OnSearchChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnSearchSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnSearchKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSInpatientChargeFeeDialog::OnGroupSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnSelectListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnSelectListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), NULL);
		rs.MoveNext();
	}
	m_wndSelectList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSInpatientChargeFeeDialog::OnRecordNoChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnRecordNoKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnRecordNoCheckValue(){
	return 0;
} 
void CHMSInpatientChargeFeeDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSInpatientChargeFeeDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnDepartmentLoadData(){
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
/*void CHMSInpatientChargeFeeDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientChargeFeeDialog::OnPatientNameChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnPatientNameKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSInpatientChargeFeeDialog::OnAgeChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnAgeSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnAgeKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnAgeCheckValue(){
	return 0;
} 
void CHMSInpatientChargeFeeDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnSexSelendok(){
	 
}
/*void CHMSInpatientChargeFeeDialog::OnSexSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnSexKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnSexLoadData(){
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
/*void CHMSInpatientChargeFeeDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDescriptionChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDescriptionKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSInpatientChargeFeeDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnAddHMSInpatientChargeFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInpatientChargeFeeDialog::OnEditHMSInpatientChargeFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInpatientChargeFeeDialog::OnDeleteHMSInpatientChargeFeeDialog(){
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
 		OnCancelHMSInpatientChargeFeeDialog();
 	}
	return 0;
}
int CHMSInpatientChargeFeeDialog::OnSaveHMSInpatientChargeFeeDialog(){
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
 		//OnHMSInpatientChargeFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInpatientChargeFeeDialog::OnCancelHMSInpatientChargeFeeDialog(){
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
int CHMSInpatientChargeFeeDialog::OnHMSInpatientChargeFeeDialogListLoadData(){
	return 0;
}
