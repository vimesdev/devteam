#include "HMSInvoiceDateSettingDialog.h"
#include "MainFrm.h"
/*static void _OnWorkingDateChangeFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnWorkingDateChange();
} */
/*static void _OnWorkingDateSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnWorkingDateSetfocus();} */ 
/*static void _OnWorkingDateKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnWorkingDateKillfocus();
} */
static int _OnWorkingDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInvoiceDateSettingDialog *)pWnd)->OnWorkingDateCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInvoiceDateSettingDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInvoiceDateSettingDialog *)pWnd)->OnReceiptNoCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInvoiceDateSettingDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSInvoiceDateSettingDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSInvoiceDateSettingDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSInvoiceDateSettingDialog *pVw = (CHMSInvoiceDateSettingDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInvoiceDateSettingDialog *pVw = (CHMSInvoiceDateSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInvoiceDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceDateSettingDialog*)pWnd)->OnAddHMSInvoiceDateSettingDialog();
} 
static int _OnEditHMSInvoiceDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceDateSettingDialog*)pWnd)->OnEditHMSInvoiceDateSettingDialog();
} 
static int _OnDeleteHMSInvoiceDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceDateSettingDialog*)pWnd)->OnDeleteHMSInvoiceDateSettingDialog();
} 
static int _OnSaveHMSInvoiceDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceDateSettingDialog*)pWnd)->OnSaveHMSInvoiceDateSettingDialog();
} 
static int _OnCancelHMSInvoiceDateSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceDateSettingDialog*)pWnd)->OnCancelHMSInvoiceDateSettingDialog();
} 
CHMSInvoiceDateSettingDialog::CHMSInvoiceDateSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSInvoiceDateSettingDialog::~CHMSInvoiceDateSettingDialog(){
}
void CHMSInvoiceDateSettingDialog::OnCreateComponents(){
	m_wndInvoiceDateSetting.Create(this, _T("Invoice Date Setting"), 5, 5, 295, 150);
	m_wndWorkingDateLabel.Create(this, _T("Working Date"), 10, 30, 160, 55);
	m_wndWorkingDate.Create(this,165, 30, 290, 55); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 60, 160, 85);
	m_wndSerialNo.Create(this,165, 60, 290, 85); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 90, 160, 115);
	m_wndReceiptNo.Create(this,165, 90, 290, 115); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 120, 160, 145);
	m_wndPaymentMethod.Create(this,165, 120, 290, 145); 
	m_wndOK.Create(this, _T("&OK"), 120, 155, 205, 180);
	m_wndClose.Create(this, _T("&Close"), 210, 155, 295, 180);

}
void CHMSInvoiceDateSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWorkingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndWorkingDate.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(22);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_fee_controlTbl.SetTableName(_T("hms_fee_control"));
	m_hms_fee_controlTbl.AddField(_T("HFC_USERID"), dfText, 15); 
	m_hms_fee_controlTbl.AddField(_T("HFC_RECVDATE"), dfDate); 
	m_hms_fee_controlTbl.AddField(_T("HFC_EXAMFEE"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_DRUGFEE"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_PCMSFEE"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_DEPOSIT"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_REFUND"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_REMISSION"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_OBJECTS"), dfText, 35); 
	m_hms_fee_controlTbl.AddField(_T("HFC_OUTPATIENT"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_INPATIENT"), dfText, 1); 
	m_hms_fee_controlTbl.AddField(_T("HFC_RECEIPTNO"), dfLong); 
	m_hms_fee_controlTbl.AddField(_T("HFC_SERIALNO"), dfText, 15); 

}
void CHMSInvoiceDateSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndWorkingDate.SetEvent(WE_CHANGE, _OnWorkingDateChangeFnc);
	//m_wndWorkingDate.SetEvent(WE_SETFOCUS, _OnWorkingDateSetfocusFnc);
	//m_wndWorkingDate.SetEvent(WE_KILLFOCUS, _OnWorkingDateKillfocusFnc);
	m_wndWorkingDate.SetEvent(WE_CHECKVALUE, _OnWorkingDateCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInvoiceDateSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWorkingDate.GetDlgCtrlID(), m_szWorkingDate);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);

}
void CHMSInvoiceDateSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HFC_RECVDATE"), m_szWorkingDate);
	rs.GetValue(_T("HFC_RECEIPTNO"), m_nReceiptNo);
	rs.GetValue(_T("HFC_SERIALNO"), m_szSerialNo);

}
void CHMSInvoiceDateSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_controlTbl.SetValue(_T("HFC_RECVDATE"), m_szWorkingDate);
	m_hms_fee_controlTbl.SetValue(_T("HFC_RECEIPTNO"), m_nReceiptNo);
	m_hms_fee_controlTbl.SetValue(_T("HFC_SERIALNO"), m_szSerialNo);

}
void CHMSInvoiceDateSettingDialog::SetDefaultValues(){

	m_szWorkingDate.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szPaymentMethodKey.Empty();

}
int CHMSInvoiceDateSettingDialog::SetMode(int nMode){
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
/*void CHMSInvoiceDateSettingDialog::OnWorkingDateChange(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnWorkingDateSetfocus(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnWorkingDateKillfocus(){
	
} */
int CHMSInvoiceDateSettingDialog::OnWorkingDateCheckValue(){
	return 0;
} 
/*void CHMSInvoiceDateSettingDialog::OnSerialNoChange(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnSerialNoKillfocus(){
	
} */
int CHMSInvoiceDateSettingDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSInvoiceDateSettingDialog::OnReceiptNoChange(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSInvoiceDateSettingDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSInvoiceDateSettingDialog::OnReceiptNoCheckValue(){
	return 0;
} 
void CHMSInvoiceDateSettingDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInvoiceDateSettingDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSInvoiceDateSettingDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSInvoiceDateSettingDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSInvoiceDateSettingDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInvoiceDateSettingDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInvoiceDateSettingDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInvoiceDateSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInvoiceDateSettingDialog::OnAddHMSInvoiceDateSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInvoiceDateSettingDialog::OnEditHMSInvoiceDateSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInvoiceDateSettingDialog::OnDeleteHMSInvoiceDateSettingDialog(){
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
 		OnCancelHMSInvoiceDateSettingDialog();
 	}
	return 0;
}
int CHMSInvoiceDateSettingDialog::OnSaveHMSInvoiceDateSettingDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_fee_controlTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_fee_controlTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSInvoiceDateSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInvoiceDateSettingDialog::OnCancelHMSInvoiceDateSettingDialog(){
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
int CHMSInvoiceDateSettingDialog::OnHMSInvoiceDateSettingDialogListLoadData(){
	return 0;
}
