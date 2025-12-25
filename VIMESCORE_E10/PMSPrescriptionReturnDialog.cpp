#include "PMSPrescriptionReturnDialog.h"
#include "MainFrame_E10.h"
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnDocumentNoCheckValue();
}

static int _OnReturnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd->GetParent())->OnReturnQuantityCheckValue();
}
static void _OnReturnQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnReturnQuantityKillfocus();
}

/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnSexCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionReturnDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListSelectAllItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnListSelectAllItem();
}

static int _OnListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnListUnSelectAllItem();
}

static int _OnReturnListSelectAllItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListSelectAllItem();
}

static int _OnReturnListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListUnSelectAllItem();
}

static void _OnRemoveAllSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnRemoveAllSelect();
} 
static void _OnRemoveItemSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnRemoveItemSelect();
} 
static void _OnAddItemSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnAddItemSelect();
} 
static void _OnAddAllSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnAddAllSelect();
} 
static long _OnReturnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListLoadData();
} 
static void _OnReturnListDblClickFnc(CWnd *pWnd){
	((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListDblClick();
} 
static void _OnReturnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListSelectChange(nOldItem, nNewItem);
} 
static int _OnReturnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnReturnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSPrescriptionReturnDialog *pVw = (CPMSPrescriptionReturnDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSPrescriptionReturnDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnAddPMSPrescriptionReturnDialog();
} 
static int _OnEditPMSPrescriptionReturnDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnEditPMSPrescriptionReturnDialog();
} 
static int _OnDeletePMSPrescriptionReturnDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnDeletePMSPrescriptionReturnDialog();
} 
static int _OnSavePMSPrescriptionReturnDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnSavePMSPrescriptionReturnDialog();
} 
static int _OnCancelPMSPrescriptionReturnDialogFnc(CWnd *pWnd){
	 return ((CPMSPrescriptionReturnDialog*)pWnd)->OnCancelPMSPrescriptionReturnDialog();
} 
static long _OnDescriptionLoadDataFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnDescriptionLoadData();
}
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPMSPrescriptionReturnDialog *)pWnd)->OnDescriptionCheckValue();
}
CPMSPrescriptionReturnDialog::CPMSPrescriptionReturnDialog(CWnd *pParent, int nMode, CString szInpatient):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nOrderID = 0;
	m_szInPatient = szInpatient;
}
CPMSPrescriptionReturnDialog::~CPMSPrescriptionReturnDialog(){
}
void CPMSPrescriptionReturnDialog::OnCreateComponents(){
	m_wndReturnInformation.Create(this, _T("Return Information"), 5, 350, 800, 531);
	m_wndPatientProfiles.Create(this, _T("Patient Profiles"), 5, 5, 800, 90);
	m_wndDepartment.Create(this,485, 29, 795, 54); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 110, 55);
	m_wndItemInformation.Create(this, _T("Item Information"), 5, 95, 800, 315);
	m_wndDocumentNo.Create(this,115, 30, 215, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 380, 30, 480, 55);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 375, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 380, 60, 480, 85);
	m_wndAge.Create(this,485, 60, 585, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 590, 60, 690, 85);
	m_wndSex.Create(this,695, 60, 795, 85); 
	m_wndList.Create(this,10, 120, 795, 310); 
	m_wndRemoveAll.Create(this, _T(""), 735, 320, 760, 345);
	m_wndRemoveAll.SetImageID(IDR_ARROW_UP);
//	m_wndRemoveItem.Create(this, _T("<"), 540, 320, 620, 345);
//	m_wndAddItem.Create(this, _T(">"), 625, 320, 705, 345);
	m_wndAddAll.Create(this, _T(""), 765, 320, 790, 345);
	m_wndAddAll.SetImageID(IDR_ARROW_DOWN);
	m_wndReturnList.Create(this,10, 377, 795, 528); 
	m_wndApply.Create(this, _T("&Apply"), 614, 576, 704, 601);
	m_wndClose.Create(this, _T("&Close"), 709, 576, 799, 601);
	m_wndDescriptionLael.Create(this, _T("Lý do trả lại"), 5, 538, 99, 563);
	m_wndDescription.Create(this,104, 538, 795, 563); 

}
void CPMSPrescriptionReturnDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDepartment.SetLimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndAge.SetLimitText(35);
	m_wndSex.SetLimitText(35);


	m_wndList.SetCheckBox(TRUE);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0);	//product_item_id
	m_wndList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(3, _T("Uom"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Prod.Country"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Lot No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Exp Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(10, _T(""), CFMT_NUMBER, 0);	//qtyorder
	m_wndList.InsertColumn(11, _T(""), CFMT_NUMBER, 0);	//order_id
	m_wndList.InsertColumn(12, _T(""), CFMT_TEXT, 0);	//deptid
	
	m_wndReturnList.SetCheckBox(TRUE);
	m_wndReturnList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndReturnList.InsertColumn(1, _T(""), CFMT_TEXT, 0);	//product_item_id
	m_wndReturnList.InsertColumn(2, _T("Item Name"), CFMT_TEXT, 175);
	m_wndReturnList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndReturnList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndReturnList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 80);
	m_wndReturnList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndReturnList.InsertColumn(7, _T("Prod.Country"), CFMT_TEXT, 90);
	m_wndReturnList.InsertColumn(8, _T("Lot No"), CFMT_TEXT, 80);
	m_wndReturnList.InsertColumn(9, _T("Exp Date"), CFMT_DATE, 80);
	m_wndReturnList.InsertColumn(10, _T(""), CFMT_NUMBER, 0);
	m_wndReturnList.InsertColumn(11, _T(""), CFMT_NUMBER, 0); //order_id
	m_wndReturnList.InsertColumn(12, _T(""), CFMT_TEXT, 0); //deptid
	m_wndDescription.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescription.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndDescription.ModifyStyle(WS_TABSTOP, 0);
	

	m_wndReturnList.SetEditLabel(4, GUI_NUMBERCTRL);
	m_wndDocumentNo.SetNotEmpty(true);
	m_wndPatientName.SetReadOnly(true);
	m_wndAge.SetReadOnly(true);
	m_wndSex.SetReadOnly(true);
	m_wndDepartment.SetReadOnly(true);
	m_wndAddAll.ModifyStyle(WS_TABSTOP, 0);
//	m_wndAddItem.ModifyStyle(WS_TABSTOP, 0);
	m_wndRemoveAll.ModifyStyle(WS_TABSTOP, 0);
//	m_wndRemoveItem.ModifyStyle(WS_TABSTOP, 0);
	m_wndDescription.SetCheckValue(true);


	m_hms_pharmareturnorderTbl.SetTableName(_T("hms_pharmareturnorder"));
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_ORG_ID"), dfText, 20); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_USER_ID"), dfText, 20); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_DEPTID"), dfText, 7); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_DOCNO"), dfLong); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_ORDERID"), dfLong); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_STORAGE_ID"), dfInteger); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_PRODUCT_ITEM_ID"), dfLong); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_QTYORDER"), dfFloat); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_QTYRETURN"), dfFloat); 
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_UNITPRICE"), dfDouble);
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_DOCTYPE"), dfText, 5);
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_DESC"), dfText, 3);
	m_hms_pharmareturnorderTbl.AddField(_T("HPO_INPATIENT"), dfText); 



}
void CPMSPrescriptionReturnDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("UnSelect All"), _OnListUnSelectAllItemFnc);

	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndRemoveAll.SetEvent(WE_CLICK, _OnRemoveAllSelectFnc);
//	m_wndRemoveItem.SetEvent(WE_CLICK, _OnRemoveItemSelectFnc);
//	m_wndAddItem.SetEvent(WE_CLICK, _OnAddItemSelectFnc);
	m_wndAddAll.SetEvent(WE_CLICK, _OnAddAllSelectFnc);
	m_wndReturnList.SetEvent(WE_SELCHANGE, _OnReturnListSelectChangeFnc);
	m_wndReturnList.SetEvent(WE_LOADDATA, _OnReturnListLoadDataFnc);
	m_wndReturnList.SetEvent(WE_DBLCLICK, _OnReturnListDblClickFnc);
	//m_wndReturnList.AddEvent(1, _T("Delete"), _OnReturnListDeleteItemFnc, 0);
	m_wndReturnList.AddEvent(1, _T("Select All"), _OnReturnListSelectAllItemFnc);
	m_wndReturnList.AddEvent(0, _T("-"));
	m_wndReturnList.AddEvent(2, _T("UnSelect All"), _OnReturnListUnSelectAllItemFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);

	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndReturnList.GetEditControl(4);
	if(pCtrl){
		pCtrl->SetCheckValue(TRUE);
		pCtrl->SetEvent(WE_CHECKVALUE, _OnReturnQuantityCheckValueFnc);
		pCtrl->SetEvent(WE_KILLFOCUS, _OnReturnQuantityKillfocusFnc);
		m_pCtrl = pCtrl;
	}
	GetDataToScreen();
	SetMode(GetMode());

}
void CPMSPrescriptionReturnDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);

}
void CPMSPrescriptionReturnDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	szSQL.Format(_T(" SELECT trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                               AS pname,") \
_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
_T("   HMS_GETSEX(hp_sex)                            AS sex,") \
_T("   hd_admitdept                                  AS departmentid") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno=hp_patientno)") \
_T(" WHERE hd_docno =%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	

	SetDefaultValues();
	if(!rs.IsEOF()){
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("age"), m_szAge);
		rs.GetValue(_T("sex"), m_szSex);
		rs.GetValue(_T("departmentid"), m_szDepartment);
	}
	OnListLoadData();
	m_wndReturnList.DeleteAllItems();
	UpdateData(FALSE);

}
void CPMSPrescriptionReturnDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSPrescriptionReturnDialog::SetDefaultValues(){

	m_szDepartment.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();

}
int CPMSPrescriptionReturnDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndDocumentNo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndDocumentNo.EnableWindow(FALSE);
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
/*void CPMSPrescriptionReturnDialog::OnDepartmentChange(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnDepartmentSetfocus(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnDepartmentKillfocus(){
	
} */
int CPMSPrescriptionReturnDialog::OnDepartmentCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionReturnDialog::OnDocumentNoChange(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnDocumentNoSetfocus(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnDocumentNoKillfocus(){
	
} */
int CPMSPrescriptionReturnDialog::OnDocumentNoCheckValue(){
	GetDataToScreen();
	return 1;
	return 0;
} 
/*void CPMSPrescriptionReturnDialog::OnPatientNameChange(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnPatientNameSetfocus(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnPatientNameKillfocus(){
	
} */
int CPMSPrescriptionReturnDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionReturnDialog::OnAgeChange(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnAgeSetfocus(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnAgeKillfocus(){
	
} */
int CPMSPrescriptionReturnDialog::OnAgeCheckValue(){
	return 0;
} 
/*void CPMSPrescriptionReturnDialog::OnSexChange(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnSexSetfocus(){
	
} */
/*void CPMSPrescriptionReturnDialog::OnSexKillfocus(){
	
} */
int CPMSPrescriptionReturnDialog::OnSexCheckValue(){
	return 0;
} 
void CPMSPrescriptionReturnDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_wndReturnList.AddItems(
		m_wndList.GetItemText(nSel, 0),
		m_wndList.GetItemText(nSel, 1),
		m_wndList.GetItemText(nSel, 2),
		m_wndList.GetItemText(nSel, 3),
		m_wndList.GetItemText(nSel, 4),
		m_wndList.GetItemText(nSel, 5),
		m_wndList.GetItemText(nSel, 6),
		m_wndList.GetItemText(nSel, 7),
		m_wndList.GetItemText(nSel, 8),
		m_wndList.GetItemText(nSel, 9),
		m_wndList.GetItemText(nSel, 10),
		m_wndList.GetItemText(nSel, 11),
		m_wndList.GetItemText(nSel, 12),
		NULL);
	m_wndReturnList.EndLoad();
	m_wndList.DeleteItem(nSel);

} 
long CPMSPrescriptionReturnDialog::OnDescriptionLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDescription.IsSearchKey() && !m_szDescriptionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szDescriptionKey);
	};
	m_wndDescription.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ss_code AS id,") \
				_T("  ss_desc      AS name") \
				_T(" FROM sys_sel") \
				_T(" WHERE ss_id ='hms_refund_drug_desc'") \
				_T(" order by ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescription.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
void CPMSPrescriptionReturnDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionReturnDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}

int CPMSPrescriptionReturnDialog::OnListSelectAllItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	 return 0;
}
int CPMSPrescriptionReturnDialog::OnListUnSelectAllItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	 return 0;
}

long CPMSPrescriptionReturnDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szItem;
	m_wndList.BeginLoad(); 
	if(m_nOrderID > 0)
	{
		szWhere.Format(_T(" and hpo_orderid=%ld "), m_nOrderID);
	}
	szItem.Empty();
	for (int i =0; i < m_wndReturnList.GetItemCount(); i++){
		if(!szItem.IsEmpty())
			szItem += _T(",");
		szItem.AppendFormat(_T("%s"), m_wndReturnList.GetItemText(i, 1));
	}
	if(!szItem.IsEmpty())
	szWhere.AppendFormat(_T(" and hpol_product_item_id not in(%s) "), szItem);

	szSQL.Format(_T(" SELECT hpo_doctype, hpo_deptid, hpol_orderid,") \
	_T("   hpo_docno docno,") \
	_T("   hpol_product_item_id,") \
	_T("   hpol_product_id,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   hpol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   SUM(hpol_qtyissue)                AS hpol_qtyissue,") \
	_T("   SUM(hpol_qtyorder)                AS hpol_qtyorder,") \
	_T("   SUM(hpol_qtyissue*hpol_unitprice) AS hpol_amount") \
	_T(" FROM hms_pharmaretailorder_view ") \
	_T(" LEFT JOIN hms_pharmaretailorderline_view ON(hpol_orderid=hpo_orderid AND hpo_doctype = doctype) ") \
	_T(" LEFT JOIN m_productitem_view ON (product_item_id = hpol_product_item_id)") \
	_T(" WHERE hpo_docno=%ld and hpo_storage_id=%d and hpo_orderstatus='A' ") \
	_T(" and hpo_doctype IN ('PPO', 'SOO') and hpol_qtyreverse = 0 %s ") \
	_T(" GROUP BY hpo_doctype, hpo_deptid, hpol_orderid,") \
	_T("   hpo_docno,") \
	_T("   hpol_product_item_id,") \
	_T("   hpol_product_id,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   product_countryname,") \
	_T("   hpol_unitprice,") \
	_T("   product_lotno,") \
	_T("   product_expdate,") \
	_T("   hpol_line") \
	_T(" ORDER BY hpol_line "), m_nDocumentNo, m_nStorageID, szWhere);
	
	int nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	rs.GetValue(_T("hpo_doctype"), m_szDocType);
	int nIndex=1;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);

		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("hpol_product_item_id")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			rs.GetValue(_T("hpol_unitprice")), 
			rs.GetValue(_T("hpol_amount")), 
			rs.GetValue(_T("product_countryname")), 
			rs.GetValue(_T("product_lotno")), 
			rs.GetValue(_T("product_expdate")), 
			rs.GetValue(_T("hpol_qtyorder")), 
			rs.GetValue(_T("hpol_orderid")), 
			rs.GetValue(_T("hpo_deptid")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CPMSPrescriptionReturnDialog::OnRemoveAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i = m_wndReturnList.GetItemCount()-1; i >=0; i--){
		if(m_wndReturnList.GetCheck(i))
		{
			m_wndReturnList.DeleteItem(i);
		}
	}
	OnListLoadData();
} 
void CPMSPrescriptionReturnDialog::OnRemoveItemSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndReturnList.GetCurSel();
	if(nSel < 0)
		return;
	m_wndReturnList.DeleteItem(nSel);
	OnListLoadData();
} 
void CPMSPrescriptionReturnDialog::OnAddItemSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_wndReturnList.AddItems(
		m_wndList.GetItemText(nSel, 0),
		m_wndList.GetItemText(nSel, 1),
		m_wndList.GetItemText(nSel, 2),
		m_wndList.GetItemText(nSel, 3),
		m_wndList.GetItemText(nSel, 4),
		m_wndList.GetItemText(nSel, 5),
		m_wndList.GetItemText(nSel, 6),
		m_wndList.GetItemText(nSel, 7),
		m_wndList.GetItemText(nSel, 8),
		m_wndList.GetItemText(nSel, 9),
		m_wndList.GetItemText(nSel, 10),
		m_wndList.GetItemText(nSel, 11),
		m_wndList.GetItemText(nSel, 12),
		NULL);
	m_wndReturnList.EndLoad();
	m_wndList.DeleteItem(nSel);

} 
void CPMSPrescriptionReturnDialog::OnAddAllSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int nSel =0; nSel < m_wndList.GetItemCount(); nSel++)
	{
		if(m_wndList.GetCheck(nSel))
		{
			m_wndReturnList.AddItems(
			m_wndList.GetItemText(nSel, 0),
			m_wndList.GetItemText(nSel, 1),
			m_wndList.GetItemText(nSel, 2),
			m_wndList.GetItemText(nSel, 3),
			m_wndList.GetItemText(nSel, 4),
			m_wndList.GetItemText(nSel, 5),
			m_wndList.GetItemText(nSel, 6),
			m_wndList.GetItemText(nSel, 7),
			m_wndList.GetItemText(nSel, 8),
			m_wndList.GetItemText(nSel, 9),
			m_wndList.GetItemText(nSel, 10),
			m_wndList.GetItemText(nSel, 11),
			m_wndList.GetItemText(nSel, 12),
			NULL);
		}
	
	}
	m_wndReturnList.EndLoad();
	OnListLoadData();
} 
void CPMSPrescriptionReturnDialog::OnReturnListDblClick(){
	
} 
void CPMSPrescriptionReturnDialog::OnReturnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSPrescriptionReturnDialog::OnReturnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndReturnList.GetCurSel();
	if(nSel < 0)
		return 0;
	m_wndReturnList.DeleteItem(nSel);
	 return 0;
} 


int CPMSPrescriptionReturnDialog::OnReturnListSelectAllItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i =0; i < m_wndReturnList.GetItemCount(); i++){
		m_wndReturnList.SetCheck(i, true);
	}
	 return 0;
}
int CPMSPrescriptionReturnDialog::OnReturnListUnSelectAllItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i =0; i < m_wndReturnList.GetItemCount(); i++){
		m_wndReturnList.SetCheck(i, false);
	}	
	return 0;
}


long CPMSPrescriptionReturnDialog::OnReturnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndReturnList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReturnList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("ItemName")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("Prod.Country")), 
			rs.GetValue(_T("LotNo")), 
			rs.GetValue(_T("ExpDate")), NULL);
		rs.MoveNext();
	}
	m_wndReturnList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPMSPrescriptionReturnDialog::OnApplySelect()
{
	UpdateData(true);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	long nOrderID;
	long nProductItemID;
	int nQtyReturn, nQtyOrder;
	m_wndReturnList.CancelEditLabel();
	if(m_wndReturnList.GetItemCount() <= 0)
	{
		ShowMessageBox(_T("No item selected"));
		return;
	}
	if (m_szDescriptionKey.IsEmpty())
	{
		ShowMessageBox(_T("Bạn cần chọn lý do trả lại!"), MB_ICONERROR);
		return;
	}
	bool bCheck=false;
	int i = 0;
	for (i =0; i < m_wndReturnList.GetItemCount(); i++){
		nQtyReturn = str2int(m_wndReturnList.GetItemText(i, 4));
		nQtyOrder = str2int(m_wndReturnList.GetItemText(i, 10));
		if(nQtyReturn > nQtyOrder)
		{
			bCheck = true;
			break;
		}

	}
	if(bCheck){

		ShowMessageBox(_T("Return qty > order qty"));
		m_wndReturnList.SetCurSel(i);
		return;
	}

	m_hms_pharmareturnorderTbl.SetValue(_T("HPO_ORG_ID"), pMF->GetModuleID());
	m_hms_pharmareturnorderTbl.SetValue(_T("HPO_USER_ID"), pMF->GetCurrentUser());
	m_hms_pharmareturnorderTbl.SetValue(_T("HPO_DOCNO"), m_nDocumentNo);
	m_hms_pharmareturnorderTbl.SetValue(_T("HPO_INPATIENT"), m_szInPatient);
	m_hms_pharmareturnorderTbl.SetValue(_T("HPO_DESC"), m_szDescriptionKey);
	if (m_szDocType == _T("PPO"))
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_DOCTYPE"), _T("DRO"));
	else
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_DOCTYPE"), _T("RRO"));

	CString szDeptID;
	long nOID;
	double nUnitPrice;
	
	pMF->BeginTransaction();

	for (int i =0; i < m_wndReturnList.GetItemCount(); i++){
		szDeptID = m_wndReturnList.GetItemText(i, 12);
		nOrderID = str2long(m_wndReturnList.GetItemText(i, 11));_debug(_T("%ld"), nOrderID);
		nProductItemID = str2long(m_wndReturnList.GetItemText(i,1));
		nQtyReturn = str2int(m_wndReturnList.GetItemText(i, 4));
		nQtyOrder = str2int(m_wndReturnList.GetItemText(i, 10));
		nUnitPrice = str2double(m_wndReturnList.GetItemText(i, 5));
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_DEPTID"), szDeptID);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_STORAGE_ID"), m_nStorageID);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_ORDERID"),nOrderID);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_PRODUCT_ITEM_ID"),nProductItemID);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_QTYORDER"),nQtyOrder);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_QTYRETURN"),nQtyReturn);
		m_hms_pharmareturnorderTbl.SetValue(_T("HPO_UNITPRICE"),nUnitPrice);
		
		szSQL.Format(_T(" HMS_PHARMARETURNORDER_CREATE(%s) "), m_hms_pharmareturnorderTbl.FormatSQL(_T("HPO_INPATIENT")));
		nOID = str2long(pMF->ExecDML(szSQL));
		if(nOID <= 0)
		{
			//ShowMessageBox(_T("\x58\x1EA3y r\x61 l\x1ED7i khi \x64uy\x1EC7t phi\x1EBFu tr\x1EA3 l\x1EA1i"));
			pMF->Rollback();
			return;
		}

	}
	if(nOID > 0 && m_szInPatient != _T("Y"))
	{
		szSQL.Format(_T("HMS_PHARMARETURNORDER_APPROVAL(%ld) "), nOID);
		pMF->ExecDML(szSQL);

		pMF->Commit();
		CGuiDialog::OnOK();
	}
	pMF->Rollback();

	
	
} 
void CPMSPrescriptionReturnDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPMSPrescriptionReturnDialog::OnAddPMSPrescriptionReturnDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSPrescriptionReturnDialog::OnEditPMSPrescriptionReturnDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSPrescriptionReturnDialog::OnDeletePMSPrescriptionReturnDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMSPrescriptionReturnDialog();
 	}
	return 0;
}
int CPMSPrescriptionReturnDialog::OnSavePMSPrescriptionReturnDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMSPrescriptionReturnDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSPrescriptionReturnDialog::OnCancelPMSPrescriptionReturnDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMSPrescriptionReturnDialog::OnPMSPrescriptionReturnDialogListLoadData(){
	return 0;
}



int CPMSPrescriptionReturnDialog::OnReturnQuantityCheckValue(){
	int nSel = m_wndReturnList.GetCurSel();
	if(nSel < 0)
		return -1;

	int nMaxQty = str2int(m_wndReturnList.GetItemText(nSel, 10));
	CString szText;
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndReturnList.GetEditControl(4);
	m_pCtrl = pCtrl;
	if(pCtrl){
		pCtrl->GetWindowText(szText);
		if(str2int(szText) > nMaxQty)
		{
			return -1;
		}
	}
	return 0;
}


void CPMSPrescriptionReturnDialog::OnReturnQuantityKillfocus(){
	CString szText;

	int nSel = m_wndReturnList.GetCurSel();
	
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndReturnList.GetEditControl(4);

	if(pCtrl){
		pCtrl->GetWindowText(szText);
		m_wndReturnList.SetItemText(nSel, 4, szText);
	}
}
int CPMSPrescriptionReturnDialog::OnDescriptionCheckValue(){
	return 0;
}