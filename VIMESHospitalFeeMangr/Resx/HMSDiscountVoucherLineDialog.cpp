#include "HMSDiscountVoucherLineDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDiscountVoucherLineDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDiscountVoucherLineDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnReceiptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiscountVoucherLineDialog* )pWnd)->OnReceiptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiptSelendokFnc(CWnd *pWnd){
	((CHMSDiscountVoucherLineDialog *)pWnd)->OnReceiptSelendok();
}
/*static void _OnReceiptSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherLineDialog *)pWnd)->OnReceiptKillfocus();
}*/
/*static void _OnReceiptKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherLineDialog *)pWnd)->OnReceiptKillfocus();
}*/
static long _OnReceiptLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherLineDialog *)pWnd)->OnReceiptLoadData();
}
/*static void _OnReceiptAddNewFnc(CWnd *pWnd){
	((CHMSDiscountVoucherLineDialog *)pWnd)->OnReceiptAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherLineDialog *pVw = (CHMSDiscountVoucherLineDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherLineDialog *pVw = (CHMSDiscountVoucherLineDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherLineDialog *pVw = (CHMSDiscountVoucherLineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiscountVoucherLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnAddHMSDiscountVoucherLineDialog();
} 
static int _OnEditHMSDiscountVoucherLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnEditHMSDiscountVoucherLineDialog();
} 
static int _OnDeleteHMSDiscountVoucherLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnDeleteHMSDiscountVoucherLineDialog();
} 
static int _OnSaveHMSDiscountVoucherLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnSaveHMSDiscountVoucherLineDialog();
} 
static int _OnCancelHMSDiscountVoucherLineDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherLineDialog*)pWnd)->OnCancelHMSDiscountVoucherLineDialog();
} 
CHMSDiscountVoucherLineDialog::CHMSDiscountVoucherLineDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 729;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSDiscountVoucherLineDialog::~CHMSDiscountVoucherLineDialog(){
}
void CHMSDiscountVoucherLineDialog::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 600, 450);
	m_wndList.Create(this,10, 30, 595, 445); 
	m_wndReceiptLabel.Create(this, _T("Receipt"), 5, 455, 85, 480);
	m_wndReceipt.Create(this,90, 455, 345, 480); 
	m_wndApply.Create(this, _T("&Apply"), 350, 455, 430, 480);
	m_wndDelete.Create(this, _T("Delete"), 435, 455, 515, 480);
	m_wndClose.Create(this, _T("&Close"), 520, 455, 600, 480);

}
void CHMSDiscountVoucherLineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceipt.SetCheckValue(true);
	m_wndReceipt.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 330);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_TEXT, 100);


	m_wndReceipt.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReceipt.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSDiscountVoucherLineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndReceipt.SetEvent(WE_SELENDOK, _OnReceiptSelendokFnc);
	//m_wndReceipt.SetEvent(WE_SETFOCUS, _OnReceiptSetfocusFnc);
	//m_wndReceipt.SetEvent(WE_KILLFOCUS, _OnReceiptKillfocusFnc);
	m_wndReceipt.SetEvent(WE_SELCHANGE, _OnReceiptSelectChangeFnc);
	m_wndReceipt.SetEvent(WE_LOADDATA, _OnReceiptLoadDataFnc);
	//m_wndReceipt.SetEvent(WE_ADDNEW, _OnReceiptAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDiscountVoucherLineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceipt.GetDlgCtrlID(), m_szReceiptKey);

}
void CHMSDiscountVoucherLineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiscountVoucherLineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiscountVoucherLineDialog::SetDefaultValues(){

	m_szReceiptKey.Empty();

}
int CHMSDiscountVoucherLineDialog::SetMode(int nMode){
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
void CHMSDiscountVoucherLineDialog::OnListDblClick(){
	
} 
void CHMSDiscountVoucherLineDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherLineDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDiscountVoucherLineDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDiscountVoucherLineDialog::OnReceiptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherLineDialog::OnReceiptSelendok(){
	 
}
/*void CHMSDiscountVoucherLineDialog::OnReceiptSetfocus(){
	
}*/
/*void CHMSDiscountVoucherLineDialog::OnReceiptKillfocus(){
	
}*/
long CHMSDiscountVoucherLineDialog::OnReceiptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReceipt.IsSearchKey() && !m_szReceiptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReceiptKey
};
	m_wndReceipt.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReceipt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDiscountVoucherLineDialog::OnReceiptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDiscountVoucherLineDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherLineDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherLineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherLineDialog::OnAddHMSDiscountVoucherLineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountVoucherLineDialog::OnEditHMSDiscountVoucherLineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountVoucherLineDialog::OnDeleteHMSDiscountVoucherLineDialog(){
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
 		OnCancelHMSDiscountVoucherLineDialog();
 	}
	return 0;
}
int CHMSDiscountVoucherLineDialog::OnSaveHMSDiscountVoucherLineDialog(){
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
 		//OnHMSDiscountVoucherLineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountVoucherLineDialog::OnCancelHMSDiscountVoucherLineDialog(){
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
int CHMSDiscountVoucherLineDialog::OnHMSDiscountVoucherLineDialogListLoadData(){
	return 0;
}
