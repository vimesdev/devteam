#include "HMSPatientPaymentOrderDialog.h"
#include "MainFrm.h"
/*static void _OnPaymentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentNoChange();
} */
/*static void _OnPaymentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentNoSetfocus();} */ 
/*static void _OnPaymentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentNoKillfocus();
} */
static int _OnPaymentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentNoCheckValue();
} 
/*static void _OnPaymentDateChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentDateChange();
} */
/*static void _OnPaymentDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentDateSetfocus();} */ 
/*static void _OnPaymentDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentDateKillfocus();
} */
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentDateCheckValue();
} 
static void _OnPaymentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientPaymentOrderDialog* )pWnd)->OnPaymentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentTypeSelendok();
}
/*static void _OnPaymentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
/*static void _OnPaymentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
static long _OnPaymentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentTypeLoadData();
}
/*static void _OnPaymentTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentTypeAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnAddButtonSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrderDialog *pVw = (CHMSPatientPaymentOrderDialog *)pWnd;
	pVw->OnAddButtonSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientPaymentOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientPaymentOrderDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrderDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrderDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrderDialog *pVw = (CHMSPatientPaymentOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrderDialog *pVw = (CHMSPatientPaymentOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnAddHMSPatientPaymentOrderDialog();
} 
static int _OnEditHMSPatientPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnEditHMSPatientPaymentOrderDialog();
} 
static int _OnDeleteHMSPatientPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnDeleteHMSPatientPaymentOrderDialog();
} 
static int _OnSaveHMSPatientPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnSaveHMSPatientPaymentOrderDialog();
} 
static int _OnCancelHMSPatientPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrderDialog*)pWnd)->OnCancelHMSPatientPaymentOrderDialog();
} 
CHMSPatientPaymentOrderDialog::CHMSPatientPaymentOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 495;
	m_nDlgHeight = 355;
	SetDefaultValues();
}
CHMSPatientPaymentOrderDialog::~CHMSPatientPaymentOrderDialog(){
}
void CHMSPatientPaymentOrderDialog::OnCreateComponents(){
	m_wndPaymentOrderInformation.Create(this, _T("Payment Order Information"), 5, 5, 485, 310);
	m_wndPaymentNoLabel.Create(this, _T("Payment No"), 10, 30, 110, 55);
	m_wndPaymentNo.Create(this,115, 30, 260, 55); 
	m_wndPaymentDateLabel.Create(this, _T("PAYMENT_DATE"), 265, 30, 365, 55);
	m_wndPaymentDate.Create(this,370, 30, 480, 55); 
	m_wndPaymentTypeLabel.Create(this, _T("Payment Type"), 10, 60, 110, 85);
	m_wndPaymentType.Create(this,115, 60, 260, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 265, 60, 365, 85);
	m_wndAmount.Create(this,370, 60, 450, 85); 
	m_wndAddButton.Create(this, _T("..."), 455, 60, 480, 85);
	m_wndList.Create(this,10, 90, 480, 245); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 250, 110, 275);
	m_wndReason.Create(this,115, 250, 480, 275); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 280, 110, 305);
	m_wndPaymentMethod.Create(this,115, 280, 260, 305); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 265, 280, 365, 305);
	m_wndTotalAmount.Create(this,370, 280, 480, 305); 
	m_wndSave.Create(this, _T("&Save"), 320, 315, 400, 340);
	m_wndClose.Create(this, _T("&Close"), 405, 315, 485, 340);

}
void CHMSPatientPaymentOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentNo.SetLimitText(35);
	m_wndPaymentNo.SetCheckValue(true);
	m_wndPaymentDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPaymentDate.SetCheckValue(true);
	m_wndPaymentType.SetCheckValue(true);
	m_wndPaymentType.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);


	m_wndPaymentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 320);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 90);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPatientPaymentOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPaymentNo.SetEvent(WE_CHANGE, _OnPaymentNoChangeFnc);
	//m_wndPaymentNo.SetEvent(WE_SETFOCUS, _OnPaymentNoSetfocusFnc);
	//m_wndPaymentNo.SetEvent(WE_KILLFOCUS, _OnPaymentNoKillfocusFnc);
	m_wndPaymentNo.SetEvent(WE_CHECKVALUE, _OnPaymentNoCheckValueFnc);
	//m_wndPaymentDate.SetEvent(WE_CHANGE, _OnPaymentDateChangeFnc);
	//m_wndPaymentDate.SetEvent(WE_SETFOCUS, _OnPaymentDateSetfocusFnc);
	//m_wndPaymentDate.SetEvent(WE_KILLFOCUS, _OnPaymentDateKillfocusFnc);
	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
	m_wndPaymentType.SetEvent(WE_SELENDOK, _OnPaymentTypeSelendokFnc);
	//m_wndPaymentType.SetEvent(WE_SETFOCUS, _OnPaymentTypeSetfocusFnc);
	//m_wndPaymentType.SetEvent(WE_KILLFOCUS, _OnPaymentTypeKillfocusFnc);
	m_wndPaymentType.SetEvent(WE_SELCHANGE, _OnPaymentTypeSelectChangeFnc);
	m_wndPaymentType.SetEvent(WE_LOADDATA, _OnPaymentTypeLoadDataFnc);
	//m_wndPaymentType.SetEvent(WE_ADDNEW, _OnPaymentTypeAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndAddButton.SetEvent(WE_CLICK, _OnAddButtonSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPatientPaymentOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPaymentNo.GetDlgCtrlID(), m_szPaymentNo);
	DDX_TextEx(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
	DDX_TextEx(pDX, m_wndPaymentType.GetDlgCtrlID(), m_szPaymentTypeKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CHMSPatientPaymentOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientPaymentOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientPaymentOrderDialog::SetDefaultValues(){

	m_szPaymentNo.Empty();
	m_szPaymentDate.Empty();
	m_szPaymentTypeKey.Empty();
	m_nAmount=0;
	m_szReason.Empty();
	m_szPaymentMethodKey.Empty();
	m_nTotalAmount=0;

}
int CHMSPatientPaymentOrderDialog::SetMode(int nMode){
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
/*void CHMSPatientPaymentOrderDialog::OnPaymentNoChange(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnPaymentNoSetfocus(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnPaymentNoKillfocus(){
	
} */
int CHMSPatientPaymentOrderDialog::OnPaymentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientPaymentOrderDialog::OnPaymentDateChange(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnPaymentDateSetfocus(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnPaymentDateKillfocus(){
	
} */
int CHMSPatientPaymentOrderDialog::OnPaymentDateCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrderDialog::OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrderDialog::OnPaymentTypeSelendok(){
	 
}
/*void CHMSPatientPaymentOrderDialog::OnPaymentTypeSetfocus(){
	
}*/
/*void CHMSPatientPaymentOrderDialog::OnPaymentTypeKillfocus(){
	
}*/
long CHMSPatientPaymentOrderDialog::OnPaymentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentType.IsSearchKey() && !m_szPaymentTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTypeKey
};
	m_wndPaymentType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientPaymentOrderDialog::OnPaymentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientPaymentOrderDialog::OnAmountChange(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnAmountSetfocus(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnAmountKillfocus(){
	
} */
int CHMSPatientPaymentOrderDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrderDialog::OnAddButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrderDialog::OnListDblClick(){
	
} 
void CHMSPatientPaymentOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientPaymentOrderDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientPaymentOrderDialog::OnListLoadData(){
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
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPatientPaymentOrderDialog::OnReasonChange(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnReasonSetfocus(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnReasonKillfocus(){
	
} */
int CHMSPatientPaymentOrderDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrderDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrderDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSPatientPaymentOrderDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSPatientPaymentOrderDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSPatientPaymentOrderDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientPaymentOrderDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientPaymentOrderDialog::OnTotalAmountChange(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPatientPaymentOrderDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSPatientPaymentOrderDialog::OnTotalAmountCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientPaymentOrderDialog::OnAddHMSPatientPaymentOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientPaymentOrderDialog::OnEditHMSPatientPaymentOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientPaymentOrderDialog::OnDeleteHMSPatientPaymentOrderDialog(){
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
 		OnCancelHMSPatientPaymentOrderDialog();
 	}
	return 0;
}
int CHMSPatientPaymentOrderDialog::OnSaveHMSPatientPaymentOrderDialog(){
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
 		//OnHMSPatientPaymentOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientPaymentOrderDialog::OnCancelHMSPatientPaymentOrderDialog(){
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
int CHMSPatientPaymentOrderDialog::OnHMSPatientPaymentOrderDialogListLoadData(){
	return 0;
}
