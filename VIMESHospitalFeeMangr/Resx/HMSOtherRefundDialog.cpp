#include "HMSOtherRefundDialog.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOtherRefundDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnYOBCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOtherRefundDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSexAddNew();
}*/
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSOtherRefundDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherRefundDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSOtherRefundDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSOtherRefundDialog *pVw = (CHMSOtherRefundDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOtherRefundDialog *pVw = (CHMSOtherRefundDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSOtherRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherRefundDialog*)pWnd)->OnAddHMSOtherRefundDialog();
} 
static int _OnEditHMSOtherRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherRefundDialog*)pWnd)->OnEditHMSOtherRefundDialog();
} 
static int _OnDeleteHMSOtherRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherRefundDialog*)pWnd)->OnDeleteHMSOtherRefundDialog();
} 
static int _OnSaveHMSOtherRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherRefundDialog*)pWnd)->OnSaveHMSOtherRefundDialog();
} 
static int _OnCancelHMSOtherRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherRefundDialog*)pWnd)->OnCancelHMSOtherRefundDialog();
} 
CHMSOtherRefundDialog::CHMSOtherRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
CHMSOtherRefundDialog::~CHMSOtherRefundDialog(){
}
void CHMSOtherRefundDialog::OnCreateComponents(){
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 455, 210);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 450, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 450, 85); 
	m_wndYOBLabel.Create(this, _T("Yob"), 10, 89, 110, 114);
	m_wndYOB.Create(this,115, 90, 240, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 245, 90, 345, 115);
	m_wndSex.Create(this,350, 90, 450, 115); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 120, 110, 145);
	m_wndSerialNo.Create(this,115, 120, 240, 145); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 120, 345, 145);
	m_wndReceiptNo.Create(this,350, 120, 450, 145); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 150, 110, 175);
	m_wndReceiptDate.Create(this,115, 150, 240, 175); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 150, 345, 175);
	m_wndAmount.Create(this,350, 150, 450, 175); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 180, 110, 205);
	m_wndDescription.Create(this,115, 180, 450, 205); 
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 10, 215, 110, 240);
	m_wndOK.Create(this, _T("&Save"), 280, 215, 365, 240);
	m_wndCancel.Create(this, _T("&Close"), 370, 215, 455, 240);

}
void CHMSOtherRefundDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYOB.SetLimitText(16);
	m_wndYOB.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	m_wndSerialNo.SetLimitText(1024);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(1024);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOtherRefundDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
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
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSOtherRefundDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSOtherRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOtherRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOtherRefundDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();
	m_nYOB=0;
	m_szSexKey.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_bPrintReceipt=FALSE;

}
int CHMSOtherRefundDialog::SetMode(int nMode){
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
void CHMSOtherRefundDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherRefundDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSOtherRefundDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSOtherRefundDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSOtherRefundDialog::OnDepartmentLoadData(){
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
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOtherRefundDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOtherRefundDialog::OnPatientNameChange(){
	
} */
/*void CHMSOtherRefundDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnPatientNameKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSOtherRefundDialog::OnYOBChange(){
	
} */
/*void CHMSOtherRefundDialog::OnYOBSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnYOBKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnYOBCheckValue(){
	return 0;
} 
void CHMSOtherRefundDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherRefundDialog::OnSexSelendok(){
	 
}
/*void CHMSOtherRefundDialog::OnSexSetfocus(){
	
}*/
/*void CHMSOtherRefundDialog::OnSexKillfocus(){
	
}*/
long CHMSOtherRefundDialog::OnSexLoadData(){
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
/*void CHMSOtherRefundDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOtherRefundDialog::OnSerialNoChange(){
	
} */
/*void CHMSOtherRefundDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnSerialNoKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSOtherRefundDialog::OnReceiptNoChange(){
	
} */
/*void CHMSOtherRefundDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSOtherRefundDialog::OnReceiptDateChange(){
	
} */
/*void CHMSOtherRefundDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSOtherRefundDialog::OnAmountChange(){
	
} */
/*void CHMSOtherRefundDialog::OnAmountSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnAmountKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSOtherRefundDialog::OnDescriptionChange(){
	
} */
/*void CHMSOtherRefundDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSOtherRefundDialog::OnDescriptionKillfocus(){
	
} */
int CHMSOtherRefundDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSOtherRefundDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSOtherRefundDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherRefundDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOtherRefundDialog::OnAddHMSOtherRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOtherRefundDialog::OnEditHMSOtherRefundDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOtherRefundDialog::OnDeleteHMSOtherRefundDialog(){
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
 		OnCancelHMSOtherRefundDialog();
 	}
	return 0;
}
int CHMSOtherRefundDialog::OnSaveHMSOtherRefundDialog(){
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
 		//OnHMSOtherRefundDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOtherRefundDialog::OnCancelHMSOtherRefundDialog(){
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
int CHMSOtherRefundDialog::OnHMSOtherRefundDialogListLoadData(){
	return 0;
}
