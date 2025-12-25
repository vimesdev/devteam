#include "HMSEelectronicControlDialog.h"
#include "MainFrm.h"
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CHMSEelectronicControlDialog *pVw = (CHMSEelectronicControlDialog *)pWnd;
	pVw->OnLoadDataSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSEelectronicControlDialog *pVw = (CHMSEelectronicControlDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEelectronicControlDialog *pVw = (CHMSEelectronicControlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicControlDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEelectronicControlDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicControlDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicControlDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicControlDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicControlDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
static int _OnAddHMSEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnAddHMSEelectronicControlDialog();
} 
static int _OnEditHMSEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnEditHMSEelectronicControlDialog();
} 
static int _OnDeleteHMSEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnDeleteHMSEelectronicControlDialog();
} 
static int _OnSaveHMSEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnSaveHMSEelectronicControlDialog();
} 
static int _OnCancelHMSEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicControlDialog*)pWnd)->OnCancelHMSEelectronicControlDialog();
} 
CHMSEelectronicControlDialog::CHMSEelectronicControlDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CHMSEelectronicControlDialog::~CHMSEelectronicControlDialog(){
}
void CHMSEelectronicControlDialog::OnCreateComponents(){
	m_wndGroupFilterData.Create(this, _T("Group Filter Data"), 5, 2, 1005, 62);
	m_wndGroupListInvoice.Create(this, _T("Group List Invoice"), 5, 70, 1005, 620);
	m_wndLoadData.Create(this, _T("&Load Data"), 750, 30, 830, 55);
	m_wndPost.Create(this, _T("&Post"), 835, 30, 915, 55);
	m_wndClose.Create(this, _T("&Close"), 920, 30, 1000, 55);
	m_wndList.Create(this,10, 95, 1000, 615); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 430, 30, 510, 55);
	m_wndInvoiceNo.Create(this,515, 30, 635, 55); 

}
void CHMSEelectronicControlDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);

	
	m_wndList.InsertColumn(0, _T("DocumentNo"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Address"), CFMT_TEXT, 280);
	m_wndList.InsertColumn(4, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(5, _T("Invoice No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("Desc"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Type"), CFMT_TEXT, 80);


	//hms_patient: thong tin chinh cua benh nhan
	m_hms_electronicTbl.SetTableName(_T("HMS_ELECTRONICINVOICE"));	
	m_hms_electronicTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_electronicTbl.AddField(_T("HFE_CUSNAME"), dfText, 65); 
	m_hms_electronicTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_electronicTbl.AddField(_T("HFE_PATTERN"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_STATUS"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_CREATEDATE"), dfDateTime); 
	m_hms_electronicTbl.AddField(_T("HFE_ARISINGDATE"), dfDateTime); 
	m_hms_electronicTbl.AddField(_T("HFE_SERIAL"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_AMOUNT"), dfLong); 
	m_hms_electronicTbl.AddField(_T("HFE_TYPE"), dfText, 60); 
	

}
void CHMSEelectronicControlDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);

}
void CHMSEelectronicControlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
}
void CHMSEelectronicControlDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEelectronicControlDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	
	m_hms_electronicTbl.SetValue(_T("HFE_DOCNO"), m_nDocNo); 
	m_hms_electronicTbl.SetValue(_T("HFE_CUSNAME"), m_szPatientName); 
	m_hms_electronicTbl.SetValue(_T("HFE_INVOICENO"), m_nInvoiceNo); 
	m_hms_electronicTbl.SetValue(_T("HFE_PATTERN"), m_szPattern); 
	m_hms_electronicTbl.SetValue(_T("HFE_STATUS"), m_szStatus); 
	m_hms_electronicTbl.SetValue(_T("HFE_CREATEDATE"), pMF->GetSysDateTime()); 
	m_hms_electronicTbl.SetValue(_T("HFE_ARISINGDATE"), m_szArisingDate); 
	m_hms_electronicTbl.SetValue(_T("HFE_SERIAL"), m_szSerial); 
	m_hms_electronicTbl.SetValue(_T("HFE_AMOUNT"), m_nAmount); 
	m_hms_electronicTbl.SetValue(_T("HFE_TYPE"), m_szType); 

}
void CHMSEelectronicControlDialog::SetDefaultValues(){

	//m_szFromDate.Empty();
	//m_szToDate.Empty();
	m_nInvoiceNo=0;

}
int CHMSEelectronicControlDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1);
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
void CHMSEelectronicControlDialog::OnLoadDataSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSEelectronicControlDialog::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSEelectronicControlDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSEelectronicControlDialog::OnListDblClick(){
	
} 
void CHMSEelectronicControlDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEelectronicControlDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEelectronicControlDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	UpdateData(true);
	int nCount;
	pMF->BeginWaitCursor();

	nCount = GetDataInvoice(m_szFromDate, m_szToDate);
	if(nCount <= 0)
	{
		ShowMessageBox(_T("No Data"));
		return nCount;
	}

	/*if(m_nInvoiceNo > 0)
	{
		szWhere.Format(_T(" AND invoiceno = %ld"), m_nInvoiceNo);
	}*/
	
	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
	_T("   hd_docno          AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                             AS pname,") \
	_T("   hp_birthdate                                                AS birthdate,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate)          AS age,") \
	_T("   sys_sel_getname('sys_sex', hp_sex)                          AS sex,") \
	_T("   hp_dtladdr                                                  AS detailaddress,") \
	_T("   hms_getaddress(hp_provid,hp_distid, hp_villid)              AS address,") \
	_T("   hp_workplace                                                AS workplace,") \
	_T("   sys_sel_getname('hms_rank', CAST(hp_rank AS NVARCHAR2(15))) AS rank,") \
	_T("   hms_getobjectname(hd_object)                                AS objectname,") \
	_T("   invoiceno,") \
	_T("   recvdate,") \
	_T("   amount") \
	_T(" FROM") \
	_T("   (SELECT hfe_docno AS docno,") \
	_T("     hfe_type        AS typeid,") \
	_T("     hfe_desc        AS descs,") \
	_T("     hfe_invoiceno   AS invoiceno,") \
	_T("     hfe_date        AS recvdate,") \
	_T("     hfe_status      AS status,") \
	_T("     hfe_amount      AS amount") \
	_T("   FROM hms_fee_electronicinvoice") \
	_T("   WHERE hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T("   UNION ALL") \
	_T("   SELECT hfe_docno,") \
	_T("     '',") \
	_T("     '',") \
	_T("     hfe_invoiceno,") \
	_T("     HFE_ARISINGDATE,") \
	_T("     '',") \
	_T("     hfe_amount") \
	_T("   FROM HMS_ELECTRONICINVOICE") \
	_T("   WHERE HFE_ARISINGDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T("   )") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno) ") \
	_T(" WHERE 1=1 %s "),  m_szFromDate, m_szToDate,  m_szFromDate, m_szToDate, szWhere);

//_msg(_T("%s"), szSQL);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("address")), 
			rs.GetValue(_T("recvdate")),
			rs.GetValue(_T("invoiceno")),
			rs.GetValue(_T("cost")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("Descs")),
			rs.GetValue(_T("typeid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	pMF->EndWaitCursor();

	return nCount;
}
/*void CHMSEelectronicControlDialog::OnFromDateChange(){
	
} */
/*void CHMSEelectronicControlDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSEelectronicControlDialog::OnFromDateKillfocus(){
	
} */
int CHMSEelectronicControlDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSEelectronicControlDialog::OnToDateChange(){
	
} */
/*void CHMSEelectronicControlDialog::OnToDateSetfocus(){
	
} */
/*void CHMSEelectronicControlDialog::OnToDateKillfocus(){
	
} */
int CHMSEelectronicControlDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSEelectronicControlDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSEelectronicControlDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSEelectronicControlDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSEelectronicControlDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
int CHMSEelectronicControlDialog::OnAddHMSEelectronicControlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEelectronicControlDialog::OnEditHMSEelectronicControlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEelectronicControlDialog::OnDeleteHMSEelectronicControlDialog(){
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
 		OnCancelHMSEelectronicControlDialog();
 	}
	return 0;
}
int CHMSEelectronicControlDialog::OnSaveHMSEelectronicControlDialog(){
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
 		//OnHMSEelectronicControlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEelectronicControlDialog::OnCancelHMSEelectronicControlDialog(){
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
int CHMSEelectronicControlDialog::OnHMSEelectronicControlDialogListLoadData(){
	return 0;
}
#include "json.h"
int CHMSEelectronicControlDialog::GetDataInvoice(CString szFromDate, CString szToDate)
{	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	
	// Xoa so lieu trong bang HMS_ELECTRONICINVOICE
	szSQL.Format(_T("DELETE FROM HMS_ELECTRONICINVOICE "));
	pMF->ExecSQL(szSQL);

	CInternetSession session(_T("VIMES_INVOICE_GET"));

   CHttpConnection* pServer = NULL;
   CHttpFile* pFile = NULL;
   CString szResponse;
   
   CString szURL;
   //szURL.Format(_T("http://bv108.vinvoice.vn/api/convertinv/convertInvoice?username=apiaccount&password=123456@a&fkey=%ld"), nInvoiceNo);
   szURL.Format(_T("http://bv108admin.vinvoice.vn/api/businessInv/invoicesByDay?username=apiaccount&password=123456@a&fromDate=%s&toDate=%s"), CDate::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
   
  _tprintf(_T("\r\n%s"), szURL);

  szResponse.Empty();

   BOOL result = FALSE;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort;
      DWORD dwRet = 0;
   

	  CString svr, strobj, strParams;
	  DWORD svrtype;
	  INTERNET_PORT port;

	  CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

	  ::AfxParseURL(szURL, svrtype, svr, strobj, port);


	   pServer = session.GetHttpConnection(svr, port);

		 
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_GET,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);
		   
		result = pFile->SendRequest(NULL, 0, (LPVOID)NULL,0);   

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\nQueryInfoStatusCode:%d"), dwRet);      
	   
	   if (dwRet == HTTP_STATUS_OK)
		{
	        CHAR szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
				break;
			    
				str += szBuff;			    
			}
			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, str.length());
			wcString[nbyte] = L'\0';
			szResponse.AppendFormat(_T("%s"), wcString);
			delete wcString;
			//_msg(_T("\r\n%s"), szResponse);
	  }
   else
   {
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi m\xE1y SERVER"));
   }
		delete pFile;
		delete pServer;
   }

   catch (CInternetException* pEx)
   {
       //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      _tprintf(_T("%s"), pszError);
	  CString szMsg;
	  szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng m\xE1y in[%s]"), pszError);
	  ShowMessageBox(szMsg);
   }	
   
   int nCount =0;
   long nInvoiceNo;
   JSONVALUE* jsonResponse;
	
   if(!szResponse.IsEmpty())
   {	
		
		JSONVALUE j;
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		//j.Parse((LPCTSTR) szResponse);
		CString tmpStr, tmpStr1;
		//_tprintf(_T("\r\n%s"), szResponse);

		for(int i = 0; i< j.Size(); i++){
			nCount ++;
			j2 = j.At(i);
			
			j3 = j2["Amount"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_nAmount = str2long(tmpStr);
			
			j3 = j2["ArisingDate"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szArisingDate = CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd);
			_tprintf(_T("\r\nArisingDate:%s"), m_szArisingDate);

			j3 = j2["CusCode"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_nDocNo = ToLong(tmpStr);
			_tprintf(_T("\r\nCusCode:%ld"), m_nDocNo);

			j3 = j2["CusName"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szPatientName = tmpStr;

			j3 = j2["Pattern"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szPattern = tmpStr;

			j3 = j2["SoPT"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nInvoiceNo = ToLong(tmpStr);
			_tprintf(_T("\r\nInvoiceNo:%ld"), nInvoiceNo);

			j3 = j2["Serial"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szSerial = tmpStr;

			j3 = j2["Status"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szStatus = tmpStr;

			j3 = j2["Type"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szType = tmpStr;	
			
			if(nInvoiceNo > 0)
			{
				m_hms_electronicTbl.SetValue(_T("HFE_DOCNO"), m_nDocNo); 
				m_hms_electronicTbl.SetValue(_T("HFE_CUSNAME"), m_szPatientName); 
				m_hms_electronicTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo); 
				m_hms_electronicTbl.SetValue(_T("HFE_PATTERN"), m_szPattern); 
				m_hms_electronicTbl.SetValue(_T("HFE_STATUS"), m_szStatus); 
				m_hms_electronicTbl.SetValue(_T("HFE_CREATEDATE"), pMF->GetSysDateTime()); 
				m_hms_electronicTbl.SetValue(_T("HFE_ARISINGDATE"), m_szArisingDate); 
				m_hms_electronicTbl.SetValue(_T("HFE_SERIAL"), m_szSerial); 
				m_hms_electronicTbl.SetValue(_T("HFE_AMOUNT"), m_nAmount); 
				m_hms_electronicTbl.SetValue(_T("HFE_TYPE"), m_szType); 


				szSQL = m_hms_electronicTbl.GetInsertSQL();
				//_tprintf(_T("\r\n%s"), szSQL);
				pMF->ExecSQL(szSQL);
			}
			
			//_tprintf(_T("\r\n%d"), i);
		}

   }
	return nCount;
}
