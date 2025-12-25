#include "HMSDiscountVoucherDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnCreatedByChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnCreatedByChange();
} */
/*static void _OnCreatedBySetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnCreatedBySetfocus();} */ 
/*static void _OnCreatedByKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnCreatedByKillfocus();
} */
static int _OnCreatedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnCreatedByCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnTotalDiscountChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnTotalDiscountChange();
} */
/*static void _OnTotalDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnTotalDiscountSetfocus();} */ 
/*static void _OnTotalDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog *)pWnd)->OnTotalDiscountKillfocus();
} */
static int _OnTotalDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog *)pWnd)->OnTotalDiscountCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDiscountVoucherDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDiscountVoucherDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherDialog *pVw = (CHMSDiscountVoucherDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnAddHMSDiscountVoucherDialog();
} 
static int _OnEditHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnEditHMSDiscountVoucherDialog();
} 
static int _OnDeleteHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnDeleteHMSDiscountVoucherDialog();
} 
static int _OnSaveHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnSaveHMSDiscountVoucherDialog();
} 
static int _OnCancelHMSDiscountVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherDialog*)pWnd)->OnCancelHMSDiscountVoucherDialog();
} 
CHMSDiscountVoucherDialog::CHMSDiscountVoucherDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 864;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSDiscountVoucherDialog::~CHMSDiscountVoucherDialog(){
}
void CHMSDiscountVoucherDialog::OnCreateComponents(){
	m_wndDiscountVoucher.Create(this, _T("Discount Voucher"), 5, 5, 799, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 110, 55);
	m_wndID.Create(this,115, 30, 215, 55); 
	m_wndDateLabel.Create(this, _T("Date"), 354, 30, 434, 55);
	m_wndDate.Create(this,439, 30, 559, 55); 
	m_wndCreatedByLabel.Create(this, _T("Created By"), 564, 30, 664, 55);
	m_wndCreatedBy.Create(this,669, 30, 759, 55); 
	m_wndDescriptionLabel.Create(this, _T("Note"), 9, 60, 109, 85);
	m_wndDescription.Create(this,114, 60, 559, 85); 
	m_wndTotalDiscountLabel.Create(this, _T("Amount"), 564, 60, 664, 85);
	m_wndTotalDiscount.Create(this,669, 60, 759, 85); 
	m_wndList.Create(this,5, 95, 800, 445); 
	m_wndAdd.Create(this, _T("&Add"), 210, 451, 290, 476);
	m_wndEdit.Create(this, _T("&Edit"), 295, 451, 375, 476);
	m_wndDelete.Create(this, _T("&Delete"), 380, 451, 460, 476);
	m_wndSave.Create(this, _T("&Save"), 465, 451, 545, 476);
	m_wndCancel.Create(this, _T("&Cancel"), 550, 451, 630, 476);
	m_wndPrint.Create(this, _T("&Print"), 635, 451, 715, 476);
	m_wndClose.Create(this, _T("&Close"), 720, 451, 800, 476);

}
void CHMSDiscountVoucherDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(16);
	m_wndID.SetCheckValue(true);
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndCreatedBy.SetLimitText(35);
	m_wndCreatedBy.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndTotalDiscount.SetLimitText(16);
	m_wndTotalDiscount.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);

}
void CHMSDiscountVoucherDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndCreatedBy.SetEvent(WE_CHANGE, _OnCreatedByChangeFnc);
	//m_wndCreatedBy.SetEvent(WE_SETFOCUS, _OnCreatedBySetfocusFnc);
	//m_wndCreatedBy.SetEvent(WE_KILLFOCUS, _OnCreatedByKillfocusFnc);
	m_wndCreatedBy.SetEvent(WE_CHECKVALUE, _OnCreatedByCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndTotalDiscount.SetEvent(WE_CHANGE, _OnTotalDiscountChangeFnc);
	//m_wndTotalDiscount.SetEvent(WE_SETFOCUS, _OnTotalDiscountSetfocusFnc);
	//m_wndTotalDiscount.SetEvent(WE_KILLFOCUS, _OnTotalDiscountKillfocusFnc);
	m_wndTotalDiscount.SetEvent(WE_CHECKVALUE, _OnTotalDiscountCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDiscountVoucherDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndCreatedBy.GetDlgCtrlID(), m_szCreatedBy);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);

}
void CHMSDiscountVoucherDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiscountVoucherDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiscountVoucherDialog::SetDefaultValues(){

	m_nID=0;
	m_szDate.Empty();
	m_szCreatedBy.Empty();
	m_szDescription.Empty();
	m_nTotalDiscount=0;

}
int CHMSDiscountVoucherDialog::SetMode(int nMode){
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
/*void CHMSDiscountVoucherDialog::OnIDChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnIDSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnIDKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnIDCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnDateChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDateSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDateKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnDateCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnCreatedByChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnCreatedBySetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnCreatedByKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnCreatedByCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnDescriptionChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CHMSDiscountVoucherDialog::OnTotalDiscountChange(){
	
} */
/*void CHMSDiscountVoucherDialog::OnTotalDiscountSetfocus(){
	
} */
/*void CHMSDiscountVoucherDialog::OnTotalDiscountKillfocus(){
	
} */
int CHMSDiscountVoucherDialog::OnTotalDiscountCheckValue(){
	return 0;
} 
void CHMSDiscountVoucherDialog::OnListDblClick(){
	
} 
void CHMSDiscountVoucherDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDiscountVoucherDialog::OnListLoadData(){
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
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDiscountVoucherDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherDialog::OnAddHMSDiscountVoucherDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountVoucherDialog::OnEditHMSDiscountVoucherDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountVoucherDialog::OnDeleteHMSDiscountVoucherDialog(){
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
 		OnCancelHMSDiscountVoucherDialog();
 	}
	return 0;
}
int CHMSDiscountVoucherDialog::OnSaveHMSDiscountVoucherDialog(){
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
 		//OnHMSDiscountVoucherDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountVoucherDialog::OnCancelHMSDiscountVoucherDialog(){
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
int CHMSDiscountVoucherDialog::OnHMSDiscountVoucherDialogListLoadData(){
	return 0;
}
