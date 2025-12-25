#include "CFMSummaryPaymentAndReceipt.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCFMSummaryPaymentAndReceipt *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCFMSummaryPaymentAndReceipt* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CCFMSummaryPaymentAndReceipt *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnClerkAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CCFMSummaryPaymentAndReceipt *)pWnd)->OnOrderNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCFMSummaryPaymentAndReceipt*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCFMSummaryPaymentAndReceipt*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnListDeleteItem();
} 
static void _OnCloseOutSelectFnc(CWnd *pWnd){
	CCFMSummaryPaymentAndReceipt *pVw = (CCFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnCloseOutSelect();
} 
static void _OnDataSummarySelectFnc(CWnd *pWnd){
	CCFMSummaryPaymentAndReceipt *pVw = (CCFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnDataSummarySelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CCFMSummaryPaymentAndReceipt *pVw = (CCFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CCFMSummaryPaymentAndReceipt *pVw = (CCFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddCFMSummaryPaymentAndReceiptFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnAddCFMSummaryPaymentAndReceipt();
} 
static int _OnEditCFMSummaryPaymentAndReceiptFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnEditCFMSummaryPaymentAndReceipt();
} 
static int _OnDeleteCFMSummaryPaymentAndReceiptFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnDeleteCFMSummaryPaymentAndReceipt();
} 
static int _OnSaveCFMSummaryPaymentAndReceiptFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnSaveCFMSummaryPaymentAndReceipt();
} 
static int _OnCancelCFMSummaryPaymentAndReceiptFnc(CWnd *pWnd){
	 return ((CCFMSummaryPaymentAndReceipt*)pWnd)->OnCancelCFMSummaryPaymentAndReceipt();
} 
CCFMSummaryPaymentAndReceipt::CCFMSummaryPaymentAndReceipt(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 425;
	SetDefaultValues();
}
CCFMSummaryPaymentAndReceipt::~CCFMSummaryPaymentAndReceipt(){
}
void CCFMSummaryPaymentAndReceipt::OnCreateComponents(){
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
	m_wndCloseOut.Create(this, _T("&Close out"), 5, 390, 125, 415);
	m_wndDataSummary.Create(this, _T("Data  Summary"), 130, 390, 250, 415);
	m_wndPrintPreview.Create(this, _T("&Print"), 715, 390, 835, 415);
	m_wndExport.Create(this, _T("&Export XLS"), 840, 390, 960, 415);

}
void CCFMSummaryPaymentAndReceipt::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(1024);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);





}
void CCFMSummaryPaymentAndReceipt::OnSetWindowEvents(){
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
	m_wndCloseOut.SetEvent(WE_CLICK, _OnCloseOutSelectFnc);
	m_wndDataSummary.SetEvent(WE_CLICK, _OnDataSummarySelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_NONE);

}
void CCFMSummaryPaymentAndReceipt::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CCFMSummaryPaymentAndReceipt::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCFMSummaryPaymentAndReceipt::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCFMSummaryPaymentAndReceipt::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szOrderNo.Empty();

}
int CCFMSummaryPaymentAndReceipt::SetMode(int nMode){
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
/*void CCFMSummaryPaymentAndReceipt::OnFromDateChange(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnFromDateSetfocus(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnFromDateKillfocus(){
	
} */
int CCFMSummaryPaymentAndReceipt::OnFromDateCheckValue(){
	return 0;
} 
/*void CCFMSummaryPaymentAndReceipt::OnToDateChange(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnToDateSetfocus(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnToDateKillfocus(){
	
} */
int CCFMSummaryPaymentAndReceipt::OnToDateCheckValue(){
	return 0;
} 
void CCFMSummaryPaymentAndReceipt::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFMSummaryPaymentAndReceipt::OnClerkSelendok(){
	 
}
/*void CCFMSummaryPaymentAndReceipt::OnClerkSetfocus(){
	
}*/
/*void CCFMSummaryPaymentAndReceipt::OnClerkKillfocus(){
	
}*/
long CCFMSummaryPaymentAndReceipt::OnClerkLoadData(){
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
/*void CCFMSummaryPaymentAndReceipt::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnOrderNoChange(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnOrderNoSetfocus(){
	
} */
/*void CCFMSummaryPaymentAndReceipt::OnOrderNoKillfocus(){
	
} */
int CCFMSummaryPaymentAndReceipt::OnOrderNoCheckValue(){
	return 0;
} 
void CCFMSummaryPaymentAndReceipt::OnListDblClick(){
	
} 
void CCFMSummaryPaymentAndReceipt::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCFMSummaryPaymentAndReceipt::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCFMSummaryPaymentAndReceipt::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCFMSummaryPaymentAndReceipt::OnCloseOutSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFMSummaryPaymentAndReceipt::OnDataSummarySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFMSummaryPaymentAndReceipt::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCFMSummaryPaymentAndReceipt::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCFMSummaryPaymentAndReceipt::OnAddCFMSummaryPaymentAndReceipt(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCFMSummaryPaymentAndReceipt::OnEditCFMSummaryPaymentAndReceipt(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCFMSummaryPaymentAndReceipt::OnDeleteCFMSummaryPaymentAndReceipt(){
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
 		OnCancelCFMSummaryPaymentAndReceipt();
 	}
	return 0;
}
int CCFMSummaryPaymentAndReceipt::OnSaveCFMSummaryPaymentAndReceipt(){
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
 		//OnCFMSummaryPaymentAndReceiptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCFMSummaryPaymentAndReceipt::OnCancelCFMSummaryPaymentAndReceipt(){
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
int CCFMSummaryPaymentAndReceipt::OnCFMSummaryPaymentAndReceiptListLoadData(){
	return 0;
}
