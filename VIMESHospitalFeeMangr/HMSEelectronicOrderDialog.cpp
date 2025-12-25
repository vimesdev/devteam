#include "HMSEelectronicOrderDialog.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicOrderDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnCreatedbySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEelectronicOrderDialog* )pWnd)->OnCreatedbySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreatedbySelendokFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnCreatedbySelendok();
}
/*static void _OnCreatedbySetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnCreatedbyKillfocus();
}*/
/*static void _OnCreatedbyKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnCreatedbyKillfocus();
}*/
static long _OnCreatedbyLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicOrderDialog *)pWnd)->OnCreatedbyLoadData();
}
/*static void _OnCreatedbyAddNewFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnCreatedbyAddNew();
}*/
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicOrderDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicOrderDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSEelectronicOrderDialog *pVw = (CHMSEelectronicOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEelectronicOrderDialog *pVw = (CHMSEelectronicOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnExitSelectFnc(CWnd *pWnd){
	CHMSEelectronicOrderDialog *pVw = (CHMSEelectronicOrderDialog *)pWnd;
	pVw->OnExitSelect();
} 
static int _OnAddHMSEelectronicOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicOrderDialog*)pWnd)->OnAddHMSEelectronicOrderDialog();
} 
static int _OnEditHMSEelectronicOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicOrderDialog*)pWnd)->OnEditHMSEelectronicOrderDialog();
} 
static int _OnDeleteHMSEelectronicOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicOrderDialog*)pWnd)->OnDeleteHMSEelectronicOrderDialog();
} 
static int _OnSaveHMSEelectronicOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicOrderDialog*)pWnd)->OnSaveHMSEelectronicOrderDialog();
} 
static int _OnCancelHMSEelectronicOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicOrderDialog*)pWnd)->OnCancelHMSEelectronicOrderDialog();
} 
CHMSEelectronicOrderDialog::CHMSEelectronicOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSEelectronicOrderDialog::~CHMSEelectronicOrderDialog(){
}
void CHMSEelectronicOrderDialog::OnCreateComponents()
{
	m_wndInformation.Create(this, _T("Information"), 5, 5, 430, 90);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 215, 55); 
	m_wndCreatedbyLabel.Create(this, _T("Createdby"), 10, 60, 90, 85);
	m_wndCreatedby.Create(this,95, 60, 425, 85); 
	m_wndInvoiceNoLabel.Create(this, _T("InvoiceNo"), 220, 30, 300, 55);
	m_wndInvoiceNo.Create(this,305, 30, 425, 55); 
	m_wndAdd.Create(this, _T("&Add"), 180, 95, 260, 120);
	m_wndSave.Create(this, _T("&Save"), 265, 95, 345, 120);
	m_wndExit.Create(this, _T("&Exit"), 350, 95, 430, 120);

}
void CHMSEelectronicOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndCreatedby.SetCheckValue(true);
	m_wndCreatedby.LimitText(35);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceNo.SetCheckValue(true);


	m_wndCreatedby.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCreatedby.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_electronicTbl.SetTableName(_T("HMS_FEE_ELECTRONIC"));		
	m_hms_electronicTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15);
	m_hms_electronicTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime);
	m_hms_electronicTbl.AddField(_T("HFE_DATE"), dfDateTime);
	m_hms_electronicTbl.AddField(_T("HFE_ORDERID"), dfInteger);

}
void CHMSEelectronicOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndCreatedby.SetEvent(WE_SELENDOK, _OnCreatedbySelendokFnc);
	//m_wndCreatedby.SetEvent(WE_SETFOCUS, _OnCreatedbySetfocusFnc);
	//m_wndCreatedby.SetEvent(WE_KILLFOCUS, _OnCreatedbyKillfocusFnc);
	m_wndCreatedby.SetEvent(WE_SELCHANGE, _OnCreatedbySelectChangeFnc);
	m_wndCreatedby.SetEvent(WE_LOADDATA, _OnCreatedbyLoadDataFnc);
	//m_wndCreatedby.SetEvent(WE_ADDNEW, _OnCreatedbyAddNewFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndExit.SetEvent(WE_CLICK, _OnExitSelectFnc);
	SetMode(VM_ADD);

}
void CHMSEelectronicOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndCreatedby.GetDlgCtrlID(), m_szCreatedbyKey);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);

}
void CHMSEelectronicOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Createdby")] =  m_szCreatedbyKey;
	m_jData[_T("InvoiceNo")] =  m_nInvoiceNo;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Createdby")].GetValue(m_szCreatedbyKey);
	m_jData[_T("InvoiceNo")].GetValue(m_nInvoiceNo);
	}

}
void CHMSEelectronicOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEelectronicOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_electronicTbl.SetValue(_T("HFE_CREATEDBY"), m_szCreatedbyKey);
	m_hms_electronicTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime());

}
void CHMSEelectronicOrderDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szCreatedbyKey.Empty();
	m_nInvoiceNo=0;
}
int CHMSEelectronicOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
			m_szCreatedbyKey = pMF->GetCurrentUser();
			m_szDate = pMF->GetSysDateTime();
			m_wndSave.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDate.EnableWindow(FALSE);
		m_wndInvoiceNo.EnableWindow(FALSE);
	
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSEelectronicOrderDialog::OnDateChange(){
	
} */
/*void CHMSEelectronicOrderDialog::OnDateSetfocus(){
	
} */
/*void CHMSEelectronicOrderDialog::OnDateKillfocus(){
	
} */
int CHMSEelectronicOrderDialog::OnDateCheckValue(){
	return 0;
} 
void CHMSEelectronicOrderDialog::OnCreatedbySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEelectronicOrderDialog::OnCreatedbySelendok(){
	 
}
/*void CHMSEelectronicOrderDialog::OnCreatedbySetfocus(){
	
}*/
/*void CHMSEelectronicOrderDialog::OnCreatedbyKillfocus(){
	
}*/
long CHMSEelectronicOrderDialog::OnCreatedbyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCreatedby.IsSearchKey() && !m_szCreatedbyKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szCreatedbyKey);
	}
	m_wndCreatedby.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_deptid='PTC' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCreatedby.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEelectronicOrderDialog::OnCreatedbyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEelectronicOrderDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSEelectronicOrderDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSEelectronicOrderDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSEelectronicOrderDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
void CHMSEelectronicOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSEelectronicOrderDialog();
} 
void CHMSEelectronicOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSEelectronicOrderDialog();
} 
void CHMSEelectronicOrderDialog::OnExitSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSEelectronicOrderDialog::OnAddHMSEelectronicOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEelectronicOrderDialog::OnEditHMSEelectronicOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEelectronicOrderDialog::OnDeleteHMSEelectronicOrderDialog(){
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
 		OnCancelHMSEelectronicOrderDialog();
 	}
	return 0;
}
int CHMSEelectronicOrderDialog::OnSaveHMSEelectronicOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	pMF->BeginWaitCursor();
 	if(GetMode() == VM_ADD){

		szSQL.Format(_T("SELECT nextseq('HMS_FEE_ELECTRONIC_ASQ') as INVOICENO FROM DUAL"));
		rs.ExecSQL(szSQL);
		m_nInvoiceNo = rs.GetIntValue();
		m_hms_electronicTbl.SetValue(_T("hfe_orderid"), m_nInvoiceNo);
		m_hms_electronicTbl.SetValue(_T("hfe_date"), m_szDate);
	
 		szSQL = m_hms_electronicTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
	//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{		
		m_szFromDate = m_szToDate = m_szDate.Left(10);
 		szSQL.Format(_T("HMS_ELECTRONICLINE_INSERT(%ld, '%s', '%s')"), m_nInvoiceNo, m_szFromDate, m_szToDate);
		int n = str2int(pMF->ExecDML(szSQL));		
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}	
	
	pMF->EndWaitCursor();
	
	OnOK();
 	return ret;
 	return 0;
}
int CHMSEelectronicOrderDialog::OnCancelHMSEelectronicOrderDialog(){
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
int CHMSEelectronicOrderDialog::OnHMSEelectronicOrderDialogListLoadData(){
	return 0;
}
