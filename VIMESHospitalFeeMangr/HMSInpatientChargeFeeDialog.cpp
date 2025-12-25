#include "HMSInpatientChargeFeeDialog.h"
#include "MainFrm.h"
#include "HMSSelectionListDialog.h"

static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnQtyCheckValue();
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
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDblClick();
}
static void _OnTestListClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListClick();
}
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDeleteItem();
} 
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchChange();
}
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchCheckValue();
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

static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnRecordNoCheckValue();
} 

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
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnCloseSelect();
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
static void _OnGroupSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnGroupSelect();
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
static int _OnCloseHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnCloseHMSInpatientChargeFeeDialog();
} 

static int _OnParaclinicalListSelectCallbackFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
	return 0;
}
CHMSInpatientChargeFeeDialog::CHMSInpatientChargeFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 645;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nSel = -1;
}
CHMSInpatientChargeFeeDialog::~CHMSInpatientChargeFeeDialog(){
}
void CHMSInpatientChargeFeeDialog::OnCreateComponents(){
	m_wndGroupTest.Create(this, _T("Group Fee"), 5, 5, 274, 575);
	m_wndGroupPatient.Create(this, _T("Infromation Patient"), 280, 460, 985, 575);
	m_wndTestList.Create(this, 279, 5, 984, 210); 
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
	m_wndClose.Create(this, _T("&Cancel"), 885, 580, 985, 605);

}
void CHMSInpatientChargeFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndDeptFind.ModifyStyle(WS_TABSTOP, 0);
	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndSearch.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetInitCap(TRUE);
//	m_wndPatientName.SetReadOnly(true);
//	m_wndAge.SetReadOnly(true);
    m_wndAge.SetCheckValue(true);
	//m_wndAge.SetMinMax(0, 100);
	m_wndAge.SetLimitText(4);
//	m_wndSex.SetReadOnly(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(5);

	m_wndRecordNo.SetLimitText(15);
	m_wndRecordNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(false);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndTestList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndTestList.InsertColumn(3, _T("Serv Price"), CFMT_MONEY, 90);
	m_wndTestList.InsertColumn(4, _T("Ins Price"), CFMT_MONEY, 90);
	m_wndTestList.InsertColumn(5, _T("Dept"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(6, _T("GroupID"), CFMT_TEXT, 0);
	m_wndTestList.InsertColumn(7, _T("Itemid"), CFMT_TEXT, 0);


	m_wndSelectList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndSelectList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 70);
	m_wndSelectList.InsertColumn(4, _T("Price"), CFMT_MONEY, 90);
	m_wndSelectList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndSelectList.InsertColumn(6, _T("GroupID"), CFMT_TEXT, 0);
	m_wndSelectList.InsertColumn(7, _T("ItemId"), CFMT_TEXT, 0);


//	m_wndSelectList.SetEditLabel(3,GUI_NUMBERCTRL);
	//m_wndSelectList.SetEditLabel(4,GUI_NUMBERCTRL);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);


	m_wndDeptFind.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeptFind.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	//hms_patient: thong tin chinh cua benh nhan
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_docno"), dfLong); 	
	m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 1); 

	
	// hms_fee_invoice
	m_hms_fee_invoieceTbl.SetTableName(_T("hms_fee_invoice"));
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 15);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DEPTID"),dfText, 7);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DOCNO"), dfLong); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_TYPE"), dfText, 1); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STAFF"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DESC"), dfText, 254); 		
	m_hms_fee_invoieceTbl.AddField(_T("HFE_AMOUNT"), dfDouble); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATPAID"), dfDouble);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_SERIALNO"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_RECEIPTNO"), dfLong);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_OBJECTID"), dfInteger);


// hms_fee
	m_hms_feeTbl.SetTableName(_T("hms_fee"));
	m_hms_feeTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_DEPTID"),dfText, 7);
	m_hms_feeTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_REFIDX"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_INSINVOICE"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("HFE_TYPE"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("HFE_GROUP"), dfText, 7); 
	m_hms_feeTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("HFE_DESC"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("HFE_UNIT"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_ITEMID"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("HFE_QUANTITY"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_UNITPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_INSPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_POLPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_COST"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_INSPAID"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_DISCOUNT"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_DIFFCOST"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_DIFFPAID"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_PATPAID"), dfDouble); 
	


}


void CHMSInpatientChargeFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParaclinicalList.SetCallback(_OnParaclinicalListSelectCallbackFnc);
//	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
//	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
//	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
//	m_wndParaclinicalList.AddEvent(1, _T("Delete"), _OnParaclinicalListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.SetEvent(WE_CLICK, _OnTestListClickFnc);
//	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.AddEvent(1, _T("Delete Fee Items"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
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
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDeptFind.SetEvent(WE_SELENDOK, _OnDeptFindSelendokFnc);
	//m_wndDeptFind.SetEvent(WE_SETFOCUS, _OnDeptFindSetfocusFnc);
	//m_wndDeptFind.SetEvent(WE_KILLFOCUS, _OnDeptFindKillfocusFnc);
	m_wndDeptFind.SetEvent(WE_SELCHANGE, _OnDeptFindSelectChangeFnc);
	m_wndDeptFind.SetEvent(WE_LOADDATA, _OnDeptFindLoadDataFnc);
	//m_wndDeptFind.SetEvent(WE_ADDNEW, _OnDeptFindAddNewFnc);
	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);

	//SetMode(VM_NONE);

	m_szDoctorKey = pMF->m_szDoctor;
	
	
	SetMode(VM_EDIT);
	OnHMSInpatientChargeFeeDialogListLoadData();


}
void CHMSInpatientChargeFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_nAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSInpatientChargeFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInpatientChargeFeeDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSurName, szMidName, szFirstName, szSQL;
	
	SplitName(m_szPatientName, szSurName, szMidName, szFirstName);	
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
//Lay ma benh nhan moi	
	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
	m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName); 
	m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName); 
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate); 
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey); 

	
	
// Bang hms_doc
	m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
	m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 
	m_hms_docTbl.SetValue(_T("hd_status"), _T("O")); 	
	m_hms_docTbl.SetValue(_T("hd_admitdept"), m_szDepartmentKey);
	m_hms_docTbl.SetValue(_T("hd_admitdate"), pMF->GetSysDateTime()); 

	//hms_fee

	m_hms_feeTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_feeTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_feeTbl.SetValue(_T("HFE_DEPTID"),m_szDepartmentKey);
	m_hms_feeTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_feeTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);	
	m_hms_feeTbl.SetValue(_T("HFE_DATE"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("HFE_STATUS"), _T("O"));
	m_hms_feeTbl.SetValue(_T("HFE_TYPE"), _T("E")); 
	m_hms_feeTbl.SetValue(_T("hfe_class"), _T("X")); 

}
void CHMSInpatientChargeFeeDialog::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
//	if(m_bAddNew) m_nDocumentNo=0;
	m_nDocumentNo = 0;
	m_szRecordNo.Empty();
	m_szPatientName.Empty();
	m_nAge = 0;
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szDeptFindKey.Empty();
	m_szSearch.Empty();
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1); 
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
void CHMSInpatientChargeFeeDialog::OnParaclinicalListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	int nSel = m_wndParaclinicalList.GetCurSel();
	
	if(nNewItem < 0 || nNewItem >= m_wndParaclinicalList.GetCount())
		return;
	m_szGroup = m_arGroup[nNewItem];
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnTestListLoadData();
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
	m_wndParaclinicalList.DeleteAllItems(); 
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
void CHMSInpatientChargeFeeDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnDepartmentSelendok(){
	
}
/*void CHMSInpatientChargeFeeDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("WHERE sd_id = '%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSInpatientChargeFeeDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
#include "GuiInputDataDialog.h"
void CHMSInpatientChargeFeeDialog::OnTestListDblClick(){

	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID, szOldID, tmpStr;
	bool bExisting=false;
	double	nPrice=0;
	
	nPrice = ToDouble(m_wndTestList.GetItemText(nSel, 3));
	
	if(nPrice <= 0)
	{
		CGuiInputDataDialog dlg(this, true);
		dlg.m_wndValueLabel.SetWindowText(_T("Price"));
		if(dlg.DoModal()== IDOK){
			tmpStr.Format(_T("%.0f"), dlg.m_nNumberValue);
			nPrice = dlg.m_nNumberValue;
			m_wndTestList.SetItemText(nSel, 3, tmpStr);			
		}
		else
			return;
	}
	
	szID = m_wndTestList.GetItemText(nSel, 7);
	bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++){
		FEEITEMDATA item = m_arItems[j];
		szOldID =item.szFeeID;
		if(szOldID == szID){
			bExisting = true;
			break;
		}
	}
	if(!bExisting)
	{
		FEEITEMDATA item;
		item.szFeeID = szID;
		item.nQty = 1;
		item.nPrice = nPrice;
		m_arItems.Add(item);
		m_wndTestList.DeleteItem(nSel);
		OnSelectListLoadData();
	}
	
} 
void CHMSInpatientChargeFeeDialog::OnTestListClick(){
	//if(!IsValidateData())
	//	return;
	/*int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID, szOldID, szName, szUnit, szGroupID, szPrice, szIdx;
	
	bool bExisting=false;

	szIdx.Format(_T("%d"), m_wndSelectList.GetItemCount()+1);
	m_wndSelectList.AddItems(szIdx,szName, szUnit, szPrice, szGroupID, szID, NULL		);*/
	//bExisting = false;
	//for (int j = 0; j < m_arItems.GetCount(); j++){
	//	szOldID = m_arItems[j];
	//	if(szOldID == szID){
	//		bExisting = true;
	//		break;
	//	}
	//}
	//if(!bExisting)
	//{
	//	m_arItems.Add(szID);
	//	m_wndTestList.DeleteItem(nSel);
	//	OnSelectListLoadData();
	//}
	
} 

void CHMSInpatientChargeFeeDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
int CHMSInpatientChargeFeeDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnTestListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szExisting;
	szWhere.Empty();
	
	UpdateData(true);
	if(!m_szDeptFindKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_deptid ='%s' "), m_szDeptFindKey);
	}

	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}

	
	//szExisting=_T("'X'");
	//for (int i =0; i < m_arItems.GetCount(); i++){
	//	szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	//}
	
	/*if(m_szGroup != _T("A0000"))
	{
		szWhere.AppendFormat(_T(" AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 "));
	}*/
	m_wndTestList.DeleteAllItems();
	m_wndTestList.BeginLoad();
	
	szSQL.Format(_T("SELECT hfl_feeid, hfl_unit,hfl_groupid, hfl_name, hfl_deptid, hfl_servprice, hfl_insprice ") \
		_T("FROM hms_fee_list ") \
		_T("WHERE hfl_groupid='%s' ") \
		_T("AND hfl_active='Y' and hfl_subgroup<>'Y' ") \
		_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null) ") \
		_T(" %s ") \
		_T("ORDER BY hfl_line, hfl_name"), m_szGroup,  szWhere);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	CString szIdx;
	int nIdx=1;
	while(!rs.IsEOF()){

		rs.GetValue(_T("hfl_servprice"), tmpStr);
		szIdx.Format(_T("%d"), nIdx++);

		m_wndTestList.AddItems(
			szIdx,
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			tmpStr,
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_deptid")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_feeid")),			
			NULL);
		rs.MoveNext();
	}

	m_wndTestList.EndLoad();
	
	return 1;
}
void CHMSInpatientChargeFeeDialog::OnSearchChange(){
	UpdateData(true);
	m_wndSearch.GetWindowText(m_szSearch);
	m_wndTestList.Search(1, m_szSearch, SEARCH_LIKE);
	//OnTestListLoadData();
//	m_wndSearch.SetFocus();
} 
/*void CHMSInpatientChargeFeeDialog::OnSearchSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnSearchKillfocus(){
	
} */

int CHMSInpatientChargeFeeDialog::OnSearchCheckValue(){
	//OnTestListLoadData();
	return 1;
}
void CHMSInpatientChargeFeeDialog::OnGroupSelect()
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_testprofile' ORDER BY cast(ss_code as integer)  "), m_szGroup);
	if(dlg.DoModal() == IDOK){
		for (int n = 0; n < dlg.m_arraySelection.GetCount(); n++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[n];
			CString szID, szOldID;
			bool bExisting=false;
			szSQL.Format(_T("SELECT htp_itemid, hfl_servprice FROM hms_testprofile LEFT JOIN hms_fee_list ON(hfl_feeid=htp_itemid) WHERE htp_profileid='%s' "), si.szID);

			rs.ExecSQL(szSQL);
			while(!rs.IsEOF()){
				rs.GetValue(_T("htp_itemid"), szID);
				bool bExisting=false;
				for (int j = 0; j < m_arItems.GetCount(); j++){
					FEEITEMDATA item = m_arItems[j];
					if(item.szFeeID == szID){
						bExisting = true;
						break;
					}
				}
				if(!bExisting)
				{
					FEEITEMDATA item;
					item.szFeeID = szID;
					item.nQty = 1;
					rs.GetValue(_T("hfl_servprice"), item.nPrice);
					m_arItems.Add(item);
				}
				rs.MoveNext();
			}
		}
		OnSelectListLoadData();
	}
}


void CHMSInpatientChargeFeeDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID, szOldID;
	bool bExisting=false;
	for (int i =0; i < m_wndTestList.GetItemCount(); i++){
		if(m_wndTestList.GetCheck(i)){
			szID = m_wndTestList.GetItemText(i, 2);
			bExisting = false;
			for (int j = 0; j < m_arItems.GetCount(); j++){
				FEEITEMDATA item = m_arItems[j];
				if(item.szFeeID == szID){
					bExisting = true;
					break;
				}
			}
			if(!bExisting)
			{
				FEEITEMDATA item;
				item.szFeeID = szID;
				item.nQty = 1;
				item.nPrice = str2double(m_wndTestList.GetItemText(i, 3));
				m_arItems.Add(item);
			}
		}
	}

	bool bChanged = false;
	for (int i = m_wndTestList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndTestList.GetCheck(i)){
			m_wndTestList.DeleteItem(i);
			bChanged = true;
		}
	}
	if(bChanged)
		OnSelectListLoadData();
}

void _OnEditCtrlCheckValueFnc(CWnd *pWnd)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnEditQuantity();
} 


void CHMSInpatientChargeFeeDialog::OnSelectListDblClick(){

	int nSel = m_wndSelectList.GetCurSel();
	if(nSel < 0) return;
	CString tmpStr, szLabel, szItemID;
	CGuiInputDataDialog dlg(this, true);
	

	dlg.m_szValueName = _T("Quantity");
	dlg.m_nNumberValue = str2double(m_wndSelectList.GetItemText(nSel, 3));
	if(dlg.DoModal()== IDOK){
		tmpStr.Format(_T("%.0f"), dlg.m_nNumberValue);
		szItemID = m_wndSelectList.GetItemText(nSel, 6);
		m_wndSelectList.SetItemText(nSel, 3, tmpStr);	
		for (int i =0; i < m_arItems.GetCount(); i++){
			FEEITEMDATA item = m_arItems[i];
			if(item.szFeeID == szItemID)
			{
				item.nQty = dlg.m_nNumberValue;
				m_arItems.SetAt(i, item);
				break;
			}
		}

	}
	OnSelectListLoadData();
	m_wndSelectList.SetCurSel(nSel);
} 
void CHMSInpatientChargeFeeDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	int nItem = m_wndSelectList.GetCurSel();
	
	if(nItem <0 ) return -1;
	
	szID = m_wndSelectList.GetItemText(nItem, 6);
	int ret = ShowMessageBox(_T("You want to delete fee items"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);	
	if(ret == IDNO)
		return -1;	
	
	for(int i=0; i< m_arItems.GetCount(); i++){
		FEEITEMDATA item = m_arItems[i];
		if(szID == item.szFeeID){			
			m_arItems.RemoveAt(i);
			break;
		}
	}	
	OnSelectListLoadData();
	m_wndSelectList.SetCurSel(nItem);
	
	
	return 0;
} 
long CHMSInpatientChargeFeeDialog::OnSelectListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szIdx, szItemID;
	CString szCode, szExisting, szGroup, szOldGroup=_T("XX"), szTmp;
	m_nGroupCost =0;
	CString szAmount;
	double nPrice = 0;
	double long nTotalAmount =0;
	int nArr[100], nArrIdx=0;
	for(int i=0; i<=100; i++)
	{
		nArr[i]=0;
	}

	if(m_arItems.GetCount() <= 0)
		return -1;

	szExisting=_T("'X'");

	for (int i = 0; i < m_arItems.GetCount(); i++)
	{
		szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	}

	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_groupid, hfl_subitem, hfl_servprice ") \
		_T("FROM hms_fee_list WHERE hfl_active='Y' and hfl_subgroup<>'Y' and (length(hfl_subitem) <= 1 or hfl_subitem is null)AND hfl_feeid in(%s) ORDER BY hfl_groupid, hfl_line, hfl_name"), szExisting);

	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	m_wndSelectList.BeginLoad();
	int nIdx=1, nItem=0;

	while(!rs.IsEOF()){

		szGroup = rs.GetValue(_T("hfl_groupid"));		
		if(szGroup != szOldGroup && !szGroup.IsEmpty())
		{
		
			szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE hfg_id='%s' "), szGroup);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
				rs2.GetValue(_T("hfg_name"), tmpStr);
			else
				tmpStr.Empty();
			
			if(m_nGroupCost > 0){
				szTmp.Format(_T("%.2f"), m_nGroupCost);
				m_wndSelectList.SetItemText(nArr[nArrIdx-1], 5, szTmp);
				nTotalAmount += m_nGroupCost;
				m_nGroupCost =0;	

			}

//<<<<<<< .mine
//			szTmp.Empty();
//
//			nItem = m_wndSelectList.AddItems(_T(""), tmpStr, _T(""),	_T(""), szTmp, szGroup,	NULL);
			nItem = m_wndSelectList.AddItems(_T(""), tmpStr,	_T(""),	_T(""), _T(""),szGroup,	NULL);

			nArr[nArrIdx]=nItem;			
	
			m_wndSelectList.SetItemBkColor(nItem, RGB(240, 240, 240));
			m_wndSelectList.SetItemTextColor(nItem, RGB(0, 0, 255));
			nArrIdx++;		
			nIdx =1;
			szOldGroup = szGroup;			
		}
		
		rs.GetValue(_T("hfl_feeid"), szItemID);		
		rs.GetValue(_T("hfl_servprice"), tmpStr);
		FEEITEMDATA item;
		for(int i =0; i< m_arItems.GetCount(); i++)
		{				
			item = m_arItems[i];
			if(item.szFeeID == szItemID)
			{
				break;
			}
		}
		double amount = item.nQty*item.nPrice;
		m_nGroupCost += amount;
		szAmount = ToString(amount);
		
		szIdx.Format(_T("%d"), nIdx++);
		m_wndSelectList.AddItems(
			szIdx,
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			ToString(item.nQty),
			ToString(item.nPrice),
			szAmount,
			rs.GetValue(_T("hfl_feeid")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_subitem")),
			NULL);
		rs.MoveNext();
	}

	if(m_nGroupCost > 0)
	{
		tmpStr.Format(_T("%.2f"), m_nGroupCost);
		m_wndSelectList.SetItemText(nItem, 5, tmpStr);
		nTotalAmount += m_nGroupCost;
		m_nGroupCost =0;
	}
	
	if(nTotalAmount > 0){		
		tmpStr.Format(_T("%.2f"), nTotalAmount);
		CString szLabel;
		TranslateString(_T("Total Amount"), szLabel);
		nItem = m_wndSelectList.AddItems(_T(""), szLabel,	_T(""),	_T(""), _T(""), tmpStr,szGroup,	NULL);
		m_wndSelectList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
		m_wndSelectList.SetItemTextColor(nItem,COLOR_WHITE, FALSE);

	}
	m_wndSelectList.AddItems(_T(""), _T(""),	_T(""),	_T(""), _T(""),szGroup,	NULL);
	m_wndSelectList.EndLoad();

	m_wndSelectList.SetCurSel(m_wndSelectList.GetItemCount()-1);
	return 0;
}
/*
void CHMSInpatientChargeFeeDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	bool bChanged = false;
	for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndSelectList.GetCheck(i)){
			szID = m_wndSelectList.GetItemText(i, 2);
			for (int j = m_arItems.GetCount()-1; j >= 0; j--)
			{
				if(szID == m_arItems[j])
				{
					m_arItems.RemoveAt(j);
					break;
				}
			}
			m_wndSelectList.DeleteItem(i);
			bChanged = true;
		}
	}
	if(bChanged){
		OnSelectListLoadData();
		OnTestListLoadData();
	}
} 
*/
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnDocumentNoKillfocus(){
	
} */

static CString _recordno=_T("");
int CHMSInpatientChargeFeeDialog::OnDocumentNoCheckValue(){
	if (m_nDocumentNo <= 0)
	{
		if (m_szRecordNo.IsEmpty())
		{
			m_bEnterPatient = true;
			m_wndPatientName.EnableWindow(true);
			m_wndAge.EnableWindow(true);
			m_wndSex.EnableWindow(true);
		}
		return 0;
	}

		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T(" SELECT hcr_docno AS docno,") \
		_T("hd_patientno as patientno, ") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname                AS pname,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
_T("   hp_sex as sex,") \
_T(" hcr_recordno as numinward, ") \
_T("   hcr_admitdate AS admitdate,") \
_T("   hcr_admitdept as deptid ") \
_T(" FROM hms_doc ") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hd_docno=hcr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno=hd_patientno)") \
_T(" WHERE hcr_docno =%ld "), 
m_nDocumentNo);
	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("patientno"), m_nPatientNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yearofbirth"), m_nAge);
		rs.GetValue(_T("sex"), m_szSexKey);
		rs.GetValue(_T("deptid"), tmpStr);
		if(m_szDepartmentKey.IsEmpty())
			m_szDepartmentKey = tmpStr;
		rs.GetValue(_T("numinward"), m_szRecordNo);
		m_wndPatientName.EnableWindow(FALSE);
		m_wndAge.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_bEnterPatient = false;
		_recordno = m_szRecordNo;
	}
	else
	{
		m_szPatientName.Empty();
		m_nAge = 0;
		m_wndPatientName.EnableWindow(TRUE);
		m_wndAge.EnableWindow(TRUE);
		m_wndSex.EnableWindow(TRUE);
		m_bEnterPatient = true;
		

	}
	UpdateData(FALSE);
	if(m_nDocumentNo > 0 && m_szPatientName.IsEmpty())
	{
		m_wndDocumentNo.SetToolTipMessage(_T("Patient not found."));
		return -1;
	}
	

	return 0;

} 

int CHMSInpatientChargeFeeDialog::OnRecordNoCheckValue(){
	if(m_szRecordNo.IsEmpty())
	{
		if(m_nDocumentNo <= 0){
			m_bEnterPatient = true;
			m_wndPatientName.EnableWindow(true);
			m_wndAge.EnableWindow(true);
			m_wndSex.EnableWindow(true);
		}

		return 0;
	}

	if(m_nDocumentNo <= 0 || _recordno != m_szRecordNo)
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL, tmpStr;
		szSQL.Format(_T(" SELECT hcr_docno AS docno, hd_patientno as patientno, ") \
	_T("   hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname                AS pname,") \
	_T("   TO_CHAR(hp_birthdate, 'YYYY') AS yearofbirth,") \
	_T("   hp_sex as sex,") \
	_T("   hcr_recordno as numinward, ") \
	_T("   hcr_admitdate AS admitdate,") \
	_T("   hcr_admitdept as deptid ") \
	_T(" FROM hms_doc ") \
	_T(" LEFT JOIN hms_clinical_record ") \
	_T(" ON(hcr_docno=hd_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno)") \
	_T(" WHERE hcr_recordno ='%s' and to_char(hcr_admitdate, 'YYYY') = to_char(sysdate, 'YYYY') "), 
	m_szRecordNo);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("patientno"), m_nPatientNo);
			rs.GetValue(_T("docno"), m_nDocumentNo);
			rs.GetValue(_T("pname"), m_szPatientName);
			rs.GetValue(_T("yearofbirth"), m_nAge);
			rs.GetValue(_T("sex"), m_szSexKey);
			rs.GetValue(_T("deptid"), tmpStr);
			if(m_szDepartmentKey.IsEmpty())
				m_szDepartmentKey = tmpStr;
			
			m_wndPatientName.EnableWindow(FALSE);
			m_wndAge.EnableWindow(FALSE);
			m_wndSex.EnableWindow(FALSE);
			m_bEnterPatient = false;
			_recordno = m_szRecordNo;
		}
		else
		{
			m_szPatientName.Empty();
			m_nAge = 0;
			m_wndPatientName.EnableWindow(TRUE);
			m_wndAge.EnableWindow(TRUE);
			m_wndSex.EnableWindow(TRUE);
			m_bEnterPatient = true;
		}
		UpdateData(FALSE);
		if(!m_szRecordNo.IsEmpty() && m_szPatientName.IsEmpty())
		{
			m_wndDocumentNo.SetToolTipMessage(_T("Patient not found."));
			return -1;
		}
	}

	return 0;
}
int CHMSInpatientChargeFeeDialog::OnPatientNameCheckValue(){
	return 0;
}

/*void CHMSInpatientChargeFeeDialog::OnAgeChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnAgeSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnAgeKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnAgeCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, tmpStr2, szAge, szYear;
	tmpStr2.Empty();
	szYear = pMF->GetSysDate().Left(4);
	

	if(m_nAge > str2int(szYear))
		return -1;

	if(m_nAge > 1900)
	{
		szSQL.Format(_T("SELECT ('%s'*365-%d*365)/365 FROM DUAL"), pMF->GetSysDate().Left(4), m_nAge);
		rs.ExecSQL(szSQL);
		tmpStr = rs.GetStringValue();
		szAge.Format(_T("%d"), m_nAge);
		if(szAge.GetLength()>= 4)
			tmpStr.Format(_T("%d"), m_nAge);
		tmpStr2.Format(_T("%s/01/01"), tmpStr.Left(4));
	}
	else if(m_nAge < 120){
		tmpStr2.Format(_T("%.4d/01/01"), str2int(szYear)-m_nAge);
	}
	else
		return -1;

	if (m_nAge == 0)
	{
		ShowMessageBox(_T("Chưa nhập tuổi hoặc năm sinh của bệnh nhân!"),MB_ICONERROR);
		return -1;
	}
	
	m_szBirthDate = tmpStr2;

	UpdateData(false);
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
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szSexKey);
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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
void CHMSInpatientChargeFeeDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	//_msg(_T("%d"),m_nAge); 
	CRecord rs(&pMF->m_db);
	CString szStatus, szDoctor;
	CString	szSQL;
	long	nOrderID=0;
	int ret=0;
	bool bConfirm = true;
	if(m_wndSelectList.GetItemCount() <= 0)
	{
		ShowMessageBox(_T("No item selected."));
		return;
	}
	if(m_bEnterPatient){
		m_wndPatientName.SetCheckValue(true);
	}
	else
	{
		m_wndPatientName.SetCheckValue(false);
	}
	if(!IsValidateData())
		return;	

	
	
	if(m_bEnterPatient)
	{
		pMF->BeginTransaction();
	
		szSQL.Format(_T("hms_getnextpatientno()"));
		m_nPatientNo = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("hms_getnextdocno()"));
		m_nDocumentNo = str2long(pMF->ExecDML(szSQL));
		
		m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
		m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
		m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 
		m_hms_docTbl.SetValue(_T("hd_object"), _T("7")); 

		szSQL = m_hms_patientTbl.GetInsertSQL();
		
		ret = pMF->ExecSQL(szSQL);
		if(ret <= 0) {
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new patient information"), MB_OK);
			return ;
		}
	

		szSQL = m_hms_docTbl.GetInsertSQL(); 

		ret = pMF->ExecSQL(szSQL); 
		if(ret <= 0) {
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new document information"), MB_OK);
			return;
		}
		pMF->Commit();

	}
	
	double nQty=0, nAmount=0,nTotalAmount=0, nPrice;
	CString tmpStr;
	long nInvoiceNo;
	long nReceiptNo;
	pMF->BeginTransaction();
	

	szSQL.Format(_T(" nextseq('%s')"),_T("hms_fee_invoice_invoiceno_asq"));
	nInvoiceNo = str2long(pMF->ExecDML(szSQL));	
	

	pMF->GetSerialInformation();
	CString szSerialNo = pMF->m_szSerialNo;
	CString szReceiptDate = pMF->m_szRecvDate;
	nReceiptNo = pMF->m_nReceiptNo;



	m_hms_fee_invoieceTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo);	 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);			
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_TYPE"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STATUS"), _T("P"));
	
	if(m_bEnterPatient)
		m_hms_fee_invoieceTbl.SetValue(_T("HFE_OBJECTID"), _T("Z"));


	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DESC"),	m_szDescription); 	
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_AMOUNT"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATPAID"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("hfe_class"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DEPTID"), m_szDepartmentKey);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STAFF"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DATE"), szReceiptDate);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_SERIALNO"), szSerialNo);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_RECEIPTNO"), nReceiptNo);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_OBJECTID"), 7);
	szSQL = m_hms_fee_invoieceTbl.GetInsertSQL();
	
	
	ret = pMF->ExecSQL(szSQL);
	
	for(int i=0; i< m_wndSelectList.GetItemCount(); i++){
		if(!m_wndSelectList.GetItemText(i, 0).IsEmpty() && !m_wndSelectList.GetItemText(i, 4).IsEmpty()){
			
			nQty = ToFloat(m_wndSelectList.GetItemText(i, 3));
			nPrice = ToFloat(m_wndSelectList.GetItemText(i, 4));
			nAmount = nQty*nPrice;
			nTotalAmount += nAmount;
			m_hms_feeTbl.SetValue(_T("HFE_DEPTID"), m_szDepartmentKey); 			
			m_hms_feeTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
			m_hms_feeTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);			
			m_hms_feeTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo);			
			m_hms_feeTbl.SetValue(_T("HFE_TYPE"), _T("X")); 
			m_hms_feeTbl.SetValue(_T("HFE_QUANTITY"), nQty); 
			m_hms_feeTbl.SetValue(_T("HFE_UNITPRICE"), nPrice); 
			m_hms_feeTbl.SetValue(_T("HFE_DESC"), m_wndSelectList.GetItemText(i, 1)); 
			m_hms_feeTbl.SetValue(_T("HFE_ITEMID"), m_wndSelectList.GetItemText(i, 6));
			m_hms_feeTbl.SetValue(_T("HFE_GROUP"), m_wndSelectList.GetItemText(i, 7)); 
			m_hms_feeTbl.SetValue(_T("HFE_COST"), nAmount);
			m_hms_feeTbl.SetValue(_T("HFE_PATPAID"), nAmount);			
			m_hms_feeTbl.SetValue(_T("HFE_STATUS"), _T("P")); 
			m_hms_feeTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser()); 
			m_hms_feeTbl.SetValue(_T("HFE_UPDATEDBY"), pMF->GetCurrentUser()); 
			m_hms_feeTbl.SetValue(_T("HFE_DATE"), pMF->m_szRecvDate); 

			szSQL = m_hms_feeTbl.GetInsertSQL(); 			
			ret = pMF->ExecSQL(szSQL); 
			if(ret <= 0) {
				pMF->Rollback();
				ShowMessageBox(_T("Can not add new other fee"), MB_OK);
				return;
			}
		}
	
	}

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_amount=%.2f, hfe_patpaid=%.2f, hfe_payment=%.2f WHERE hfe_invoiceno=%ld"),
		nTotalAmount, nTotalAmount, nTotalAmount, nInvoiceNo);
_debug(_T("%s"), szSQL);
	pMF->ExecSQL(szSQL);

	pMF->Commit();
	m_nInvoiceNo = nInvoiceNo;
	
	m_wndSelectList.DeleteAllItems();
	m_arItems.RemoveAll();
	UpdateData(FALSE);
	CGuiDialog::OnOK();
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
 		OnCloseHMSInpatientChargeFeeDialog(); 
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
int CHMSInpatientChargeFeeDialog::OnCloseHMSInpatientChargeFeeDialog(){
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
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode;
	TCHAR chOld=_T(' '), ch;
	//1: Nhom can lam sang
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active='Y' ORDER BY hfg_id "));
	
	rs.ExecSQL(szSQL);
	rs.ExecSQL(szSQL);
	m_arGroup.RemoveAll();
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfg_id"), szCode);
		ch = szCode[2];
		if(ch == _T('0'))
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			m_wndParaclinicalList.AddCaption(tmpStr);
			m_arGroup.Add(CString(_T("")));
		}
		else
		{
			m_wndParaclinicalList.Add(rs.GetValue(_T("hfg_name")), _T(""), NULL);
			m_arGroup.Add(szCode);
		}
		rs.MoveNext();
	};
	m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);


	//
	CString szNameGroup;
	m_wndParaclinicalList.AddCaption(_T("Other Fee"));
	m_arGroup.Add(CString(_T("")));

	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='B4000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();
	m_wndParaclinicalList.Add( szNameGroup, _T(""));	
	szCode =_T("B4000");
	m_arGroup.Add(szCode);
	
	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='B5000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();	
	m_wndParaclinicalList.Add(szNameGroup, _T(""));
	szCode =_T("B5000");
	m_arGroup.Add(szCode);	
	
	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='F0000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();	
	m_wndParaclinicalList.Add(szNameGroup, _T(""));	
	szCode =_T("F0000");
	m_arGroup.Add(szCode);
	

	//m_wndParaclinicalList.SetCurSel(m_wndParaclinicalList.GetCount() -1);
	OnParaclinicalListSelectChange(0, m_wndParaclinicalList.GetCount() -1);
	m_wndTestList.SetCurSel(0);
	//m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);

	return 0;
}
void CHMSInpatientChargeFeeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
void CHMSInpatientChargeFeeDialog::OnDeptFindSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnDeptFindSelendok(){
	 OnTestListLoadData();
}
/*void CHMSInpatientChargeFeeDialog::OnDeptFindSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnDeptFindKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnDeptFindLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptFind.IsSearchKey() && !m_szDeptFindKey.IsEmpty()){
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDeptFindKey);
	};
	m_wndDeptFind.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptFind.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSInpatientChargeFeeDialog::OnDeptFindAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
//void CHMSInpatientChargeFeeDialog::OnGroupSelect(){
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	
//} 

void CHMSInpatientChargeFeeDialog::OnRecalFree(){
	int nArr[100], nArrIdx=0;
	for(int i=0; i<=100; i++){
		nArr[i]=0;
	}

	for(int i = 0; i < m_wndSelectList.GetItemCount(); i++){
		if(m_wndSelectList.GetItemText(i, 0) == _T("")){
			
			nArr[nArrIdx] = i;
			nArrIdx++;
		}
	}
}


BOOL CHMSInpatientChargeFeeDialog::PreTranslateMessage(MSG* pMsg)
{
	//if (m_wndSelectList.m_hWnd == pMsg->hwnd)
	//{
	//	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2)
	//	{
	//		CGuiNumberCtrl* wndEditCtrl = (CGuiNumberCtrl*)m_wndSelectList.GetEditControl(3);

	//		if (wndEditCtrl)
	//		{
	//			//MessageBox(_T("OK"));
	//			//wndCtrl->SetCheckValue(true);
	//			//wndEditCtrl->SetEvent(WE_CHECKVALUE, _OnEditCtrlCheckValueFnc);
	//			m_nSel = m_wndSelectList.GetCurSel();
	//			_msg(_T("%d"), nSel);
	//		}

	//		return TRUE;
	//	}
	//}
	return CGuiDialog::PreTranslateMessage(pMsg);
}

void CHMSInpatientChargeFeeDialog::OnEditQuantity()
{
	int nSel = m_wndSelectList.GetCurSel();
	if (nSel < 0)
		return;
	CString szQty;
	//_msg(_T("%d"), nSel);
	szQty = m_wndSelectList.GetItemText(nSel, 3);
	//MessageBox(szQty);
}


int CHMSInpatientChargeFeeDialog::OnQtyCheckValue(){
_tprintf(_T("\r\nxxx"));
	return 0;
}