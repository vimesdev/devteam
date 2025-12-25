#include "AdBusinessPartnerContractInfoDlg.h"
#include "MainFrm.h"
#include "AdBusinessPartnerContractList.h"
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CCAdBusinessPartnerContractInfoDlg *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnContractIDChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractIDChange();
} */
/*static void _OnContractIDSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractIDSetfocus();} */ 
/*static void _OnContractIDKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractIDKillfocus();
} */
static int _OnContractIDCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractIDCheckValue();
} 
/*static void _OnContractNoChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractNoChange();
} */
/*static void _OnContractNoSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractNoSetfocus();} */ 
/*static void _OnContractNoKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractNoKillfocus();
} */
static int _OnContractNoCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractNoCheckValue();
} 
/*static void _OnContractDateChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractDateChange();
} */
/*static void _OnContractDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractDateSetfocus();} */ 
/*static void _OnContractDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractDateKillfocus();
} */
static int _OnContractDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnContractDateCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerContractInfoDlg* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractInfoDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractInfoDlg *pVw = (CAdBusinessPartnerContractInfoDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractInfoDlg *pVw = (CAdBusinessPartnerContractInfoDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractInfoDlg *pVw = (CAdBusinessPartnerContractInfoDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdBusinessPartnerContractInfoDlgFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractInfoDlg*)pWnd)->OnAddAdBusinessPartnerContractInfoDlg();
} 
static int _OnEditAdBusinessPartnerContractInfoDlgFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractInfoDlg*)pWnd)->OnEditAdBusinessPartnerContractInfoDlg();
} 
static int _OnDeleteAdBusinessPartnerContractInfoDlgFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractInfoDlg*)pWnd)->OnDeleteAdBusinessPartnerContractInfoDlg();
} 
static int _OnSaveAdBusinessPartnerContractInfoDlgFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractInfoDlg*)pWnd)->OnSaveAdBusinessPartnerContractInfoDlg();
} 
static int _OnCancelAdBusinessPartnerContractInfoDlgFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractInfoDlg*)pWnd)->OnCancelAdBusinessPartnerContractInfoDlg();
} 
CAdBusinessPartnerContractInfoDlg::CAdBusinessPartnerContractInfoDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerContractInfoDlg::~CAdBusinessPartnerContractInfoDlg(){
}
void CAdBusinessPartnerContractInfoDlg::OnCreateComponents(){
	m_wndContractInfo.Create(this, _T("Contract Info"), 5, 5, 570, 180);
	//m_wndContractIDLabel.Create(this, _T("ContractID"), 10, 31, 130, 56);
	m_wndContractID.Create(this,0, 0, 0, 0); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 10, 31, 130, 56);
	m_wndExamDate.Create(this,135, 31, 285, 56); 
	m_wndContractNoLabel.Create(this, _T("Contract No"), 290, 31, 410, 56);
	m_wndContractNo.Create(this,415, 31, 565, 56); 
	m_wndContractDateLabel.Create(this, _T("Contract Date"), 10, 61, 130, 86);
	m_wndContractDate.Create(this,135, 61, 285, 86); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 290, 61, 410, 86);
	m_wndInvoiceDate.Create(this,415, 61, 565, 86); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 91, 130, 116);
	m_wndType.Create(this,135, 91, 285, 116); 
	m_wndAmountLabel.Create(this, _T("Amount"), 290, 91, 410, 116);
	m_wndAmount.Create(this,415, 91, 565, 116); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 121, 130, 146);
	m_wndDescription.Create(this,135, 121, 565, 146); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 151, 130, 176);
	m_wndNote.Create(this,135, 151, 565, 176); 
	m_wndSave.Create(this, _T("Save"), 320, 185, 400, 210);
	m_wndCancel.Create(this, _T("Cancel"), 405, 185, 485, 210);
	m_wndClose.Create(this, _T("Close"), 490, 185, 570, 210);

}
void CAdBusinessPartnerContractInfoDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndExamDate.SetCheckValue(true);
	m_wndContractID.SetLimitText(35);
	m_wndContractID.SetCheckValue(true);
	m_wndContractNo.SetLimitText(35);
	m_wndContractNo.SetCheckValue(true);
	//m_wndContractDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndContractDate.SetCheckValue(true);
	//m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(TRUE);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_tblPartnerInfo.SetTableName(_T("hms_contract"));
	m_tblPartnerInfo.AddField(_T("hc_createdby"), dfText, 20);
	m_tblPartnerInfo.AddField(_T("hc_createddate"), dfDateTime);
	m_tblPartnerInfo.AddField(_T("hc_updatedby"), dfText, 20);
	m_tblPartnerInfo.AddField(_T("hc_updateddate"), dfDateTime);
	m_tblPartnerInfo.AddField(_T("hc_contract_id"), dfInteger);
	m_tblPartnerInfo.AddField(_T("hc_contract_no"), dfText, 20);
	m_tblPartnerInfo.AddField(_T("hc_contract_date"), dfDate);
	m_tblPartnerInfo.AddField(_T("hc_invoice_date"), dfDate);
	m_tblPartnerInfo.AddField(_T("hc_payment_date"), dfDate);
	m_tblPartnerInfo.AddField(_T("hc_partner_id"), dfText, 32);
	m_tblPartnerInfo.AddField(_T("hc_description"), dfText, 254);
	m_tblPartnerInfo.AddField(_T("hc_note"), dfText, 254);
	m_tblPartnerInfo.AddField(_T("hc_type"), dfText, 1);
	m_tblPartnerInfo.AddField(_T("hc_totalamount"), dfLong);
	m_tblPartnerInfo.AddField(_T("hc_examdate"), dfDate);

	m_wndContractID.EnableWindow(false);
}
void CAdBusinessPartnerContractInfoDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndContractID.SetEvent(WE_CHANGE, _OnContractIDChangeFnc);
	//m_wndContractID.SetEvent(WE_SETFOCUS, _OnContractIDSetfocusFnc);
	//m_wndContractID.SetEvent(WE_KILLFOCUS, _OnContractIDKillfocusFnc);
	m_wndContractID.SetEvent(WE_CHECKVALUE, _OnContractIDCheckValueFnc);
	//m_wndContractNo.SetEvent(WE_CHANGE, _OnContractNoChangeFnc);
	//m_wndContractNo.SetEvent(WE_SETFOCUS, _OnContractNoSetfocusFnc);
	//m_wndContractNo.SetEvent(WE_KILLFOCUS, _OnContractNoKillfocusFnc);
	m_wndContractNo.SetEvent(WE_CHECKVALUE, _OnContractNoCheckValueFnc);
	//m_wndContractDate.SetEvent(WE_CHANGE, _OnContractDateChangeFnc);
	//m_wndContractDate.SetEvent(WE_SETFOCUS, _OnContractDateSetfocusFnc);
	//m_wndContractDate.SetEvent(WE_KILLFOCUS, _OnContractDateKillfocusFnc);
	m_wndContractDate.SetEvent(WE_CHECKVALUE, _OnContractDateCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	


}
void CAdBusinessPartnerContractInfoDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndContractID.GetDlgCtrlID(), m_szContractID);
	DDX_Text(pDX, m_wndContractNo.GetDlgCtrlID(), m_szContractNo);
	DDX_TextEx(pDX, m_wndContractDate.GetDlgCtrlID(), m_szContractDate);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CAdBusinessPartnerContractInfoDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ContractID")] =  m_szContractID;
	m_jData[_T("ContractNo")] =  m_szContractNo;
	m_jData[_T("ContractDate")] =  m_szContractDate;
	m_jData[_T("InvoiceDate")] =  m_szInvoiceDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("ContractID")].GetValue(m_szContractID);
	m_jData[_T("ContractNo")].GetValue(m_szContractNo);
	m_jData[_T("ContractDate")].GetValue(m_szContractDate);
	m_jData[_T("InvoiceDate")].GetValue(m_szInvoiceDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CAdBusinessPartnerContractInfoDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_contract WHERE hc_partner_id = '%s' AND hc_contract_id = %d"), m_szPartnerID, m_nContractID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hc_contract_id"), m_szContractID);
		rs.GetValue(_T("hc_contract_no"), m_szContractNo);
		rs.GetValue(_T("hc_contract_date"), m_szContractDate);
		rs.GetValue(_T("hc_invoice_date"), m_szInvoiceDate);
		rs.GetValue(_T("hc_description"), m_szDescription);
		rs.GetValue(_T("hc_note"), m_szNote);
		rs.GetValue(_T("hc_type"), m_szTypeKey);
		rs.GetValue(_T("hc_totalamount"), m_nAmount);
		rs.GetValue(_T("hc_examdate"), m_szExamDate);
		UpdateData(FALSE);
	}

}
void CAdBusinessPartnerContractInfoDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tblPartnerInfo.SetValue(_T("hc_createdby"), pMF->GetCurrentUser());
	m_tblPartnerInfo.SetValue(_T("hc_createddate"), pMF->GetSysDateTime());
	m_tblPartnerInfo.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser());
	m_tblPartnerInfo.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime());
	//m_tblPartnerInfo.SetValue(_T("hc_contract_id"), m_szContractID);
	m_tblPartnerInfo.SetValue(_T("hc_contract_no"), m_szContractNo);
	m_tblPartnerInfo.SetValue(_T("hc_contract_date"), m_szContractDate);
	m_tblPartnerInfo.SetValue(_T("hc_invoice_date"), m_szInvoiceDate);
	//m_tblPartnerInfo.SetValue(_T("hc_payment_date"), dfDate);
	m_tblPartnerInfo.SetValue(_T("hc_partner_id"), m_szPartnerID);
	m_tblPartnerInfo.SetValue(_T("hc_description"), m_szDescription);
	m_tblPartnerInfo.SetValue(_T("hc_note"), m_szNote);
	m_tblPartnerInfo.SetValue(_T("hc_type"), m_szTypeKey);
	m_tblPartnerInfo.SetValue(_T("hc_totalamount"), m_nAmount);
	m_tblPartnerInfo.SetValue(_T("hc_examdate"), m_szExamDate);
}
void CAdBusinessPartnerContractInfoDlg::SetDefaultValues(){

	m_szExamDate.Empty();
	m_szContractID.Empty();
	m_szContractNo.Empty();
	m_szContractDate.Empty();
	m_szInvoiceDate.Empty();
	m_szTypeKey.Empty();
	m_nAmount=0;
	m_szDescription.Empty();
	m_szNote.Empty();

}
int CAdBusinessPartnerContractInfoDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
			GetDataToScreen();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
/*void CAdBusinessPartnerContractInfoDlg::OnExamDateChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnExamDateSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnExamDateKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnExamDateCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnContractIDChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractIDSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractIDKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnContractIDCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnContractNoChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractNoSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractNoKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnContractNoCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnContractDateChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractDateSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnContractDateKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnContractDateCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnInvoiceDateChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnInvoiceDateSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnInvoiceDateKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnInvoiceDateCheckValue(){
	return 0;
} 
void CAdBusinessPartnerContractInfoDlg::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerContractInfoDlg::OnTypeSelendok(){
	 
}
/*void CAdBusinessPartnerContractInfoDlg::OnTypeSetfocus(){
	
}*/
/*void CAdBusinessPartnerContractInfoDlg::OnTypeKillfocus(){
	
}*/
long CAdBusinessPartnerContractInfoDlg::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdBusinessPartnerContractInfoDlg::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnAmountChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnAmountSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnAmountKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnAmountCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnDescriptionChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnDescriptionSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnDescriptionKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerContractInfoDlg::OnNoteChange(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnNoteSetfocus(){
	
} */
/*void CAdBusinessPartnerContractInfoDlg::OnNoteKillfocus(){
	
} */
int CAdBusinessPartnerContractInfoDlg::OnNoteCheckValue(){
	return 0;
} 
void CAdBusinessPartnerContractInfoDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveAdBusinessPartnerContractInfoDlg();
} 
void CAdBusinessPartnerContractInfoDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelAdBusinessPartnerContractInfoDlg();
} 
void CAdBusinessPartnerContractInfoDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CAdBusinessPartnerContractInfoDlg::OnAddAdBusinessPartnerContractInfoDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractInfoDlg::OnEditAdBusinessPartnerContractInfoDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractInfoDlg::OnDeleteAdBusinessPartnerContractInfoDlg(){
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
 		OnCancelAdBusinessPartnerContractInfoDlg();
 	}
	return 0;
}
int CAdBusinessPartnerContractInfoDlg::OnSaveAdBusinessPartnerContractInfoDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL = m_tblPartnerInfo.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hc_contract_id = %d AND hc_partner_id = '%s'"), m_nContractID, m_szPartnerID);
 		szSQL = m_tblPartnerInfo.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_contract_id,hc_partner_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnAdBusinessPartnerContractInfoDlgListLoadData();
		((CAdBusinessPartnerContractList*)m_pParentWnd)->OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractInfoDlg::OnCancelAdBusinessPartnerContractInfoDlg(){
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
int CAdBusinessPartnerContractInfoDlg::OnAdBusinessPartnerContractInfoDlgListLoadData(){
	return 0;
}
