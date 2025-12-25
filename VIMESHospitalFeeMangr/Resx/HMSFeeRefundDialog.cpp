#include "HMSFeeRefundDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnPaymentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeRefundDialog* )pWnd)->OnPaymentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTypeSelendokFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeSelendok();
}
/*static void _OnPaymentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
/*static void _OnPaymentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
static long _OnPaymentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeLoadData();
}
/*static void _OnPaymentTypeAddNewFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSFeeRefundDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDialog *pVw = (CHMSFeeRefundDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDialog *pVw = (CHMSFeeRefundDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnAddHMSFeeRefundDialog();
} 
static int _OnEditHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnEditHMSFeeRefundDialog();
} 
static int _OnDeleteHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnDeleteHMSFeeRefundDialog();
} 
static int _OnSaveHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnSaveHMSFeeRefundDialog();
} 
static int _OnCancelHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnCancelHMSFeeRefundDialog();
} 
CHMSFeeRefundDialog::CHMSFeeRefundDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSFeeRefundDialog::~CHMSFeeRefundDialog(){
}
void CHMSFeeRefundDialog::OnCreateComponents(){
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 30, 345, 55);
	m_wndReceiptNo.Create(this,350, 30, 450, 55); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 60, 110, 85);
	m_wndReceiptDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 455, 150);
	m_wndAmount.Create(this,350, 60, 450, 85); 
	m_wndPaymentTypeLabel.Create(this, _T("Payment Type"), 10, 90, 110, 115);
	m_wndPaymentType.Create(this,115, 90, 450, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 110, 145);
	m_wndDescription.Create(this,115, 120, 450, 145); 
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 5, 155, 105, 180);
	m_wndOK.Create(this, _T("&Save"), 280, 155, 365, 180);
	m_wndCancel.Create(this, _T("&Close"), 370, 155, 455, 180);

}
void CHMSFeeRefundDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSerialNo.SetLimitText(1024);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(1024);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndPaymentType.SetCheckValue(true);
	m_wndPaymentType.LimitText(35);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);


	m_wndPaymentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFeeRefundDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndPaymentType.SetEvent(WE_SELENDOK, _OnPaymentTypeSelendokFnc);
	//m_wndPaymentType.SetEvent(WE_SETFOCUS, _OnPaymentTypeSetfocusFnc);
	//m_wndPaymentType.SetEvent(WE_KILLFOCUS, _OnPaymentTypeKillfocusFnc);
	m_wndPaymentType.SetEvent(WE_SELCHANGE, _OnPaymentTypeSelectChangeFnc);
	m_wndPaymentType.SetEvent(WE_LOADDATA, _OnPaymentTypeLoadDataFnc);
	//m_wndPaymentType.SetEvent(WE_ADDNEW, _OnPaymentTypeAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFeeRefundDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndPaymentType.GetDlgCtrlID(), m_szPaymentTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSFeeRefundDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeeRefundDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeRefundDialog::SetDefaultValues(){

	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szReceiptDate.Empty();
	m_nAmount=0;
	m_szPaymentTypeKey.Empty();
	m_szDescription.Empty();
	m_bPrintReceipt=FALSE;

}
int CHMSFeeRefundDialog::SetMode(int nMode){
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
/*void CHMSFeeRefundDialog::OnSerialNoChange(){
	
} */
/*void CHMSFeeRefundDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnSerialNoKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeRefundDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDialog::OnReceiptDateChange(){
	
} */
/*void CHMSFeeRefundDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDialog::OnAmountChange(){
	
} */
/*void CHMSFeeRefundDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnAmountKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSFeeRefundDialog::OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeRefundDialog::OnPaymentTypeSelendok(){
	 
}
/*void CHMSFeeRefundDialog::OnPaymentTypeSetfocus(){
	
}*/
/*void CHMSFeeRefundDialog::OnPaymentTypeKillfocus(){
	
}*/
long CHMSFeeRefundDialog::OnPaymentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentType.IsSearchKey() && !m_szPaymentTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTypeKey
};
	m_wndPaymentType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeRefundDialog::OnPaymentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSFeeRefundDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSFeeRefundDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeRefundDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeRefundDialog::OnAddHMSFeeRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeRefundDialog::OnEditHMSFeeRefundDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeRefundDialog::OnDeleteHMSFeeRefundDialog(){
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
 		OnCancelHMSFeeRefundDialog();
 	}
	return 0;
}
int CHMSFeeRefundDialog::OnSaveHMSFeeRefundDialog(){
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
 		//OnHMSFeeRefundDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeRefundDialog::OnCancelHMSFeeRefundDialog(){
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
int CHMSFeeRefundDialog::OnHMSFeeRefundDialogListLoadData(){
	return 0;
}
