#include ".h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((C* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((C *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((C *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnAdmitDateCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((C* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((C *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((C *)pWnd)->OnPatientNameAddNew();
}*/
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnSexCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((C *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((C *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((C *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	C *pVw = (C *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	C *pVw = (C *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFnc(CWnd *pWnd){
	 return ((C*)pWnd)->OnAdd();
} 
static int _OnEditFnc(CWnd *pWnd){
	 return ((C*)pWnd)->OnEdit();
} 
static int _OnDeleteFnc(CWnd *pWnd){
	 return ((C*)pWnd)->OnDelete();
} 
static int _OnSaveFnc(CWnd *pWnd){
	 return ((C*)pWnd)->OnSave();
} 
static int _OnCancelFnc(CWnd *pWnd){
	 return ((C*)pWnd)->OnCancel();
} 
C::C(){

	m_nDlgWidth = 678;
	m_nDlgHeight = 482;
	SetDefaultValues();
}
C::~C(){
}
void C::OnCreateComponents(){
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 475, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 110, 85);
	m_wndDocumentNo.Create(this,115, 60, 240, 85); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 245, 60, 345, 85);
	m_wndAdmitDate.Create(this,350, 60, 475, 85); 
	m_wndDepositInformation.Create(this, _T("Deposit information"), 5, 5, 480, 240);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 110, 115);
	m_wndPatientName.Create(this,115, 90, 475, 115); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 120, 110, 145);
	m_wndAge.Create(this,115, 120, 240, 145); 
	m_wndSexLabel.Create(this, _T("Sex"), 245, 120, 345, 145);
	m_wndSex.Create(this,350, 120, 475, 145); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 150, 110, 175);
	m_wndSerialNo.Create(this,115, 150, 240, 175); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 150, 345, 175);
	m_wndReceiptNo.Create(this,350, 150, 475, 175); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 180, 110, 205);
	m_wndReceiptDate.Create(this,115, 180, 240, 205); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 180, 345, 205);
	m_wndAmount.Create(this,350, 180, 475, 205); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 210, 110, 235);
	m_wndDescription.Create(this,115, 210, 475, 235); 
	m_wndSave.Create(this, _T("&Save"), 305, 245, 390, 270);
	m_wndClose.Create(this, _T("&Close"), 395, 245, 480, 270);

}
void C::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndAdmitDate.SetReadOnly(TRUE);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(35);
	m_wndAge.SetLimitText(16);
	m_wndSex.SetLimitText(16);
	m_wndSerialNo.SetLimitText(16);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptDate.SetReadOnly(TRUE);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(16);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPatientName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPatientName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void C::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void C::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void C::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void C::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void C::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nDocumentNo=0;
	m_szAdmitDate.Empty();
	m_szPatientNameKey.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();

}
int C::SetMode(int nMode){
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
void C::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void C::OnDepartmentSelendok(){
	 
}
/*void C::OnDepartmentSetfocus(){
	
}*/
/*void C::OnDepartmentKillfocus(){
	
}*/
long C::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void C::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void C::OnDocumentNoChange(){
	
} */
/*void C::OnDocumentNoSetfocus(){
	
} */
/*void C::OnDocumentNoKillfocus(){
	
} */
int C::OnDocumentNoCheckValue(){
	return 0;
} 
/*void C::OnAdmitDateChange(){
	
} */
/*void C::OnAdmitDateSetfocus(){
	
} */
/*void C::OnAdmitDateKillfocus(){
	
} */
int C::OnAdmitDateCheckValue(){
	return 0;
} 
void C::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void C::OnPatientNameSelendok(){
	 
}
/*void C::OnPatientNameSetfocus(){
	
}*/
/*void C::OnPatientNameKillfocus(){
	
}*/
long C::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && !m_szPatientNameKey.IsEmpty()){
	};
	m_wndPatientName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void C::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void C::OnAgeChange(){
	
} */
/*void C::OnAgeSetfocus(){
	
} */
/*void C::OnAgeKillfocus(){
	
} */
int C::OnAgeCheckValue(){
	return 0;
} 
/*void C::OnSexChange(){
	
} */
/*void C::OnSexSetfocus(){
	
} */
/*void C::OnSexKillfocus(){
	
} */
int C::OnSexCheckValue(){
	return 0;
} 
/*void C::OnSerialNoChange(){
	
} */
/*void C::OnSerialNoSetfocus(){
	
} */
/*void C::OnSerialNoKillfocus(){
	
} */
int C::OnSerialNoCheckValue(){
	return 0;
} 
/*void C::OnReceiptNoChange(){
	
} */
/*void C::OnReceiptNoSetfocus(){
	
} */
/*void C::OnReceiptNoKillfocus(){
	
} */
int C::OnReceiptNoCheckValue(){
	return 0;
} 
/*void C::OnReceiptDateChange(){
	
} */
/*void C::OnReceiptDateSetfocus(){
	
} */
/*void C::OnReceiptDateKillfocus(){
	
} */
int C::OnReceiptDateCheckValue(){
	return 0;
} 
/*void C::OnAmountChange(){
	
} */
/*void C::OnAmountSetfocus(){
	
} */
/*void C::OnAmountKillfocus(){
	
} */
int C::OnAmountCheckValue(){
	return 0;
} 
/*void C::OnDescriptionChange(){
	
} */
/*void C::OnDescriptionSetfocus(){
	
} */
/*void C::OnDescriptionKillfocus(){
	
} */
int C::OnDescriptionCheckValue(){
	return 0;
} 
void C::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void C::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int C::OnAdd(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int C::OnEdit(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int C::OnDelete(){
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
 		OnCancel(); 
 	}
	return 0;
}
int C::OnSave(){
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
 		//OnListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int C::OnCancel(){
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
int C::OnListLoadData(){
	return 0;
}
