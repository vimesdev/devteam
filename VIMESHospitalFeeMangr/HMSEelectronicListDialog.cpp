#include "HMSEelectronicListDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEelectronicListDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicListDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnClerkAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEelectronicListDialog *)pWnd)->OnOrderNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEelectronicListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEelectronicListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEelectronicListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSEelectronicListDialog *pVw = (CHMSEelectronicListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEelectronicListDialog *pVw = (CHMSEelectronicListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEelectronicListDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnAddHMSEelectronicListDialog();
} 
static int _OnEditHMSEelectronicListDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnEditHMSEelectronicListDialog();
} 
static int _OnDeleteHMSEelectronicListDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnDeleteHMSEelectronicListDialog();
} 
static int _OnSaveHMSEelectronicListDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnSaveHMSEelectronicListDialog();
} 
static int _OnCancelHMSEelectronicListDialogFnc(CWnd *pWnd){
	 return ((CHMSEelectronicListDialog*)pWnd)->OnCancelHMSEelectronicListDialog();
}
static void _OnNotComplatePostSelectFnc(CWnd *pWnd)
{
	 ((CHMSEelectronicListDialog*)pWnd)->OnNotComplatePostSelect();
}
CHMSEelectronicListDialog::CHMSEelectronicListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 425;
	SetDefaultValues();
}
CHMSEelectronicListDialog::~CHMSEelectronicListDialog(){
}
void CHMSEelectronicListDialog::OnCreateComponents()
{
	m_wndPaymentReceiptList.Create(this, _T("Payment && receipt list"), 5, 65, 960, 385);
	m_wndSearchInformation.Create(this, _T("SSearch Information"), 5, 5, 960, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 455, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 460, 30, 540, 55);
	m_wndClerk.Create(this,545, 30, 745, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 750, 30, 830, 55);
	m_wndOrderNo.Create(this,835, 30, 925, 55); 
	m_wndList.Create(this,10, 90, 955, 380); 
	m_wndRefresh.Create(this, _T("&Refesh"), 715, 390, 835, 415);
	m_wndClose.Create(this, _T("&Close"), 840, 390, 960, 415);
	m_wndNotComplatePost.Create(this, _T("Post chưa đủ hồ sơ"), 10, 390, 159, 415);

}
void CHMSEelectronicListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(1024);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("CreatedDate"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(1, _T("Createdby"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("PostedDate"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(3, _T("PostedBy"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Status"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Desc"), CFMT_NUMBER, 180);
	m_wndList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 120);
	m_wndList.InsertColumn(7, _T("InvoiceNo"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(8, _T("AutoPost"), CFMT_TEXT, 90);
	


}
void CHMSEelectronicListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_wndNotComplatePost.SetEvent(WE_CLICK, _OnNotComplatePostSelectFnc);

	m_szFromDate.AppendFormat(_T(" %s"), _T("00:01"));
	m_szToDate.AppendFormat(_T(" %s"), _T("23:59"));
	OnListLoadData();
	SetMode(VM_NONE);

}
void CHMSEelectronicListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndNotComplatePost.GetDlgCtrlID(), m_bNotComplatePost);
}
void CHMSEelectronicListDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Clerk")] =  m_szClerkKey;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Clerk")].GetValue(m_szClerkKey);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	}

}
void CHMSEelectronicListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEelectronicListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEelectronicListDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szOrderNo.Empty();
	m_bNotComplatePost=FALSE;

}
int CHMSEelectronicListDialog::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,-1);
 			//SetDefaultValues();
 			break;
 		};

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSEelectronicListDialog::OnFromDateChange(){
	
} */
/*void CHMSEelectronicListDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSEelectronicListDialog::OnFromDateKillfocus(){
	
} */
int CHMSEelectronicListDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSEelectronicListDialog::OnToDateChange(){
	
} */
/*void CHMSEelectronicListDialog::OnToDateSetfocus(){
	
} */
/*void CHMSEelectronicListDialog::OnToDateKillfocus(){
	
} */
int CHMSEelectronicListDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSEelectronicListDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEelectronicListDialog::OnClerkSelendok(){
	 
}
/*void CHMSEelectronicListDialog::OnClerkSetfocus(){
	
}*/
/*void CHMSEelectronicListDialog::OnClerkKillfocus(){
	
}*/
long CHMSEelectronicListDialog::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szClerkKey
};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSEelectronicListDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEelectronicListDialog::OnOrderNoChange(){
	
} */
/*void CHMSEelectronicListDialog::OnOrderNoSetfocus(){
	
} */
/*void CHMSEelectronicListDialog::OnOrderNoKillfocus(){
	
} */
int CHMSEelectronicListDialog::OnOrderNoCheckValue(){
	return 0;
} 
void CHMSEelectronicListDialog::OnListDblClick(){
	OnOK();
} 
void CHMSEelectronicListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nInvoiceNo = str2long(m_wndList.GetItemText(nNewItem, 7));
} 
int CHMSEelectronicListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEelectronicListDialog::OnListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	if (m_bNotComplatePost)
	{
		szSQL.Format(_T(" SELECT hfe_date,hfe_createdby, hfe_posteddate, hfe_postedby,hfe_status,") \
		_T(" hfe_desc, hfe_amount, hfe_orderid, HFE_AUTO_POST,") \
		_T(" IS_COMPLATE_POST_INVOICE(hfe_orderid)") \
		_T(" FROM HMS_FEE_ELECTRONIC") \
		_T(" WHERE HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T(" AND IS_COMPLATE_POST_INVOICE(hfe_orderid) =0") \
		_T(" ORDER BY hfe_orderid,") \
		_T(" hfe_date"), m_szFromDate, m_szToDate);
	}
	else
		szSQL.Format(_T("SELECT * FROM HMS_FEE_ELECTRONIC WHERE HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') ORDER BY hfe_orderid, hfe_date"), m_szFromDate, m_szToDate);
	//_msg(_T("%s"), szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hfe_date")),
			rs.GetValue(_T("hfe_createdby")),
			rs.GetValue(_T("hfe_posteddate")),
			rs.GetValue(_T("hfe_postedby")),
			rs.GetValue(_T("hfe_status")),
			rs.GetValue(_T("hfe_desc")),
			rs.GetValue(_T("hfe_amount")),
			rs.GetValue(_T("hfe_orderid")),
			rs.GetValue(_T("HFE_AUTO_POST")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSEelectronicListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
} 
void CHMSEelectronicListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSEelectronicListDialog::OnAddHMSEelectronicListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEelectronicListDialog::OnEditHMSEelectronicListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEelectronicListDialog::OnDeleteHMSEelectronicListDialog(){
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
 		OnCancelHMSEelectronicListDialog();
 	}
	return 0;
}
int CHMSEelectronicListDialog::OnSaveHMSEelectronicListDialog(){
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
 		//OnHMSEelectronicListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEelectronicListDialog::OnCancelHMSEelectronicListDialog(){
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
int CHMSEelectronicListDialog::OnHMSEelectronicListDialogListLoadData(){
	return 0;
}
	void CHMSEelectronicListDialog::OnNotComplatePostSelect()
	{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
