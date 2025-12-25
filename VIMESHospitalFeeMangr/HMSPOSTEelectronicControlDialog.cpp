#include "HMSPOSTEelectronicControlDialog.h"
#include "MainFrm.h"
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CHMSPOSTEelectronicControlDialog *pVw = (CHMSPOSTEelectronicControlDialog *)pWnd;
	pVw->OnLoadDataSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSPOSTEelectronicControlDialog *pVw = (CHMSPOSTEelectronicControlDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPOSTEelectronicControlDialog *pVw = (CHMSPOSTEelectronicControlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPOSTEelectronicControlDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPOSTEelectronicControlDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnPostdBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPOSTEelectronicControlDialog* )pWnd)->OnPostdBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPostdBySelendokFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnPostdBySelendok();
}
/*static void _OnPostdBySetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnPostdByKillfocus();
}*/
/*static void _OnPostdByKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnPostdByKillfocus();
}*/
static long _OnPostdByLoadDataFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnPostdByLoadData();
}
/*static void _OnPostdByAddNewFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnPostdByAddNew();
}*/
/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnTotalCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPOSTEelectronicControlDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPOSTEelectronicControlDialog *)pWnd)->OnAmountCheckValue();
} 
static int _OnAddHMSPOSTEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnAddHMSPOSTEelectronicControlDialog();
} 
static int _OnEditHMSPOSTEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnEditHMSPOSTEelectronicControlDialog();
} 
static int _OnDeleteHMSPOSTEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnDeleteHMSPOSTEelectronicControlDialog();
} 
static int _OnSaveHMSPOSTEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnSaveHMSPOSTEelectronicControlDialog();
} 
static int _OnCancelHMSPOSTEelectronicControlDialogFnc(CWnd *pWnd){
	 return ((CHMSPOSTEelectronicControlDialog*)pWnd)->OnCancelHMSPOSTEelectronicControlDialog();
} 
CHMSPOSTEelectronicControlDialog::CHMSPOSTEelectronicControlDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CHMSPOSTEelectronicControlDialog::~CHMSPOSTEelectronicControlDialog(){
}
void CHMSPOSTEelectronicControlDialog::OnCreateComponents(){
	m_wndGroupFilterData.Create(this, _T("Group Filter Data"), 5, 2, 1005, 92);
	m_wndGroupListInvoice.Create(this, _T("Group List Invoice"), 5, 97, 1005, 622);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 445, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 450, 30, 540, 55);
	m_wndDocumentNo.Create(this,545, 30, 665, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 60, 100, 85);
	m_wndStatus.Create(this,105, 60, 225, 85); 
	m_wndPostdByLabel.Create(this, _T("Postd by"), 230, 60, 320, 85);
	m_wndPostdBy.Create(this,325, 60, 445, 85); 
	m_wndTotalLabel.Create(this, _T("Total"), 750, 60, 830, 85);
	m_wndTotal.Create(this,835, 60, 915, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 450, 59, 540, 84);
	m_wndAmount.Create(this,545, 60, 665, 85); 
	m_wndLoadData.Create(this, _T("&Load Data"), 750, 30, 830, 55);
	m_wndPost.Create(this, _T("&\x110\x1ED1i so\xE1t"), 835, 30, 915, 55);
	m_wndClose.Create(this, _T("&Close"), 920, 30, 1000, 55);
	m_wndList.Create(this,10, 125, 1000, 615); 

}
void CHMSPOSTEelectronicControlDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	
	m_wndAmount.SetCurrencyFormat(true);
	m_wndTotal.SetCurrencyFormat(true);
	
	m_wndList.InsertColumn(0, _T("DocumentNo"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);	
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(3, _T("key"), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(4, _T("pkey"), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT, 120);
	
	
	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Desc"), CFMT_TEXT, 250);


	m_wndPostdBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndPostdBy.InsertColumn(1, _T("Desc"), CFMT_TEXT, 250);


	//hms_patient: thong tin chinh cua benh nhan
	m_hms_electronicTbl.SetTableName(_T("HMS_ELECTRONICINVOICE"));	
	m_hms_electronicTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_electronicTbl.AddField(_T("HFE_CUSNAME"), dfText, 65); 
	m_hms_electronicTbl.AddField(_T("HFE_KEY"), dfDouble); 
	m_hms_electronicTbl.AddField(_T("HFE_FKEY"), dfDouble); 
	m_hms_electronicTbl.AddField(_T("HFE_PATTERN"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_STATUS"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_CREATEDATE"), dfDateTime); 
	m_hms_electronicTbl.AddField(_T("HFE_ARISINGDATE"), dfDateTime); 
	m_hms_electronicTbl.AddField(_T("HFE_SERIAL"), dfText, 60); 
	m_hms_electronicTbl.AddField(_T("HFE_AMOUNT"), dfDouble); 
	m_hms_electronicTbl.AddField(_T("HFE_TYPE"), dfText, 60); 
	

}
void CHMSPOSTEelectronicControlDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Export Excel"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);

	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPostdBy.SetEvent(WE_SELENDOK, _OnPostdBySelendokFnc);
	//m_wndPostdBy.SetEvent(WE_SETFOCUS, _OnPostdBySetfocusFnc);
	//m_wndPostdBy.SetEvent(WE_KILLFOCUS, _OnPostdByKillfocusFnc);
	m_wndPostdBy.SetEvent(WE_SELCHANGE, _OnPostdBySelectChangeFnc);
	m_wndPostdBy.SetEvent(WE_LOADDATA, _OnPostdByLoadDataFnc);
	//m_wndPostdBy.SetEvent(WE_ADDNEW, _OnPostdByAddNewFnc);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndTotal.SetEvent(WE_CHECKVALUE, _OnTotalCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_szFromDate.Format(_T("%s %s"), pMF->GetSysDate(), _T("06:00"));
	m_szToDate.Format(_T("%s %s"), pMF->GetSysDate(), _T("23:59"));
	//m_szFromDate.Format(_T("%s %s"), _T("2015/05/18"), _T("06:00"));
	//m_szToDate.Format(_T("%s %s"), _T("2015/05/18"), _T("23:59"));
	SetMode(VM_EDIT);

}
void CHMSPOSTEelectronicControlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndPostdBy.GetDlgCtrlID(), m_szPostdByKey);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSPOSTEelectronicControlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("PostdBy")] =  m_szPostdByKey;
	m_jData[_T("Total")] =  m_nTotal;
	m_jData[_T("Amount")] =  m_nAmount;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("PostdBy")].GetValue(m_szPostdByKey);
	m_jData[_T("Total")].GetValue(m_nTotal);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	}

}
void CHMSPOSTEelectronicControlDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPOSTEelectronicControlDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	
	m_hms_electronicTbl.SetValue(_T("HFE_DOCNO"), m_nDocNo); 
	m_hms_electronicTbl.SetValue(_T("HFE_CUSNAME"), m_szPatientName); 
	m_hms_electronicTbl.SetValue(_T("HFE_INVOICENO"), m_nDocumentNo); 
	m_hms_electronicTbl.SetValue(_T("HFE_PATTERN"), m_szPattern); 
	m_hms_electronicTbl.SetValue(_T("HFE_STATUS"), m_szStatus); 
	m_hms_electronicTbl.SetValue(_T("HFE_CREATEDATE"), pMF->GetSysDateTime()); 
	m_hms_electronicTbl.SetValue(_T("HFE_ARISINGDATE"), m_szArisingDate); 
	m_hms_electronicTbl.SetValue(_T("HFE_SERIAL"), m_szSerial); 
	m_hms_electronicTbl.SetValue(_T("HFE_AMOUNT"), m_nAmount); 
	m_hms_electronicTbl.SetValue(_T("HFE_TYPE"), m_szType); 

}
void CHMSPOSTEelectronicControlDialog::SetDefaultValues(){

	//m_szFromDate.Empty();
	//m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szStatusKey.Empty();
	m_szPostdByKey.Empty();
	m_nTotal=0;
	m_nAmount=0;

}
int CHMSPOSTEelectronicControlDialog::SetMode(int nMode){
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

		m_wndTotal.EnableWindow(false);
		m_wndAmount.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPOSTEelectronicControlDialog::OnLoadDataSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szMsg;
	UpdateData(true);
	szMsg.Format(_T("T\xE1\x63 v\x1EE5 l\x1EA5y \x64\x1EEF li\x1EC7u t\x1EEB h\x1EC7 th\x1ED1ng H\x110 t\x1EEB ng\xE0y[%s] \x111\x1EBFn ng\xE0y [%s]. \r\n\x42\x1EA1n \x63\xF3 mu\x1ED1n t\x1EA1o \x64\x1EEF li\x1EC7u kh\xF4ng?"), m_szFromDate, m_szToDate);
	
	if(ShowMessageBox(szMsg, MB_ICONQUESTION|MB_YESNO) == IDNO)
		return;
	BeginWaitCursor();
	if(GetDataInvoice(m_szFromDate, m_szToDate) > 0)
		OnListLoadData();
	else
		ShowMessageBox(_T("No Data"));
	
	EndWaitCursor();
} 
#include "HMSEletronicConfirmDialog.h"
void CHMSPOSTEelectronicControlDialog::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnListLoadData();

	if(m_wndList.GetItemCount() <= 0)
	{
		ShowMessageBox(_T("No data"));
		return;
	}

} 
void CHMSPOSTEelectronicControlDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnCancel();
	return;
		CString szDataJson;
		std::wstring json_string;
		JSONVALUE jbuilder;
		CString szAmount;
		
				
		szDataJson.Format(_T("["));
		szAmount = _T("212353.0");		
		jbuilder[_T("Amount")]= szAmount;
		jbuilder[_T("VATAmount")]= szAmount;
		
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		szDataJson.AppendFormat(_T("]"));
		szDataJson.Replace(_T(",]"), _T("]"));

		_tprintf(_T("\r\n%s"), szDataJson);

		JSONVALUE j;
		JSONVALUE  j2, j3, j4;
		std::wstring strData;
		j.Parse(szDataJson);
		CString tmpStr, tmpStr1;

		for(int i = 0; i< j.Size(); i++){
			j2 = j.At(i);			
			j3 = j2["Amount"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));			
			_tprintf(_T("\r\nAmount:%s"), tmpStr);


			j3 = j2["VATAmount"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			_tprintf(_T("\r\nVATAmount:%s"), tmpStr);
		}

	//OnCancel();
} 
void CHMSPOSTEelectronicControlDialog::OnListDblClick(){
	
} 
void CHMSPOSTEelectronicControlDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPOSTEelectronicControlDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	ExportExcel();

	return 0;
} 
long CHMSPOSTEelectronicControlDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhereSub;
	m_wndList.BeginLoad(); 
	UpdateData(true);
	int nCount;
	pMF->BeginWaitCursor();

	szWhere.Empty();

	/*if(!m_szPostdByKey.IsEmpty()){
		szWhere.Format(_T(" AND lockedby = '%s' "), m_szPostdByKey);
	}

	if(!m_szStatusKey.IsEmpty()){
		if(m_szStatusKey != _T("A"))
			szWhere.AppendFormat(_T(" AND NVL(electronic, 'N') = '%s'"), m_szStatusKey);
	}


	if(m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" AND docno = %ld"), m_nDocumentNo);
	}*/
	
	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname) AS pname,") \
	_T("   key,") \
	_T("   pkey,") \
	_T("   amount,") \
	_T("   docno,") \
	_T("   status") \
	_T(" FROM (") \
	_T("   (SELECT hfe_key as key,hfe_fkey AS pkey,") \
	_T("     hfe_amount          AS amount,") \
	_T("     hfe_docno           AS docno,") \
	_T("     'E'				 AS status") \
	_T("   FROM hms_electronicinvoice") \
	_T("   MINUS") \
	_T("   SELECT hfe_key as key, hfe_pkey AS pkey,") \
	_T("     hfe_patpaid   AS amount,") \
	_T("     hfe_docno     AS docno,") \
	_T("     'E'") \
	_T("   FROM hms_fee_electronicline") \
	_T("   WHERE TRUNC(hfe_lockeddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') AND hfe_pkey > 0") \
	_T("   )") \
	_T(" UNION ALL") \
	_T("   (SELECT hfe_key as key, hfe_pkey AS pkey,") \
	_T("     hfe_patpaid    AS amount,") \
	_T("     hfe_docno      AS docno,") \
	_T("     'V'			AS status") \
	_T("   FROM hms_fee_electronicline") \
	_T("   WHERE TRUNC(hfe_lockeddate) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD') AND hfe_pkey > 0") \
	_T("   MINUS") \
	_T("   SELECT hfe_key as key, hfe_fkey AS pkey,") \
	_T("     hfe_amount         AS amount,") \
	_T("     hfe_docno          AS docno,") \
	_T("     'V'") \
	_T("   FROM hms_electronicinvoice") \
	_T("   ) )") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno) "), m_szFromDate.Left(10), m_szToDate.Left(10), m_szFromDate.Left(10), m_szToDate.Left(10));

	//_msg(_T("%s"), szSQL);

	m_nTotal = 0;
	m_nAmount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_nAmount += ToDouble(rs.GetValue(_T("amount")));
		m_nTotal++;
		m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),			
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("key")),
			rs.GetValue(_T("pkey")),
			rs.GetValue(_T("status")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	pMF->EndWaitCursor();
	UpdateData(false);
	return nCount;
}
/*void CHMSPOSTEelectronicControlDialog::OnFromDateChange(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnFromDateKillfocus(){
	
} */
int CHMSPOSTEelectronicControlDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPOSTEelectronicControlDialog::OnToDateChange(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnToDateKillfocus(){
	
} */
int CHMSPOSTEelectronicControlDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSPOSTEelectronicControlDialog::OnDocumentNoChange(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSPOSTEelectronicControlDialog::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSPOSTEelectronicControlDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPOSTEelectronicControlDialog::OnStatusSelendok(){
	 
}
/*void CHMSPOSTEelectronicControlDialog::OnStatusSetfocus(){
	
}*/
/*void CHMSPOSTEelectronicControlDialog::OnStatusKillfocus(){
	
}*/
long CHMSPOSTEelectronicControlDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStatus.DeleteAllItems(); 
	CString szLabel;
	
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("A")){
			TranslateString(_T("All"), szLabel);
			m_wndStatus.AddItems(_T("Y"), szLabel, NULL);
			
		}
		if(m_szStatusKey == _T("Y")){
			TranslateString(_T("Exported"), szLabel);
			m_wndStatus.AddItems(_T("Y"), szLabel, NULL);
			m_szStatus = _T("Y");
		}
		if(m_szStatusKey == _T("N")){
			TranslateString(_T("Un Exported"), szLabel);
			m_wndStatus.AddItems(_T("N"), szLabel, NULL);
			m_szStatus = _T("N");
		}
		
		return 1;
	}

	TranslateString(_T("All"), szLabel);
	m_wndStatus.AddItems(_T("A"), szLabel, NULL);
	TranslateString(_T("Exported"), szLabel);
	m_wndStatus.AddItems(_T("Y"), szLabel, NULL);
	TranslateString(_T("Un Exported"), szLabel);
	m_wndStatus.AddItems(_T("N"), szLabel, NULL);

	return 0;
}
/*void CHMSPOSTEelectronicControlDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPOSTEelectronicControlDialog::OnPostdBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPOSTEelectronicControlDialog::OnPostdBySelendok(){
	 
}
/*void CHMSPOSTEelectronicControlDialog::OnPostdBySetfocus(){
	
}*/
/*void CHMSPOSTEelectronicControlDialog::OnPostdByKillfocus(){
	
}*/
long CHMSPOSTEelectronicControlDialog::OnPostdByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPostdBy.IsSearchKey() && !m_szPostdByKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szPostdByKey);
	}
	m_wndPostdBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_deptid='PTC' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPostdBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CHMSPOSTEelectronicControlDialog::OnPostdByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnTotalChange(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnTotalSetfocus(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnTotalKillfocus(){
	
} */
int CHMSPOSTEelectronicControlDialog::OnTotalCheckValue(){
	return 0;
} 
/*void CHMSPOSTEelectronicControlDialog::OnAmountChange(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnAmountSetfocus(){
	
} */
/*void CHMSPOSTEelectronicControlDialog::OnAmountKillfocus(){
	
} */
int CHMSPOSTEelectronicControlDialog::OnAmountCheckValue(){
	return 0;
} 
int CHMSPOSTEelectronicControlDialog::OnAddHMSPOSTEelectronicControlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPOSTEelectronicControlDialog::OnEditHMSPOSTEelectronicControlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPOSTEelectronicControlDialog::OnDeleteHMSPOSTEelectronicControlDialog(){
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
 		OnCancelHMSPOSTEelectronicControlDialog();
 	}
	return 0;
}
int CHMSPOSTEelectronicControlDialog::OnSaveHMSPOSTEelectronicControlDialog(){
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
 		//OnHMSPOSTEelectronicControlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPOSTEelectronicControlDialog::OnCancelHMSPOSTEelectronicControlDialog(){
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
int CHMSPOSTEelectronicControlDialog::OnHMSPOSTEelectronicControlDialogListLoadData(){
	return 0;
}
#include "json.h"
int CHMSPOSTEelectronicControlDialog::GetDataInvoice(CString szFromDate, CString szToDate)
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
   //szURL.Format(_T("http://bv108.vinvoice.vn/api/convertinv/convertInvoice?username=apiaccount&password=123456@a&fkey=%ld"), nDocumentNo);
   szURL.Format(_T("%s/InvCompare?username=%s&password=%s&fromdate=%s&todate=%s"), pMF->m_szInvUrl, pMF->m_szInvUserID, pMF->m_szInvPassword, CDate::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));  
   
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
			_tprintf(_T("\r\n%s"), szResponse);
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
	  return -1;
   }	
   
   int nCount =0;
   CString szKey, szFkey;
   JSONVALUE* jsonResponse;
   //_fmsg(_T("\r\n%s"), szResponse);
   CString szAmount;
   if(!szResponse.IsEmpty())
   {			
		JSONVALUE j;
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		j.Parse(szResponse);
		CString tmpStr, tmpStr1;
		

		for(int i = 0; i< j.Size(); i++){
			nCount ++;
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			szKey = tmpStr;

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			szFkey = tmpStr;			
			
			j3 = j2["ArisingDate"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szArisingDate = tmpStr.Left(10);
			//_tprintf(_T("\r\nArisingDate:%s"), m_szArisingDate);


			j3 = j2["MaBA"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_nDocNo = ToLong(tmpStr);
			//_tprintf(_T("\r\nCusCode:%ld"), m_nDocNo);

			j3 = j2["Amount"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));			
			m_nAmount = str2long(tmpStr);			
		

			j3 = j2["Total"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			m_szPatientName = tmpStr;
		
			
			if(str2double(szFkey) > 0)
			{
				m_hms_electronicTbl.SetValue(_T("HFE_DOCNO"), m_nDocNo); 
				m_hms_electronicTbl.SetValue(_T("HFE_CUSNAME"), szAmount); 
				m_hms_electronicTbl.SetValue(_T("HFE_KEY"), szKey); 
				m_hms_electronicTbl.SetValue(_T("HFE_FKEY"), szFkey); 
				m_hms_electronicTbl.SetValue(_T("HFE_PATTERN"), m_szPattern); 
				m_hms_electronicTbl.SetValue(_T("HFE_STATUS"), m_szStatus); 
				m_hms_electronicTbl.SetValue(_T("HFE_CREATEDATE"), pMF->GetSysDateTime()); 
				m_hms_electronicTbl.SetValue(_T("HFE_ARISINGDATE"), m_szArisingDate); 
				m_hms_electronicTbl.SetValue(_T("HFE_SERIAL"), m_szSerial); 
				m_hms_electronicTbl.SetValue(_T("HFE_AMOUNT"), m_nAmount); 
				m_hms_electronicTbl.SetValue(_T("HFE_TYPE"), m_szType); 


				szSQL = m_hms_electronicTbl.GetInsertSQL();				
				pMF->ExecSQL(szSQL);		
				
			}
			
			//_tprintf(_T("\r\n%d"), i);
		}

   }
	return nCount;
}

void CHMSPOSTEelectronicControlDialog::ExportExcel()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhereSub, tmpStr;
	CExcel xls;
	int nRow, nCol;

	if(m_wndList.GetItemCount() <= 0)
	{
		ShowMessageBox(_T("No Data"));
		return;
	}

	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);

	xls.SetRowHeight(4, 40);
	
	nRow = nCol = 0;
	//Header
	/*xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);

	xls.SetCellMergedColumns(nCol + 3, nRow, 4);
	xls.SetCellMergedColumns(nCol + 3, nRow + 1, 4);

	xls.SetCellMergedColumns(nCol, nRow + 2, 5);
	xls.SetCellMergedColumns(nCol, nRow + 3, 5);*/

	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 3, nRow, _T("\x44\x41NH S\xC1\x43H \x110\x1ED0I SO\xC1T HO\xC1 \x110\x1A0N"), FMT_TEXT | FMT_CENTER, true);		
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	
	//Column Header
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("So HS"));
	arrCol.Add(_T("Ho va ten"));
	arrCol.Add(_T("So tien"));
	arrCol.Add(_T("key"));
	arrCol.Add(_T("pkey"));

	nRow = 4;

	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_VCENTER, true, 10); 
	}
	nRow = 5;
	nCol = 0;
	int nIdx = 0;

	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);		
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		tmpStr = m_wndList.GetItemText(i, 0);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);
		
		tmpStr = m_wndList.GetItemText(i, 1);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT );

		tmpStr = m_wndList.GetItemText(i, 2);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		
		tmpStr = m_wndList.GetItemText(i, 3);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_INTEGER);

		tmpStr = m_wndList.GetItemText(i, 4);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_INTEGER);
		nRow++;
	
	}

	xls.Save(_T("Exports\\Danh sach doi soat HD.xls"));
}