#include "HMSCheckQRPayDlg.h"
#include "HMSMainFrame.h"
#include "Afxsock.h"
#include <atlenc.h>
#include <fstream>      // std::fstream
#include <streambuf>
#include <iostream>
#include <sstream>
#include "shlobj.h"
#include <string>
#include <afxinet.h>
#include "StringToken.h"
#include "utf8string.h"
#include "json.h"
#include <afxinet.h>

/*static void _OnKeyChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnKeyChange();
} */
/*static void _OnKeySetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnKeySetfocus();} */ 
/*static void _OnKeyKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnKeyKillfocus();
} */
static int _OnKeyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnKeyCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnAmountCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSCheckQRPayDlg *pVw = (CHMSCheckQRPayDlg *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSCheckQRPayDlg *pVw = (CHMSCheckQRPayDlg *)pWnd;
	pVw->OnUpdateSelect();
} 
/*static void _OnDetailChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDetailChange();
} */
/*static void _OnDetailSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDetailSetfocus();} */ 
/*static void _OnDetailKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnDetailKillfocus();
} */
static int _OnDetailCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnDetailCheckValue();
} 
/*static void _OnRefNumberLabelChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnRefNumberLabelChange();
} */
/*static void _OnRefNumberLabelSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnRefNumberLabelSetfocus();} */ 
/*static void _OnRefNumberLabelKillfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnRefNumberLabelKillfocus();
} */
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCheckQRPayDlg *)pWnd)->OnPatientNameSetfocus();} */
	/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
		((CHMSCheckQRPayDlg *)pWnd)->OnPatientNameKillfocus();
	} */
static int _OnPatientNameCheckValueFnc(CWnd* pWnd) {
	return ((CHMSCheckQRPayDlg*)pWnd)->OnPatientNameCheckValue();
}
static int _OnRefNumberLabelCheckValueFnc(CWnd *pWnd){
	return ((CHMSCheckQRPayDlg *)pWnd)->OnRefNumberLabelCheckValue();
} 
static int _OnAddHMSCheckQRPayDlgFnc(CWnd *pWnd){
	 return ((CHMSCheckQRPayDlg*)pWnd)->OnAddHMSCheckQRPayDlg();
} 
static int _OnEditHMSCheckQRPayDlgFnc(CWnd *pWnd){
	 return ((CHMSCheckQRPayDlg*)pWnd)->OnEditHMSCheckQRPayDlg();
} 
static int _OnDeleteHMSCheckQRPayDlgFnc(CWnd *pWnd){
	 return ((CHMSCheckQRPayDlg*)pWnd)->OnDeleteHMSCheckQRPayDlg();
} 
static int _OnSaveHMSCheckQRPayDlgFnc(CWnd *pWnd){
	 return ((CHMSCheckQRPayDlg*)pWnd)->OnSaveHMSCheckQRPayDlg();
} 
static int _OnCancelHMSCheckQRPayDlgFnc(CWnd *pWnd){
	 return ((CHMSCheckQRPayDlg*)pWnd)->OnCancelHMSCheckQRPayDlg();
} 
CHMSCheckQRPayDlg::CHMSCheckQRPayDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCheckQRPayDlg::~CHMSCheckQRPayDlg(){
}
void CHMSCheckQRPayDlg::OnCreateComponents(){
	m_wndInformations.Create(this, _T("Information"), 5, 5, 750, 150);
	m_wndKeyLabel.Create(this, _T("Key"), 10, 30, 110, 55);
	m_wndKey.Create(this,115, 30, 265, 55); 
	m_wndDocNoLabel.Create(this, _T("DocNo"), 270, 30, 370, 55);
	m_wndDocNo.Create(this,375, 30, 665, 55); 
	m_wndAmountLabel.Create(this, _T("Amount"), 10, 60, 110, 85);
	m_wndAmount.Create(this, 115, 60, 265, 85);
	m_wndPatientNameLabel.Create(this, _T("PatientName"), 270, 60, 370, 85);
	m_wndPatientName.Create(this, 375, 60, 665, 85);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 110, 145);
	m_wndStatus.Create(this,115, 120, 265, 145); 
	m_wndDetailLabel.Create(this, _T("Detail"), 10, 90, 110, 115);
	m_wndDetail.Create(this, 115, 90, 665, 115);
	m_wndRefNumberLabel.Create(this, _T("RefNumber"), 270, 120, 370, 145);
	m_wndRefNumber.Create(this, 375, 120, 665, 145);
	
	m_wndSearch.Create(this, _T("@"), 670, 30, 745, 55);
	m_wndUpdate.Create(this, _T("&Update"), 670, 60, 745, 85);
	
	

}
void CHMSCheckQRPayDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndKey.SetLimitText(1024);
	m_wndKey.SetCheckValue(true);
	m_wndDocNo.SetLimitText(1024);
	m_wndDocNo.SetCheckValue(true);
	/*m_wndStatus.SetLimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndDetail.SetLimitText(35);
	m_wndDetail.SetCheckValue(true);
	m_wndRefNumber.SetLimitText(35);
	m_wndRefNumberLabel.SetCheckValue(true);*/

}
void CHMSCheckQRPayDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndKey.SetEvent(WE_CHANGE, _OnKeyChangeFnc);
	//m_wndKey.SetEvent(WE_SETFOCUS, _OnKeySetfocusFnc);
	//m_wndKey.SetEvent(WE_KILLFOCUS, _OnKeyKillfocusFnc);
	m_wndKey.SetEvent(WE_CHECKVALUE, _OnKeyCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	//m_wndDetail.SetEvent(WE_CHANGE, _OnDetailChangeFnc);
	//m_wndDetail.SetEvent(WE_SETFOCUS, _OnDetailSetfocusFnc);
	//m_wndDetail.SetEvent(WE_KILLFOCUS, _OnDetailKillfocusFnc);
	m_wndDetail.SetEvent(WE_CHECKVALUE, _OnDetailCheckValueFnc);
	//m_wndRefNumberLabel.SetEvent(WE_CHANGE, _OnRefNumberLabelChangeFnc);
	//m_wndRefNumberLabel.SetEvent(WE_SETFOCUS, _OnRefNumberLabelSetfocusFnc);
	//m_wndRefNumberLabel.SetEvent(WE_KILLFOCUS, _OnRefNumberLabelKillfocusFnc);
	m_wndRefNumberLabel.SetEvent(WE_CHECKVALUE, _OnRefNumberLabelCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	SetMode(VM_ADD);

}
void CHMSCheckQRPayDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndKey.GetDlgCtrlID(), m_nKey);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDetail.GetDlgCtrlID(), m_szDetail);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndRefNumber.GetDlgCtrlID(), m_szRefNumber);

}
void CHMSCheckQRPayDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Key")] =  m_nKey;
	m_jData[_T("DocNo")] =  m_nDocNo;
	m_jData[_T("Status")] =  m_szStatus;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Detail")] =  m_szDetail;
	m_jData[_T("RefNumberLabel")] =  m_szRefNumber;
	}
	else
	{
			
	m_jData[_T("Key")].GetValue(m_nKey);
	m_jData[_T("DocNo")].GetValue(m_nDocNo);
	m_jData[_T("Status")].GetValue(m_szStatus);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Detail")].GetValue(m_szDetail);
	m_jData[_T("RefNumberLabel")].GetValue(m_szRefNumber);
	}

}
void CHMSCheckQRPayDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCheckQRPayDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSCheckQRPayDlg::SetDefaultValues(){

	m_nKey=0;
	m_nDocNo = 0;
	m_szStatus.Empty();
	m_nAmount=0;
	m_szDetail.Empty();
	m_szRefNumber.Empty();

}
int CHMSCheckQRPayDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSCheckQRPayDlg::OnKeyChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnKeySetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnKeyKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnKeyCheckValue(){
	return 0;
} 
/*void CHMSCheckQRPayDlg::OnDocNoChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnDocNoSetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnDocNoKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnDocNoCheckValue(){
	return 0;
} 
/*void CHMSCheckQRPayDlg::OnStatusChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnStatusSetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnStatusKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSCheckQRPayDlg::OnAmountChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnAmountSetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnAmountKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnAmountCheckValue(){
	return 0;
} 
void CHMSCheckQRPayDlg::OnSearchSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_nKey <= 0 && m_nDocNo <= 0)
	{
		_msg(L"Key và số hồ sơ không hợp lệ!");
		return;
	}

	if (!pMF->CheckPermission(_T("FM.100.100")))
	{
		ShowMessageBox(_T("Không có quyền gạch nợ thanh toán QR Code [FM.100.100]"));
		return;
	}

	CStringA jsonBody;

	CStringA m_szFDA(m_szFromDateAnsi);
	CStringA m_szTDA(m_szToDateAnsi);

	jsonBody.Format(R"({"fromDate":"%s","toDate":"%s","docno":%ld,"key":%ld})", m_szFDA, m_szTDA, m_nDocNo, m_nKey);

	CInternetSession session(_T("VIMES_RECONCILIATION_BYDOCKEY"));
	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	DWORD dwRet = 0;

	// Set timeouts before making the connection
	session.SetOption(INTERNET_OPTION_CONNECT_TIMEOUT, 60000);  // 60 seconds for connecting
	session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 120000); // 120 seconds for receiving data
	session.SetOption(INTERNET_OPTION_SEND_TIMEOUT, 60000);     // 60 seconds for sending data

	try{
		// URL to the API
		CString strServerName = m_szUrlBank;
		CString strObject = _T("/api/mb/transactionhistory");
		INTERNET_PORT nPort = 80;  // Assuming HTTP, change to 443 if using HTTPS

		// Connect to the server
		pServer = session.GetHttpConnection(strServerName, nPort);

		// Open the HTTP request for POST
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST, strObject, NULL, 1, NULL, NULL, INTERNET_FLAG_EXISTING_CONNECT);

		// Add request headers
		pFile->AddRequestHeaders(_T("Content-Type: application/json"));
		pFile->AddRequestHeaders(_T("Authorization: Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6InZpbWVzIiwicm9sZSI6InN5c3RlbSIsImlhdCI6MTY5OTI1Njg4MH0.U_Cn6XIhgPFSieVloSZGMxofG-Nq8aja1MfcdhM5IFc"));

		// Send the request with the JSON body
		pFile->SendRequest(NULL, 0, (LPVOID)(LPCSTR)jsonBody, jsonBody.GetLength());

		// Get the status code of the response
		pFile->QueryInfoStatusCode(dwRet);

		if (dwRet == HTTP_STATUS_OK)
		{
			DWORD dwSize;
			pFile->QueryInfo(HTTP_QUERY_CONTENT_LENGTH, dwSize);

			CStringA responseStr;
			char* buffer = responseStr.GetBufferSetLength(dwSize);

			pFile->Read(buffer, dwSize);
			responseStr.ReleaseBuffer();

			// Parsing manually here
			CStringA referenceNumber, amount, paymentDetail, transactionStatus, transactionDate;

			int refStart = responseStr.Find("\"referenceNumber\":\"") + strlen("\"referenceNumber\":\"");
			int refEnd = responseStr.Find("\"", refStart);
			referenceNumber = responseStr.Mid(refStart, refEnd - refStart);

			int amtStart = responseStr.Find("\"amount\":\"") + strlen("\"amount\":\"");
			int amtEnd = responseStr.Find("\"", amtStart);
			amount = responseStr.Mid(amtStart, amtEnd - amtStart);

			int detailStart = responseStr.Find("\"paymentDetail\":\"") + strlen("\"paymentDetail\":\"");
			int detailEnd = responseStr.Find("\"", detailStart);
			paymentDetail = responseStr.Mid(detailStart, detailEnd - detailStart);

			int statusStart = responseStr.Find("\"transactionStatus\":\"") + strlen("\"transactionStatus\":\"");
			int statusEnd = responseStr.Find("\"", statusStart);
			transactionStatus = responseStr.Mid(statusStart, statusEnd - statusStart);

			int dateStart = responseStr.Find("\"transactionDate\":\"") + strlen("\"transactionDate\":\"");
			int dateEnd = responseStr.Find("\"", dateStart);
			transactionDate = responseStr.Mid(dateStart, dateEnd - dateStart);

			CString message;
			message.Format(_T("Reference Number: %s\nAmount: %s\nPayment Detail: %s\nTransaction Status: %s\nTransaction Date: %s"),
				CString(referenceNumber), CString(amount), CString(paymentDetail), CString(transactionStatus), CString(transactionDate));

			//AfxMessageBox(message);
			m_nAmount = ToLong(CString(amount));
			m_szRefNumber = CString(referenceNumber);
			m_szDetail = CString(paymentDetail);
			m_szStatus = CString(transactionStatus);

			szSQL.Format(_T("GET_PATIENTNAME('%ld')"), m_nDocNo);
			m_szPatientName = pMF->ExecDML(szSQL);
			
			UpdateData(FALSE);
			//_msg(_T("%s %s %s %ld"),m_szRefNumber, m_szDetail, m_szStatus, m_nAmount);
		}
	}
	catch (CInternetException* e)
	{
		TCHAR errorMsg[1024];
		e->GetErrorMessage(errorMsg, 1024);
		AfxMessageBox(errorMsg);
		e->Delete();
	}
	
	session.Close();
	
}

void CHMSCheckQRPayDlg::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSCheckQRPayDlg::OnDetailChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnDetailSetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnDetailKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnDetailCheckValue(){
	return 0;
} 
/*void CHMSCheckQRPayDlg::OnRefNumberLabelChange(){
	
} */
/*void CHMSCheckQRPayDlg::OnRefNumberLabelSetfocus(){
	
} */
/*void CHMSCheckQRPayDlg::OnRefNumberLabelKillfocus(){
	
} */
int CHMSCheckQRPayDlg::OnRefNumberLabelCheckValue(){
	return 0;
} 
/*void CHMSCheckQRPayDlg::OnPatientNameChange(){

} */
/*void CHMSCheckQRPayDlg::OnPatientNameSetfocus(){

} */
/*void CHMSCheckQRPayDlg::OnPatientNameKillfocus(){

} */
int CHMSCheckQRPayDlg::OnPatientNameCheckValue() {
	return 0;
}
int CHMSCheckQRPayDlg::OnAddHMSCheckQRPayDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCheckQRPayDlg::OnEditHMSCheckQRPayDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCheckQRPayDlg::OnDeleteHMSCheckQRPayDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSCheckQRPayDlg();
 	}
	return 0;
}
int CHMSCheckQRPayDlg::OnSaveHMSCheckQRPayDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnHMSCheckQRPayDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSCheckQRPayDlg::OnCancelHMSCheckQRPayDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSCheckQRPayDlg::OnHMSCheckQRPayDlgListLoadData(){
	return 0;
}
