#include "MContractAppendixDlg.h"
#include "MainFrame_E10.h"
#include "ProductExtraInfoDialog.h"

/*static void _OnContractIDChangeFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnContractIDChange();
} */
/*static void _OnContractIDSetfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnContractIDSetfocus();} */ 
/*static void _OnContractIDKillfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnContractIDKillfocus();
} */
static int _OnContractIDCheckValueFnc(CWnd *pWnd){
	return ((CMContractAppendixDlg *)pWnd)->OnContractIDCheckValue();
} 
/*static void _OnAppendIdxDateChangeFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnAppendIdxDateChange();
} */
/*static void _OnAppendIdxDateSetfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnAppendIdxDateSetfocus();} */ 
/*static void _OnAppendIdxDateKillfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnAppendIdxDateKillfocus();
} */
static int _OnAppendIdxDateCheckValueFnc(CWnd *pWnd){
	return ((CMContractAppendixDlg *)pWnd)->OnAppendIdxDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CMContractAppendixDlg *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CMContractAppendixDlg *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CMContractAppendixDlg *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CMContractAppendixDlg *pVw = (CMContractAppendixDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CMContractAppendixDlg *pVw = (CMContractAppendixDlg *)pWnd;
	pVw->OnCloseSelect();
}
static void _OnAddLineSelectFnc(CWnd* pWnd) {
	CMContractAppendixDlg* pVw = (CMContractAppendixDlg*)pWnd;
	pVw->OnAddLineSelect();
}
static int _OnAddMContractAppendixDlgFnc(CWnd *pWnd){
	 return ((CMContractAppendixDlg*)pWnd)->OnAddMContractAppendixDlg();
} 
static int _OnEditMContractAppendixDlgFnc(CWnd *pWnd){
	 return ((CMContractAppendixDlg*)pWnd)->OnEditMContractAppendixDlg();
} 
static int _OnDeleteMContractAppendixDlgFnc(CWnd *pWnd){
	 return ((CMContractAppendixDlg*)pWnd)->OnDeleteMContractAppendixDlg();
} 
static int _OnSaveMContractAppendixDlgFnc(CWnd *pWnd){
	 return ((CMContractAppendixDlg*)pWnd)->OnSaveMContractAppendixDlg();
} 
static int _OnCancelMContractAppendixDlgFnc(CWnd *pWnd){
	 return ((CMContractAppendixDlg*)pWnd)->OnCancelMContractAppendixDlg();
} 
CMContractAppendixDlg::CMContractAppendixDlg(CWnd *pParent, long nContractID):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(GetMode());
	m_nContractID = nContractID;
}
CMContractAppendixDlg::~CMContractAppendixDlg(){
}
void CMContractAppendixDlg::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 505, 175);
	m_wndAppendixNoLabel.Create(this, _T("Appendix No"), 10, 30, 130, 55);
	m_wndAppendixNo.Create(this,135, 30, 500, 55); 
	m_wndAppendIdxDateLabel.Create(this, _T("AppendIdxDate"), 10, 60, 130, 85);
	m_wndAppendIdxDate.Create(this,135, 61, 500, 86); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 130, 115);
	m_wndDescription.Create(this,135, 90, 500, 140); 
	m_wndTotalAmountLabel.Create(this, _T("TotalAmount"), 10, 144, 130, 169);
	m_wndTotalAmount.Create(this,135, 144, 500, 169); 
	m_wndSave.Create(this, _T("Save"), 340, 180, 420, 205);
	m_wndClose.Create(this, _T("Close"), 425, 180, 505, 205);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 180, 105, 205);
}
void CMContractAppendixDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndContractID.SetLimitText(35);
	//m_wndContractID.SetCheckValue(true);
	m_wndAppendixNo.SetLimitText(35);
	//m_wndAppendIdxDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAppendIdxDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);
	m_m_contract_appendixTbl.SetTableName(_T("m_contract_appendix"));
	m_m_contract_appendixTbl.AddField(_T("M_CONTRACT_APPENDIX_ID"), dfText, 32);
	m_m_contract_appendixTbl.AddField(_T("CREATEDBY"), dfText, 32); 
	m_m_contract_appendixTbl.AddField(_T("UPDATEDBY"), dfText, 32); 
	m_m_contract_appendixTbl.AddField(_T("CONTRACT_ID"), dfLong); 
	m_m_contract_appendixTbl.AddField(_T("APPENDIX_DATE"), dfDateTime); 
	m_m_contract_appendixTbl.AddField(_T("DESCRIPTION"), dfText, 254); 
	m_m_contract_appendixTbl.AddField(_T("APPENDIX_NO"), dfText, 20);

}
void CMContractAppendixDlg::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndContractID.SetEvent(WE_CHANGE, _OnContractIDChangeFnc);
	//m_wndContractID.SetEvent(WE_SETFOCUS, _OnContractIDSetfocusFnc);
	//m_wndContractID.SetEvent(WE_KILLFOCUS, _OnContractIDKillfocusFnc);
	m_wndContractID.SetEvent(WE_CHECKVALUE, _OnContractIDCheckValueFnc);
	//m_wndAppendIdxDate.SetEvent(WE_CHANGE, _OnAppendIdxDateChangeFnc);
	//m_wndAppendIdxDate.SetEvent(WE_SETFOCUS, _OnAppendIdxDateSetfocusFnc);
	//m_wndAppendIdxDate.SetEvent(WE_KILLFOCUS, _OnAppendIdxDateKillfocusFnc);
	m_wndAppendIdxDate.SetEvent(WE_CHECKVALUE, _OnAppendIdxDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
}
void CMContractAppendixDlg::OnDoDataExchange(CDataExchange* pDX){
	//DDX_Text(pDX, m_wndContractID.GetDlgCtrlID(), m_szContractID);
	DDX_Text(pDX, m_wndAppendixNo.GetDlgCtrlID(), m_szAppendixNo);
	DDX_TextEx(pDX, m_wndAppendIdxDate.GetDlgCtrlID(), m_szAppendIdxDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CMContractAppendixDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ContractID")] =  m_szContractID;
	m_jData[_T("AppendIdxDate")] =  m_szAppendIdxDate;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("TotalAmount")] =  m_nTotalAmount;
	}
	else
	{
			
	m_jData[_T("ContractID")].GetValue(m_szContractID);
	m_jData[_T("AppendIdxDate")].GetValue(m_szAppendIdxDate);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("TotalAmount")].GetValue(m_nTotalAmount);
	}

}
void CMContractAppendixDlg::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(
		_T("SELECT * ") \
		_T(" FROM m_contract_appendix ") \
		_T(" LEFT JOIN ad_contract ON (adc_contract_id = contract_id)") \
		_T(" WHERE M_CONTRACT_APPENDIX_ID = '%s'")
		, m_szAppendixID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		m_szAppendixNo = rs.GetValue(_T("appendix_no"));
		m_szAppendIdxDate = rs.GetValue(_T("appendix_date"));
		m_szDescription = rs.GetValue(_T("description"));
		SetMode(GetMode());
	}

}
void CMContractAppendixDlg::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("select sys_guid() from dual"));
		rs.ExecSQL(szSQL);
		m_szAppendixID = rs.GetStringValue();

		m_m_contract_appendixTbl.SetValue(_T("createdby"), pMF->GetCurrentUser());
		m_m_contract_appendixTbl.SetValue(_T("contract_id"), m_nContractID);
		m_m_contract_appendixTbl.SetValue(_T("m_contract_appendix_id"), m_szAppendixID
		);
	}
	else
	{
		m_m_contract_appendixTbl.SetValue(_T("updatedby"), pMF->GetCurrentUser());
	}
	m_m_contract_appendixTbl.SetValue(_T("appendix_date"), m_szAppendIdxDate);
	m_m_contract_appendixTbl.SetValue(_T("description"), m_szDescription);
	m_m_contract_appendixTbl.SetValue(_T("appendix_no"), m_szAppendixNo);

}
void CMContractAppendixDlg::SetDefaultValues(){

	m_szContractID.Empty();
	m_szAppendixNo.Empty();
	m_szAppendIdxDate.Empty();
	m_szDescription.Empty();
	m_nTotalAmount=0;

}
int CMContractAppendixDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_szAppendIdxDate = pMF->GetSysDate();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
/*void CMContractAppendixDlg::OnContractIDChange(){
	
} */
/*void CMContractAppendixDlg::OnContractIDSetfocus(){
	
} */
/*void CMContractAppendixDlg::OnContractIDKillfocus(){
	
} */
int CMContractAppendixDlg::OnContractIDCheckValue(){
	return 0;
} 
/*void CMContractAppendixDlg::OnAppendIdxDateChange(){
	
} */
/*void CMContractAppendixDlg::OnAppendIdxDateSetfocus(){
	
} */
/*void CMContractAppendixDlg::OnAppendIdxDateKillfocus(){
	
} */
int CMContractAppendixDlg::OnAppendIdxDateCheckValue(){
	return 0;
} 
/*void CMContractAppendixDlg::OnDescriptionChange(){
	
} */
/*void CMContractAppendixDlg::OnDescriptionSetfocus(){
	
} */
/*void CMContractAppendixDlg::OnDescriptionKillfocus(){
	
} */
int CMContractAppendixDlg::OnDescriptionCheckValue(){
	return 0;
} 
/*void CMContractAppendixDlg::OnTotalAmountChange(){
	
} */
/*void CMContractAppendixDlg::OnTotalAmountSetfocus(){
	
} */
/*void CMContractAppendixDlg::OnTotalAmountKillfocus(){
	
} */
int CMContractAppendixDlg::OnTotalAmountCheckValue(){
	return 0;
} 
void CMContractAppendixDlg::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveMContractAppendixDlg();
} 
void CMContractAppendixDlg::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
void CMContractAppendixDlg::OnAddLineSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_szAppendixID.IsEmpty())
	{
		return;
	}
	CProductExtraInfoDialog dlg(this, VM_ADD, m_szAppendixID);
	dlg.m_nContractID = m_nContractID;
	dlg.m_nPackageID = m_nPackageID;
	dlg.DoModal();
}
int CMContractAppendixDlg::OnAddMContractAppendixDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMContractAppendixDlg::OnEditMContractAppendixDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMContractAppendixDlg::OnDeleteMContractAppendixDlg(){
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
 		OnCancelMContractAppendixDlg();
 	}
	return 0;
}
int CMContractAppendixDlg::OnSaveMContractAppendixDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_m_contract_appendixTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE m_contract_appendix_id = '%s'"), m_szAppendixID);
 		szSQL = m_m_contract_appendixTbl.GetUpdateSQL(_T("createdby,createddate,contract_id,m_contract_appendix_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnMContractAppendixDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMContractAppendixDlg::OnCancelMContractAppendixDlg(){
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
int CMContractAppendixDlg::OnMContractAppendixDlgListLoadData(){
	return 0;
}


BOOL CMContractAppendixDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F4)
		{
			OnAddLineSelect();
		}
		
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
